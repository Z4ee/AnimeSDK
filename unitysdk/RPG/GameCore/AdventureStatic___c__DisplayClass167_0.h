#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoEffect; }

#define RPG_GAMECORE_ADVENTURESTATIC___C__DISPLAYCLASS167_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB5A86F0)
#define RPG_GAMECORE_ADVENTURESTATIC___C__DISPLAYCLASS167_0__PROCESSHITANIMANDEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xB5AEAC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureStatic___c__DisplayClass167_0_TypeDefinitionIndex = 54424;

	class AdventureStatic___c__DisplayClass167_0 : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 vDefender2Attacker; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESTATIC___C__DISPLAYCLASS167_0__CTOR_OFFSET))(this);
		}

		::System::Void _ProcessHitAnimAndEffect_b__0(::RPG::Client::MonoEffect* pEffect, ::RPG::Client::TriggerEffectCallbackParams extraParams)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESTATIC___C__DISPLAYCLASS167_0__PROCESSHITANIMANDEFFECT_B__0_OFFSET))(this, pEffect, extraParams);
		}
	};
}
