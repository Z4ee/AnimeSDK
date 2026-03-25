#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETLEFTDELAYINBATTLECONFIG_METHOD_6_00FA9D66EFE52DA2_OFFSET UNITYSDK_OFFSET(0x17270FF0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETLEFTDELAYINBATTLECONFIG_METHOD_6_E1B3BBDCF2F01E8C_OFFSET UNITYSDK_OFFSET(0x172712A0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETLEFTDELAYINBATTLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17271170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetLeftDelayInBattleConfig_TypeDefinitionIndex = 17898;

	class GridFightParamGetLeftDelayInBattleConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETLEFTDELAYINBATTLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_00FA9D66EFE52DA2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetLeftDelayInBattleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetLeftDelayInBattleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETLEFTDELAYINBATTLECONFIG_METHOD_6_00FA9D66EFE52DA2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_E1B3BBDCF2F01E8C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetLeftDelayInBattleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetLeftDelayInBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETLEFTDELAYINBATTLECONFIG_METHOD_6_E1B3BBDCF2F01E8C_OFFSET))(a1, a2);
		}
	};
}
