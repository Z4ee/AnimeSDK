#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_AND_METHOD_4_08C611500FCA532C_OFFSET UNITYSDK_OFFSET(0x1886F6B0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_AND_METHOD_4_8F6246FEECE5F711_OFFSET UNITYSDK_OFFSET(0x1886B220)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_AND__CTOR_OFFSET UNITYSDK_OFFSET(0x1886B1D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_And_TypeDefinitionIndex = 15251;

	class DiceCombatPredicateConfig_And : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatPredicateConfig* Left; // 0x20
		::RPG::GameCore::DiceCombatPredicateConfig* Right; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_AND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_08C611500FCA532C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_And*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_And*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_AND_METHOD_4_08C611500FCA532C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8F6246FEECE5F711(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_And* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_And*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_AND_METHOD_4_8F6246FEECE5F711_OFFSET))(a1, a2);
		}
	};
}
