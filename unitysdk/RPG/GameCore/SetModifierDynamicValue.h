#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETMODIFIERDYNAMICVALUE_METHOD_3_763FDB0E0C20CFEF_OFFSET UNITYSDK_OFFSET(0x18E39590)
#define RPG_GAMECORE_SETMODIFIERDYNAMICVALUE_METHOD_3_C0549A53A635AD30_OFFSET UNITYSDK_OFFSET(0x18E394B0)
#define RPG_GAMECORE_SETMODIFIERDYNAMICVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E39530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetModifierDynamicValue_TypeDefinitionIndex = 21571;

	class SetModifierDynamicValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean DefineWhenNoValue; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::DynamicString* ModifierName; // 0x28
		::RPG::GameCore::DynamicString* DynamicKey; // 0x30
		::RPG::GameCore::DynamicFloat* NewValue; // 0x38
		::RPG::GameCore::PropertyModifyFunction ModifyFunction; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMODIFIERDYNAMICVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C0549A53A635AD30(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetModifierDynamicValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetModifierDynamicValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMODIFIERDYNAMICVALUE_METHOD_3_C0549A53A635AD30_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_763FDB0E0C20CFEF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetModifierDynamicValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetModifierDynamicValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMODIFIERDYNAMICVALUE_METHOD_3_763FDB0E0C20CFEF_OFFSET))(a1, a2);
		}
	};
}
