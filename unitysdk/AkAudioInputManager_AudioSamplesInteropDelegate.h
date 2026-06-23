#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define AKAUDIOINPUTMANAGER_AUDIOSAMPLESINTEROPDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E48AD10)
#define AKAUDIOINPUTMANAGER_AUDIOSAMPLESINTEROPDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E48ADD0)
#define AKAUDIOINPUTMANAGER_AUDIOSAMPLESINTEROPDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E48A980)
#define AKAUDIOINPUTMANAGER_AUDIOSAMPLESINTEROPDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E48A960)

inline static constexpr unsigned int AkAudioInputManager_AudioSamplesInteropDelegate_TypeDefinitionIndex = 33042;

class AkAudioInputManager_AudioSamplesInteropDelegate : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKAUDIOINPUTMANAGER_AUDIOSAMPLESINTEROPDELEGATE__CTOR_OFFSET))(this, object, method);
	}

	::System::Boolean Invoke(::System::UInt32 playingID, ::Il2CppArray<::System::Single>* samples, ::System::UInt32 channelIndex, ::System::UInt32 frames)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::Single>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AKAUDIOINPUTMANAGER_AUDIOSAMPLESINTEROPDELEGATE_INVOKE_OFFSET))(this, playingID, samples, channelIndex, frames);
	}

	::System::IAsyncResult* BeginInvoke(::System::UInt32 playingID, ::Il2CppArray<::System::Single>* samples, ::System::UInt32 channelIndex, ::System::UInt32 frames, ::System::AsyncCallback* callback, ::System::Object* object)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::Single>*, ::System::UInt32, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + AKAUDIOINPUTMANAGER_AUDIOSAMPLESINTEROPDELEGATE_BEGININVOKE_OFFSET))(this, playingID, samples, channelIndex, frames, callback, object);
	}

	::System::Boolean EndInvoke(::System::IAsyncResult* result)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + AKAUDIOINPUTMANAGER_AUDIOSAMPLESINTEROPDELEGATE_ENDINVOKE_OFFSET))(this, result);
	}
};
