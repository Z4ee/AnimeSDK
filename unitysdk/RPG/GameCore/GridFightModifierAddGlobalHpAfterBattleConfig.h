#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDGLOBALHPAFTERBATTLECONFIG_METHOD_3_7ECB37406FC4AAAE_OFFSET UNITYSDK_OFFSET(0x1C5CFCD0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDGLOBALHPAFTERBATTLECONFIG_METHOD_3_98CC8F3E61587C6A_OFFSET UNITYSDK_OFFSET(0x1C5CFD20)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDGLOBALHPAFTERBATTLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5CFD10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddGlobalHpAfterBattleConfig_TypeDefinitionIndex = 18633;

	class GridFightModifierAddGlobalHpAfterBattleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDGLOBALHPAFTERBATTLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7ECB37406FC4AAAE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddGlobalHpAfterBattleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddGlobalHpAfterBattleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDGLOBALHPAFTERBATTLECONFIG_METHOD_3_7ECB37406FC4AAAE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_98CC8F3E61587C6A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddGlobalHpAfterBattleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddGlobalHpAfterBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDGLOBALHPAFTERBATTLECONFIG_METHOD_3_98CC8F3E61587C6A_OFFSET))(a1, a2);
		}
	};
}
