#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AK/Wwise/BaseType.h"
#include "unitysdk/AkActionOnEventType.h"
#include "unitysdk/AkCurveInterpolation.h"
#include "unitysdk/WwiseObjectType.h"

class AkCallbackManager_EventCallback;
class AkMIDIPostArray;
class WwiseEventReference;
class WwiseObjectReference;
namespace AK::Wwise { class CallbackFlags; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define AK_WWISE_EVENT_EXECUTEACTION_OFFSET UNITYSDK_OFFSET(0x1E6AE100)
#define AK_WWISE_EVENT_GET_OBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1E6ADD70)
#define AK_WWISE_EVENT_GET_WWISEOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x1E6ADDF0)
#define AK_WWISE_EVENT_POSTMIDI_1_OFFSET UNITYSDK_OFFSET(0x1E6AE240)
#define AK_WWISE_EVENT_POSTMIDI_OFFSET UNITYSDK_OFFSET(0x1E6AE1C0)
#define AK_WWISE_EVENT_POST_1_OFFSET UNITYSDK_OFFSET(0x1E6ADEC0)
#define AK_WWISE_EVENT_POST_2_OFFSET UNITYSDK_OFFSET(0x1E6ADF90)
#define AK_WWISE_EVENT_POST_OFFSET UNITYSDK_OFFSET(0x1E6ADE10)
#define AK_WWISE_EVENT_SET_OBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1E6ADD80)
#define AK_WWISE_EVENT_STOPMIDI_1_OFFSET UNITYSDK_OFFSET(0x1E6AE360)
#define AK_WWISE_EVENT_STOPMIDI_OFFSET UNITYSDK_OFFSET(0x1E6AE2C0)
#define AK_WWISE_EVENT_STOP_OFFSET UNITYSDK_OFFSET(0x1E6AE050)
#define AK_WWISE_EVENT_VERIFYPLAYINGID_OFFSET UNITYSDK_OFFSET(0x1E6ADE00)
#define AK_WWISE_EVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6AE480)

namespace AK::Wwise
{
	inline static constexpr unsigned int Event_TypeDefinitionIndex = 33201;

	class Event : public ::AK::Wwise::BaseType
	{
	public:
		::WwiseEventReference* WwiseObjectReference; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_EVENT__CTOR_OFFSET))(this);
		}

		::WwiseObjectReference* get_ObjectReference()
		{
			return ((::WwiseObjectReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_EVENT_GET_OBJECTREFERENCE_OFFSET))(this);
		}

		::System::Void set_ObjectReference(::WwiseObjectReference* value)
		{
			return ((::System::Void(*)(::PVOID, ::WwiseObjectReference*))((::PBYTE)hIl2Cpp + AK_WWISE_EVENT_SET_OBJECTREFERENCE_OFFSET))(this, value);
		}

		::WwiseObjectType get_WwiseObjectType()
		{
			return ((::WwiseObjectType(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_EVENT_GET_WWISEOBJECTTYPE_OFFSET))(this);
		}

		::System::Void VerifyPlayingID(::System::UInt32 playingId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AK_WWISE_EVENT_VERIFYPLAYINGID_OFFSET))(this, playingId);
		}

		::System::UInt32 Post(::UnityEngine::GameObject* gameObject)
		{
			return ((::System::UInt32(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AK_WWISE_EVENT_POST_OFFSET))(this, gameObject);
		}

		::System::UInt32 Post_1(::UnityEngine::GameObject* gameObject, ::AK::Wwise::CallbackFlags* flags, ::AkCallbackManager_EventCallback* callback, ::System::Object* cookie)
		{
			return ((::System::UInt32(*)(::PVOID, ::UnityEngine::GameObject*, ::AK::Wwise::CallbackFlags*, ::AkCallbackManager_EventCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + AK_WWISE_EVENT_POST_1_OFFSET))(this, gameObject, flags, callback, cookie);
		}

		::System::UInt32 Post_2(::UnityEngine::GameObject* gameObject, ::System::UInt32 flags, ::AkCallbackManager_EventCallback* callback, ::System::Object* cookie)
		{
			return ((::System::UInt32(*)(::PVOID, ::UnityEngine::GameObject*, ::System::UInt32, ::AkCallbackManager_EventCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + AK_WWISE_EVENT_POST_2_OFFSET))(this, gameObject, flags, callback, cookie);
		}

		::System::Void Stop(::UnityEngine::GameObject* gameObject, ::System::Int32 transitionDuration, ::AkCurveInterpolation curveInterpolation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32, ::AkCurveInterpolation))((::PBYTE)hIl2Cpp + AK_WWISE_EVENT_STOP_OFFSET))(this, gameObject, transitionDuration, curveInterpolation);
		}

		::System::Void ExecuteAction(::UnityEngine::GameObject* gameObject, ::AkActionOnEventType actionOnEventType, ::System::Int32 transitionDuration, ::AkCurveInterpolation curveInterpolation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::AkActionOnEventType, ::System::Int32, ::AkCurveInterpolation))((::PBYTE)hIl2Cpp + AK_WWISE_EVENT_EXECUTEACTION_OFFSET))(this, gameObject, actionOnEventType, transitionDuration, curveInterpolation);
		}

		::System::Void PostMIDI(::UnityEngine::GameObject* gameObject, ::AkMIDIPostArray* array)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::AkMIDIPostArray*))((::PBYTE)hIl2Cpp + AK_WWISE_EVENT_POSTMIDI_OFFSET))(this, gameObject, array);
		}

		::System::Void PostMIDI_1(::UnityEngine::GameObject* gameObject, ::AkMIDIPostArray* array, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::AkMIDIPostArray*, ::System::Int32))((::PBYTE)hIl2Cpp + AK_WWISE_EVENT_POSTMIDI_1_OFFSET))(this, gameObject, array, count);
		}

		::System::Void StopMIDI(::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AK_WWISE_EVENT_STOPMIDI_OFFSET))(this, gameObject);
		}

		::System::Void StopMIDI_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_EVENT_STOPMIDI_1_OFFSET))(this);
		}
	};
}
