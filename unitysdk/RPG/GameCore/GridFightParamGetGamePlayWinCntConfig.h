#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETGAMEPLAYWINCNTCONFIG_METHOD_6_BB75778FED467A32_OFFSET UNITYSDK_OFFSET(0x1D15D340)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETGAMEPLAYWINCNTCONFIG_METHOD_6_C3CD387C67FB3E4E_OFFSET UNITYSDK_OFFSET(0x1D15D390)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETGAMEPLAYWINCNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D15D380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetGamePlayWinCntConfig_TypeDefinitionIndex = 19314;

	class GridFightParamGetGamePlayWinCntConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETGAMEPLAYWINCNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_BB75778FED467A32(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetGamePlayWinCntConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetGamePlayWinCntConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETGAMEPLAYWINCNTCONFIG_METHOD_6_BB75778FED467A32_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_C3CD387C67FB3E4E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetGamePlayWinCntConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetGamePlayWinCntConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETGAMEPLAYWINCNTCONFIG_METHOD_6_C3CD387C67FB3E4E_OFFSET))(a1, a2);
		}
	};
}
