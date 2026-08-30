#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_MODIFYPROPERTY_METHOD_3_16DA8102E3DEABFC_OFFSET UNITYSDK_OFFSET(0x1D1BCC30)
#define RPG_GAMECORE_MODIFYPROPERTY_METHOD_3_7270BDA9B96AC5CF_OFFSET UNITYSDK_OFFSET(0x1D1BCBE0)
#define RPG_GAMECORE_MODIFYPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1BCC20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyProperty_TypeDefinitionIndex = 23297;

	class ModifyProperty : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IncludeLimbo; // 0x20
		::RPG::GameCore::AbilityProperty Property; // 0x24
		::RPG::GameCore::PropertyModifyFunction ModifyFunction; // 0x28
		::RPG::GameCore::DynamicFloat* ModifyValue; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7270BDA9B96AC5CF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYPROPERTY_METHOD_3_7270BDA9B96AC5CF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_16DA8102E3DEABFC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyProperty* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYPROPERTY_METHOD_3_16DA8102E3DEABFC_OFFSET))(a1, a2);
		}
	};
}
