#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVENTUREBYCOMPARESPRATIO_METHOD_4_0C3F51E86EB65D82_OFFSET UNITYSDK_OFFSET(0x1AE4E310)
#define RPG_GAMECORE_ADVENTUREBYCOMPARESPRATIO_METHOD_4_437C0ACB387FCE3C_OFFSET UNITYSDK_OFFSET(0x1AE4E640)
#define RPG_GAMECORE_ADVENTUREBYCOMPARESPRATIO_METHOD_4_BB3837BBB2DF0C31_OFFSET UNITYSDK_OFFSET(0x1AE4E5D0)
#define RPG_GAMECORE_ADVENTUREBYCOMPARESPRATIO_METHOD_4_D5013A9698542689_OFFSET UNITYSDK_OFFSET(0x1AE4E3C0)
#define RPG_GAMECORE_ADVENTUREBYCOMPARESPRATIO__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE4E380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByCompareSPRatio_TypeDefinitionIndex = 19992;

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

		static ::System::Void Method_4_0C3F51E86EB65D82(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByCompareSPRatio*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByCompareSPRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYCOMPARESPRATIO_METHOD_4_0C3F51E86EB65D82_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D5013A9698542689(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByCompareSPRatio* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByCompareSPRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYCOMPARESPRATIO_METHOD_4_D5013A9698542689_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BB3837BBB2DF0C31(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByCompareSPRatio*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByCompareSPRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYCOMPARESPRATIO_METHOD_4_BB3837BBB2DF0C31_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_437C0ACB387FCE3C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByCompareSPRatio* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByCompareSPRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYCOMPARESPRATIO_METHOD_4_437C0ACB387FCE3C_OFFSET))(a1, a2);
		}
	};
}
