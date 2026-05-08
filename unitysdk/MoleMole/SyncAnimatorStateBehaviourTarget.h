#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Animator; }

#define MOLEMOLE_SYNCANIMATORSTATEBEHAVIOURTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x170401E0)

namespace MoleMole
{
	inline static constexpr unsigned int SyncAnimatorStateBehaviourTarget_TypeDefinitionIndex = 75683;

	class SyncAnimatorStateBehaviourTarget : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::UnityEngine::Animator*>* SyncToAnimators; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SYNCANIMATORSTATEBEHAVIOURTARGET__CTOR_OFFSET))(this);
		}
	};
}
