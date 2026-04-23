#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/ShieldModifyFormulaType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DamageDisplayData; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_MODIFYSHIELD_METHOD_3_49482BC9E89A5896_OFFSET UNITYSDK_OFFSET(0x18B3FEC0)
#define RPG_GAMECORE_MODIFYSHIELD_METHOD_3_975BE641E79CC874_OFFSET UNITYSDK_OFFSET(0x18B3FE20)
#define RPG_GAMECORE_MODIFYSHIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x18B3FE80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyShield_TypeDefinitionIndex = 22060;

	class ModifyShield : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::System::String*>* ShieldModifiers; // 0x20
		::RPG::GameCore::TargetEvaluator* SpecifiedModifierCaster; // 0x28
		::System::Boolean AllowExpandMax; // 0x30
		::RPG::GameCore::PropertyModifyFunction ModifyOp; // 0x34
		::RPG::GameCore::ShieldModifyFormulaType FormulaType; // 0x38
		::RPG::GameCore::DynamicFloat* FormulaValue; // 0x40
		::System::Boolean ShowText; // 0x48
		::RPG::GameCore::DamageDisplayData* DisplayData; // 0x50
		::RPG::GameCore::TargetEvaluator* DisplayTarget; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSHIELD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_975BE641E79CC874(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyShield*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyShield*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSHIELD_METHOD_3_975BE641E79CC874_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_49482BC9E89A5896(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyShield* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyShield*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYSHIELD_METHOD_3_49482BC9E89A5896_OFFSET))(a1, a2);
		}
	};
}
