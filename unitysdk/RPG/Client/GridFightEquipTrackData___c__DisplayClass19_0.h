#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipTrack; }

#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x980DD20)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS19_0__HASEQUIPTRACK_B__0_OFFSET UNITYSDK_OFFSET(0x9810690)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipTrackData___c__DisplayClass19_0_TypeDefinitionIndex = 53053;

	class GridFightEquipTrackData___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::System::UInt32 roleID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _HasEquipTrack_b__0(::RPG::Client::GridFightEquipTrack* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS19_0__HASEQUIPTRACK_B__0_OFFSET))(this, x);
		}
	};
}
