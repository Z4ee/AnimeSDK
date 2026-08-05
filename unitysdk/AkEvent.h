#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkActionOnEventType.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/AkCurveInterpolation.h"
#include "unitysdk/AkDragDropTriggerHandler.h"

class AkCallbackInfo;
class AkEventCallbackData;
class AkEventCallbackMsg;
class AkEvent_CallbackData;
namespace AK::Wwise { class BaseType; }
namespace AK::Wwise { class Event; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define AKEVENT_CALLBACK_OFFSET UNITYSDK_OFFSET(0x1FBDEA00)
#define AKEVENT_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0x1FBDEED0)
#define AKEVENT_GET_M_CALLBACKDATA_OFFSET UNITYSDK_OFFSET(0x1FBDF120)
#define AKEVENT_GET_VALUEGUID_OFFSET UNITYSDK_OFFSET(0x1FBDEF20)
#define AKEVENT_GET_WWISETYPE_OFFSET UNITYSDK_OFFSET(0x1FBDE950)
#define AKEVENT_HANDLEEVENT_OFFSET UNITYSDK_OFFSET(0x1FBDEAB0)
#define AKEVENT_START_OFFSET UNITYSDK_OFFSET(0x1FBDE960)
#define AKEVENT_STOP_1_OFFSET UNITYSDK_OFFSET(0x1FBDEEA0)
#define AKEVENT_STOP_OFFSET UNITYSDK_OFFSET(0x1FBDEE70)
#define AKEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBDF130)

inline static constexpr unsigned int AkEvent_TypeDefinitionIndex = 33780;

class AkEvent : public ::AkDragDropTriggerHandler
{
public:
	::AkActionOnEventType actionOnEventType; // 0x30
	::AkCurveInterpolation curveInterpolation; // 0x34
	::System::Boolean enableActionOnEvent; // 0x38
	::AK::Wwise::Event* data; // 0x40
	::System::Boolean useCallbacks; // 0x48
	::System::Collections::Generic::List_1<::AkEvent_CallbackData*>* Callbacks; // 0x50
	::System::UInt32 playingId; // 0x58
	::UnityEngine::GameObject* soundEmitterObject; // 0x60
	::System::Single transitionDuration; // 0x68
	::AkEventCallbackMsg* EventCallbackMsg; // 0x70
	::System::Int32 eventIdInternal; // 0x78
	::Il2CppArray<::System::Byte>* valueGuidInternal; // 0x80
	::AkEventCallbackData* m_callbackDataInternal; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEVENT__CTOR_OFFSET))(this);
	}

	::AK::Wwise::BaseType* get_WwiseType()
	{
		return ((::AK::Wwise::BaseType*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEVENT_GET_WWISETYPE_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEVENT_START_OFFSET))(this);
	}

	::System::Void Callback(::System::Object* in_cookie, ::AkCallbackType in_type, ::AkCallbackInfo* in_info)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + AKEVENT_CALLBACK_OFFSET))(this, in_cookie, in_type, in_info);
	}

	::System::Void HandleEvent(::UnityEngine::GameObject* in_gameObject)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AKEVENT_HANDLEEVENT_OFFSET))(this, in_gameObject);
	}

	::System::Void Stop(::System::Int32 _transitionDuration)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKEVENT_STOP_OFFSET))(this, _transitionDuration);
	}

	::System::Void Stop_1(::System::Int32 _transitionDuration, ::AkCurveInterpolation _curveInterpolation)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::AkCurveInterpolation))((::PBYTE)hIl2Cpp + AKEVENT_STOP_1_OFFSET))(this, _transitionDuration, _curveInterpolation);
	}

	::System::Int32 get_eventID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEVENT_GET_EVENTID_OFFSET))(this);
	}

	::Il2CppArray<::System::Byte>* get_valueGuid()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEVENT_GET_VALUEGUID_OFFSET))(this);
	}

	::AkEventCallbackData* get_m_callbackData()
	{
		return ((::AkEventCallbackData*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEVENT_GET_M_CALLBACKDATA_OFFSET))(this);
	}
};
