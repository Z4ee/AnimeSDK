#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightBackEquipmentConfig; }

#define RPG_CLIENT_GRIDFIGHTROLECONFIG___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA6EDF0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG___C__DISPLAYCLASS3_0__GETBACKEQUIPMENTCONFIG_B__0_OFFSET UNITYSDK_OFFSET(0x1CA71730)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleConfig___c__DisplayClass3_0_TypeDefinitionIndex = 65180;

	class GridFightRoleConfig___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::UInt32 equipmentID; // 0x10
		::System::UInt32 rank; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetBackEquipmentConfig_b__0(::RPG::Client::GridFightBackEquipmentConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightBackEquipmentConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG___C__DISPLAYCLASS3_0__GETBACKEQUIPMENTCONFIG_B__0_OFFSET))(this, a1);
		}
	};
}
