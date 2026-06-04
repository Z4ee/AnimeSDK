#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseRogueMagicUltraUnitSpecialFactor; }
namespace RPG::GameCore { class PassiveUnitEffectTypeMatchFactorConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEMAGICPOWERCONFIG_METHOD_2_3B39469EAC257C43_OFFSET UNITYSDK_OFFSET(0x19B45AC0)
#define RPG_GAMECORE_ROGUEMAGICPOWERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B45CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicPowerConfig_TypeDefinitionIndex = 17038;

	class RogueMagicPowerConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single ScepterStyleTypeUnMatchFactor; // 0x10
		::System::Single AttachUnitStyleTypeUnMatchFactor; // 0x14
		::System::Single AttachUnitRangeTypeUnMatchFactor; // 0x18
		::Il2CppArray<::RPG::GameCore::PassiveUnitEffectTypeMatchFactorConfig*>* PassiveUnitEffectTypeMatchFactor; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::BaseRogueMagicUltraUnitSpecialFactor*>* PassiveUltraUnitSpecialFactor; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICPOWERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3B39469EAC257C43(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicPowerConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicPowerConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICPOWERCONFIG_METHOD_2_3B39469EAC257C43_OFFSET))(a1, a2);
		}
	};
}
