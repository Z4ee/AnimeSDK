#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERUSEMIRACLEBYENTERCELLTYPECONFIG_METHOD_3_4C2B826E57F01107_OFFSET UNITYSDK_OFFSET(0x1E535840)
#define RPG_GAMECORE_ROGUEMODIFIERUSEMIRACLEBYENTERCELLTYPECONFIG_METHOD_3_80950990FCEEAD83_OFFSET UNITYSDK_OFFSET(0x1E5357F0)
#define RPG_GAMECORE_ROGUEMODIFIERUSEMIRACLEBYENTERCELLTYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E535830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierUseMiracleByEnterCellTypeConfig_TypeDefinitionIndex = 17724;

	class RogueModifierUseMiracleByEnterCellTypeConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERUSEMIRACLEBYENTERCELLTYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_80950990FCEEAD83(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierUseMiracleByEnterCellTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierUseMiracleByEnterCellTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERUSEMIRACLEBYENTERCELLTYPECONFIG_METHOD_3_80950990FCEEAD83_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4C2B826E57F01107(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierUseMiracleByEnterCellTypeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierUseMiracleByEnterCellTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERUSEMIRACLEBYENTERCELLTYPECONFIG_METHOD_3_4C2B826E57F01107_OFFSET))(a1, a2);
		}
	};
}
