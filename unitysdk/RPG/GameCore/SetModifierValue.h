#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierValueType.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETMODIFIERVALUE_METHOD_3_05EC4C4921479655_OFFSET UNITYSDK_OFFSET(0x18E39D10)
#define RPG_GAMECORE_SETMODIFIERVALUE_METHOD_3_A58B952626E1F0F7_OFFSET UNITYSDK_OFFSET(0x18E39C20)
#define RPG_GAMECORE_SETMODIFIERVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E39C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetModifierValue_TypeDefinitionIndex = 21562;

	class SetModifierValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicString* ModifierName; // 0x20
		::RPG::GameCore::PropertyModifyFunction ModifyFunction; // 0x28
		::RPG::GameCore::ModifierValueType ValueType; // 0x2C
		::RPG::GameCore::DynamicFloat* Value; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMODIFIERVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A58B952626E1F0F7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetModifierValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetModifierValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMODIFIERVALUE_METHOD_3_A58B952626E1F0F7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_05EC4C4921479655(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetModifierValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetModifierValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMODIFIERVALUE_METHOD_3_05EC4C4921479655_OFFSET))(a1, a2);
		}
	};
}
