#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEffectController; }
namespace RPG::Client { class GridFightFlyEffect; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS34_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD160D50)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS34_0__PLAYEQUIPEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xD1624D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectController___c__DisplayClass34_0_TypeDefinitionIndex = 64550;

	class GridFightEffectController___c__DisplayClass34_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightFlyEffect* effect; // 0x10
		::RPG::Client::GridFightEffectController* __4__this; // 0x18
		::UnityEngine::Transform* itemTrans; // 0x20
		::UnityEngine::Transform* effectAddTrans; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS34_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayEquipEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS34_0__PLAYEQUIPEFFECT_B__0_OFFSET))(this);
		}
	};
}
