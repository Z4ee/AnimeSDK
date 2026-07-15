#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameConstConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ElfChefConfig; }
namespace RPG::GameCore { class ElfCustomerConfig; }
namespace RPG::GameCore { class ElfDialogTipConfig; }
namespace RPG::GameCore { class ElfDrinkMachineCommonConfig; }
namespace RPG::GameCore { class ElfFarmConfig; }
namespace RPG::GameCore { class ElfGlobalEffectConfig; }
namespace RPG::GameCore { class ElfHeadWaiterTalkConfig; }
namespace RPG::GameCore { class ElfNormalEventConfig; }
namespace RPG::GameCore { class ElfPhaseConfig; }
namespace RPG::GameCore { class ElfSkillConfig; }
namespace RPG::GameCore { class ElfSuperEventConfig; }
namespace RPG::GameCore { class ElfWaiterConfig; }
namespace RPG::GameCore { class ElfWaveCustomerConfig; }

#define RPG_GAMECORE_ELFRESTAURANTGAMECONFIG_METHOD_3_826B515FCD9AF002_OFFSET UNITYSDK_OFFSET(0x1BB38990)
#define RPG_GAMECORE_ELFRESTAURANTGAMECONFIG_METHOD_3_912A6E3EC2B14747_OFFSET UNITYSDK_OFFSET(0x1BB389D0)
#define RPG_GAMECORE_ELFRESTAURANTGAMECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB389C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfRestaurantGameConfig_TypeDefinitionIndex = 17722;

	class ElfRestaurantGameConfig : public ::RPG::GameCore::LittleGameConstConfig
	{
	public:
		::System::Single MaxGameTime; // 0x10
		::System::Single TakeOutWaitTime; // 0x14
		::RPG::GameCore::ElfPhaseConfig* PhaseConfig; // 0x18
		::RPG::GameCore::ElfGlobalEffectConfig* EffectConfig; // 0x20
		::RPG::GameCore::ElfSkillConfig* SkillConfig; // 0x28
		::RPG::GameCore::ElfWaveCustomerConfig* WaveCustomerConfig; // 0x30
		::RPG::GameCore::ElfCustomerConfig* CustomerConfig; // 0x38
		::RPG::GameCore::ElfWaiterConfig* WaiterConfig; // 0x40
		::RPG::GameCore::ElfChefConfig* ChefConfig; // 0x48
		::RPG::GameCore::ElfDrinkMachineCommonConfig* DrinkMachineConfig; // 0x50
		::RPG::GameCore::ElfDialogTipConfig* DialogConfig; // 0x58
		::RPG::GameCore::ElfNormalEventConfig* NormalEventConfig; // 0x60
		::RPG::GameCore::ElfSuperEventConfig* SuperEventConfig; // 0x68
		::RPG::GameCore::ElfHeadWaiterTalkConfig* HeadWaiterTalkConfig; // 0x70
		::RPG::GameCore::ElfFarmConfig* FarmConfig; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFRESTAURANTGAMECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_826B515FCD9AF002(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfRestaurantGameConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfRestaurantGameConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFRESTAURANTGAMECONFIG_METHOD_3_826B515FCD9AF002_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_912A6E3EC2B14747(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfRestaurantGameConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfRestaurantGameConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFRESTAURANTGAMECONFIG_METHOD_3_912A6E3EC2B14747_OFFSET))(a1, a2);
		}
	};
}
