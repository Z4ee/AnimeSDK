#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTCONDHASANYROLEDRESSEQUIPMATCHLISTCONFIG_METHOD_6_A37234E431800F3C_OFFSET UNITYSDK_OFFSET(0x1D14D3F0)
#define RPG_GAMECORE_GRIDFIGHTCONDHASANYROLEDRESSEQUIPMATCHLISTCONFIG_METHOD_6_EA90CC3B1F1F2F40_OFFSET UNITYSDK_OFFSET(0x1D14D3A0)
#define RPG_GAMECORE_GRIDFIGHTCONDHASANYROLEDRESSEQUIPMATCHLISTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D14D3E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightCondHasAnyRoleDressEquipMatchListConfig_TypeDefinitionIndex = 19101;

	class GridFightCondHasAnyRoleDressEquipMatchListConfig : public ::RPG::GameCore::GridFightConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDHASANYROLEDRESSEQUIPMATCHLISTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_EA90CC3B1F1F2F40(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightCondHasAnyRoleDressEquipMatchListConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCondHasAnyRoleDressEquipMatchListConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDHASANYROLEDRESSEQUIPMATCHLISTCONFIG_METHOD_6_EA90CC3B1F1F2F40_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_A37234E431800F3C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightCondHasAnyRoleDressEquipMatchListConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCondHasAnyRoleDressEquipMatchListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDHASANYROLEDRESSEQUIPMATCHLISTCONFIG_METHOD_6_A37234E431800F3C_OFFSET))(a1, a2);
		}
	};
}
