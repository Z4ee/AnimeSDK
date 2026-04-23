#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_CAMERAMASKRENDER__CTOR_OFFSET UNITYSDK_OFFSET(0xA997820)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginMultiCRPVCamera_CameraMaskRender_TypeDefinitionIndex = 64605;

	class MonoEffectPluginMultiCRPVCamera_CameraMaskRender : public ::System::Object
	{
	public:
		::UnityEngine::MeshRenderer* Renderer; // 0x10
		::UnityEngine::Transform* ScreenCornerA; // 0x18
		::UnityEngine::Transform* ScreenCornerB; // 0x20
		::UnityEngine::Transform* ScreenCornerC; // 0x28
		::UnityEngine::Transform* ScreenCornerD; // 0x30
		::UnityEngine::Transform* ScreenObject; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINMULTICRPVCAMERA_CAMERAMASKRENDER__CTOR_OFFSET))(this);
		}
	};
}
