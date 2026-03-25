#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CakeRaceAbilityConfig; }

#define RPG_GAMECORE_CAKERACEACTIONSPAWNABILITY_METHOD_3_7E870B39A2CAC5DB_OFFSET UNITYSDK_OFFSET(0x170458F0)
#define RPG_GAMECORE_CAKERACEACTIONSPAWNABILITY_METHOD_3_BB6A735C1D1F1484_OFFSET UNITYSDK_OFFSET(0x17046C40)
#define RPG_GAMECORE_CAKERACEACTIONSPAWNABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x170458D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionSpawnAbility_TypeDefinitionIndex = 16857;

	class CakeRaceActionSpawnAbility : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::RPG::GameCore::CakeRaceAbilityConfig* AbilityConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONSPAWNABILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BB6A735C1D1F1484(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionSpawnAbility*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionSpawnAbility*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONSPAWNABILITY_METHOD_3_BB6A735C1D1F1484_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7E870B39A2CAC5DB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceActionSpawnAbility* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceActionSpawnAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONSPAWNABILITY_METHOD_3_7E870B39A2CAC5DB_OFFSET))(a1, a2);
		}
	};
}
