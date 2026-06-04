#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoEffect; }

#define RPG_GAMECORE_ADVENTURESTATIC___C__DISPLAYCLASS167_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCD09230)
#define RPG_GAMECORE_ADVENTURESTATIC___C__DISPLAYCLASS167_0__PROCESSHITANIMANDEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xCD0F700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureStatic___c__DisplayClass167_0_TypeDefinitionIndex = 55151;

	class AdventureStatic___c__DisplayClass167_0 : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 vDefender2Attacker; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESTATIC___C__DISPLAYCLASS167_0__CTOR_OFFSET))(this);
		}

		::System::Void _ProcessHitAnimAndEffect_b__0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESTATIC___C__DISPLAYCLASS167_0__PROCESSHITANIMANDEFFECT_B__0_OFFSET))(this, a1, a2);
		}
	};
}
