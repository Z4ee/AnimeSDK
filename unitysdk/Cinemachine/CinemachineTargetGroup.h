#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineTargetGroup_PositionMode.h"
#include "unitysdk/Cinemachine/CinemachineTargetGroup_RotationMode.h"
#include "unitysdk/Cinemachine/CinemachineTargetGroup_Target.h"
#include "unitysdk/Cinemachine/CinemachineTargetGroup_UpdateMethod.h"
#include "unitysdk/UnityEngine/BoundingSphere.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define CINEMACHINE_CINEMACHINETARGETGROUP_ADDMEMBER_OFFSET UNITYSDK_OFFSET(0x18C76AD0)
#define CINEMACHINE_CINEMACHINETARGETGROUP_CALCULATEAVERAGEORIENTATION_OFFSET UNITYSDK_OFFSET(0x18C77620)
#define CINEMACHINE_CINEMACHINETARGETGROUP_CALCULATEAVERAGEPOSITION_OFFSET UNITYSDK_OFFSET(0x18C771B0)
#define CINEMACHINE_CINEMACHINETARGETGROUP_CALCULATEBOUNDINGBOX_OFFSET UNITYSDK_OFFSET(0x18C77340)
#define CINEMACHINE_CINEMACHINETARGETGROUP_DOUPDATE_OFFSET UNITYSDK_OFFSET(0x18C77080)
#define CINEMACHINE_CINEMACHINETARGETGROUP_FINDMEMBER_OFFSET UNITYSDK_OFFSET(0x18C76CE0)
#define CINEMACHINE_CINEMACHINETARGETGROUP_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x18C778E0)
#define CINEMACHINE_CINEMACHINETARGETGROUP_GETVIEWSPACEANGULARBOUNDS_OFFSET UNITYSDK_OFFSET(0x18C58FB0)
#define CINEMACHINE_CINEMACHINETARGETGROUP_GETVIEWSPACEBOUNDINGBOX_OFFSET UNITYSDK_OFFSET(0x18C58520)
#define CINEMACHINE_CINEMACHINETARGETGROUP_GETWEIGHTEDBOUNDSFORMEMBER_OFFSET UNITYSDK_OFFSET(0x18C76DA0)
#define CINEMACHINE_CINEMACHINETARGETGROUP_GET_BOUNDINGBOX_OFFSET UNITYSDK_OFFSET(0x18C76A00)
#define CINEMACHINE_CINEMACHINETARGETGROUP_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x18C76A30)
#define CINEMACHINE_CINEMACHINETARGETGROUP_GET_SPHERE_OFFSET UNITYSDK_OFFSET(0x18C61B30)
#define CINEMACHINE_CINEMACHINETARGETGROUP_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x18C769F0)
#define CINEMACHINE_CINEMACHINETARGETGROUP_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x18C77920)
#define CINEMACHINE_CINEMACHINETARGETGROUP_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x18C77870)
#define CINEMACHINE_CINEMACHINETARGETGROUP_REMOVEMEMBER_OFFSET UNITYSDK_OFFSET(0x18C76BB0)
#define CINEMACHINE_CINEMACHINETARGETGROUP_SET_BOUNDINGBOX_OFFSET UNITYSDK_OFFSET(0x18C76A20)
#define CINEMACHINE_CINEMACHINETARGETGROUP_UPDATE_OFFSET UNITYSDK_OFFSET(0x18C778F0)
#define CINEMACHINE_CINEMACHINETARGETGROUP_WEIGHTEDMEMBERBOUNDS_OFFSET UNITYSDK_OFFSET(0x18C76FA0)
#define CINEMACHINE_CINEMACHINETARGETGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x18C77930)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineTargetGroup_TypeDefinitionIndex = 38462;

	class CinemachineTargetGroup : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Cinemachine::CinemachineTargetGroup_PositionMode m_PositionMode; // 0x18
		::Cinemachine::CinemachineTargetGroup_RotationMode m_RotationMode; // 0x1C
		::Cinemachine::CinemachineTargetGroup_UpdateMethod m_UpdateMethod; // 0x20
		::Il2CppArray<::Cinemachine::CinemachineTargetGroup_Target>* m_Targets; // 0x28
		::UnityEngine::Bounds _BoundingBox_k__BackingField; // 0x30
		::System::Single mMaxWeight; // 0x48
		::UnityEngine::Vector3 mAveragePos; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* get_Transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_GET_TRANSFORM_OFFSET))(this);
		}

		::UnityEngine::Bounds get_BoundingBox()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_GET_BOUNDINGBOX_OFFSET))(this);
		}

		::System::Void set_BoundingBox(::UnityEngine::Bounds a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_SET_BOUNDINGBOX_OFFSET))(this, a1);
		}

		::UnityEngine::BoundingSphere get_Sphere()
		{
			return ((::UnityEngine::BoundingSphere(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_GET_SPHERE_OFFSET))(this);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Void AddMember(::UnityEngine::Transform* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_ADDMEMBER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RemoveMember(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_REMOVEMEMBER_OFFSET))(this, a1);
		}

		::System::Int32 FindMember(::UnityEngine::Transform* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_FINDMEMBER_OFFSET))(this, a1);
		}

		::UnityEngine::BoundingSphere GetWeightedBoundsForMember(::System::Int32 a1)
		{
			return ((::UnityEngine::BoundingSphere(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_GETWEIGHTEDBOUNDSFORMEMBER_OFFSET))(this, a1);
		}

		::UnityEngine::Bounds GetViewSpaceBoundingBox(::UnityEngine::Matrix4x4 a1)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_GETVIEWSPACEBOUNDINGBOX_OFFSET))(this, a1);
		}

		static ::UnityEngine::BoundingSphere WeightedMemberBounds(::Cinemachine::CinemachineTargetGroup_Target a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::UnityEngine::BoundingSphere(*)(::Cinemachine::CinemachineTargetGroup_Target, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_WEIGHTEDMEMBERBOUNDS_OFFSET))(a1, a2, a3);
		}

		::System::Void DoUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_DOUPDATE_OFFSET))(this);
		}

		::UnityEngine::Vector3 CalculateAveragePosition(::System::Single& a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_CALCULATEAVERAGEPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion CalculateAverageOrientation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_CALCULATEAVERAGEORIENTATION_OFFSET))(this);
		}

		::UnityEngine::Bounds CalculateBoundingBox(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_CALCULATEBOUNDINGBOX_OFFSET))(this, a1, a2);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_ONVALIDATE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_LATEUPDATE_OFFSET))(this);
		}

		::System::Void GetViewSpaceAngularBounds(::UnityEngine::Matrix4x4 a1, ::UnityEngine::Vector2& a2, ::UnityEngine::Vector2& a3, ::UnityEngine::Vector2& a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_GETVIEWSPACEANGULARBOUNDS_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
