#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }

#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS35_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBBFB8E0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS35_0__GETEQUIPSBYID_B__0_OFFSET UNITYSDK_OFFSET(0xBBFD890)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSettleRecord___c__DisplayClass35_0_TypeDefinitionIndex = 60976;

	class GridFightSettleRecord___c__DisplayClass35_0 : public ::System::Object
	{
	public:
		::System::UInt32 id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS35_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetEquipsByID_b__0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS35_0__GETEQUIPSBYID_B__0_OFFSET))(this, a1);
		}
	};
}
