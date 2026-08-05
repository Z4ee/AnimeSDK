#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CameraRotType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/AntialiasingMode.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraOverrideOption.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class CameraChangeType; }

#define MOLEMOLE_UIAVATARCAMERASETTING_CLONE_OFFSET UNITYSDK_OFFSET(0x1A62B030)
#define MOLEMOLE_UIAVATARCAMERASETTING_COPYFROM_OFFSET UNITYSDK_OFFSET(0x1A62AF50)
#define MOLEMOLE_UIAVATARCAMERASETTING_GET_CAMERAOFFSETY_OFFSET UNITYSDK_OFFSET(0x1A62AEE0)
#define MOLEMOLE_UIAVATARCAMERASETTING_SET_CAMERAOFFSETY_OFFSET UNITYSDK_OFFSET(0x1A62AEF0)
#define MOLEMOLE_UIAVATARCAMERASETTING__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A62B0F0)
#define MOLEMOLE_UIAVATARCAMERASETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x1A62B0D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarCameraSetting_TypeDefinitionIndex = 62663;

	class UIAvatarCameraSetting : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_muteEdit()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIAvatarCameraSetting_TypeDefinitionIndex)->GetStaticField(0x11E90);
		}
		::MoleMole::CameraChangeType* ChangeType; // 0x10
		::UnityEngine::NAPRenderPipeline0::CameraOverrideOption DepthTexture; // 0x18
		::System::Single uiFxExtraAlphaWeight; // 0x1C
		::UnityEngine::Vector3 TargetOffset; // 0x20
		::System::Single CameraPith; // 0x2C
		::System::Single CameraYaw; // 0x30
		::System::Single CameraRoll; // 0x34
		::System::Boolean ApplyLookAtPoint; // 0x38
		::System::Boolean EnableExternalSetting; // 0x39
		::System::Boolean DrawGizmos; // 0x3A
		::System::Boolean RenderShadows; // 0x3B
		::System::Boolean ApplyLUTAfterEverything; // 0x3C
		::System::Boolean renderVolumetricFog; // 0x3D
		::UnityEngine::Vector3 LookAtPointOffset; // 0x40
		::MoleMole::CameraRotType CameraRotTypeAxisY; // 0x4C
		::UnityEngine::NAPRenderPipeline0::CameraOverrideOption NormalTexture; // 0x50
		::System::Single CameraFOV; // 0x54
		::UnityEngine::Vector3 CameraOffset; // 0x58
		::UnityEngine::Rect CameraRect; // 0x64
		::UnityEngine::NAPRenderPipeline0::CameraOverrideOption OpaqueTexture; // 0x74
		::UnityEngine::NAPRenderPipeline0::AntialiasingMode Anti_aliasing; // 0x78

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

		::System::Void CopyFrom(::MoleMole::UIAvatarCameraSetting* other)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarCameraSetting*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARCAMERASETTING_COPYFROM_OFFSET))(this, other);
		}

		::MoleMole::UIAvatarCameraSetting* Clone()
		{
			return ((::MoleMole::UIAvatarCameraSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARCAMERASETTING_CLONE_OFFSET))(this);
		}
	};
}
