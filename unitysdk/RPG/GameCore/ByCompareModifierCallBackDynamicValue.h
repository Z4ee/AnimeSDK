#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPAREMODIFIERCALLBACKDYNAMICVALUE_METHOD_4_080C562717469341_OFFSET UNITYSDK_OFFSET(0x19CF40B0)
#define RPG_GAMECORE_BYCOMPAREMODIFIERCALLBACKDYNAMICVALUE_METHOD_4_2DD9D26BC20FFE17_OFFSET UNITYSDK_OFFSET(0x19CF40F0)
#define RPG_GAMECORE_BYCOMPAREMODIFIERCALLBACKDYNAMICVALUE_METHOD_4_A544683B4AAF55B0_OFFSET UNITYSDK_OFFSET(0x19CF4380)
#define RPG_GAMECORE_BYCOMPAREMODIFIERCALLBACKDYNAMICVALUE_METHOD_4_D5F3FAC492F84F47_OFFSET UNITYSDK_OFFSET(0x19CF43B0)
#define RPG_GAMECORE_BYCOMPAREMODIFIERCALLBACKDYNAMICVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x19CF40E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareModifierCallBackDynamicValue_TypeDefinitionIndex = 22178;

	class ByCompareModifierCallBackDynamicValue : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean ResultWhenNoValue; // 0x20
		::System::String* DynamicKey; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x30
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMODIFIERCALLBACKDYNAMICVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_080C562717469341(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareModifierCallBackDynamicValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareModifierCallBackDynamicValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMODIFIERCALLBACKDYNAMICVALUE_METHOD_4_080C562717469341_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2DD9D26BC20FFE17(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareModifierCallBackDynamicValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareModifierCallBackDynamicValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMODIFIERCALLBACKDYNAMICVALUE_METHOD_4_2DD9D26BC20FFE17_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A544683B4AAF55B0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareModifierCallBackDynamicValue*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareModifierCallBackDynamicValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMODIFIERCALLBACKDYNAMICVALUE_METHOD_4_A544683B4AAF55B0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D5F3FAC492F84F47(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareModifierCallBackDynamicValue* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareModifierCallBackDynamicValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMODIFIERCALLBACKDYNAMICVALUE_METHOD_4_D5F3FAC492F84F47_OFFSET))(a1, a2);
		}
	};
}
