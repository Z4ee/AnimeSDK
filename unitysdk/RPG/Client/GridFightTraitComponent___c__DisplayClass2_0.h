#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTrait; }

#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD3584F0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS2_0__UPDATETRAITS_B__0_OFFSET UNITYSDK_OFFSET(0xD35ABC0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitComponent___c__DisplayClass2_0_TypeDefinitionIndex = 65501;

	class GridFightTraitComponent___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::UInt32 traitID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _UpdateTraits_b__0(::RPG::Client::GridFightTrait* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS2_0__UPDATETRAITS_B__0_OFFSET))(this, a1);
		}
	};
}
