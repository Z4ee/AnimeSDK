#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define AKAUDIOINPUTMANAGER_AUDIOSAMPLESINTEROPDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D57F170)
#define AKAUDIOINPUTMANAGER_AUDIOSAMPLESINTEROPDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D57F210)
#define AKAUDIOINPUTMANAGER_AUDIOSAMPLESINTEROPDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D57F140)
#define AKAUDIOINPUTMANAGER_AUDIOSAMPLESINTEROPDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D57F0D0)

inline static constexpr unsigned int AkAudioInputManager_AudioSamplesInteropDelegate_TypeDefinitionIndex = 43622;

class AkAudioInputManager_AudioSamplesInteropDelegate : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKAUDIOINPUTMANAGER_AUDIOSAMPLESINTEROPDELEGATE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Invoke(::System::UInt32 a1, ::Il2CppArray<::System::Single>* a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::Single>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AKAUDIOINPUTMANAGER_AUDIOSAMPLESINTEROPDELEGATE_INVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::Il2CppArray<::System::Single>* a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::AsyncCallback* a5, ::System::Object* a6)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::Single>*, ::System::UInt32, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + AKAUDIOINPUTMANAGER_AUDIOSAMPLESINTEROPDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + AKAUDIOINPUTMANAGER_AUDIOSAMPLESINTEROPDELEGATE_ENDINVOKE_OFFSET))(this, a1);
	}
};
