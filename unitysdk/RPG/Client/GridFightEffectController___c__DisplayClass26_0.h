#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightAnimEffect; }
namespace RPG::Client { class GridFightEffectController; }

#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C968960)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS26_0__PLAYSHOPROLEREPLACE_B__0_OFFSET UNITYSDK_OFFSET(0x1C96AE90)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectController___c__DisplayClass26_0_TypeDefinitionIndex = 64544;

	class GridFightEffectController___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightAnimEffect* effect; // 0x10
		::RPG::Client::GridFightEffectController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayShopRoleReplace_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS26_0__PLAYSHOPROLEREPLACE_B__0_OFFSET))(this);
		}
	};
}
