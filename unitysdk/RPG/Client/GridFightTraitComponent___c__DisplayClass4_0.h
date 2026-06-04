#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightTrait; }

#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBC26130)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS4_0__GETTRAITCOUNT_B__0_OFFSET UNITYSDK_OFFSET(0xBC268C0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS4_0__GETTRAITCOUNT_B__1_OFFSET UNITYSDK_OFFSET(0xBC26880)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS4_0__GETTRAITCOUNT_B__2_OFFSET UNITYSDK_OFFSET(0xBC26890)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitComponent___c__DisplayClass4_0_TypeDefinitionIndex = 61178;

	class GridFightTraitComponent___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::UInt32 traitID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetTraitCount_b__1(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS4_0__GETTRAITCOUNT_B__1_OFFSET))(this, a1);
		}

		::System::Boolean _GetTraitCount_b__2(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS4_0__GETTRAITCOUNT_B__2_OFFSET))(this, a1);
		}

		::System::Boolean _GetTraitCount_b__0(::RPG::Client::GridFightTrait* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS4_0__GETTRAITCOUNT_B__0_OFFSET))(this, a1);
		}
	};
}
