#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DialogRendererBehavior_DialogRendererType.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/RPG/Client/TAUtils/OverrideLightModule.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rendering/CullMode.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_0_16E4307DCC419505_1067;
namespace RPG::Client { class DialogRendererBehavior; }
namespace RPG::Client { class TransformScreenAdapter; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_DIALOGRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x192EF7B0)

namespace RPG::Client
{
	inline static constexpr unsigned int DialogRenderer_TypeDefinitionIndex = 70245;

	class DialogRenderer : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::DialogRendererBehavior*>
	{
	public:
		::RPG::Client::DialogRendererBehavior_DialogRendererType DialogRendererType; // 0x30
		::UnityEngine::GameObject* DialogTarget; // 0x38
		::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_1067*>* DialogTargetRegistered; // 0x40
		::UnityEngine::Camera* DialogCamera; // 0x48
		::System::Boolean DialogCameraAdaptiveClipping; // 0x50
		::UnityEngine::Vector3 DialogSize; // 0x54
		::UnityEngine::Vector4 DialogClipRect; // 0x60
		::UnityEngine::Texture2D* DialogClipMask; // 0x70
		::System::Single DialogClipMaskThreshold; // 0x78
		::System::Boolean DialogDither; // 0x7C
		::System::Single DialogDitherAlpha; // 0x80
		::UnityEngine::Rendering::CullMode DialogCullMode; // 0x84
		::UnityEngine::Vector2 DialogDepthOffset; // 0x88
		::System::Boolean FollowMainCamera; // 0x90
		::UnityEngine::Vector3 OverridePosition; // 0x94
		::UnityEngine::Vector3 OverrideRotation; // 0xA0
		::UnityEngine::Vector3 OverrideScale; // 0xAC
		::RPG::Client::TransformScreenAdapter* ScreenAdapter; // 0xB8
		::RPG::Client::TAUtils::OverrideLightModule OverrideLightModule; // 0xC0
		::UnityEngine::Matrix4x4 DialogCameraMatrixV; // 0x210
		::UnityEngine::Matrix4x4 DialogCameraMatrixInvV; // 0x250
		::UnityEngine::Matrix4x4 DialogCameraMatrixP; // 0x290
		::UnityEngine::Matrix4x4 DialogCameraMatrixVP; // 0x2D0
		::UnityEngine::Matrix4x4 DialogMatrixM; // 0x310
		::UnityEngine::Bounds DialogBounds; // 0x350

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERER__CTOR_OFFSET))(this);
		}
	};
}
