#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTraitConfig; }
namespace RPG::Client { class GridFightUnlockTraitMember; }

#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD359A70)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS11_0__GETEXTRATRAITCONFIGS_B__0_OFFSET UNITYSDK_OFFSET(0xD35A9E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitComponent___c__DisplayClass11_0_TypeDefinitionIndex = 65499;

	class GridFightTraitComponent___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightUnlockTraitMember* mod; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetExtraTraitConfigs_b__0(::RPG::Client::GridFightTraitConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS11_0__GETEXTRATRAITCONFIGS_B__0_OFFSET))(this, a1);
		}
	};
}
