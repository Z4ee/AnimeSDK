#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }

#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x97FADC0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___C__DISPLAYCLASS2_0__UPDATEEQUIPS_B__0_OFFSET UNITYSDK_OFFSET(0x97FBDB0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipComponent___c__DisplayClass2_0_TypeDefinitionIndex = 52734;

	class GridFightEquipComponent___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::UInt32 equipUid; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _UpdateEquips_b__0(::RPG::Client::GridFightEquipItemData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___C__DISPLAYCLASS2_0__UPDATEEQUIPS_B__0_OFFSET))(this, x);
		}
	};
}
