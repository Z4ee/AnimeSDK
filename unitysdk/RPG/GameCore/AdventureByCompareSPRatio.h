#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTUREBYCOMPARESPRATIO_METHOD_4_24A7BED2FFD833F1_OFFSET UNITYSDK_OFFSET(0x1866E5C0)
#define RPG_GAMECORE_ADVENTUREBYCOMPARESPRATIO_METHOD_4_D5013A9698542689_OFFSET UNITYSDK_OFFSET(0x1866E6E0)
#define RPG_GAMECORE_ADVENTUREBYCOMPARESPRATIO__CTOR_OFFSET UNITYSDK_OFFSET(0x1866E660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByCompareSPRatio_TypeDefinitionIndex = 19757;

	class AdventureByCompareSPRatio : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x28
		::System::Single CompareValue; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYCOMPARESPRATIO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_24A7BED2FFD833F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByCompareSPRatio*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByCompareSPRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYCOMPARESPRATIO_METHOD_4_24A7BED2FFD833F1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D5013A9698542689(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByCompareSPRatio* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByCompareSPRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYCOMPARESPRATIO_METHOD_4_D5013A9698542689_OFFSET))(a1, a2);
		}
	};
}
