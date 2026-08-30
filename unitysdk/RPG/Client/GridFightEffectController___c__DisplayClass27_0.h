#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEffectController; }
namespace RPG::Client { class GridFightUpgradeFlyEffect; }
namespace System { class Action; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD160030)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS27_0__PLAYUPGRADEEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xD1621E0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS27_0__PLAYUPGRADEEFFECT_B__1_OFFSET UNITYSDK_OFFSET(0xD162220)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS27_0__PLAYUPGRADEEFFECT_B__2_OFFSET UNITYSDK_OFFSET(0xD162270)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectController___c__DisplayClass27_0_TypeDefinitionIndex = 64545;

	class GridFightEffectController___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEffectController* __4__this; // 0x10
		::RPG::Client::GridFightUpgradeFlyEffect* fly1; // 0x18
		::RPG::Client::GridFightUpgradeFlyEffect* fly2; // 0x20
		::UnityEngine::Transform* end; // 0x28
		::System::Action* onFinished; // 0x30
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
