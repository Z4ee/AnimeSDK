#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_MONOEFFECTLODMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x10CE6500)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectLodManager_TypeDefinitionIndex = 66776;

	class MonoEffectLodManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTLODMANAGER__CTOR_OFFSET))(this);
		}
	};
}
