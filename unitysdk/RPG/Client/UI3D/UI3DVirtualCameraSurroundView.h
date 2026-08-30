#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI3D/UI3DVirtualCameraBase.h"

namespace RPG::GameCore { class UI3DCameraSurroundViewState; }
namespace System { class Type; }

#define RPG_CLIENT_UI3D_UI3DVIRTUALCAMERASURROUNDVIEW_GET_CAMERASTATE_OFFSET UNITYSDK_OFFSET(0x1B125A10)
#define RPG_CLIENT_UI3D_UI3DVIRTUALCAMERASURROUNDVIEW_RESOLVECAMERASTATETYPE_OFFSET UNITYSDK_OFFSET(0x1B125AC0)
#define RPG_CLIENT_UI3D_UI3DVIRTUALCAMERASURROUNDVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B125B20)

namespace RPG::Client::UI3D
{
	inline static constexpr unsigned int UI3DVirtualCameraSurroundView_TypeDefinitionIndex = 78522;

	class UI3DVirtualCameraSurroundView : public ::RPG::Client::UI3D::UI3DVirtualCameraBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3D_UI3DVIRTUALCAMERASURROUNDVIEW__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::UI3DCameraSurroundViewState* get_CameraState()
		{
			return ((::RPG::GameCore::UI3DCameraSurroundViewState*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3D_UI3DVIRTUALCAMERASURROUNDVIEW_GET_CAMERASTATE_OFFSET))(this);
		}

		::System::Type* ResolveCameraStateType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3D_UI3DVIRTUALCAMERASURROUNDVIEW_RESOLVECAMERASTATETYPE_OFFSET))(this);
		}
	};
}
