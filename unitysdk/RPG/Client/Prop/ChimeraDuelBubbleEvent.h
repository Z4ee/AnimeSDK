#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelBubbleEventType.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT_CREATEFACTORY_OFFSET UNITYSDK_OFFSET(0xADBD2E0)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT_CREATE_OFFSET UNITYSDK_OFFSET(0xADBD400)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT_GET_ARG_OFFSET UNITYSDK_OFFSET(0xADBD4F0)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0xADBD510)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT_GET_DURATION_OFFSET UNITYSDK_OFFSET(0xADBD570)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0xADBD550)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xADBD530)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT_SET_ARG_OFFSET UNITYSDK_OFFSET(0xADBD500)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT_SET_CONFIGID_OFFSET UNITYSDK_OFFSET(0xADBD520)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT_SET_DURATION_OFFSET UNITYSDK_OFFSET(0xADBD580)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT_SET_SKILLID_OFFSET UNITYSDK_OFFSET(0xADBD560)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xADBD540)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xADBD290)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelBubbleEvent_TypeDefinitionIndex = 71772;

	class ChimeraDuelBubbleEvent : public ::System::Object
	{
	public:
		::System::Int32 _Arg_k__BackingField; // 0x10
		::System::Single _Duration_k__BackingField; // 0x14
		::RPG::GameCore::ChimeraDuelBubbleEventType EventType; // 0x18
		::System::Int32 _UniqueID_k__BackingField; // 0x1C
		::System::UInt32 _ConfigID_k__BackingField; // 0x20
		::System::UInt32 _SkillID_k__BackingField; // 0x24
		::RPG::GameCore::ChimeraDuelTeamType TeamType; // 0x28

		::System::Void _ctor(::RPG::GameCore::ChimeraDuelBubbleEventType eventType, ::RPG::GameCore::ChimeraDuelTeamType teamType, ::System::UInt32 configID, ::System::Int32 uniqueID, ::System::Int32 arg, ::System::UInt32 skillID, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraDuelBubbleEventType, ::RPG::GameCore::ChimeraDuelTeamType, ::System::UInt32, ::System::Int32, ::System::Int32, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT__CTOR_OFFSET))(this, eventType, teamType, configID, uniqueID, arg, skillID, duration);
		}

		static ::System::Func_1<::RPG::Client::Prop::ChimeraDuelBubbleEvent*>* CreateFactory(::RPG::GameCore::ChimeraDuelBubbleEventType eventType, ::RPG::GameCore::ChimeraDuelTeamType teamType, ::System::UInt32 configID, ::System::Int32 uniqueID, ::System::Int32 arg, ::System::UInt32 skillID, ::System::Func_1<::System::Single>* getDuration)
		{
			return ((::System::Func_1<::RPG::Client::Prop::ChimeraDuelBubbleEvent*>*(*)(::RPG::GameCore::ChimeraDuelBubbleEventType, ::RPG::GameCore::ChimeraDuelTeamType, ::System::UInt32, ::System::Int32, ::System::Int32, ::System::UInt32, ::System::Func_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT_CREATEFACTORY_OFFSET))(eventType, teamType, configID, uniqueID, arg, skillID, getDuration);
		}

		static ::RPG::Client::Prop::ChimeraDuelBubbleEvent* Create(::RPG::GameCore::ChimeraDuelBubbleEventType eventType, ::RPG::GameCore::ChimeraDuelTeamType teamType, ::System::UInt32 configID, ::System::Int32 uniqueID, ::System::Int32 arg, ::System::UInt32 skillID, ::System::Single duration)
		{
			return ((::RPG::Client::Prop::ChimeraDuelBubbleEvent*(*)(::RPG::GameCore::ChimeraDuelBubbleEventType, ::RPG::GameCore::ChimeraDuelTeamType, ::System::UInt32, ::System::Int32, ::System::Int32, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT_CREATE_OFFSET))(eventType, teamType, configID, uniqueID, arg, skillID, duration);
		}

		::System::Int32 get_Arg()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT_GET_ARG_OFFSET))(this);
		}

		::System::Void set_Arg(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT_SET_ARG_OFFSET))(this, value);
		}

		::System::UInt32 get_ConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT_GET_CONFIGID_OFFSET))(this);
		}

		::System::Void set_ConfigID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT_SET_CONFIGID_OFFSET))(this, value);
		}

		::System::Int32 get_UniqueID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT_GET_UNIQUEID_OFFSET))(this);
		}

		::System::Void set_UniqueID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT_SET_UNIQUEID_OFFSET))(this, value);
		}

		::System::UInt32 get_SkillID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT_GET_SKILLID_OFFSET))(this);
		}

		::System::Void set_SkillID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT_SET_SKILLID_OFFSET))(this, value);
		}

		::System::Single get_Duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT_GET_DURATION_OFFSET))(this);
		}

		::System::Void set_Duration(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT_SET_DURATION_OFFSET))(this, value);
		}
	};
}
