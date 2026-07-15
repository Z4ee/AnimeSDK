#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTCONDHASANYROLEDRESSEQUIPMATCHLISTCONFIG_METHOD_6_A37234E431800F3C_OFFSET UNITYSDK_OFFSET(0x1C5C52B0)
#define RPG_GAMECORE_GRIDFIGHTCONDHASANYROLEDRESSEQUIPMATCHLISTCONFIG_METHOD_6_EA90CC3B1F1F2F40_OFFSET UNITYSDK_OFFSET(0x1C5C5260)
#define RPG_GAMECORE_GRIDFIGHTCONDHASANYROLEDRESSEQUIPMATCHLISTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5C52A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightCondHasAnyRoleDressEquipMatchListConfig_TypeDefinitionIndex = 18576;

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
