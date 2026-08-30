#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class AkAudioFormat;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define AKAUDIOINPUTMANAGER_AUDIOFORMATDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D57EE40)
#define AKAUDIOINPUTMANAGER_AUDIOFORMATDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D57EEA0)
#define AKAUDIOINPUTMANAGER_AUDIOFORMATDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D57E830)
#define AKAUDIOINPUTMANAGER_AUDIOFORMATDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D57EDD0)

inline static constexpr unsigned int AkAudioInputManager_AudioFormatDelegate_TypeDefinitionIndex = 43619;

class AkAudioInputManager_AudioFormatDelegate : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKAUDIOINPUTMANAGER_AUDIOFORMATDELEGATE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::System::UInt32 a1, ::AkAudioFormat* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkAudioFormat*))((::PBYTE)hIl2Cpp + AKAUDIOINPUTMANAGER_AUDIOFORMATDELEGATE_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::System::UInt32 a1, ::AkAudioFormat* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::AkAudioFormat*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + AKAUDIOINPUTMANAGER_AUDIOFORMATDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + AKAUDIOINPUTMANAGER_AUDIOFORMATDELEGATE_ENDINVOKE_OFFSET))(this, a1);
	}
};
