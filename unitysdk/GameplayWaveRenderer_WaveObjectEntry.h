#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define GAMEPLAYWAVERENDERER_WAVEOBJECTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x15872DD0)

inline static constexpr unsigned int GameplayWaveRenderer_WaveObjectEntry_TypeDefinitionIndex = 47774;

class GameplayWaveRenderer_WaveObjectEntry : public ::System::Object
{
public:
	::UnityEngine::GameObject* target; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMEPLAYWAVERENDERER_WAVEOBJECTENTRY__CTOR_OFFSET))(this);
	}
};
