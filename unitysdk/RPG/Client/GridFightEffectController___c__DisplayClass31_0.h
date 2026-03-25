#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEffectController; }
namespace RPG::Client { class GridFightFlyEffect; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS31_0__CTOR_OFFSET UNITYSDK_OFFSET(0x97F6D20)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS31_0__PLAYEQUIPEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x97F8080)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectController___c__DisplayClass31_0_TypeDefinitionIndex = 52386;

	class GridFightEffectController___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::UnityEngine::Transform* effectAddTrans; // 0x10
		::UnityEngine::Transform* itemTrans; // 0x18
		::RPG::Client::GridFightEffectController* __4__this; // 0x20
		::RPG::Client::GridFightFlyEffect* effect; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS31_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayEquipEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS31_0__PLAYEQUIPEFFECT_B__0_OFFSET))(this);
		}
	};
}
