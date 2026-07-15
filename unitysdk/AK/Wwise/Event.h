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

#define AK_WWISE_EVENT_EXECUTEACTION_OFFSET UNITYSDK_OFFSET(0x1B948B70)
#define AK_WWISE_EVENT_GET_OBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1B948820)
#define AK_WWISE_EVENT_GET_WWISEOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x1B9488A0)
#define AK_WWISE_EVENT_POSTMIDI_1_OFFSET UNITYSDK_OFFSET(0x1B948D10)
#define AK_WWISE_EVENT_POSTMIDI_OFFSET UNITYSDK_OFFSET(0x1B948C50)
#define AK_WWISE_EVENT_POST_1_OFFSET UNITYSDK_OFFSET(0x1B948980)
#define AK_WWISE_EVENT_POST_2_OFFSET UNITYSDK_OFFSET(0x1B948A70)
#define AK_WWISE_EVENT_POST_OFFSET UNITYSDK_OFFSET(0x1B9488C0)
#define AK_WWISE_EVENT_SET_OBJECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1B948830)
#define AK_WWISE_EVENT_STOPMIDI_1_OFFSET UNITYSDK_OFFSET(0x1B948EA0)
#define AK_WWISE_EVENT_STOPMIDI_OFFSET UNITYSDK_OFFSET(0x1B948DE0)
#define AK_WWISE_EVENT_STOP_OFFSET UNITYSDK_OFFSET(0x1B948B50)
#define AK_WWISE_EVENT_VERIFYPLAYINGID_OFFSET UNITYSDK_OFFSET(0x1B9488B0)
#define AK_WWISE_EVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B949010)

namespace AK::Wwise
{
	inline static constexpr unsigned int Event_TypeDefinitionIndex = 42178;

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

		::System::Void set_ObjectReference(::WwiseObjectReference* a1)
		{
			return ((::System::Void(*)(::PVOID, ::WwiseObjectReference*))((::PBYTE)hIl2Cpp + AK_WWISE_EVENT_SET_OBJECTREFERENCE_OFFSET))(this, a1);
		}

		::WwiseObjectType get_WwiseObjectType()
		{
			return ((::WwiseObjectType(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_EVENT_GET_WWISEOBJECTTYPE_OFFSET))(this);
		}

		::System::Void VerifyPlayingID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AK_WWISE_EVENT_VERIFYPLAYINGID_OFFSET))(this, a1);
		}

		::System::UInt32 Post(::UnityEngine::GameObject* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AK_WWISE_EVENT_POST_OFFSET))(this, a1);
		}

		::System::UInt32 Post_1(::UnityEngine::GameObject* a1, ::AK::Wwise::CallbackFlags* a2, ::AkCallbackManager_EventCallback* a3, ::System::Object* a4)
		{
			return ((::System::UInt32(*)(::PVOID, ::UnityEngine::GameObject*, ::AK::Wwise::CallbackFlags*, ::AkCallbackManager_EventCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + AK_WWISE_EVENT_POST_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 Post_2(::UnityEngine::GameObject* a1, ::System::UInt32 a2, ::AkCallbackManager_EventCallback* a3, ::System::Object* a4)
		{
			return ((::System::UInt32(*)(::PVOID, ::UnityEngine::GameObject*, ::System::UInt32, ::AkCallbackManager_EventCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + AK_WWISE_EVENT_POST_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Stop(::UnityEngine::GameObject* a1, ::System::Int32 a2, ::AkCurveInterpolation a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32, ::AkCurveInterpolation))((::PBYTE)hIl2Cpp + AK_WWISE_EVENT_STOP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ExecuteAction(::UnityEngine::GameObject* a1, ::AkActionOnEventType a2, ::System::Int32 a3, ::AkCurveInterpolation a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::AkActionOnEventType, ::System::Int32, ::AkCurveInterpolation))((::PBYTE)hIl2Cpp + AK_WWISE_EVENT_EXECUTEACTION_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PostMIDI(::UnityEngine::GameObject* a1, ::AkMIDIPostArray* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::AkMIDIPostArray*))((::PBYTE)hIl2Cpp + AK_WWISE_EVENT_POSTMIDI_OFFSET))(this, a1, a2);
		}

		::System::Void PostMIDI_1(::UnityEngine::GameObject* a1, ::AkMIDIPostArray* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::AkMIDIPostArray*, ::System::Int32))((::PBYTE)hIl2Cpp + AK_WWISE_EVENT_POSTMIDI_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StopMIDI(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AK_WWISE_EVENT_STOPMIDI_OFFSET))(this, a1);
		}

		::System::Void StopMIDI_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_EVENT_STOPMIDI_1_OFFSET))(this);
		}
	};
}
