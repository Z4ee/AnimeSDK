#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_OPENWORLD_MONOSTAGEPREFABINFOOVERRIDE__CTOR_OFFSET UNITYSDK_OFFSET(0xD9F3BC0)

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int MonoStagePrefabInfoOverride_TypeDefinitionIndex = 73743;

	class MonoStagePrefabInfoOverride : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_MONOSTAGEPREFABINFOOVERRIDE__CTOR_OFFSET))(this);
		}
	};
}
