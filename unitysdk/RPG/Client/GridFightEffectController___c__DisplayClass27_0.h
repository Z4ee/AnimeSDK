#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEffectController; }
namespace RPG::Client { class GridFightUpgradeFlyEffect; }
namespace System { class Action; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A63C960)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS27_0__PLAYUPGRADEEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x1A63E9E0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS27_0__PLAYUPGRADEEFFECT_B__1_OFFSET UNITYSDK_OFFSET(0x1A63EA20)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS27_0__PLAYUPGRADEEFFECT_B__2_OFFSET UNITYSDK_OFFSET(0x1A63EA70)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectController___c__DisplayClass27_0_TypeDefinitionIndex = 61561;

	class GridFightEffectController___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightUpgradeFlyEffect* fly1; // 0x10
		::System::Action* onFinished; // 0x18
		::RPG::Client::GridFightEffectController* __4__this; // 0x20
		::RPG::Client::GridFightUpgradeFlyEffect* fly2; // 0x28
		::UnityEngine::Transform* end; // 0x30
		::System::Boolean isEndPerspective; // 0x38
		::System::Int32 star; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayUpgradeEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS27_0__PLAYUPGRADEEFFECT_B__0_OFFSET))(this);
		}

		::System::Void _PlayUpgradeEffect_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS27_0__PLAYUPGRADEEFFECT_B__1_OFFSET))(this);
		}

		::System::Void _PlayUpgradeEffect_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS27_0__PLAYUPGRADEEFFECT_B__2_OFFSET))(this);
		}
	};
}
