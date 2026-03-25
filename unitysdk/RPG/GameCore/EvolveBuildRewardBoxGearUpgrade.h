#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveBuildRewardBoxGearUpgradeEffect.h"
#include "unitysdk/RPG/GameCore/EvolveGearType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EvolveBuildRewardBoxGear; }

#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEARUPGRADE_CREATEDEFAULT_OFFSET UNITYSDK_OFFSET(0xA937710)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEARUPGRADE_CREATEFORGE_OFFSET UNITYSDK_OFFSET(0xA938620)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEARUPGRADE_CREATEMIXFORGE_OFFSET UNITYSDK_OFFSET(0xA9387D0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEARUPGRADE_CREATERISE_OFFSET UNITYSDK_OFFSET(0xA938890)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEARUPGRADE_CREATE_OFFSET UNITYSDK_OFFSET(0xA93A380)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEARUPGRADE_GET_EFFECT_OFFSET UNITYSDK_OFFSET(0xA93A440)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEARUPGRADE_GET_UPDATA_OFFSET UNITYSDK_OFFSET(0xA93A420)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEARUPGRADE_SET_EFFECT_OFFSET UNITYSDK_OFFSET(0xA93A450)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEARUPGRADE_SET_UPDATA_OFFSET UNITYSDK_OFFSET(0xA93A430)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEARUPGRADE__CTOR_OFFSET UNITYSDK_OFFSET(0xA93A410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildRewardBoxGearUpgrade_TypeDefinitionIndex = 43355;

	class EvolveBuildRewardBoxGearUpgrade : public ::System::Object
	{
	public:
		::RPG::GameCore::EvolveBuildRewardBoxGear* _UpData_k__BackingField; // 0x10
		::RPG::GameCore::EvolveBuildRewardBoxGearUpgradeEffect _Effect_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEARUPGRADE__CTOR_OFFSET))(this);
		}

		static ::RPG::GameCore::EvolveBuildRewardBoxGearUpgrade* Create(::RPG::GameCore::EvolveBuildRewardBoxGear* upData, ::RPG::GameCore::EvolveBuildRewardBoxGearUpgradeEffect effect)
		{
			return ((::RPG::GameCore::EvolveBuildRewardBoxGearUpgrade*(*)(::RPG::GameCore::EvolveBuildRewardBoxGear*, ::RPG::GameCore::EvolveBuildRewardBoxGearUpgradeEffect))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEARUPGRADE_CREATE_OFFSET))(upData, effect);
		}

		static ::RPG::GameCore::EvolveBuildRewardBoxGearUpgrade* CreateForge(::RPG::GameCore::EvolveBuildRewardBoxGear* upData, ::RPG::GameCore::EvolveGearType forgeType)
		{
			return ((::RPG::GameCore::EvolveBuildRewardBoxGearUpgrade*(*)(::RPG::GameCore::EvolveBuildRewardBoxGear*, ::RPG::GameCore::EvolveGearType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEARUPGRADE_CREATEFORGE_OFFSET))(upData, forgeType);
		}

		static ::RPG::GameCore::EvolveBuildRewardBoxGearUpgrade* CreateMixForge(::RPG::GameCore::EvolveBuildRewardBoxGear* upData, ::RPG::GameCore::EvolveGearType forgeType)
		{
			return ((::RPG::GameCore::EvolveBuildRewardBoxGearUpgrade*(*)(::RPG::GameCore::EvolveBuildRewardBoxGear*, ::RPG::GameCore::EvolveGearType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEARUPGRADE_CREATEMIXFORGE_OFFSET))(upData, forgeType);
		}

		static ::RPG::GameCore::EvolveBuildRewardBoxGearUpgrade* CreateRise(::RPG::GameCore::EvolveBuildRewardBoxGear* upData)
		{
			return ((::RPG::GameCore::EvolveBuildRewardBoxGearUpgrade*(*)(::RPG::GameCore::EvolveBuildRewardBoxGear*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEARUPGRADE_CREATERISE_OFFSET))(upData);
		}

		static ::RPG::GameCore::EvolveBuildRewardBoxGearUpgrade* CreateDefault(::RPG::GameCore::EvolveBuildRewardBoxGear* upData)
		{
			return ((::RPG::GameCore::EvolveBuildRewardBoxGearUpgrade*(*)(::RPG::GameCore::EvolveBuildRewardBoxGear*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEARUPGRADE_CREATEDEFAULT_OFFSET))(upData);
		}

		::RPG::GameCore::EvolveBuildRewardBoxGear* get_UpData()
		{
			return ((::RPG::GameCore::EvolveBuildRewardBoxGear*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEARUPGRADE_GET_UPDATA_OFFSET))(this);
		}

		::System::Void set_UpData(::RPG::GameCore::EvolveBuildRewardBoxGear* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildRewardBoxGear*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEARUPGRADE_SET_UPDATA_OFFSET))(this, value);
		}

		::RPG::GameCore::EvolveBuildRewardBoxGearUpgradeEffect get_Effect()
		{
			return ((::RPG::GameCore::EvolveBuildRewardBoxGearUpgradeEffect(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEARUPGRADE_GET_EFFECT_OFFSET))(this);
		}

		::System::Void set_Effect(::RPG::GameCore::EvolveBuildRewardBoxGearUpgradeEffect value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildRewardBoxGearUpgradeEffect))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEARUPGRADE_SET_EFFECT_OFFSET))(this, value);
		}
	};
}
