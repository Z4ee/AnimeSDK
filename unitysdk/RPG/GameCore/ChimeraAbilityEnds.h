#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERAABILITYENDS_METHOD_3_40BCBA39779C7F10_OFFSET UNITYSDK_OFFSET(0x187F0810)
#define RPG_GAMECORE_CHIMERAABILITYENDS_METHOD_3_83D1CB042BA2515C_OFFSET UNITYSDK_OFFSET(0x187F08E0)
#define RPG_GAMECORE_CHIMERAABILITYENDS__CTOR_OFFSET UNITYSDK_OFFSET(0x187F08D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraAbilityEnds_TypeDefinitionIndex = 15022;

	class ChimeraAbilityEnds : public ::RPG::GameCore::ChimeraAbilityProgressBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITYENDS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_40BCBA39779C7F10(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraAbilityEnds*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraAbilityEnds*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITYENDS_METHOD_3_40BCBA39779C7F10_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_83D1CB042BA2515C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraAbilityEnds* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraAbilityEnds*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITYENDS_METHOD_3_83D1CB042BA2515C_OFFSET))(a1, a2);
		}
	};
}
