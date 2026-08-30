#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PenaconyEndmostChronicleEventType.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_PENACONYENDMOSTCHRONICLEEVENT_GET_EVENTTYPE_OFFSET UNITYSDK_OFFSET(0x18647B40)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLEEVENT_GET_EXTRADATA_OFFSET UNITYSDK_OFFSET(0x18647B60)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLEEVENT_GET_ONFINISH_OFFSET UNITYSDK_OFFSET(0x18647B80)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLEEVENT_ISTARGETID_OFFSET UNITYSDK_OFFSET(0x18647AA0)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLEEVENT_SETFINISH_OFFSET UNITYSDK_OFFSET(0x18647A30)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLEEVENT_SETONFINISH_OFFSET UNITYSDK_OFFSET(0x18645BC0)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLEEVENT_SET_EVENTTYPE_OFFSET UNITYSDK_OFFSET(0x18647B50)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLEEVENT_SET_EXTRADATA_OFFSET UNITYSDK_OFFSET(0x18647B70)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x18645BB0)

namespace RPG::Client
{
	inline static constexpr unsigned int PenaconyEndmostChronicleEvent_TypeDefinitionIndex = 66145;

	class PenaconyEndmostChronicleEvent : public ::System::Object
	{
	public:
		::System::Action* _OnFinish; // 0x10
		::System::Object* _ExtraData_k__BackingField; // 0x18
		::RPG::Client::PenaconyEndmostChronicleEventType _EventType_k__BackingField; // 0x20

		::System::Void _ctor(::RPG::Client::PenaconyEndmostChronicleEventType a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PenaconyEndmostChronicleEventType, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLEEVENT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void SetOnFinish(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLEEVENT_SETONFINISH_OFFSET))(this, a1);
		}

		::System::Void SetFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLEEVENT_SETFINISH_OFFSET))(this);
		}

		::System::Boolean IsTargetID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLEEVENT_ISTARGETID_OFFSET))(this, a1);
		}

		::RPG::Client::PenaconyEndmostChronicleEventType get_EventType()
		{
			return ((::RPG::Client::PenaconyEndmostChronicleEventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLEEVENT_GET_EVENTTYPE_OFFSET))(this);
		}

		::System::Void set_EventType(::RPG::Client::PenaconyEndmostChronicleEventType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PenaconyEndmostChronicleEventType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLEEVENT_SET_EVENTTYPE_OFFSET))(this, a1);
		}

		::System::Object* get_ExtraData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLEEVENT_GET_EXTRADATA_OFFSET))(this);
		}

		::System::Void set_ExtraData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLEEVENT_SET_EXTRADATA_OFFSET))(this, a1);
		}

		::System::Action* get_OnFinish()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLEEVENT_GET_ONFINISH_OFFSET))(this);
		}
	};
}
