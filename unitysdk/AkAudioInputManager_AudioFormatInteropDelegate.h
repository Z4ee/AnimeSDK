#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define AKAUDIOINPUTMANAGER_AUDIOFORMATINTEROPDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18B8FC90)
#define AKAUDIOINPUTMANAGER_AUDIOFORMATINTEROPDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18B8FD00)
#define AKAUDIOINPUTMANAGER_AUDIOFORMATINTEROPDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18B8F940)
#define AKAUDIOINPUTMANAGER_AUDIOFORMATINTEROPDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18B8F890)

inline static constexpr unsigned int AkAudioInputManager_AudioFormatInteropDelegate_TypeDefinitionIndex = 34548;

class AkAudioInputManager_AudioFormatInteropDelegate : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKAUDIOINPUTMANAGER_AUDIOFORMATINTEROPDELEGATE__CTOR_OFFSET))(this, object, method);
	}

	::System::Void Invoke(::System::UInt32 playingID, ::System::IntPtr format)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKAUDIOINPUTMANAGER_AUDIOFORMATINTEROPDELEGATE_INVOKE_OFFSET))(this, playingID, format);
	}

	::System::IAsyncResult* BeginInvoke(::System::UInt32 playingID, ::System::IntPtr format, ::System::AsyncCallback* callback, ::System::Object* object)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + AKAUDIOINPUTMANAGER_AUDIOFORMATINTEROPDELEGATE_BEGININVOKE_OFFSET))(this, playingID, format, callback, object);
	}

	::System::Void EndInvoke(::System::IAsyncResult* result)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + AKAUDIOINPUTMANAGER_AUDIOFORMATINTEROPDELEGATE_ENDINVOKE_OFFSET))(this, result);
	}
};
