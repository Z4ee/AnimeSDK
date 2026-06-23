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

#define CINEMACHINE_CINEMACHINETARGETGROUP_ADDMEMBER_OFFSET UNITYSDK_OFFSET(0x1E69A920)
#define CINEMACHINE_CINEMACHINETARGETGROUP_CALCULATEAVERAGEORIENTATION_OFFSET UNITYSDK_OFFSET(0x1E69BE60)
#define CINEMACHINE_CINEMACHINETARGETGROUP_CALCULATEAVERAGEPOSITION_OFFSET UNITYSDK_OFFSET(0x1E69B7D0)
#define CINEMACHINE_CINEMACHINETARGETGROUP_CALCULATEBOUNDINGBOX_OFFSET UNITYSDK_OFFSET(0x1E69BAC0)
#define CINEMACHINE_CINEMACHINETARGETGROUP_DOUPDATE_OFFSET UNITYSDK_OFFSET(0x1E69B6A0)
#define CINEMACHINE_CINEMACHINETARGETGROUP_FINDMEMBER_OFFSET UNITYSDK_OFFSET(0x1E69AAB0)
#define CINEMACHINE_CINEMACHINETARGETGROUP_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1E69C6D0)
#define CINEMACHINE_CINEMACHINETARGETGROUP_GETVIEWSPACEANGULARBOUNDS_OFFSET UNITYSDK_OFFSET(0x1E69C720)
#define CINEMACHINE_CINEMACHINETARGETGROUP_GETVIEWSPACEBOUNDINGBOX_OFFSET UNITYSDK_OFFSET(0x1E69AEB0)
#define CINEMACHINE_CINEMACHINETARGETGROUP_GETWEIGHTEDBOUNDSFORMEMBER_OFFSET UNITYSDK_OFFSET(0x1E69AB70)
#define CINEMACHINE_CINEMACHINETARGETGROUP_GET_BOUNDINGBOX_OFFSET UNITYSDK_OFFSET(0x1E69A640)
#define CINEMACHINE_CINEMACHINETARGETGROUP_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1E69A740)
#define CINEMACHINE_CINEMACHINETARGETGROUP_GET_SPHERE_OFFSET UNITYSDK_OFFSET(0x1E69A670)
#define CINEMACHINE_CINEMACHINETARGETGROUP_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1E69A630)
#define CINEMACHINE_CINEMACHINETARGETGROUP_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1E69C710)
#define CINEMACHINE_CINEMACHINETARGETGROUP_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1E69C640)
#define CINEMACHINE_CINEMACHINETARGETGROUP_REMOVEMEMBER_OFFSET UNITYSDK_OFFSET(0x1E69AA00)
#define CINEMACHINE_CINEMACHINETARGETGROUP_SET_BOUNDINGBOX_OFFSET UNITYSDK_OFFSET(0x1E69A660)
#define CINEMACHINE_CINEMACHINETARGETGROUP_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E69C6E0)
#define CINEMACHINE_CINEMACHINETARGETGROUP_WEIGHTEDMEMBERBOUNDS_OFFSET UNITYSDK_OFFSET(0x1E69ACC0)
#define CINEMACHINE_CINEMACHINETARGETGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E69CFE0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineTargetGroup_TypeDefinitionIndex = 34048;

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

		::System::Void set_BoundingBox(::UnityEngine::Bounds value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_SET_BOUNDINGBOX_OFFSET))(this, value);
		}

		::UnityEngine::BoundingSphere get_Sphere()
		{
			return ((::UnityEngine::BoundingSphere(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_GET_SPHERE_OFFSET))(this);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Void AddMember(::UnityEngine::Transform* t, ::System::Single weight, ::System::Single radius)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_ADDMEMBER_OFFSET))(this, t, weight, radius);
		}

		::System::Void RemoveMember(::UnityEngine::Transform* t)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_REMOVEMEMBER_OFFSET))(this, t);
		}

		::System::Int32 FindMember(::UnityEngine::Transform* t)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_FINDMEMBER_OFFSET))(this, t);
		}

		::UnityEngine::BoundingSphere GetWeightedBoundsForMember(::System::Int32 index)
		{
			return ((::UnityEngine::BoundingSphere(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_GETWEIGHTEDBOUNDSFORMEMBER_OFFSET))(this, index);
		}

		::UnityEngine::Bounds GetViewSpaceBoundingBox(::UnityEngine::Matrix4x4 observer)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_GETVIEWSPACEBOUNDINGBOX_OFFSET))(this, observer);
		}

		static ::UnityEngine::BoundingSphere WeightedMemberBounds(::Cinemachine::CinemachineTargetGroup_Target t, ::UnityEngine::Vector3 avgPos, ::System::Single maxWeight)
		{
			return ((::UnityEngine::BoundingSphere(*)(::Cinemachine::CinemachineTargetGroup_Target, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_WEIGHTEDMEMBERBOUNDS_OFFSET))(t, avgPos, maxWeight);
		}

		::System::Void DoUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_DOUPDATE_OFFSET))(this);
		}

		::UnityEngine::Vector3 CalculateAveragePosition(::System::Single& maxWeight)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_CALCULATEAVERAGEPOSITION_OFFSET))(this, maxWeight);
		}

		::UnityEngine::Quaternion CalculateAverageOrientation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_CALCULATEAVERAGEORIENTATION_OFFSET))(this);
		}

		::UnityEngine::Bounds CalculateBoundingBox(::UnityEngine::Vector3 avgPos, ::System::Single maxWeight)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_CALCULATEBOUNDINGBOX_OFFSET))(this, avgPos, maxWeight);
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

		::System::Void GetViewSpaceAngularBounds(::UnityEngine::Matrix4x4 observer, ::UnityEngine::Vector2& minAngles, ::UnityEngine::Vector2& maxAngles, ::UnityEngine::Vector2& zRange)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINETARGETGROUP_GETVIEWSPACEANGULARBOUNDS_OFFSET))(this, observer, minAngles, maxAngles, zRange);
		}
	};
}
