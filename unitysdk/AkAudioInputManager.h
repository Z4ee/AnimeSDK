#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/System/Object.h"

class AkAudioFormat;
class AkAudioInputManager_AudioFormatDelegate;
class AkAudioInputManager_AudioFormatInteropDelegate;
class AkAudioInputManager_AudioSamplesDelegate;
class AkAudioInputManager_AudioSamplesInteropDelegate;
class AkCallbackInfo;
namespace AK::Wwise { class Event; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define AKAUDIOINPUTMANAGER_ADDPLAYINGID_OFFSET UNITYSDK_OFFSET(0x1FAF1ED0)
#define AKAUDIOINPUTMANAGER_EVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1FAF2230)
#define AKAUDIOINPUTMANAGER_INTERNALAUDIOFORMATDELEGATE_OFFSET UNITYSDK_OFFSET(0x1FAF1B10)
#define AKAUDIOINPUTMANAGER_INTERNALAUDIOSAMPLESDELEGATE_OFFSET UNITYSDK_OFFSET(0x1FAF19B0)
#define AKAUDIOINPUTMANAGER_POSTAUDIOINPUTEVENT_1_OFFSET UNITYSDK_OFFSET(0x1FAF2050)
#define AKAUDIOINPUTMANAGER_POSTAUDIOINPUTEVENT_2_OFFSET UNITYSDK_OFFSET(0x1FAF2140)
#define AKAUDIOINPUTMANAGER_POSTAUDIOINPUTEVENT_OFFSET UNITYSDK_OFFSET(0x1FAF1CA0)
#define AKAUDIOINPUTMANAGER_TRYINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1FAF1D70)
#define AKAUDIOINPUTMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAF23F0)

inline static constexpr unsigned int AkAudioInputManager_TypeDefinitionIndex = 33673;

class AkAudioInputManager : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AkAudioInputManager_AudioSamplesDelegate*>** StaticGet_audioSamplesDelegates()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AkAudioInputManager_AudioSamplesDelegate*>**)Il2CppClass::FromTypeDefinitionIndex(AkAudioInputManager_TypeDefinitionIndex)->GetStaticField(0x28A20);
	}
	static ::AkAudioFormat** StaticGet_audioFormat()
	{
		return (::AkAudioFormat**)Il2CppClass::FromTypeDefinitionIndex(AkAudioInputManager_TypeDefinitionIndex)->GetStaticField(0x28A28);
	}
	static ::AkAudioInputManager_AudioFormatInteropDelegate** StaticGet_audioFormatDelegate()
	{
		return (::AkAudioInputManager_AudioFormatInteropDelegate**)Il2CppClass::FromTypeDefinitionIndex(AkAudioInputManager_TypeDefinitionIndex)->GetStaticField(0x28A30);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AkAudioInputManager_AudioFormatDelegate*>** StaticGet_audioFormatDelegates()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AkAudioInputManager_AudioFormatDelegate*>**)Il2CppClass::FromTypeDefinitionIndex(AkAudioInputManager_TypeDefinitionIndex)->GetStaticField(0x28A38);
	}
	static ::AkAudioInputManager_AudioSamplesInteropDelegate** StaticGet_audioSamplesDelegate()
	{
		return (::AkAudioInputManager_AudioSamplesInteropDelegate**)Il2CppClass::FromTypeDefinitionIndex(AkAudioInputManager_TypeDefinitionIndex)->GetStaticField(0x28A40);
	}
	static ::System::Boolean* StaticGet_initialized()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AkAudioInputManager_TypeDefinitionIndex)->GetStaticField(0x8140);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKAUDIOINPUTMANAGER__CCTOR_OFFSET))();
	}

	static ::System::UInt32 PostAudioInputEvent(::AK::Wwise::Event* akEvent, ::UnityEngine::GameObject* gameObject, ::AkAudioInputManager_AudioSamplesDelegate* sampleDelegate, ::AkAudioInputManager_AudioFormatDelegate* formatDelegate)
	{
		return ((::System::UInt32(*)(::AK::Wwise::Event*, ::UnityEngine::GameObject*, ::AkAudioInputManager_AudioSamplesDelegate*, ::AkAudioInputManager_AudioFormatDelegate*))((::PBYTE)hIl2Cpp + AKAUDIOINPUTMANAGER_POSTAUDIOINPUTEVENT_OFFSET))(akEvent, gameObject, sampleDelegate, formatDelegate);
	}

	static ::System::UInt32 PostAudioInputEvent_1(::System::UInt32 akEventID, ::UnityEngine::GameObject* gameObject, ::AkAudioInputManager_AudioSamplesDelegate* sampleDelegate, ::AkAudioInputManager_AudioFormatDelegate* formatDelegate)
	{
		return ((::System::UInt32(*)(::System::UInt32, ::UnityEngine::GameObject*, ::AkAudioInputManager_AudioSamplesDelegate*, ::AkAudioInputManager_AudioFormatDelegate*))((::PBYTE)hIl2Cpp + AKAUDIOINPUTMANAGER_POSTAUDIOINPUTEVENT_1_OFFSET))(akEventID, gameObject, sampleDelegate, formatDelegate);
	}

	static ::System::UInt32 PostAudioInputEvent_2(::System::String* akEventName, ::UnityEngine::GameObject* gameObject, ::AkAudioInputManager_AudioSamplesDelegate* sampleDelegate, ::AkAudioInputManager_AudioFormatDelegate* formatDelegate)
	{
		return ((::System::UInt32(*)(::System::String*, ::UnityEngine::GameObject*, ::AkAudioInputManager_AudioSamplesDelegate*, ::AkAudioInputManager_AudioFormatDelegate*))((::PBYTE)hIl2Cpp + AKAUDIOINPUTMANAGER_POSTAUDIOINPUTEVENT_2_OFFSET))(akEventName, gameObject, sampleDelegate, formatDelegate);
	}

	static ::System::Boolean InternalAudioSamplesDelegate(::System::UInt32 playingID, ::Il2CppArray<::System::Single>* samples, ::System::UInt32 channelIndex, ::System::UInt32 frames)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::Il2CppArray<::System::Single>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AKAUDIOINPUTMANAGER_INTERNALAUDIOSAMPLESDELEGATE_OFFSET))(playingID, samples, channelIndex, frames);
	}

	static ::System::Void InternalAudioFormatDelegate(::System::UInt32 playingID, ::System::IntPtr format)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKAUDIOINPUTMANAGER_INTERNALAUDIOFORMATDELEGATE_OFFSET))(playingID, format);
	}

	static ::System::Void TryInitialize()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKAUDIOINPUTMANAGER_TRYINITIALIZE_OFFSET))();
	}

	static ::System::Void AddPlayingID(::System::UInt32 playingID, ::AkAudioInputManager_AudioSamplesDelegate* sampleDelegate, ::AkAudioInputManager_AudioFormatDelegate* formatDelegate)
	{
		return ((::System::Void(*)(::System::UInt32, ::AkAudioInputManager_AudioSamplesDelegate*, ::AkAudioInputManager_AudioFormatDelegate*))((::PBYTE)hIl2Cpp + AKAUDIOINPUTMANAGER_ADDPLAYINGID_OFFSET))(playingID, sampleDelegate, formatDelegate);
	}

	static ::System::Void EventCallback(::System::Object* cookie, ::AkCallbackType type, ::AkCallbackInfo* callbackInfo)
	{
		return ((::System::Void(*)(::System::Object*, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + AKAUDIOINPUTMANAGER_EVENTCALLBACK_OFFSET))(cookie, type, callbackInfo);
	}
};
