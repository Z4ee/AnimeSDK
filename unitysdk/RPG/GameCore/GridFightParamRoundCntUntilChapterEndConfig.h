#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMROUNDCNTUNTILCHAPTERENDCONFIG_METHOD_6_4B6294AC83872C4C_OFFSET UNITYSDK_OFFSET(0x1EE72360)
#define RPG_GAMECORE_GRIDFIGHTPARAMROUNDCNTUNTILCHAPTERENDCONFIG_METHOD_6_C5121D8BEBB34FD0_OFFSET UNITYSDK_OFFSET(0x1EE72310)
#define RPG_GAMECORE_GRIDFIGHTPARAMROUNDCNTUNTILCHAPTERENDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE72350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamRoundCntUntilChapterEndConfig_TypeDefinitionIndex = 19283;

	class GridFightParamRoundCntUntilChapterEndConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMROUNDCNTUNTILCHAPTERENDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_C5121D8BEBB34FD0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamRoundCntUntilChapterEndConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamRoundCntUntilChapterEndConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMROUNDCNTUNTILCHAPTERENDCONFIG_METHOD_6_C5121D8BEBB34FD0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_4B6294AC83872C4C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamRoundCntUntilChapterEndConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamRoundCntUntilChapterEndConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMROUNDCNTUNTILCHAPTERENDCONFIG_METHOD_6_4B6294AC83872C4C_OFFSET))(a1, a2);
		}
	};
}
