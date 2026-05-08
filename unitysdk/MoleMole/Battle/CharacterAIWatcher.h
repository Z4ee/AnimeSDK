#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_BATTLE_CHARACTERAIWATCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x139853D0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int CharacterAIWatcher_TypeDefinitionIndex = 68215;

	class CharacterAIWatcher : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_CHARACTERAIWATCHER__CTOR_OFFSET))(this);
		}
	};
}
