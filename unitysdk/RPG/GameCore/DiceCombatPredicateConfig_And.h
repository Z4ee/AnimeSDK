#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_AND_METHOD_4_78AE4A61D66FD727_OFFSET UNITYSDK_OFFSET(0x1D825D60)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_AND_METHOD_4_CA666D858B783BFD_OFFSET UNITYSDK_OFFSET(0x1D8299F0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_AND__CTOR_OFFSET UNITYSDK_OFFSET(0x1D825D50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_And_TypeDefinitionIndex = 15911;

	class DiceCombatPredicateConfig_And : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatPredicateConfig* Left; // 0x20
		::RPG::GameCore::DiceCombatPredicateConfig* Right; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_AND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CA666D858B783BFD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_And*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_And*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_AND_METHOD_4_CA666D858B783BFD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_78AE4A61D66FD727(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_And* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_And*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_AND_METHOD_4_78AE4A61D66FD727_OFFSET))(a1, a2);
		}
	};
}
