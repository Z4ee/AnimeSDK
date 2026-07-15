#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEffectController; }
namespace RPG::Client { class GridFightRoleTraitEffect; }
namespace System { class Action; }

#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A63DA90)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS37_0__PLAYROLETRAITEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x1A63EDD0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS37_0__PLAYROLETRAITEFFECT_B__1_OFFSET UNITYSDK_OFFSET(0x1A63EE10)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectController___c__DisplayClass37_0_TypeDefinitionIndex = 61568;

	class GridFightEffectController___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightRoleTraitEffect* effect; // 0x10
		::RPG::Client::GridFightEffectController* __4__this; // 0x18
		::System::Action* callback; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayRoleTraitEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS37_0__PLAYROLETRAITEFFECT_B__0_OFFSET))(this);
		}

		::System::Void _PlayRoleTraitEffect_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS37_0__PLAYROLETRAITEFFECT_B__1_OFFSET))(this);
		}
	};
}
