#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_36.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipTrack; }

#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA48B610)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS23_0__GETEQUIPTRACK_B__0_OFFSET UNITYSDK_OFFSET(0xA493250)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS23_0__GETEQUIPTRACK_B__1_OFFSET UNITYSDK_OFFSET(0xA493270)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipTrackData___c__DisplayClass23_0_TypeDefinitionIndex = 60151;

	class GridFightEquipTrackData___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::UInt32 targetID; // 0x10
		::Enum_3_DB663931210BBC27_36 trackSource; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetEquipTrack_b__0(::RPG::Client::GridFightEquipTrack* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS23_0__GETEQUIPTRACK_B__0_OFFSET))(this, x);
		}

		::System::Boolean _GetEquipTrack_b__1(::RPG::Client::GridFightEquipTrack* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS23_0__GETEQUIPTRACK_B__1_OFFSET))(this, x);
		}
	};
}
