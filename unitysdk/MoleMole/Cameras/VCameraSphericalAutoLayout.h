#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Cameras/VCamerasBaseLayout.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineVirtualCamera; }
namespace MoleMole::Cameras { class VCameraOverrideLayoutParam; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CAMERAS_VCAMERASPHERICALAUTOLAYOUT_APPLYTOCAMERAS_OFFSET UNITYSDK_OFFSET(0x16240790)
#define MOLEMOLE_CAMERAS_VCAMERASPHERICALAUTOLAYOUT_CALCMAXELVANGLE_OFFSET UNITYSDK_OFFSET(0x1623F620)
#define MOLEMOLE_CAMERAS_VCAMERASPHERICALAUTOLAYOUT_GETENTITYCONFIGID_OFFSET UNITYSDK_OFFSET(0x1623F8C0)
#define MOLEMOLE_CAMERAS_VCAMERASPHERICALAUTOLAYOUT_GET_CURRENTELEANGLE_OFFSET UNITYSDK_OFFSET(0x1623F610)
#define MOLEMOLE_CAMERAS_VCAMERASPHERICALAUTOLAYOUT_ROTATE_OFFSET UNITYSDK_OFFSET(0x16240590)
#define MOLEMOLE_CAMERAS_VCAMERASPHERICALAUTOLAYOUT_SETTLELAYOUT_OFFSET UNITYSDK_OFFSET(0x1623FBD0)
#define MOLEMOLE_CAMERAS_VCAMERASPHERICALAUTOLAYOUT_TRYGETAVALIABLEELEANGLE_OFFSET UNITYSDK_OFFSET(0x1623F6C0)
#define MOLEMOLE_CAMERAS_VCAMERASPHERICALAUTOLAYOUT__CTOR_OFFSET UNITYSDK_OFFSET(0x16240A80)
#define MOLEMOLE_CAMERAS_VCAMERASPHERICALAUTOLAYOUT___BASE_SETTLELAYOUT_OFFSET UNITYSDK_OFFSET(0x16240AA0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int VCameraSphericalAutoLayout_TypeDefinitionIndex = 52165;

	class VCameraSphericalAutoLayout : public ::MoleMole::Cameras::VCamerasBaseLayout
	{
	public:
		::UnityEngine::AnimationCurve* maxElvAngleCurve; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Cameras::VCameraOverrideLayoutParam*>* overrideParamDic; // 0x18
		::System::Single mRadius; // 0x20
		::System::Boolean applyElvAngleCurve; // 0x24
		::System::Single mmaxElvAngle; // 0x28
		::System::Single currentEleAngle; // 0x2C
		::System::Single initEleAngle; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERASPHERICALAUTOLAYOUT__CTOR_OFFSET))(this);
		}

		::System::Single get_CurrentEleAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERASPHERICALAUTOLAYOUT_GET_CURRENTELEANGLE_OFFSET))(this);
		}

		::System::Single CalcMaxElvAngle(::System::Single lookPosOffsetY, ::UnityEngine::AnimationCurve* overrideElvAngleCurve)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERASPHERICALAUTOLAYOUT_CALCMAXELVANGLE_OFFSET))(this, lookPosOffsetY, overrideElvAngleCurve);
		}

		::System::Boolean TryGetAvaliableEleAngle(::System::Single dis2RootLookYOffset, ::System::UInt32 fromEntityId, ::System::Single& currentEleAngle)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::UInt32, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERASPHERICALAUTOLAYOUT_TRYGETAVALIABLEELEANGLE_OFFSET))(this, dis2RootLookYOffset, fromEntityId, currentEleAngle);
		}

		::System::Void SettleLayout(::Il2CppArray<::Cinemachine::CinemachineVirtualCamera*>* vCameras, ::UnityEngine::Vector3 followPos, ::UnityEngine::Vector3 lookatPos, ::System::Single dis2RootLookYOffset, ::System::UInt32 fromEntityId)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Cinemachine::CinemachineVirtualCamera*>*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERASPHERICALAUTOLAYOUT_SETTLELAYOUT_OFFSET))(this, vCameras, followPos, lookatPos, dis2RootLookYOffset, fromEntityId);
		}

		::UnityEngine::Vector3 Rotate(::UnityEngine::Vector3 source, ::UnityEngine::Vector3 axis, ::System::Single angle)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERASPHERICALAUTOLAYOUT_ROTATE_OFFSET))(this, source, axis, angle);
		}

		::System::Void ApplyToCameras(::Il2CppArray<::Cinemachine::CinemachineVirtualCamera*>* vCameras, ::UnityEngine::Vector3 center, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* positions)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Cinemachine::CinemachineVirtualCamera*>*, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERASPHERICALAUTOLAYOUT_APPLYTOCAMERAS_OFFSET))(this, vCameras, center, positions);
		}

		::System::Int32 GetEntityConfigId(::System::UInt32 entityId)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERASPHERICALAUTOLAYOUT_GETENTITYCONFIGID_OFFSET))(this, entityId);
		}

		::System::Void __base_SettleLayout(::Il2CppArray<::Cinemachine::CinemachineVirtualCamera*>* P0, ::UnityEngine::Vector3 P1, ::UnityEngine::Vector3 P2, ::System::Single P3, ::System::UInt32 P4)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Cinemachine::CinemachineVirtualCamera*>*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERASPHERICALAUTOLAYOUT___BASE_SETTLELAYOUT_OFFSET))(this, P0, P1, P2, P3, P4);
		}
	};
}
