#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/ShieldModifyFormulaType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DamageDisplayData; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_STACKSHIELD_METHOD_3_32B0A7027549305D_OFFSET UNITYSDK_OFFSET(0x1D0B98A0)
#define RPG_GAMECORE_STACKSHIELD_METHOD_3_8AF309B97CB53886_OFFSET UNITYSDK_OFFSET(0x1D0B9910)
#define RPG_GAMECORE_STACKSHIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0B98F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StackShield_TypeDefinitionIndex = 23334;

	class StackShield : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PropertyModifyFunction ModifyFunc; // 0x18
		::RPG::GameCore::DynamicFloat* StackValue; // 0x20
		::RPG::GameCore::ShieldModifyFormulaType CalculateFormula_StackValue; // 0x28
		::RPG::GameCore::DynamicFloat* MaxStack; // 0x30
		::RPG::GameCore::ShieldModifyFormulaType CalculateFormula_MaxStack; // 0x38
		::System::Boolean ShowText; // 0x3C
		::RPG::GameCore::DamageDisplayData* DisplayData; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKSHIELD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_32B0A7027549305D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StackShield*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StackShield*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKSHIELD_METHOD_3_32B0A7027549305D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8AF309B97CB53886(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StackShield* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StackShield*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKSHIELD_METHOD_3_8AF309B97CB53886_OFFSET))(a1, a2);
		}
	};
}
