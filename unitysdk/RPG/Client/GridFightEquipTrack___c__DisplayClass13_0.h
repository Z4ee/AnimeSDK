#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9807410)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK___C__DISPLAYCLASS13_0__UPDATEWAITTRACKEQUIPIDS_B__0_OFFSET UNITYSDK_OFFSET(0x9807820)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK___C__DISPLAYCLASS13_0__UPDATEWAITTRACKEQUIPIDS_B__1_OFFSET UNITYSDK_OFFSET(0x9807880)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipTrack___c__DisplayClass13_0_TypeDefinitionIndex = 53043;

	class GridFightEquipTrack___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::UInt32 baseEquipID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _UpdateWaitTrackEquipIDs_b__0(::System::UInt32 x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK___C__DISPLAYCLASS13_0__UPDATEWAITTRACKEQUIPIDS_B__0_OFFSET))(this, x);
		}

		::System::Boolean _UpdateWaitTrackEquipIDs_b__1(::System::UInt32 x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK___C__DISPLAYCLASS13_0__UPDATEWAITTRACKEQUIPIDS_B__1_OFFSET))(this, x);
		}
	};
}
