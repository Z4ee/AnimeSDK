#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipTrack; }
namespace RPG::Client { class GridFightEquipTrackQuickCraftParam; }

#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS39_1__CTOR_OFFSET UNITYSDK_OFFSET(0x98103D0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS39_1___CHECKUNHIDEEQUIP_B__5_OFFSET UNITYSDK_OFFSET(0x9810800)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipTrackData___c__DisplayClass39_1_TypeDefinitionIndex = 53060;

	class GridFightEquipTrackData___c__DisplayClass39_1 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEquipTrackQuickCraftParam* x; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS39_1__CTOR_OFFSET))(this);
		}

		::System::Boolean __CheckUnHideEquip_b__5(::RPG::Client::GridFightEquipTrack* track)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS39_1___CHECKUNHIDEEQUIP_B__5_OFFSET))(this, track);
		}
	};
}
