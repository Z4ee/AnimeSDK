#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class SkillConfig; }

#define RPG_GAMECORE_LEVELENTITYBEFORESKILLCOST_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1DD22130)
#define RPG_GAMECORE_LEVELENTITYBEFORESKILLCOST_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1DD220E0)
#define RPG_GAMECORE_LEVELENTITYBEFORESKILLCOST_GET_BPCOST_OFFSET UNITYSDK_OFFSET(0x1DD221C0)
#define RPG_GAMECORE_LEVELENTITYBEFORESKILLCOST_GET_OWNERID_OFFSET UNITYSDK_OFFSET(0x1DD22180)
#define RPG_GAMECORE_LEVELENTITYBEFORESKILLCOST_GET_SKILLCONFIG_OFFSET UNITYSDK_OFFSET(0x1DD221A0)
#define RPG_GAMECORE_LEVELENTITYBEFORESKILLCOST_INIT_OFFSET UNITYSDK_OFFSET(0x1DD22080)
#define RPG_GAMECORE_LEVELENTITYBEFORESKILLCOST_SET_BPCOST_OFFSET UNITYSDK_OFFSET(0x1DD221D0)
#define RPG_GAMECORE_LEVELENTITYBEFORESKILLCOST_SET_OWNERID_OFFSET UNITYSDK_OFFSET(0x1DD22190)
#define RPG_GAMECORE_LEVELENTITYBEFORESKILLCOST_SET_SKILLCONFIG_OFFSET UNITYSDK_OFFSET(0x1DD221B0)
#define RPG_GAMECORE_LEVELENTITYBEFORESKILLCOST__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD221E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityBeforeSkillCost_TypeDefinitionIndex = 56928;

	class LevelEntityBeforeSkillCost : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::SkillConfig* _SkillConfig_k__BackingField; // 0x18
		::System::UInt32 _OwnerID_k__BackingField; // 0x20
		::System::Int32 _BPCost_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBEFORESKILLCOST__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntityBeforeSkillCost* Init(::System::UInt32 a1, ::RPG::GameCore::SkillConfig* a2, ::System::Int32 a3)
		{
			return ((::RPG::GameCore::LevelEntityBeforeSkillCost*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::SkillConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBEFORESKILLCOST_INIT_OFFSET))(this, a1, a2, a3);
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

		::System::Void set_OwnerID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBEFORESKILLCOST_SET_OWNERID_OFFSET))(this, a1);
		}

		::RPG::GameCore::SkillConfig* get_SkillConfig()
		{
			return ((::RPG::GameCore::SkillConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBEFORESKILLCOST_GET_SKILLCONFIG_OFFSET))(this);
		}

		::System::Void set_SkillConfig(::RPG::GameCore::SkillConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBEFORESKILLCOST_SET_SKILLCONFIG_OFFSET))(this, a1);
		}

		::System::Int32 get_BPCost()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBEFORESKILLCOST_GET_BPCOST_OFFSET))(this);
		}

		::System::Void set_BPCost(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYBEFORESKILLCOST_SET_BPCOST_OFFSET))(this, a1);
		}
	};
}
