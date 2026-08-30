#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GRIDFIGHTELATIONDRESSEQUIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB0B8F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitElationEffect_GridFightElationDressEquip_TypeDefinitionIndex = 65445;

	class GridFightTraitElationEffect_GridFightElationDressEquip : public ::System::Object
	{
	public:
		::System::UInt32 SlotIndex; // 0x10
		::System::UInt32 EquipUID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITELATIONEFFECT_GRIDFIGHTELATIONDRESSEQUIP__CTOR_OFFSET))(this);
		}
	};
}
