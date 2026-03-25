#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTraitConfig; }
namespace RPG::Client { class GridFightTraitConfigBase; }

#define RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS149_2__CTOR_OFFSET UNITYSDK_OFFSET(0x985BAD0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS149_2__GETDIFFTRAITNAMES_B__2_OFFSET UNITYSDK_OFFSET(0x9869EA0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModule___c__DisplayClass149_2_TypeDefinitionIndex = 52668;

	class GridFightModule___c__DisplayClass149_2 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightTraitConfig* trait; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS149_2__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetDiffTraitNames_b__2(::RPG::Client::GridFightTraitConfigBase* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitConfigBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS149_2__GETDIFFTRAITNAMES_B__2_OFFSET))(this, x);
		}
	};
}
