#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ShieldFormulaType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DamageDisplayData; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_INITSHIELD_METHOD_3_7461E441A199964F_OFFSET UNITYSDK_OFFSET(0x1D1ACD30)
#define RPG_GAMECORE_INITSHIELD_METHOD_3_A76BA6E48C1FB104_OFFSET UNITYSDK_OFFSET(0x1D1ACC30)
#define RPG_GAMECORE_INITSHIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1ACCC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InitShield_TypeDefinitionIndex = 22431;

	class InitShield : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::ShieldFormulaType FormulaType; // 0x20
		::RPG::GameCore::DynamicFloat* ShieldValue; // 0x28
		::RPG::GameCore::DynamicFloat* ShieldPercentage; // 0x30
		::System::Boolean UseAddedRatio; // 0x38
		::System::Boolean ShowText; // 0x39
		::RPG::GameCore::DamageDisplayData* DisplayData; // 0x40
		::RPG::GameCore::TargetEvaluator* DisplayTarget; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITSHIELD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A76BA6E48C1FB104(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InitShield*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InitShield*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITSHIELD_METHOD_3_A76BA6E48C1FB104_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7461E441A199964F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InitShield* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InitShield*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITSHIELD_METHOD_3_7461E441A199964F_OFFSET))(a1, a2);
		}
	};
}
