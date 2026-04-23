#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTraitConfig; }
namespace RPG::Client { class GridFightTraitConfigBase; }

#define RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS155_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA4FD3A0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS155_1__GETDIFFTRAITNAMES_B__1_OFFSET UNITYSDK_OFFSET(0xA50C4E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModule___c__DisplayClass155_1_TypeDefinitionIndex = 59720;

	class GridFightModule___c__DisplayClass155_1 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightTraitConfig* trait; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS155_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetDiffTraitNames_b__1(::RPG::Client::GridFightTraitConfigBase* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitConfigBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS155_1__GETDIFFTRAITNAMES_B__1_OFFSET))(this, x);
		}
	};
}
