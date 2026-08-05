#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Battle { class HotpotPhysicsInfo; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_BATTLE_HOTPOTPHYSICSINFO___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16239190)
#define MOLEMOLE_BATTLE_HOTPOTPHYSICSINFO___C__DISPLAYCLASS13_0__GENERATEPOINTSINRING_B__0_OFFSET UNITYSDK_OFFSET(0x162391A0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int HotpotPhysicsInfo___c__DisplayClass13_0_TypeDefinitionIndex = 40497;

	class HotpotPhysicsInfo___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::MoleMole::Battle::HotpotPhysicsInfo* __4__this; // 0x10
		::System::Func_2<::UnityEngine::Vector2, ::System::Boolean>* posValidFunc; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HOTPOTPHYSICSINFO___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GeneratePointsInRing_b__0(::UnityEngine::Vector2 point)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HOTPOTPHYSICSINFO___C__DISPLAYCLASS13_0__GENERATEPOINTSINRING_B__0_OFFSET))(this, point);
		}
	};
}
