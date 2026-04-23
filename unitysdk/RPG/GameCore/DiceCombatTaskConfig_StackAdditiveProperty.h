#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatAdditivePropertyType.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
#include "unitysdk/RPG/GameCore/StackAdditivePropertyOp.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_STACKADDITIVEPROPERTY_METHOD_3_681A4D8C89A8DFA5_OFFSET UNITYSDK_OFFSET(0x1887D040)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_STACKADDITIVEPROPERTY_METHOD_3_C7B6D31A62E2ED84_OFFSET UNITYSDK_OFFSET(0x18878E00)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_STACKADDITIVEPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x18878DA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_StackAdditiveProperty_TypeDefinitionIndex = 15255;

	class DiceCombatTaskConfig_StackAdditiveProperty : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DiceCombatAdditivePropertyType AdditiveProperty; // 0x10
		::RPG::GameCore::DynamicFloat* Value; // 0x18
		::RPG::GameCore::StackAdditivePropertyOp OP; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_STACKADDITIVEPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_681A4D8C89A8DFA5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_StackAdditiveProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_StackAdditiveProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_STACKADDITIVEPROPERTY_METHOD_3_681A4D8C89A8DFA5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C7B6D31A62E2ED84(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_StackAdditiveProperty* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_StackAdditiveProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_STACKADDITIVEPROPERTY_METHOD_3_C7B6D31A62E2ED84_OFFSET))(a1, a2);
		}
	};
}
