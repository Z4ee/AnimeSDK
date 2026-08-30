#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightBackEquipmentConfig; }

#define RPG_CLIENT_GRIDFIGHTROLECONFIG___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA6EEE0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG___C__DISPLAYCLASS4_0__GETBACKEQUIPMENTCONFIGBYRANK_B__0_OFFSET UNITYSDK_OFFSET(0x1CA717E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleConfig___c__DisplayClass4_0_TypeDefinitionIndex = 65181;

	class GridFightRoleConfig___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::UInt32 rank; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetBackEquipmentConfigByRank_b__0(::RPG::Client::GridFightBackEquipmentConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightBackEquipmentConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG___C__DISPLAYCLASS4_0__GETBACKEQUIPMENTCONFIGBYRANK_B__0_OFFSET))(this, a1);
		}
	};
}
