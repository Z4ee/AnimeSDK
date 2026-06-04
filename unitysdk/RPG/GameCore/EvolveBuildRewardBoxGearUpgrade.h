#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveBuildRewardBoxGearUpgradeEffect.h"
#include "unitysdk/RPG/GameCore/EvolveGearType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EvolveBuildRewardBoxGear; }

#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEARUPGRADE_CREATEDEFAULT_OFFSET UNITYSDK_OFFSET(0xCDED0E0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEARUPGRADE_CREATEFORGE_OFFSET UNITYSDK_OFFSET(0xCDEDF10)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEARUPGRADE_CREATEMIXFORGE_OFFSET UNITYSDK_OFFSET(0xCDEE0C0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEARUPGRADE_CREATERISE_OFFSET UNITYSDK_OFFSET(0xCDEE180)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEARUPGRADE_CREATE_OFFSET UNITYSDK_OFFSET(0xCDEFC40)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEARUPGRADE_GET_EFFECT_OFFSET UNITYSDK_OFFSET(0xCDEFD00)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEARUPGRADE_GET_UPDATA_OFFSET UNITYSDK_OFFSET(0xCDEFCE0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEARUPGRADE_SET_EFFECT_OFFSET UNITYSDK_OFFSET(0xCDEFD10)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEARUPGRADE_SET_UPDATA_OFFSET UNITYSDK_OFFSET(0xCDEFCF0)
#define RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEARUPGRADE__CTOR_OFFSET UNITYSDK_OFFSET(0xCDEFCD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildRewardBoxGearUpgrade_TypeDefinitionIndex = 50021;

	class EvolveBuildRewardBoxGearUpgrade : public ::System::Object
	{
	public:
		::RPG::GameCore::EvolveBuildRewardBoxGear* _UpData_k__BackingField; // 0x10
		::RPG::GameCore::EvolveBuildRewardBoxGearUpgradeEffect _Effect_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEARUPGRADE__CTOR_OFFSET))(this);
		}

		static ::RPG::GameCore::EvolveBuildRewardBoxGearUpgrade* Create(::RPG::GameCore::EvolveBuildRewardBoxGear* a1, ::RPG::GameCore::EvolveBuildRewardBoxGearUpgradeEffect a2)
		{
			return ((::RPG::GameCore::EvolveBuildRewardBoxGearUpgrade*(*)(::RPG::GameCore::EvolveBuildRewardBoxGear*, ::RPG::GameCore::EvolveBuildRewardBoxGearUpgradeEffect))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEARUPGRADE_CREATE_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::EvolveBuildRewardBoxGearUpgrade* CreateForge(::RPG::GameCore::EvolveBuildRewardBoxGear* a1, ::RPG::GameCore::EvolveGearType a2)
		{
			return ((::RPG::GameCore::EvolveBuildRewardBoxGearUpgrade*(*)(::RPG::GameCore::EvolveBuildRewardBoxGear*, ::RPG::GameCore::EvolveGearType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEARUPGRADE_CREATEFORGE_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::EvolveBuildRewardBoxGearUpgrade* CreateMixForge(::RPG::GameCore::EvolveBuildRewardBoxGear* a1, ::RPG::GameCore::EvolveGearType a2)
		{
			return ((::RPG::GameCore::EvolveBuildRewardBoxGearUpgrade*(*)(::RPG::GameCore::EvolveBuildRewardBoxGear*, ::RPG::GameCore::EvolveGearType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEARUPGRADE_CREATEMIXFORGE_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::EvolveBuildRewardBoxGearUpgrade* CreateRise(::RPG::GameCore::EvolveBuildRewardBoxGear* a1)
		{
			return ((::RPG::GameCore::EvolveBuildRewardBoxGearUpgrade*(*)(::RPG::GameCore::EvolveBuildRewardBoxGear*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEARUPGRADE_CREATERISE_OFFSET))(a1);
		}

		static ::RPG::GameCore::EvolveBuildRewardBoxGearUpgrade* CreateDefault(::RPG::GameCore::EvolveBuildRewardBoxGear* a1)
		{
			return ((::RPG::GameCore::EvolveBuildRewardBoxGearUpgrade*(*)(::RPG::GameCore::EvolveBuildRewardBoxGear*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEARUPGRADE_CREATEDEFAULT_OFFSET))(a1);
		}

		::RPG::GameCore::EvolveBuildRewardBoxGear* get_UpData()
		{
			return ((::RPG::GameCore::EvolveBuildRewardBoxGear*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEARUPGRADE_GET_UPDATA_OFFSET))(this);
		}

		::System::Void set_UpData(::RPG::GameCore::EvolveBuildRewardBoxGear* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildRewardBoxGear*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEARUPGRADE_SET_UPDATA_OFFSET))(this, a1);
		}

		::RPG::GameCore::EvolveBuildRewardBoxGearUpgradeEffect get_Effect()
		{
			return ((::RPG::GameCore::EvolveBuildRewardBoxGearUpgradeEffect(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEARUPGRADE_GET_EFFECT_OFFSET))(this);
		}

		::System::Void set_Effect(::RPG::GameCore::EvolveBuildRewardBoxGearUpgradeEffect a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildRewardBoxGearUpgradeEffect))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDREWARDBOXGEARUPGRADE_SET_EFFECT_OFFSET))(this, a1);
		}
	};
}
