#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_BATTLE_MUTEANIMATORCULL__CTOR_OFFSET UNITYSDK_OFFSET(0x143444C0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int MuteAnimatorCull_TypeDefinitionIndex = 59666;

	class MuteAnimatorCull : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MUTEANIMATORCULL__CTOR_OFFSET))(this);
		}
	};
}
