#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class MonoAnimatorStateSimpleEvent_StateEvent; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x19E29A20)
#define RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x19E29C10)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoAnimatorStateSimpleEvent_TypeDefinitionIndex = 68483;

	class MonoAnimatorStateSimpleEvent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animator* Animator; // 0x18
		::Il2CppArray<::RPG::Client::MonoAnimatorStateSimpleEvent_StateEvent*>* StateEvents; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_AWAKE_OFFSET))(this);
		}
	};
}
