#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_0B45428C848E725C;
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_FPSCAMERAOVERRIDE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB969C30)
#define RPG_CLIENT_FPSCAMERAOVERRIDE_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xB969B30)
#define RPG_CLIENT_FPSCAMERAOVERRIDE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB969BB0)
#define RPG_CLIENT_FPSCAMERAOVERRIDE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB9699D0)
#define RPG_CLIENT_FPSCAMERAOVERRIDE_PREVIEW_OFFSET UNITYSDK_OFFSET(0xB969D00)
#define RPG_CLIENT_FPSCAMERAOVERRIDE_REVERT_OFFSET UNITYSDK_OFFSET(0xB969E10)
#define RPG_CLIENT_FPSCAMERAOVERRIDE__CTOR_OFFSET UNITYSDK_OFFSET(0xB969EA0)

namespace RPG::Client
{
	inline static constexpr unsigned int FPSCameraOverride_TypeDefinitionIndex = 66005;

	class FPSCameraOverride : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Camera* TargetRenderCamera; // 0x18
		::UnityEngine::GameObject* TargetRenderObjects; // 0x20
		::UnityEngine::Vector4 Offset; // 0x28
		::System::Single CameraFieldOfView; // 0x38
		::System::Boolean _Preview; // 0x3C
		::Class_1_0B45428C848E725C* Field_5_5; // 0x40

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
