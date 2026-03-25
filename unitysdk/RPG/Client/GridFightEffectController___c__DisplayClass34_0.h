#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEffectController; }
namespace RPG::Client { class GridFightRoleTraitEffect; }
namespace System { class Action; }

#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS34_0__CTOR_OFFSET UNITYSDK_OFFSET(0x97F71A0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS34_0__PLAYROLETRAITEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x97F8180)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS34_0__PLAYROLETRAITEFFECT_B__1_OFFSET UNITYSDK_OFFSET(0x97F81C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectController___c__DisplayClass34_0_TypeDefinitionIndex = 52388;

	class GridFightEffectController___c__DisplayClass34_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEffectController* __4__this; // 0x10
		::System::Action* callback; // 0x18
		::RPG::Client::GridFightRoleTraitEffect* effect; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS34_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayRoleTraitEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS34_0__PLAYROLETRAITEFFECT_B__0_OFFSET))(this);
		}

		::System::Void _PlayRoleTraitEffect_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS34_0__PLAYROLETRAITEFFECT_B__1_OFFSET))(this);
		}
	};
}
