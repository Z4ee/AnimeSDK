#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define AKAUDIOINPUTMANAGER_AUDIOFORMATINTEROPDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EEAD300)
#define AKAUDIOINPUTMANAGER_AUDIOFORMATINTEROPDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EEAD370)
#define AKAUDIOINPUTMANAGER_AUDIOFORMATINTEROPDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EEAD2F0)
#define AKAUDIOINPUTMANAGER_AUDIOFORMATINTEROPDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEAD280)

inline static constexpr unsigned int AkAudioInputManager_AudioFormatInteropDelegate_TypeDefinitionIndex = 43620;

class AkAudioInputManager_AudioFormatInteropDelegate : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKAUDIOINPUTMANAGER_AUDIOFORMATINTEROPDELEGATE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::UInt32 a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKAUDIOINPUTMANAGER_AUDIOFORMATINTEROPDELEGATE_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::System::IntPtr a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + AKAUDIOINPUTMANAGER_AUDIOFORMATINTEROPDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + AKAUDIOINPUTMANAGER_AUDIOFORMATINTEROPDELEGATE_ENDINVOKE_OFFSET))(this, a1);
	}
};
