#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }

#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___C__DISPLAYCLASS5_0__CONTAINSEQUIPID_B__0_OFFSET UNITYSDK_OFFSET(0x97FBDF0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x97FB370)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipComponent___c__DisplayClass5_0_TypeDefinitionIndex = 52736;

	class GridFightEquipComponent___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::UInt32 equipID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _ContainsEquipID_b__0(::RPG::Client::GridFightEquipItemData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___C__DISPLAYCLASS5_0__CONTAINSEQUIPID_B__0_OFFSET))(this, x);
		}
	};
}
