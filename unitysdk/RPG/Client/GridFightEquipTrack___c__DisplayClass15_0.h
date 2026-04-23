#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA488CA0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK___C__DISPLAYCLASS15_0__UPDATEWAITTRACKEQUIPIDS_B__0_OFFSET UNITYSDK_OFFSET(0xA489150)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACK___C__DISPLAYCLASS15_0__UPDATEWAITTRACKEQUIPIDS_B__1_OFFSET UNITYSDK_OFFSET(0xA489200)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipTrack___c__DisplayClass15_0_TypeDefinitionIndex = 60138;

	class GridFightEquipTrack___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::System::UInt32 baseEquipID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _UpdateWaitTrackEquipIDs_b__0(::System::UInt32 x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK___C__DISPLAYCLASS15_0__UPDATEWAITTRACKEQUIPIDS_B__0_OFFSET))(this, x);
		}

		::System::Boolean _UpdateWaitTrackEquipIDs_b__1(::System::UInt32 x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACK___C__DISPLAYCLASS15_0__UPDATEWAITTRACKEQUIPIDS_B__1_OFFSET))(this, x);
		}
	};
}
