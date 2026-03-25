#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::GameCore { class ChenLingBattleEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERWALKEFFECTS__CTOR_OFFSET UNITYSDK_OFFSET(0x9997190)

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int ChenLingSoldierWalkEffects_TypeDefinitionIndex = 63437;

	class ChenLingSoldierWalkEffects : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::ChenLingBattleEffectConfig*>* EffectConfigs; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGSOLDIERWALKEFFECTS__CTOR_OFFSET))(this);
		}
	};
}
