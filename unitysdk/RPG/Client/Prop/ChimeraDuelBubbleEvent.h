#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelBubbleEventType.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT_CREATEFACTORY_OFFSET UNITYSDK_OFFSET(0xC501480)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT_CREATE_OFFSET UNITYSDK_OFFSET(0xC5015B0)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT_GET_ARG_OFFSET UNITYSDK_OFFSET(0xC5016A0)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0xC5016C0)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT_GET_DURATION_OFFSET UNITYSDK_OFFSET(0xC501720)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0xC501700)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xC5016E0)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT_SET_ARG_OFFSET UNITYSDK_OFFSET(0xC5016B0)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT_SET_CONFIGID_OFFSET UNITYSDK_OFFSET(0xC5016D0)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT_SET_DURATION_OFFSET UNITYSDK_OFFSET(0xC501730)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT_SET_SKILLID_OFFSET UNITYSDK_OFFSET(0xC501710)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xC5016F0)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xC501430)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelBubbleEvent_TypeDefinitionIndex = 72794;

	class ChimeraDuelBubbleEvent : public ::System::Object
	{
	public:
		::System::UInt32 _ConfigID_k__BackingField; // 0x10
		::System::Int32 _Arg_k__BackingField; // 0x14
		::System::UInt32 _SkillID_k__BackingField; // 0x18
		::RPG::GameCore::ChimeraDuelTeamType TeamType; // 0x1C
		::RPG::GameCore::ChimeraDuelBubbleEventType EventType; // 0x20
		::System::Int32 _UniqueID_k__BackingField; // 0x24
		::System::Single _Duration_k__BackingField; // 0x28

		::System::Void _ctor(::RPG::GameCore::ChimeraDuelBubbleEventType a1, ::RPG::GameCore::ChimeraDuelTeamType a2, ::System::UInt32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::UInt32 a6, ::System::Single a7)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraDuelBubbleEventType, ::RPG::GameCore::ChimeraDuelTeamType, ::System::UInt32, ::System::Int32, ::System::Int32, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Func_1<::RPG::Client::Prop::ChimeraDuelBubbleEvent*>* CreateFactory(::RPG::GameCore::ChimeraDuelBubbleEventType a1, ::RPG::GameCore::ChimeraDuelTeamType a2, ::System::UInt32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::UInt32 a6, ::System::Func_1<::System::Single>* a7)
		{
			return ((::System::Func_1<::RPG::Client::Prop::ChimeraDuelBubbleEvent*>*(*)(::RPG::GameCore::ChimeraDuelBubbleEventType, ::RPG::GameCore::ChimeraDuelTeamType, ::System::UInt32, ::System::Int32, ::System::Int32, ::System::UInt32, ::System::Func_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT_CREATEFACTORY_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::RPG::Client::Prop::ChimeraDuelBubbleEvent* Create(::RPG::GameCore::ChimeraDuelBubbleEventType a1, ::RPG::GameCore::ChimeraDuelTeamType a2, ::System::UInt32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::UInt32 a6, ::System::Single a7)
		{
			return ((::RPG::Client::Prop::ChimeraDuelBubbleEvent*(*)(::RPG::GameCore::ChimeraDuelBubbleEventType, ::RPG::GameCore::ChimeraDuelTeamType, ::System::UInt32, ::System::Int32, ::System::Int32, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT_CREATE_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Int32 get_Arg()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT_GET_ARG_OFFSET))(this);
		}

		::System::Void set_Arg(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT_SET_ARG_OFFSET))(this, a1);
		}

		::System::UInt32 get_ConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT_GET_CONFIGID_OFFSET))(this);
		}

		::System::Void set_ConfigID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT_SET_CONFIGID_OFFSET))(this, a1);
		}

		::System::Int32 get_UniqueID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT_GET_UNIQUEID_OFFSET))(this);
		}

		::System::Void set_UniqueID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT_SET_UNIQUEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_SkillID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT_GET_SKILLID_OFFSET))(this);
		}

		::System::Void set_SkillID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT_SET_SKILLID_OFFSET))(this, a1);
		}

		::System::Single get_Duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT_GET_DURATION_OFFSET))(this);
		}

		::System::Void set_Duration(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENT_SET_DURATION_OFFSET))(this, a1);
		}
	};
}
