#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETGAMEPLAYWINCNTCONFIG_METHOD_6_919C320B2AE67008_OFFSET UNITYSDK_OFFSET(0x189C3B20)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETGAMEPLAYWINCNTCONFIG_METHOD_6_C3CD387C67FB3E4E_OFFSET UNITYSDK_OFFSET(0x189C3DD0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETGAMEPLAYWINCNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x189C3CA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetGamePlayWinCntConfig_TypeDefinitionIndex = 18554;

	class GridFightParamGetGamePlayWinCntConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETGAMEPLAYWINCNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_919C320B2AE67008(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetGamePlayWinCntConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetGamePlayWinCntConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETGAMEPLAYWINCNTCONFIG_METHOD_6_919C320B2AE67008_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_C3CD387C67FB3E4E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetGamePlayWinCntConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetGamePlayWinCntConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETGAMEPLAYWINCNTCONFIG_METHOD_6_C3CD387C67FB3E4E_OFFSET))(a1, a2);
		}
	};
}
