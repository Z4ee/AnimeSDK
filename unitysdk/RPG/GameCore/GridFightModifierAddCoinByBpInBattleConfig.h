#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDCOINBYBPINBATTLECONFIG_METHOD_3_13F8F0098AD33CD0_OFFSET UNITYSDK_OFFSET(0x1D157C50)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDCOINBYBPINBATTLECONFIG_METHOD_3_F7ACA591D78886D4_OFFSET UNITYSDK_OFFSET(0x1D157C00)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDCOINBYBPINBATTLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D157C40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddCoinByBpInBattleConfig_TypeDefinitionIndex = 19233;

	class GridFightModifierAddCoinByBpInBattleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDCOINBYBPINBATTLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F7ACA591D78886D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddCoinByBpInBattleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddCoinByBpInBattleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDCOINBYBPINBATTLECONFIG_METHOD_3_F7ACA591D78886D4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_13F8F0098AD33CD0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddCoinByBpInBattleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddCoinByBpInBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDCOINBYBPINBATTLECONFIG_METHOD_3_13F8F0098AD33CD0_OFFSET))(a1, a2);
		}
	};
}
