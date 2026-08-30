#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLEMAXSTARINGAMEPLAYCONFIG_METHOD_6_5CB323BA1C3DF6B0_OFFSET UNITYSDK_OFFSET(0x1D15DAC0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLEMAXSTARINGAMEPLAYCONFIG_METHOD_6_EBC4CB53C91C1CAC_OFFSET UNITYSDK_OFFSET(0x1D15DB10)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLEMAXSTARINGAMEPLAYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D15DB00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetRoleMaxStarInGamePlayConfig_TypeDefinitionIndex = 19319;

	class GridFightParamGetRoleMaxStarInGamePlayConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLEMAXSTARINGAMEPLAYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_5CB323BA1C3DF6B0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetRoleMaxStarInGamePlayConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetRoleMaxStarInGamePlayConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLEMAXSTARINGAMEPLAYCONFIG_METHOD_6_5CB323BA1C3DF6B0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_EBC4CB53C91C1CAC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetRoleMaxStarInGamePlayConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetRoleMaxStarInGamePlayConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLEMAXSTARINGAMEPLAYCONFIG_METHOD_6_EBC4CB53C91C1CAC_OFFSET))(a1, a2);
		}
	};
}
