#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/StateMachineBehaviour.h"

namespace UnityEngine { class Animator; }

#define MOLEMOLE_STATEBASELAYER_METHOD_4_2DB8CABC5F9281CC_OFFSET UNITYSDK_OFFSET(0x181777A0)
#define MOLEMOLE_STATEBASELAYER_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0x18177440)
#define MOLEMOLE_STATEBASELAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x18177740)

namespace MoleMole
{
	inline static constexpr unsigned int StateBaseLayer_TypeDefinitionIndex = 52663;

	class StateBaseLayer : public ::UnityEngine::StateMachineBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATEBASELAYER__CTOR_OFFSET))(this);
		}

		::System::Void OnStateExit(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_STATEBASELAYER_ONSTATEEXIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_4_2DB8CABC5F9281CC(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_STATEBASELAYER_METHOD_4_2DB8CABC5F9281CC_OFFSET))(this, a1, a2, a3);
		}
	};
}
