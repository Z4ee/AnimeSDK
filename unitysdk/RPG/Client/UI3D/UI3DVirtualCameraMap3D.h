#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI3D/UI3DVirtualCameraBase.h"

namespace RPG::GameCore { class UI3DMap3DCameraState; }
namespace System { class Type; }

#define RPG_CLIENT_UI3D_UI3DVIRTUALCAMERAMAP3D_GET_CAMERASTATE_OFFSET UNITYSDK_OFFSET(0x1B1258F0)
#define RPG_CLIENT_UI3D_UI3DVIRTUALCAMERAMAP3D_RESOLVECAMERASTATETYPE_OFFSET UNITYSDK_OFFSET(0x1B1259A0)
#define RPG_CLIENT_UI3D_UI3DVIRTUALCAMERAMAP3D__CTOR_OFFSET UNITYSDK_OFFSET(0x1B125A00)

namespace RPG::Client::UI3D
{
	inline static constexpr unsigned int UI3DVirtualCameraMap3D_TypeDefinitionIndex = 78521;

	class UI3DVirtualCameraMap3D : public ::RPG::Client::UI3D::UI3DVirtualCameraBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3D_UI3DVIRTUALCAMERAMAP3D__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::UI3DMap3DCameraState* get_CameraState()
		{
			return ((::RPG::GameCore::UI3DMap3DCameraState*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3D_UI3DVIRTUALCAMERAMAP3D_GET_CAMERASTATE_OFFSET))(this);
		}

		::System::Type* ResolveCameraStateType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3D_UI3DVIRTUALCAMERAMAP3D_RESOLVECAMERASTATETYPE_OFFSET))(this);
		}
	};
}
