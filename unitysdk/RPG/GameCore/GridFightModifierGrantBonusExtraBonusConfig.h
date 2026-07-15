#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERGRANTBONUSEXTRABONUSCONFIG_METHOD_3_5D41807BED2E92EA_OFFSET UNITYSDK_OFFSET(0x1D06A090)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERGRANTBONUSEXTRABONUSCONFIG_METHOD_3_69F9BDA782CDED46_OFFSET UNITYSDK_OFFSET(0x1D06A0E0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERGRANTBONUSEXTRABONUSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D06A0D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierGrantBonusExtraBonusConfig_TypeDefinitionIndex = 18653;

	class GridFightModifierGrantBonusExtraBonusConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERGRANTBONUSEXTRABONUSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5D41807BED2E92EA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierGrantBonusExtraBonusConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierGrantBonusExtraBonusConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERGRANTBONUSEXTRABONUSCONFIG_METHOD_3_5D41807BED2E92EA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_69F9BDA782CDED46(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierGrantBonusExtraBonusConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierGrantBonusExtraBonusConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERGRANTBONUSEXTRABONUSCONFIG_METHOD_3_69F9BDA782CDED46_OFFSET))(a1, a2);
		}
	};
}
