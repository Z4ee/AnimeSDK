#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/DiceCombatValueCompare.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASSELECTDICEPOINTCOMPARE_METHOD_4_81A5AF8BE55E6494_OFFSET UNITYSDK_OFFSET(0x1C114DB0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASSELECTDICEPOINTCOMPARE_METHOD_4_AE984A73997AAE67_OFFSET UNITYSDK_OFFSET(0x1C116750)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASSELECTDICEPOINTCOMPARE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C114DA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_HasSelectDicePointCompare_TypeDefinitionIndex = 15505;

	class DiceCombatPredicateConfig_HasSelectDicePointCompare : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20
		::RPG::GameCore::DiceCombatValueCompare Compare; // 0x24
		::RPG::GameCore::DynamicFloat* DiceContentPoint; // 0x28
		::RPG::GameCore::DynamicFloat* Value; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASSELECTDICEPOINTCOMPARE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_AE984A73997AAE67(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_HasSelectDicePointCompare*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_HasSelectDicePointCompare*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASSELECTDICEPOINTCOMPARE_METHOD_4_AE984A73997AAE67_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_81A5AF8BE55E6494(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_HasSelectDicePointCompare* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_HasSelectDicePointCompare*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASSELECTDICEPOINTCOMPARE_METHOD_4_81A5AF8BE55E6494_OFFSET))(a1, a2);
		}
	};
}
