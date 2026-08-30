#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipTrack; }

#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD185F90)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS21_0__GETEQUIPTRACKSOURCE_B__0_OFFSET UNITYSDK_OFFSET(0xD189AD0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipTrackData___c__DisplayClass21_0_TypeDefinitionIndex = 65389;

	class GridFightEquipTrackData___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::System::UInt32 roleID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetEquipTrackSource_b__0(::RPG::Client::GridFightEquipTrack* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS21_0__GETEQUIPTRACKSOURCE_B__0_OFFSET))(this, a1);
		}
	};
}
