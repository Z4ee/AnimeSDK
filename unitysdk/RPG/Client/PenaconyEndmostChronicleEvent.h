#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PenaconyEndmostChronicleEventType.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_PENACONYENDMOSTCHRONICLEEVENT_GET_EVENTTYPE_OFFSET UNITYSDK_OFFSET(0x9F22E70)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLEEVENT_GET_EXTRADATA_OFFSET UNITYSDK_OFFSET(0x9F22E90)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLEEVENT_GET_ONFINISH_OFFSET UNITYSDK_OFFSET(0x9F22EB0)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLEEVENT_ISTARGETID_OFFSET UNITYSDK_OFFSET(0x9F22DD0)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLEEVENT_SETFINISH_OFFSET UNITYSDK_OFFSET(0x9F22D70)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLEEVENT_SETONFINISH_OFFSET UNITYSDK_OFFSET(0x9F21170)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLEEVENT_SET_EVENTTYPE_OFFSET UNITYSDK_OFFSET(0x9F22E80)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLEEVENT_SET_EXTRADATA_OFFSET UNITYSDK_OFFSET(0x9F22EA0)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x9F21160)

namespace RPG::Client
{
	inline static constexpr unsigned int PenaconyEndmostChronicleEvent_TypeDefinitionIndex = 53720;

	class PenaconyEndmostChronicleEvent : public ::System::Object
	{
	public:
		::System::Object* _ExtraData_k__BackingField; // 0x10
		::System::Action* _OnFinish; // 0x18
		::RPG::Client::PenaconyEndmostChronicleEventType _EventType_k__BackingField; // 0x20

		::System::Void _ctor(::RPG::Client::PenaconyEndmostChronicleEventType eventType, ::System::Object* extraData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PenaconyEndmostChronicleEventType, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLEEVENT__CTOR_OFFSET))(this, eventType, extraData);
		}

		::System::Void SetOnFinish(::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLEEVENT_SETONFINISH_OFFSET))(this, onFinish);
		}

		::System::Void SetFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLEEVENT_SETFINISH_OFFSET))(this);
		}

		::System::Boolean IsTargetID(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLEEVENT_ISTARGETID_OFFSET))(this, id);
		}

		::RPG::Client::PenaconyEndmostChronicleEventType get_EventType()
		{
			return ((::RPG::Client::PenaconyEndmostChronicleEventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLEEVENT_GET_EVENTTYPE_OFFSET))(this);
		}

		::System::Void set_EventType(::RPG::Client::PenaconyEndmostChronicleEventType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PenaconyEndmostChronicleEventType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLEEVENT_SET_EVENTTYPE_OFFSET))(this, value);
		}

		::System::Object* get_ExtraData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLEEVENT_GET_EXTRADATA_OFFSET))(this);
		}

		::System::Void set_ExtraData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLEEVENT_SET_EXTRADATA_OFFSET))(this, value);
		}

		::System::Action* get_OnFinish()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLEEVENT_GET_ONFINISH_OFFSET))(this);
		}
	};
}
