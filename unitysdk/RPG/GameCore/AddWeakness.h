#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADDWEAKNESS_METHOD_3_123FB06C926ACF6A_OFFSET UNITYSDK_OFFSET(0x1CDB7EA0)
#define RPG_GAMECORE_ADDWEAKNESS_METHOD_3_791E3E0837340BB7_OFFSET UNITYSDK_OFFSET(0x1CDB7EE0)
#define RPG_GAMECORE_ADDWEAKNESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDB7ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddWeakness_TypeDefinitionIndex = 22818;

	class AddWeakness : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::AttackDamageType DamageType; // 0x20
		::RPG::GameCore::DynamicFloat* ResistanceDeltaValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDWEAKNESS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_123FB06C926ACF6A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddWeakness*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddWeakness*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDWEAKNESS_METHOD_3_123FB06C926ACF6A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_791E3E0837340BB7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AddWeakness* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AddWeakness*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDWEAKNESS_METHOD_3_791E3E0837340BB7_OFFSET))(a1, a2);
		}
	};
}
