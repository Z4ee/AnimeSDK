#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define AKAUDIOINPUTMANAGER_AUDIOSAMPLESDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18B8FD30)
#define AKAUDIOINPUTMANAGER_AUDIOSAMPLESDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18B8FDB0)
#define AKAUDIOINPUTMANAGER_AUDIOSAMPLESDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18B8EC20)
#define AKAUDIOINPUTMANAGER_AUDIOSAMPLESDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18B8FD10)

inline static constexpr unsigned int AkAudioInputManager_AudioSamplesDelegate_TypeDefinitionIndex = 34549;

class AkAudioInputManager_AudioSamplesDelegate : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKAUDIOINPUTMANAGER_AUDIOSAMPLESDELEGATE__CTOR_OFFSET))(this, object, method);
	}

	::System::Boolean Invoke(::System::UInt32 playingID, ::System::UInt32 channelIndex, ::Il2CppArray<::System::Single>* samples)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + AKAUDIOINPUTMANAGER_AUDIOSAMPLESDELEGATE_INVOKE_OFFSET))(this, playingID, channelIndex, samples);
	}

	::System::IAsyncResult* BeginInvoke(::System::UInt32 playingID, ::System::UInt32 channelIndex, ::Il2CppArray<::System::Single>* samples, ::System::AsyncCallback* callback, ::System::Object* object)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::Single>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + AKAUDIOINPUTMANAGER_AUDIOSAMPLESDELEGATE_BEGININVOKE_OFFSET))(this, playingID, channelIndex, samples, callback, object);
	}

	::System::Boolean EndInvoke(::System::IAsyncResult* result)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + AKAUDIOINPUTMANAGER_AUDIOSAMPLESDELEGATE_ENDINVOKE_OFFSET))(this, result);
	}
};
