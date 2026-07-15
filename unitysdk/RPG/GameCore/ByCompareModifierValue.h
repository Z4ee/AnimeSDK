#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/LogicOperation.h"
#include "unitysdk/RPG/GameCore/ModifierValueType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPAREMODIFIERVALUE_METHOD_4_054443E281230B38_OFFSET UNITYSDK_OFFSET(0x19CF5170)
#define RPG_GAMECORE_BYCOMPAREMODIFIERVALUE_METHOD_4_3F074720B95FB78C_OFFSET UNITYSDK_OFFSET(0x19CF55D0)
#define RPG_GAMECORE_BYCOMPAREMODIFIERVALUE_METHOD_4_9DA8FEF49290C4C1_OFFSET UNITYSDK_OFFSET(0x19CF5560)
#define RPG_GAMECORE_BYCOMPAREMODIFIERVALUE_METHOD_4_B20E5AC727B5D8F2_OFFSET UNITYSDK_OFFSET(0x19CF5220)
#define RPG_GAMECORE_BYCOMPAREMODIFIERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x19CF51E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareModifierValue_TypeDefinitionIndex = 22177;

	class ByCompareModifierValue : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::String* ModifierNamespace; // 0x28
		::System::String* ModifierName; // 0x30
		::RPG::GameCore::ModifierValueType ValueType; // 0x38
		::RPG::GameCore::CompareType CompareType; // 0x3C
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x40
		::RPG::GameCore::LogicOperation Logic; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMODIFIERVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_054443E281230B38(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareModifierValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareModifierValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMODIFIERVALUE_METHOD_4_054443E281230B38_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B20E5AC727B5D8F2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareModifierValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareModifierValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMODIFIERVALUE_METHOD_4_B20E5AC727B5D8F2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9DA8FEF49290C4C1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareModifierValue*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareModifierValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMODIFIERVALUE_METHOD_4_9DA8FEF49290C4C1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3F074720B95FB78C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareModifierValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareModifierValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMODIFIERVALUE_METHOD_4_3F074720B95FB78C_OFFSET))(a1, a2);
		}
	};
}
