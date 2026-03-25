#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9811070)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS___C__DISPLAYCLASS4_0__ISLISTCONTAINSEQUIP_B__0_OFFSET UNITYSDK_OFFSET(0x9811CD0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipTrackUtils___c__DisplayClass4_0_TypeDefinitionIndex = 53072;

	class GridFightEquipTrackUtils___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::UInt32 baseEquipItemID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsListContainsEquip_b__0(::System::UInt32 x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKUTILS___C__DISPLAYCLASS4_0__ISLISTCONTAINSEQUIP_B__0_OFFSET))(this, x);
		}
	};
}
