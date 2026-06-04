#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemConfig; }

#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBB13590)
#define RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__DISPLAYCLASS17_0___GETOCCUPYNEEDEQUIPID_B__0_OFFSET UNITYSDK_OFFSET(0xBB15370)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightElationTraitEquipComponent___c__DisplayClass17_0_TypeDefinitionIndex = 61120;

	class GridFightElationTraitEquipComponent___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEquipItemConfig* baseEquip; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __GetOccupyNeedEquipID_b__0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONTRAITEQUIPCOMPONENT___C__DISPLAYCLASS17_0___GETOCCUPYNEEDEQUIPID_B__0_OFFSET))(this, a1);
		}
	};
}
