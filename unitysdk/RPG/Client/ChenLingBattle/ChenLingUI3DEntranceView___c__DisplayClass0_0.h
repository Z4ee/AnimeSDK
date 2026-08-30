#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingBattle { class ChenLingUI3DEntranceView; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGUI3DENTRANCEVIEW___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCB04710)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGUI3DENTRANCEVIEW___C__DISPLAYCLASS0_0__SETSTAGE_B__0_OFFSET UNITYSDK_OFFSET(0xCB04DF0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ChenLingUI3DEntranceView___c__DisplayClass0_0_TypeDefinitionIndex = 75740;

	class ChenLingUI3DEntranceView___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::RPG::Client::ChenLingBattle::ChenLingUI3DEntranceView* __4__this; // 0x10
		::UnityEngine::Transform* anchor; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGUI3DENTRANCEVIEW___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetStage_b__0(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGUI3DENTRANCEVIEW___C__DISPLAYCLASS0_0__SETSTAGE_B__0_OFFSET))(this, a1);
		}
	};
}
