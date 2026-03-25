#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }

#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___C__DISPLAYCLASS6_0__CONTAINSEQUIPUNIQUEID_B__0_OFFSET UNITYSDK_OFFSET(0x97FBE10)
#define RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x97FB4A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipComponent___c__DisplayClass6_0_TypeDefinitionIndex = 52737;

	class GridFightEquipComponent___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::UInt32 uniqueID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _ContainsEquipUniqueID_b__0(::RPG::Client::GridFightEquipItemData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCOMPONENT___C__DISPLAYCLASS6_0__CONTAINSEQUIPUNIQUEID_B__0_OFFSET))(this, x);
		}
	};
}
