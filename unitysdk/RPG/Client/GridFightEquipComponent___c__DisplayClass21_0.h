#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }

#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x97FBC80)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___C__DISPLAYCLASS21_0___CHECKEQUIPUPDATE_B__1_OFFSET UNITYSDK_OFFSET(0x97FBD90)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipComponent___c__DisplayClass21_0_TypeDefinitionIndex = 52733;

	class GridFightEquipComponent___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::System::UInt32 uid; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __CheckEquipUpdate_b__1(::RPG::Client::GridFightEquipItemData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___C__DISPLAYCLASS21_0___CHECKEQUIPUPDATE_B__1_OFFSET))(this, x);
		}
	};
}
