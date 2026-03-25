#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTraitConfig; }
namespace RPG::Client { class GridFightTraitConfigBase; }

#define RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS149_1__CTOR_OFFSET UNITYSDK_OFFSET(0x985BAC0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS149_1__GETDIFFTRAITNAMES_B__1_OFFSET UNITYSDK_OFFSET(0x9869E50)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModule___c__DisplayClass149_1_TypeDefinitionIndex = 52667;

	class GridFightModule___c__DisplayClass149_1 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightTraitConfig* trait; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS149_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetDiffTraitNames_b__1(::RPG::Client::GridFightTraitConfigBase* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitConfigBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS149_1__GETDIFFTRAITNAMES_B__1_OFFSET))(this, x);
		}
	};
}
