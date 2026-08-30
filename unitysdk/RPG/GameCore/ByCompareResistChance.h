#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARERESISTCHANCE_METHOD_4_31D14EC53543D06F_OFFSET UNITYSDK_OFFSET(0x1BBB5090)
#define RPG_GAMECORE_BYCOMPARERESISTCHANCE_METHOD_4_3942F216B30FC1B1_OFFSET UNITYSDK_OFFSET(0x1BBB5310)
#define RPG_GAMECORE_BYCOMPARERESISTCHANCE_METHOD_4_816EA7052FE2127E_OFFSET UNITYSDK_OFFSET(0x1BBB5340)
#define RPG_GAMECORE_BYCOMPARERESISTCHANCE_METHOD_4_C18648F2F1C76D48_OFFSET UNITYSDK_OFFSET(0x1BBB5050)
#define RPG_GAMECORE_BYCOMPARERESISTCHANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBB5080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareResistChance_TypeDefinitionIndex = 23224;

	class ByCompareResistChance : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* BehaviorFlagList; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x30
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARERESISTCHANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C18648F2F1C76D48(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareResistChance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareResistChance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARERESISTCHANCE_METHOD_4_C18648F2F1C76D48_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_31D14EC53543D06F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareResistChance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareResistChance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARERESISTCHANCE_METHOD_4_31D14EC53543D06F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3942F216B30FC1B1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareResistChance*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareResistChance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARERESISTCHANCE_METHOD_4_3942F216B30FC1B1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_816EA7052FE2127E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareResistChance* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareResistChance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARERESISTCHANCE_METHOD_4_816EA7052FE2127E_OFFSET))(a1, a2);
		}
	};
}
