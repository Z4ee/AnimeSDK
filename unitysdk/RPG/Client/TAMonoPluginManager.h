#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_TAMONOPLUGINMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xE149E50)

namespace RPG::Client
{
	inline static constexpr unsigned int TAMonoPluginManager_TypeDefinitionIndex = 70739;

	class TAMonoPluginManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAMONOPLUGINMANAGER__CTOR_OFFSET))(this);
		}
	};
}
