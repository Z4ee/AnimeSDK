#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Cameras { class BezierSurfaceCameraConfig; }
namespace MoleMole::Config { class BezierSurfaceCameraConfigInput; }

#define MOLEMOLE_CONFIG_CONFIGCAMERABEZIERSURFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x106C96A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraBezierSurface_TypeDefinitionIndex = 56943;

	class ConfigCameraBezierSurface : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::MoleMole::Cameras::BezierSurfaceCameraConfig* Config; // 0x58
		::MoleMole::Config::BezierSurfaceCameraConfigInput* Input; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERABEZIERSURFACE__CTOR_OFFSET))(this);
		}
	};
}
