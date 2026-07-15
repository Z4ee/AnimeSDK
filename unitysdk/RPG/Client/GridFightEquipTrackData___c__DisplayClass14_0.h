#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipTrack; }

#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A696C70)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS14_0__REMOVEEQUIPTRACK_B__0_OFFSET UNITYSDK_OFFSET(0x1A69B890)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipTrackData___c__DisplayClass14_0_TypeDefinitionIndex = 62401;

	class GridFightEquipTrackData___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::System::UInt32 baseRoleID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveEquipTrack_b__0(::RPG::Client::GridFightEquipTrack* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS14_0__REMOVEEQUIPTRACK_B__0_OFFSET))(this, a1);
		}
	};
}
