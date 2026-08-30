#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::Client::LittleGame::PixAir { class PixAirPlaneView; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANEVIEW___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x186070C0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANEVIEW___C__DISPLAYCLASS13_0___FIREEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x186079F0)

namespace RPG::Client::LittleGame::PixAir
{
	inline static constexpr unsigned int PixAirPlaneView___c__DisplayClass13_0_TypeDefinitionIndex = 76853;

	class PixAirPlaneView___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::PixAir::PixAirPlaneView* __4__this; // 0x10
		::UnityEngine::Transform* attachTransform; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANEVIEW___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void __FireEffect_b__0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRPLANEVIEW___C__DISPLAYCLASS13_0___FIREEFFECT_B__0_OFFSET))(this, a1, a2);
		}
	};
}
