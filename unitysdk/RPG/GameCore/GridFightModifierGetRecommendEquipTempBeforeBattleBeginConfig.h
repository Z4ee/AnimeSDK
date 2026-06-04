#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERGETRECOMMENDEQUIPTEMPBEFOREBATTLEBEGINCONFIG_METHOD_3_0A172C45C3C57940_OFFSET UNITYSDK_OFFSET(0x197ED6F0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERGETRECOMMENDEQUIPTEMPBEFOREBATTLEBEGINCONFIG_METHOD_3_242FED24928BDCA9_OFFSET UNITYSDK_OFFSET(0x197F28A0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERGETRECOMMENDEQUIPTEMPBEFOREBATTLEBEGINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197ED6A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierGetRecommendEquipTempBeforeBattleBeginConfig_TypeDefinitionIndex = 18360;

	class GridFightModifierGetRecommendEquipTempBeforeBattleBeginConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERGETRECOMMENDEQUIPTEMPBEFOREBATTLEBEGINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_242FED24928BDCA9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierGetRecommendEquipTempBeforeBattleBeginConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierGetRecommendEquipTempBeforeBattleBeginConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERGETRECOMMENDEQUIPTEMPBEFOREBATTLEBEGINCONFIG_METHOD_3_242FED24928BDCA9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0A172C45C3C57940(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierGetRecommendEquipTempBeforeBattleBeginConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierGetRecommendEquipTempBeforeBattleBeginConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERGETRECOMMENDEQUIPTEMPBEFOREBATTLEBEGINCONFIG_METHOD_3_0A172C45C3C57940_OFFSET))(a1, a2);
		}
	};
}
