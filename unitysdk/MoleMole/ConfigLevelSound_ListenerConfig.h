#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define MOLEMOLE_CONFIGLEVELSOUND_LISTENERCONFIG_TESTLISTENERCONFIG_OFFSET UNITYSDK_OFFSET(0x793A50)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigLevelSound_ListenerConfig_TypeDefinitionIndex = 62782;

	struct alignas(8) ConfigLevelSound_ListenerConfig
	{
		::System::String* name; // 0x10
		::System::Single ratioAwayCamera; // 0x18
		::UnityEngine::Vector3 offset; // 0x1C
		::UnityEngine::Vector3 cameraLocalTransform; // 0x28

		::System::Void TestListenerConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLEVELSOUND_LISTENERCONFIG_TESTLISTENERCONFIG_OFFSET))(this);
		}
	};
}
