#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightTrait; }

#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA5B4340)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS4_0__GETTRAITCOUNT_B__0_OFFSET UNITYSDK_OFFSET(0xA5B4920)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS4_0__GETTRAITCOUNT_B__1_OFFSET UNITYSDK_OFFSET(0xA5B48E0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS4_0__GETTRAITCOUNT_B__2_OFFSET UNITYSDK_OFFSET(0xA5B48F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitComponent___c__DisplayClass4_0_TypeDefinitionIndex = 60243;

	class GridFightTraitComponent___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::UInt32 traitID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetTraitCount_b__1(::System::UInt32 x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS4_0__GETTRAITCOUNT_B__1_OFFSET))(this, x);
		}

		::System::Boolean _GetTraitCount_b__2(::RPG::Client::GridFightEquipItemData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS4_0__GETTRAITCOUNT_B__2_OFFSET))(this, x);
		}

		::System::Boolean _GetTraitCount_b__0(::RPG::Client::GridFightTrait* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS4_0__GETTRAITCOUNT_B__0_OFFSET))(this, x);
		}
	};
}
