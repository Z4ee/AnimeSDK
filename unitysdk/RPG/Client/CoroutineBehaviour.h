#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_COROUTINEBEHAVIOUR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1AC10C00)
#define RPG_CLIENT_COROUTINEBEHAVIOUR_UPDATE_OFFSET UNITYSDK_OFFSET(0x1AC10910)
#define RPG_CLIENT_COROUTINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC10D30)

namespace RPG::Client
{
	inline static constexpr unsigned int CoroutineBehaviour_TypeDefinitionIndex = 33422;

	class CoroutineBehaviour : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEBEHAVIOUR_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COROUTINEBEHAVIOUR_ONDESTROY_OFFSET))(this);
		}
	};
}
