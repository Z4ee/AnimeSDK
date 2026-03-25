#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTrait; }

#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x98CDA90)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS4_0__GETTRAITBYID_B__0_OFFSET UNITYSDK_OFFSET(0x98CDF00)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitComponent___c__DisplayClass4_0_TypeDefinitionIndex = 53122;

	class GridFightTraitComponent___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::UInt32 traitID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetTraitByID_b__0(::RPG::Client::GridFightTrait* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS4_0__GETTRAITBYID_B__0_OFFSET))(this, x);
		}
	};
}
