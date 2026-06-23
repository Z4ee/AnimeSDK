#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CameraRotType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/AntialiasingMode.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraOverrideOption.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class CameraChangeType; }

#define MOLEMOLE_UIAVATARCAMERASETTING_GET_CAMERAOFFSETY_OFFSET UNITYSDK_OFFSET(0x18A50F10)
#define MOLEMOLE_UIAVATARCAMERASETTING_SET_CAMERAOFFSETY_OFFSET UNITYSDK_OFFSET(0x18A50F20)
#define MOLEMOLE_UIAVATARCAMERASETTING__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A50FA0)
#define MOLEMOLE_UIAVATARCAMERASETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x18A50F80)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarCameraSetting_TypeDefinitionIndex = 73215;

	class UIAvatarCameraSetting : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_muteEdit()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIAvatarCameraSetting_TypeDefinitionIndex)->GetStaticField(0x128B0);
		}
		::MoleMole::CameraChangeType* ChangeType; // 0x10
		::UnityEngine::Vector3 CameraOffset; // 0x18
		::UnityEngine::NAPRenderPipeline0::AntialiasingMode Anti_aliasing; // 0x24
		::System::Single CameraYaw; // 0x28
		::UnityEngine::Vector3 TargetOffset; // 0x2C
		::System::Single CameraRoll; // 0x38
		::System::Boolean renderVolumetricFog; // 0x3C
		::System::Boolean DrawGizmos; // 0x3D
		::System::Boolean ApplyLookAtPoint; // 0x3E
		::System::Boolean RenderShadows; // 0x3F
		::UnityEngine::NAPRenderPipeline0::CameraOverrideOption DepthTexture; // 0x40
		::System::Boolean EnableExternalSetting; // 0x44
		::System::Boolean ApplyLUTAfterEverything; // 0x45
		::System::Single CameraPith; // 0x48
		::UnityEngine::Rect CameraRect; // 0x4C
		::MoleMole::CameraRotType CameraRotTypeAxisY; // 0x5C
		::System::Single CameraFOV; // 0x60
		::UnityEngine::NAPRenderPipeline0::CameraOverrideOption OpaqueTexture; // 0x64
		::UnityEngine::Vector3 LookAtPointOffset; // 0x68
		::System::Single uiFxExtraAlphaWeight; // 0x74
		::UnityEngine::NAPRenderPipeline0::CameraOverrideOption NormalTexture; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARCAMERASETTING__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARCAMERASETTING__CCTOR_OFFSET))();
		}

		::System::Single get_CameraOffsetY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARCAMERASETTING_GET_CAMERAOFFSETY_OFFSET))(this);
		}

		::System::Void set_CameraOffsetY(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARCAMERASETTING_SET_CAMERAOFFSETY_OFFSET))(this, value);
		}
	};
}
