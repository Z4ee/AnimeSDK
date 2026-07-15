#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREDYNAMICVALUE_METHOD_4_031BA876D89E3914_OFFSET UNITYSDK_OFFSET(0x19CDD400)
#define RPG_GAMECORE_BYCOMPAREDYNAMICVALUE_METHOD_4_42814A2C0F34758A_OFFSET UNITYSDK_OFFSET(0x19CDD0A0)
#define RPG_GAMECORE_BYCOMPAREDYNAMICVALUE_METHOD_4_A43B87CD3B2269A9_OFFSET UNITYSDK_OFFSET(0x19CDD000)
#define RPG_GAMECORE_BYCOMPAREDYNAMICVALUE_METHOD_4_BD37A62996901079_OFFSET UNITYSDK_OFFSET(0x19CDD3A0)
#define RPG_GAMECORE_BYCOMPAREDYNAMICVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x19CDD060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareDynamicValue_TypeDefinitionIndex = 22947;

	class ByCompareDynamicValue : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::DynamicString* DynamicKey; // 0x28
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x30
		::RPG::GameCore::DynamicFloat* DynamicValue; // 0x38
		::RPG::GameCore::CompareType CompareType; // 0x40
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREDYNAMICVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A43B87CD3B2269A9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareDynamicValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareDynamicValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREDYNAMICVALUE_METHOD_4_A43B87CD3B2269A9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_42814A2C0F34758A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareDynamicValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareDynamicValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREDYNAMICVALUE_METHOD_4_42814A2C0F34758A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BD37A62996901079(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareDynamicValue*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareDynamicValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREDYNAMICVALUE_METHOD_4_BD37A62996901079_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_031BA876D89E3914(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareDynamicValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareDynamicValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREDYNAMICVALUE_METHOD_4_031BA876D89E3914_OFFSET))(a1, a2);
		}
	};
}
