#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_MODIFYSHIELDVALUEBYNEWSHIELDMODIFIER_METHOD_3_53ABADE33409C04B_OFFSET UNITYSDK_OFFSET(0x1D2B7720)
#define RPG_GAMECORE_MODIFYSHIELDVALUEBYNEWSHIELDMODIFIER_METHOD_3_C341C0B4861FF80E_OFFSET UNITYSDK_OFFSET(0x1D2B7820)
#define RPG_GAMECORE_MODIFYSHIELDVALUEBYNEWSHIELDMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2B77B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyShieldValueByNewShieldModifier_TypeDefinitionIndex = 23333;

	class ModifyShieldValueByNewShieldModifier : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* TargetModifierName; // 0x20
		::System::String* NewModifierName; // 0x28
		::RPG::GameCore::PropertyModifyFunction ModifyFunction; // 0x30
		::RPG::GameCore::DynamicFloat* Percentage; // 0x38
		::System::Boolean EnableSame; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSHIELDVALUEBYNEWSHIELDMODIFIER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_53ABADE33409C04B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyShieldValueByNewShieldModifier*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyShieldValueByNewShieldModifier*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSHIELDVALUEBYNEWSHIELDMODIFIER_METHOD_3_53ABADE33409C04B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C341C0B4861FF80E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyShieldValueByNewShieldModifier* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyShieldValueByNewShieldModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSHIELDVALUEBYNEWSHIELDMODIFIER_METHOD_3_C341C0B4861FF80E_OFFSET))(a1, a2);
		}
	};
}
