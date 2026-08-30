#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipTrack; }

#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD185D20)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS19_0__GETEQUIPTRACKBYROLEID_B__0_OFFSET UNITYSDK_OFFSET(0xD189990)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipTrackData___c__DisplayClass19_0_TypeDefinitionIndex = 65387;

	class GridFightEquipTrackData___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::System::UInt32 roleID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetEquipTrackByRoleID_b__0(::RPG::Client::GridFightEquipTrack* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS19_0__GETEQUIPTRACKBYROLEID_B__0_OFFSET))(this, a1);
		}
	};
}
