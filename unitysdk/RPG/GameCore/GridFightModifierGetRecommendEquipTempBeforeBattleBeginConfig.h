#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERGETRECOMMENDEQUIPTEMPBEFOREBATTLEBEGINCONFIG_METHOD_3_0A172C45C3C57940_OFFSET UNITYSDK_OFFSET(0x1D159D50)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERGETRECOMMENDEQUIPTEMPBEFOREBATTLEBEGINCONFIG_METHOD_3_3FFC3CABC043CA84_OFFSET UNITYSDK_OFFSET(0x1D159D00)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERGETRECOMMENDEQUIPTEMPBEFOREBATTLEBEGINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D159D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierGetRecommendEquipTempBeforeBattleBeginConfig_TypeDefinitionIndex = 19129;

	class GridFightModifierGetRecommendEquipTempBeforeBattleBeginConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERGETRECOMMENDEQUIPTEMPBEFOREBATTLEBEGINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3FFC3CABC043CA84(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierGetRecommendEquipTempBeforeBattleBeginConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierGetRecommendEquipTempBeforeBattleBeginConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERGETRECOMMENDEQUIPTEMPBEFOREBATTLEBEGINCONFIG_METHOD_3_3FFC3CABC043CA84_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0A172C45C3C57940(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierGetRecommendEquipTempBeforeBattleBeginConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierGetRecommendEquipTempBeforeBattleBeginConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERGETRECOMMENDEQUIPTEMPBEFOREBATTLEBEGINCONFIG_METHOD_3_0A172C45C3C57940_OFFSET))(a1, a2);
		}
	};
}
