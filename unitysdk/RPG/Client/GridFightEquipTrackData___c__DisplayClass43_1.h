#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipTrackQuickCraftParam; }

#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS43_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA491DD0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS43_1___UPDATEQUICKDRESSANDCRAFTPARAMS_B__1_OFFSET UNITYSDK_OFFSET(0xA4935C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipTrackData___c__DisplayClass43_1_TypeDefinitionIndex = 60158;

	class GridFightEquipTrackData___c__DisplayClass43_1 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEquipTrackQuickCraftParam* param; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS43_1__CTOR_OFFSET))(this);
		}

		::System::Boolean __UpdateQuickDressAndCraftParams_b__1(::RPG::Client::GridFightEquipTrackQuickCraftParam* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipTrackQuickCraftParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS43_1___UPDATEQUICKDRESSANDCRAFTPARAMS_B__1_OFFSET))(this, x);
		}
	};
}
