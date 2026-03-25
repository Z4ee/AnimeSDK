#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERMULTIPLEBATTLEBONUSCONFIG_METHOD_3_16469D2829F9819C_OFFSET UNITYSDK_OFFSET(0x1726B740)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERMULTIPLEBATTLEBONUSCONFIG_METHOD_3_579FD09ADBAB2375_OFFSET UNITYSDK_OFFSET(0x17268360)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERMULTIPLEBATTLEBONUSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17268310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierMultipleBattleBonusConfig_TypeDefinitionIndex = 17810;

	class GridFightModifierMultipleBattleBonusConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERMULTIPLEBATTLEBONUSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_16469D2829F9819C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierMultipleBattleBonusConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierMultipleBattleBonusConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERMULTIPLEBATTLEBONUSCONFIG_METHOD_3_16469D2829F9819C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_579FD09ADBAB2375(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierMultipleBattleBonusConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierMultipleBattleBonusConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERMULTIPLEBATTLEBONUSCONFIG_METHOD_3_579FD09ADBAB2375_OFFSET))(a1, a2);
		}
	};
}
