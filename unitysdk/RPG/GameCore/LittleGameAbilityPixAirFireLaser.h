#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace RPG::GameCore { class PixAirLaserConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRFIRELASER_METHOD_4_11DCFB6B4F590A6B_OFFSET UNITYSDK_OFFSET(0x1D1FB790)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRFIRELASER_METHOD_4_D3DBBC3314804A00_OFFSET UNITYSDK_OFFSET(0x1D1FB750)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRFIRELASER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1FB780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityPixAirFireLaser_TypeDefinitionIndex = 21152;

	class LittleGameAbilityPixAirFireLaser : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* TargetSelector; // 0x18
		::RPG::GameCore::PixAirLaserConfig* LaserConfig; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRFIRELASER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D3DBBC3314804A00(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirFireLaser*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirFireLaser*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRFIRELASER_METHOD_4_D3DBBC3314804A00_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_11DCFB6B4F590A6B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityPixAirFireLaser* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityPixAirFireLaser*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRFIRELASER_METHOD_4_11DCFB6B4F590A6B_OFFSET))(a1, a2);
		}
	};
}
