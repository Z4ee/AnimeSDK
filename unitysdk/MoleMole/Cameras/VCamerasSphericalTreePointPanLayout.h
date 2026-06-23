#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Cameras/VCamerasBaseLayout.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineVirtualCamera; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CAMERAS_VCAMERASSPHERICALTREEPOINTPANLAYOUT_APPLYTOCAMERAS_OFFSET UNITYSDK_OFFSET(0x126FEB40)
#define MOLEMOLE_CAMERAS_VCAMERASSPHERICALTREEPOINTPANLAYOUT_CALCMAXELVANGLE_OFFSET UNITYSDK_OFFSET(0x126FDB80)
#define MOLEMOLE_CAMERAS_VCAMERASSPHERICALTREEPOINTPANLAYOUT_GET_CURRENTELEANGLE_OFFSET UNITYSDK_OFFSET(0x126FDB70)
#define MOLEMOLE_CAMERAS_VCAMERASSPHERICALTREEPOINTPANLAYOUT_ROTATE_OFFSET UNITYSDK_OFFSET(0x126FE930)
#define MOLEMOLE_CAMERAS_VCAMERASSPHERICALTREEPOINTPANLAYOUT_SETTLELAYOUT_OFFSET UNITYSDK_OFFSET(0x126FDD30)
#define MOLEMOLE_CAMERAS_VCAMERASSPHERICALTREEPOINTPANLAYOUT_TRYGETAVALIABLEELEANGLE_OFFSET UNITYSDK_OFFSET(0x126FDC10)
#define MOLEMOLE_CAMERAS_VCAMERASSPHERICALTREEPOINTPANLAYOUT__CTOR_OFFSET UNITYSDK_OFFSET(0x126FEE60)
#define MOLEMOLE_CAMERAS_VCAMERASSPHERICALTREEPOINTPANLAYOUT___BASE_SETTLELAYOUT_OFFSET UNITYSDK_OFFSET(0x126FEE80)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int VCamerasSphericalTreePointPanLayout_TypeDefinitionIndex = 67740;

	class VCamerasSphericalTreePointPanLayout : public ::MoleMole::Cameras::VCamerasBaseLayout
	{
	public:
		::UnityEngine::AnimationCurve* maxElvAngleCurve; // 0x10
		::System::Single initEleAngle; // 0x18
		::System::Single currentEleAngle; // 0x1C
		::System::Boolean applyElvAngleCurve; // 0x20
		::System::Single mmaxElvAngle; // 0x24
		::System::Single mRadius; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERASSPHERICALTREEPOINTPANLAYOUT__CTOR_OFFSET))(this);
		}

		::System::Single get_CurrentEleAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERASSPHERICALTREEPOINTPANLAYOUT_GET_CURRENTELEANGLE_OFFSET))(this);
		}

		::System::Single CalcMaxElvAngle(::System::Single lookPosOffsetY)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERASSPHERICALTREEPOINTPANLAYOUT_CALCMAXELVANGLE_OFFSET))(this, lookPosOffsetY);
		}

		::System::Boolean TryGetAvaliableEleAngle(::System::Single dis2RootLookYOffset, ::System::Single& currentEleAngle)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERASSPHERICALTREEPOINTPANLAYOUT_TRYGETAVALIABLEELEANGLE_OFFSET))(this, dis2RootLookYOffset, currentEleAngle);
		}

		::System::Void SettleLayout(::Il2CppArray<::Cinemachine::CinemachineVirtualCamera*>* vCameras, ::UnityEngine::Vector3 followPos, ::UnityEngine::Vector3 lookatPos, ::System::Single dis2RootLookYOffset, ::System::UInt32 fromEntityId)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Cinemachine::CinemachineVirtualCamera*>*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERASSPHERICALTREEPOINTPANLAYOUT_SETTLELAYOUT_OFFSET))(this, vCameras, followPos, lookatPos, dis2RootLookYOffset, fromEntityId);
		}

		::UnityEngine::Vector3 Rotate(::UnityEngine::Vector3 source, ::UnityEngine::Vector3 axis, ::System::Single angle)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERASSPHERICALTREEPOINTPANLAYOUT_ROTATE_OFFSET))(this, source, axis, angle);
		}

		::System::Void ApplyToCameras(::Il2CppArray<::Cinemachine::CinemachineVirtualCamera*>* vCameras, ::UnityEngine::Vector3 center, ::Il2CppArray<::UnityEngine::Vector3>* positions)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Cinemachine::CinemachineVirtualCamera*>*, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERASSPHERICALTREEPOINTPANLAYOUT_APPLYTOCAMERAS_OFFSET))(this, vCameras, center, positions);
		}

		::System::Void __base_SettleLayout(::Il2CppArray<::Cinemachine::CinemachineVirtualCamera*>* P0, ::UnityEngine::Vector3 P1, ::UnityEngine::Vector3 P2, ::System::Single P3, ::System::UInt32 P4)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Cinemachine::CinemachineVirtualCamera*>*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERASSPHERICALTREEPOINTPANLAYOUT___BASE_SETTLELAYOUT_OFFSET))(this, P0, P1, P2, P3, P4);
		}
	};
}
