#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class SkillConfig; }

#define RPG_GAMECORE_LEVELENTITYBEFORESKILLCOST_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA987EB0)
#define RPG_GAMECORE_LEVELENTITYBEFORESKILLCOST_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA987E60)
#define RPG_GAMECORE_LEVELENTITYBEFORESKILLCOST_GET_BPCOST_OFFSET UNITYSDK_OFFSET(0xA987F40)
#define RPG_GAMECORE_LEVELENTITYBEFORESKILLCOST_GET_OWNERID_OFFSET UNITYSDK_OFFSET(0xA987F00)
#define RPG_GAMECORE_LEVELENTITYBEFORESKILLCOST_GET_SKILLCONFIG_OFFSET UNITYSDK_OFFSET(0xA987F20)
#define RPG_GAMECORE_LEVELENTITYBEFORESKILLCOST_INIT_OFFSET UNITYSDK_OFFSET(0xA987E00)
#define RPG_GAMECORE_LEVELENTITYBEFORESKILLCOST_SET_BPCOST_OFFSET UNITYSDK_OFFSET(0xA987F50)
#define RPG_GAMECORE_LEVELENTITYBEFORESKILLCOST_SET_OWNERID_OFFSET UNITYSDK_OFFSET(0xA987F10)
#define RPG_GAMECORE_LEVELENTITYBEFORESKILLCOST_SET_SKILLCONFIG_OFFSET UNITYSDK_OFFSET(0xA987F30)
#define RPG_GAMECORE_LEVELENTITYBEFORESKILLCOST__CTOR_OFFSET UNITYSDK_OFFSET(0xA987F60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityBeforeSkillCost_TypeDefinitionIndex = 45646;

	class LevelEntityBeforeSkillCost : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::SkillConfig* _SkillConfig_k__BackingField; // 0x18
		::System::UInt32 _OwnerID_k__BackingField; // 0x20
		::System::Int32 _BPCost_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBEFORESKILLCOST__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntityBeforeSkillCost* Init(::System::UInt32 nOwnerID, ::RPG::GameCore::SkillConfig* skillConfig, ::System::Int32 bpCost)
		{
			return ((::RPG::GameCore::LevelEntityBeforeSkillCost*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::SkillConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBEFORESKILLCOST_INIT_OFFSET))(this, nOwnerID, skillConfig, bpCost);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBEFORESKILLCOST_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBEFORESKILLCOST_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 get_OwnerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBEFORESKILLCOST_GET_OWNERID_OFFSET))(this);
		}

		::System::Void set_OwnerID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBEFORESKILLCOST_SET_OWNERID_OFFSET))(this, value);
		}

		::RPG::GameCore::SkillConfig* get_SkillConfig()
		{
			return ((::RPG::GameCore::SkillConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBEFORESKILLCOST_GET_SKILLCONFIG_OFFSET))(this);
		}

		::System::Void set_SkillConfig(::RPG::GameCore::SkillConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBEFORESKILLCOST_SET_SKILLCONFIG_OFFSET))(this, value);
		}

		::System::Int32 get_BPCost()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBEFORESKILLCOST_GET_BPCOST_OFFSET))(this);
		}

		::System::Void set_BPCost(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBEFORESKILLCOST_SET_BPCOST_OFFSET))(this, value);
		}
	};
}
