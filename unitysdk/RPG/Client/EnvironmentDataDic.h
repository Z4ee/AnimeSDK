#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_ENVIRONMENTDATADIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1991AAE0)

namespace RPG::Client
{
	inline static constexpr unsigned int EnvironmentDataDic_TypeDefinitionIndex = 70864;

	class EnvironmentDataDic : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTDATADIC__CTOR_OFFSET))(this);
		}
	};
}
