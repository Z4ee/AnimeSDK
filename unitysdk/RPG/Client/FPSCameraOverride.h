#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_9F52D9C209B58BAC;
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_FPSCAMERAOVERRIDE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x196D95E0)
#define RPG_CLIENT_FPSCAMERAOVERRIDE_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x196D94D0)
#define RPG_CLIENT_FPSCAMERAOVERRIDE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x196D9560)
#define RPG_CLIENT_FPSCAMERAOVERRIDE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x196D93A0)
#define RPG_CLIENT_FPSCAMERAOVERRIDE_PREVIEW_OFFSET UNITYSDK_OFFSET(0x196D96B0)
#define RPG_CLIENT_FPSCAMERAOVERRIDE_REVERT_OFFSET UNITYSDK_OFFSET(0x196D97D0)
#define RPG_CLIENT_FPSCAMERAOVERRIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x196D9860)

namespace RPG::Client
{
	inline static constexpr unsigned int FPSCameraOverride_TypeDefinitionIndex = 67430;

	class FPSCameraOverride : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Camera* TargetRenderCamera; // 0x18
		::UnityEngine::GameObject* TargetRenderObjects; // 0x20
		::UnityEngine::Vector4 Offset; // 0x28
		::System::Single CameraFieldOfView; // 0x38
		::System::Boolean _Preview; // 0x3C
		::Class_1_9F52D9C209B58BAC* Field_5_5; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FPSCAMERAOVERRIDE__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FPSCAMERAOVERRIDE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FPSCAMERAOVERRIDE_ONDISABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FPSCAMERAOVERRIDE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Preview()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FPSCAMERAOVERRIDE_PREVIEW_OFFSET))(this);
		}

		::System::Void Revert()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FPSCAMERAOVERRIDE_REVERT_OFFSET))(this);
		}

		::System::Void Method_5_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FPSCAMERAOVERRIDE_METHOD_5_9681042564541CD6_OFFSET))(this);
		}
	};
}
