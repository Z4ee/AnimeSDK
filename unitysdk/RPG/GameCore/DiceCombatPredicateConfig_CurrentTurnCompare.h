#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatValueCompare.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CURRENTTURNCOMPARE_METHOD_4_1CDF424F1F1ED7E2_OFFSET UNITYSDK_OFFSET(0x1886BA50)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CURRENTTURNCOMPARE_METHOD_4_F14BAE0BDE40AD4D_OFFSET UNITYSDK_OFFSET(0x1886F8F0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CURRENTTURNCOMPARE__CTOR_OFFSET UNITYSDK_OFFSET(0x1886BA00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_CurrentTurnCompare_TypeDefinitionIndex = 15280;

	class DiceCombatPredicateConfig_CurrentTurnCompare : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatValueCompare Compare; // 0x20
		::RPG::GameCore::DynamicFloat* Value; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CURRENTTURNCOMPARE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F14BAE0BDE40AD4D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_CurrentTurnCompare*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_CurrentTurnCompare*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CURRENTTURNCOMPARE_METHOD_4_F14BAE0BDE40AD4D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1CDF424F1F1ED7E2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_CurrentTurnCompare* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_CurrentTurnCompare*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CURRENTTURNCOMPARE_METHOD_4_1CDF424F1F1ED7E2_OFFSET))(a1, a2);
		}
	};
}
