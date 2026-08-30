#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPlacementType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTEQUIPCHANGEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9751F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipChangeEvent_TypeDefinitionIndex = 64978;

	class GridFightEquipChangeEvent : public ::System::Object
	{
	public:
		::RPG::Client::GridFightRole* ChangedRole; // 0x10
		::System::UInt32 PosIndex; // 0x18
		::System::Boolean FromAugment; // 0x1C
		::System::Int32 Rank; // 0x20
		::System::Int32 AddEquipIndex; // 0x24
		::RPG::Client::GridFightPlacementType PlacementType; // 0x28
		::System::UInt32 PlacementIndex; // 0x2C
		::System::UInt32 EquipID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCHANGEEVENT__CTOR_OFFSET))(this);
		}
	};
}
