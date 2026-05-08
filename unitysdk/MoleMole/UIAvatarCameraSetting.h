#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CameraRotType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/AntialiasingMode.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraOverrideOption.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class CameraChangeType; }

#define MOLEMOLE_UIAVATARCAMERASETTING_GET_CAMERAOFFSETY_OFFSET UNITYSDK_OFFSET(0x164595B0)
#define MOLEMOLE_UIAVATARCAMERASETTING_SET_CAMERAOFFSETY_OFFSET UNITYSDK_OFFSET(0x164595C0)
#define MOLEMOLE_UIAVATARCAMERASETTING__CCTOR_OFFSET UNITYSDK_OFFSET(0x16459640)
#define MOLEMOLE_UIAVATARCAMERASETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x16459620)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarCameraSetting_TypeDefinitionIndex = 66898;

	class UIAvatarCameraSetting : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_muteEdit()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIAvatarCameraSetting_TypeDefinitionIndex)->GetStaticField(0x10280);
		}
		::MoleMole::CameraChangeType* ChangeType; // 0x10
		::System::Single CameraPith; // 0x18
		::System::Single CameraRoll; // 0x1C
		::UnityEngine::NAPRenderPipeline0::AntialiasingMode Anti_aliasing; // 0x20
		::UnityEngine::NAPRenderPipeline0::CameraOverrideOption NormalTexture; // 0x24
		::System::Single uiFxExtraAlphaWeight; // 0x28
		::UnityEngine::NAPRenderPipeline0::CameraOverrideOption DepthTexture; // 0x2C
		::UnityEngine::Vector3 TargetOffset; // 0x30
		::UnityEngine::Vector3 CameraOffset; // 0x3C
		::System::Boolean DrawGizmos; // 0x48
		::System::Boolean EnableExternalSetting; // 0x49
		::System::Boolean ApplyLookAtPoint; // 0x4A
		::System::Boolean RenderShadows; // 0x4B
		::System::Boolean renderVolumetricFog; // 0x4C
		::System::Boolean ApplyLUTAfterEverything; // 0x4D
		::System::Single CameraYaw; // 0x50
		::UnityEngine::Vector3 LookAtPointOffset; // 0x54
		::System::Single CameraFOV; // 0x60
		::MoleMole::CameraRotType CameraRotTypeAxisY; // 0x64
		::UnityEngine::NAPRenderPipeline0::CameraOverrideOption OpaqueTexture; // 0x68
		::UnityEngine::Rect CameraRect; // 0x6C

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
