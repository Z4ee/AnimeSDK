#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTROLEWITHEQUIPCONFIG_METHOD_2_AA0A0BB00168C8DC_OFFSET UNITYSDK_OFFSET(0x17281290)
#define RPG_GAMECORE_GRIDFIGHTROLEWITHEQUIPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x172812D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRoleWithEquipConfig_TypeDefinitionIndex = 10154;

	class GridFightRoleWithEquipConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLEWITHEQUIPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_AA0A0BB00168C8DC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightRoleWithEquipConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightRoleWithEquipConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLEWITHEQUIPCONFIG_METHOD_2_AA0A0BB00168C8DC_OFFSET))(a1, a2);
		}
	};
}
