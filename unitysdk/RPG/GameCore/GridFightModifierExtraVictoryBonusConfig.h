#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXTRAVICTORYBONUSCONFIG_METHOD_3_55B7E976A774E3CE_OFFSET UNITYSDK_OFFSET(0x197F2420)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXTRAVICTORYBONUSCONFIG_METHOD_3_E41EFDB14F6E1647_OFFSET UNITYSDK_OFFSET(0x197ECF10)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXTRAVICTORYBONUSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197ECEC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExtraVictoryBonusConfig_TypeDefinitionIndex = 18445;

	class GridFightModifierExtraVictoryBonusConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXTRAVICTORYBONUSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_55B7E976A774E3CE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExtraVictoryBonusConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExtraVictoryBonusConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXTRAVICTORYBONUSCONFIG_METHOD_3_55B7E976A774E3CE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E41EFDB14F6E1647(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExtraVictoryBonusConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExtraVictoryBonusConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXTRAVICTORYBONUSCONFIG_METHOD_3_E41EFDB14F6E1647_OFFSET))(a1, a2);
		}
	};
}
