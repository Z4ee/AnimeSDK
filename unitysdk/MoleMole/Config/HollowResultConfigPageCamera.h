#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigPageCamera.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define MOLEMOLE_CONFIG_HOLLOWRESULTCONFIGPAGECAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x10D10FA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowResultConfigPageCamera_TypeDefinitionIndex = 40204;

	class HollowResultConfigPageCamera : public ::MoleMole::Config::ConfigPageCamera
	{
	public:
		::UnityEngine::Vector2 ScreenRatio; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWRESULTCONFIGPAGECAMERA__CTOR_OFFSET))(this);
		}
	};
}
