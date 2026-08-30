#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI3D/UI3DVirtualCameraBase.h"

namespace RPG::GameCore { class UI3DCameraState; }
namespace System { class Type; }

#define RPG_CLIENT_UI3D_UI3DVIRTUALCAMERA_GET_CAMERASTATE_OFFSET UNITYSDK_OFFSET(0x1B124F70)
#define RPG_CLIENT_UI3D_UI3DVIRTUALCAMERA_RESOLVECAMERASTATETYPE_OFFSET UNITYSDK_OFFSET(0x1B125020)
#define RPG_CLIENT_UI3D_UI3DVIRTUALCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B125080)

namespace RPG::Client::UI3D
{
	inline static constexpr unsigned int UI3DVirtualCamera_TypeDefinitionIndex = 78518;

	class UI3DVirtualCamera : public ::RPG::Client::UI3D::UI3DVirtualCameraBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3D_UI3DVIRTUALCAMERA__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::UI3DCameraState* get_CameraState()
		{
			return ((::RPG::GameCore::UI3DCameraState*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3D_UI3DVIRTUALCAMERA_GET_CAMERASTATE_OFFSET))(this);
		}

		::System::Type* ResolveCameraStateType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3D_UI3DVIRTUALCAMERA_RESOLVECAMERASTATETYPE_OFFSET))(this);
		}
	};
}
