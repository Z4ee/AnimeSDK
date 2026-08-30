#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTraitConfig; }

#define RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS145_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC388B0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS145_0__GETDIFFTRAITNAMES_B__0_OFFSET UNITYSDK_OFFSET(0x1BC4A280)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModule___c__DisplayClass145_0_TypeDefinitionIndex = 64928;

	class GridFightModule___c__DisplayClass145_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightTraitConfig* trait; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS145_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetDiffTraitNames_b__0(::RPG::Client::GridFightTraitConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS145_0__GETDIFFTRAITNAMES_B__0_OFFSET))(this, a1);
		}
	};
}
