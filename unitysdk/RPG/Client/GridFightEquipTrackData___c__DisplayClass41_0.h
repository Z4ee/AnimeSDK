#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipTrack; }
namespace RPG::Client { class GridFightEquipTrackQuickDressParam; }

#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS41_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBB32240)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS41_0___CHECKUNHIDEEQUIP_B__4_OFFSET UNITYSDK_OFFSET(0xBB32D30)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipTrackData___c__DisplayClass41_0_TypeDefinitionIndex = 61090;

	class GridFightEquipTrackData___c__DisplayClass41_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEquipTrackQuickDressParam* x; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS41_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __CheckUnHideEquip_b__4(::RPG::Client::GridFightEquipTrack* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS41_0___CHECKUNHIDEEQUIP_B__4_OFFSET))(this, a1);
		}
	};
}
