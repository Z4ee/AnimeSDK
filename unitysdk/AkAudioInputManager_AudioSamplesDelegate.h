#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define AKAUDIOINPUTMANAGER_AUDIOSAMPLESDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B94F480)
#define AKAUDIOINPUTMANAGER_AUDIOSAMPLESDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B94F500)
#define AKAUDIOINPUTMANAGER_AUDIOSAMPLESDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B94EC70)
#define AKAUDIOINPUTMANAGER_AUDIOSAMPLESDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B94F410)

inline static constexpr unsigned int AkAudioInputManager_AudioSamplesDelegate_TypeDefinitionIndex = 42010;

class AkAudioInputManager_AudioSamplesDelegate : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKAUDIOINPUTMANAGER_AUDIOSAMPLESDELEGATE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Invoke(::System::UInt32 a1, ::System::UInt32 a2, ::Il2CppArray<::System::Single>* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + AKAUDIOINPUTMANAGER_AUDIOSAMPLESDELEGATE_INVOKE_OFFSET))(this, a1, a2, a3);
	}

	::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::System::UInt32 a2, ::Il2CppArray<::System::Single>* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::Single>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + AKAUDIOINPUTMANAGER_AUDIOSAMPLESDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + AKAUDIOINPUTMANAGER_AUDIOSAMPLESDELEGATE_ENDINVOKE_OFFSET))(this, a1);
	}
};
