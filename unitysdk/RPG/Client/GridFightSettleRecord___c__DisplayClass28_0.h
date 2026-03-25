#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }

#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0x98AA490)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS28_0__GETEQUIPSBYID_B__0_OFFSET UNITYSDK_OFFSET(0x98AC150)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSettleRecord___c__DisplayClass28_0_TypeDefinitionIndex = 52955;

	class GridFightSettleRecord___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::System::UInt32 id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS28_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetEquipsByID_b__0(::RPG::Client::GridFightEquipItemData* equip)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__DISPLAYCLASS28_0__GETEQUIPSBYID_B__0_OFFSET))(this, equip);
		}
	};
}
