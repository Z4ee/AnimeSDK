#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVENTUREBYCOMPARESPRATIO_METHOD_4_24A7BED2FFD833F1_OFFSET UNITYSDK_OFFSET(0x19441A70)
#define RPG_GAMECORE_ADVENTUREBYCOMPARESPRATIO_METHOD_4_B19149239D735E89_OFFSET UNITYSDK_OFFSET(0x19441E40)
#define RPG_GAMECORE_ADVENTUREBYCOMPARESPRATIO_METHOD_4_BCDBD3BF926ACD8A_OFFSET UNITYSDK_OFFSET(0x19441DA0)
#define RPG_GAMECORE_ADVENTUREBYCOMPARESPRATIO_METHOD_4_D5013A9698542689_OFFSET UNITYSDK_OFFSET(0x19441B90)
#define RPG_GAMECORE_ADVENTUREBYCOMPARESPRATIO__CTOR_OFFSET UNITYSDK_OFFSET(0x19441B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByCompareSPRatio_TypeDefinitionIndex = 19633;

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

		static ::System::Void Method_4_BCDBD3BF926ACD8A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByCompareSPRatio*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByCompareSPRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYCOMPARESPRATIO_METHOD_4_BCDBD3BF926ACD8A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B19149239D735E89(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByCompareSPRatio* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByCompareSPRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYCOMPARESPRATIO_METHOD_4_B19149239D735E89_OFFSET))(a1, a2);
		}
	};
}
