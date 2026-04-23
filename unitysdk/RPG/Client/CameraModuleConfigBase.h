#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

#define RPG_CLIENT_CAMERAMODULECONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x9F1F350)

namespace RPG::Client
{
	inline static constexpr unsigned int CameraModuleConfigBase_TypeDefinitionIndex = 64214;

	class CameraModuleConfigBase : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMODULECONFIGBASE__CTOR_OFFSET))(this);
		}
	};
}
