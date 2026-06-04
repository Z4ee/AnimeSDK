#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipTrackQuickDressParam; }

#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS43_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBB319D0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS43_0___UPDATEQUICKDRESSANDCRAFTPARAMS_B__0_OFFSET UNITYSDK_OFFSET(0xBB32DB0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipTrackData___c__DisplayClass43_0_TypeDefinitionIndex = 61092;

	class GridFightEquipTrackData___c__DisplayClass43_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEquipTrackQuickDressParam* param; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS43_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __UpdateQuickDressAndCraftParams_b__0(::RPG::Client::GridFightEquipTrackQuickDressParam* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipTrackQuickDressParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS43_0___UPDATEQUICKDRESSANDCRAFTPARAMS_B__0_OFFSET))(this, a1);
		}
	};
}
