#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatValueCompare.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CUSTOMVALUECOMPARE_METHOD_4_2591E9B24B807990_OFFSET UNITYSDK_OFFSET(0x1886BCB0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CUSTOMVALUECOMPARE_METHOD_4_96FCD3ACCC973FD8_OFFSET UNITYSDK_OFFSET(0x1886F980)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CUSTOMVALUECOMPARE__CTOR_OFFSET UNITYSDK_OFFSET(0x1886BC60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_CustomValueCompare_TypeDefinitionIndex = 15248;

	class DiceCombatPredicateConfig_CustomValueCompare : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Left; // 0x20
		::RPG::GameCore::DiceCombatValueCompare Op; // 0x28
		::RPG::GameCore::DynamicFloat* Right; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CUSTOMVALUECOMPARE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_96FCD3ACCC973FD8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_CustomValueCompare*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_CustomValueCompare*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CUSTOMVALUECOMPARE_METHOD_4_96FCD3ACCC973FD8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2591E9B24B807990(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_CustomValueCompare* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_CustomValueCompare*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CUSTOMVALUECOMPARE_METHOD_4_2591E9B24B807990_OFFSET))(a1, a2);
		}
	};
}
