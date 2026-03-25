#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightBackEquipmentConfig; }

#define RPG_CLIENT_GRIDFIGHTROLECONFIG___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9891290)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG___C__DISPLAYCLASS4_0__GETBACKEQUIPMENTCONFIGBYRANK_B__0_OFFSET UNITYSDK_OFFSET(0x9892D90)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleConfig___c__DisplayClass4_0_TypeDefinitionIndex = 52872;

	class GridFightRoleConfig___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::UInt32 rank; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetBackEquipmentConfigByRank_b__0(::RPG::Client::GridFightBackEquipmentConfig* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightBackEquipmentConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG___C__DISPLAYCLASS4_0__GETBACKEQUIPMENTCONFIGBYRANK_B__0_OFFSET))(this, x);
		}
	};
}
