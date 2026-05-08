#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachinePathBase.h"
#include "unitysdk/Cinemachine/CinemachineSmoothPath_Waypoint.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CINEMACHINE_CINEMACHINESMOOTHPATH_EVALUATEORIENTATION_OFFSET UNITYSDK_OFFSET(0x1BD45350)
#define CINEMACHINE_CINEMACHINESMOOTHPATH_EVALUATEPOSITION_OFFSET UNITYSDK_OFFSET(0x1BD44C60)
#define CINEMACHINE_CINEMACHINESMOOTHPATH_EVALUATETANGENT_OFFSET UNITYSDK_OFFSET(0x1BD44F50)
#define CINEMACHINE_CINEMACHINESMOOTHPATH_GETBOUNDINGINDICES_OFFSET UNITYSDK_OFFSET(0x1BD44B20)
#define CINEMACHINE_CINEMACHINESMOOTHPATH_GET_DISTANCECACHESAMPLESTEPSPERSEGMENT_OFFSET UNITYSDK_OFFSET(0x1BD446E0)
#define CINEMACHINE_CINEMACHINESMOOTHPATH_GET_LOOPED_OFFSET UNITYSDK_OFFSET(0x1BD446D0)
#define CINEMACHINE_CINEMACHINESMOOTHPATH_GET_MAXPOS_OFFSET UNITYSDK_OFFSET(0x1BD44690)
#define CINEMACHINE_CINEMACHINESMOOTHPATH_GET_MINPOS_OFFSET UNITYSDK_OFFSET(0x1BD44680)
#define CINEMACHINE_CINEMACHINESMOOTHPATH_INVALIDATEDISTANCECACHE_OFFSET UNITYSDK_OFFSET(0x1BD44710)
#define CINEMACHINE_CINEMACHINESMOOTHPATH_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1BD446F0)
#define CINEMACHINE_CINEMACHINESMOOTHPATH_RESET_OFFSET UNITYSDK_OFFSET(0x1BD44730)
#define CINEMACHINE_CINEMACHINESMOOTHPATH_ROLLAROUNDFORWARD_OFFSET UNITYSDK_OFFSET(0x1BD45810)
#define CINEMACHINE_CINEMACHINESMOOTHPATH_UPDATECONTROLPOINTS_OFFSET UNITYSDK_OFFSET(0x1BD44830)
#define CINEMACHINE_CINEMACHINESMOOTHPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD45870)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineSmoothPath_TypeDefinitionIndex = 32489;

	class CinemachineSmoothPath : public ::Cinemachine::CinemachinePathBase
	{
	public:
		::System::Boolean m_Looped; // 0x48
		::Il2CppArray<::Cinemachine::CinemachineSmoothPath_Waypoint>* m_Waypoints; // 0x50
		::Il2CppArray<::Cinemachine::CinemachineSmoothPath_Waypoint>* m_ControlPoints1; // 0x58
		::Il2CppArray<::Cinemachine::CinemachineSmoothPath_Waypoint>* m_ControlPoints2; // 0x60
		::System::Boolean m_IsLoopedCache; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESMOOTHPATH__CTOR_OFFSET))(this);
		}

		::System::Single get_MinPos()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESMOOTHPATH_GET_MINPOS_OFFSET))(this);
		}

		::System::Single get_MaxPos()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESMOOTHPATH_GET_MAXPOS_OFFSET))(this);
		}

		::System::Boolean get_Looped()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESMOOTHPATH_GET_LOOPED_OFFSET))(this);
		}

		::System::Int32 get_DistanceCacheSampleStepsPerSegment()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESMOOTHPATH_GET_DISTANCECACHESAMPLESTEPSPERSEGMENT_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESMOOTHPATH_ONVALIDATE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESMOOTHPATH_RESET_OFFSET))(this);
		}

		::System::Void InvalidateDistanceCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESMOOTHPATH_INVALIDATEDISTANCECACHE_OFFSET))(this);
		}

		::System::Void UpdateControlPoints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESMOOTHPATH_UPDATECONTROLPOINTS_OFFSET))(this);
		}

		::System::Single GetBoundingIndices(::System::Single pos, ::System::Int32& indexA, ::System::Int32& indexB)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESMOOTHPATH_GETBOUNDINGINDICES_OFFSET))(this, pos, indexA, indexB);
		}

		::UnityEngine::Vector3 EvaluatePosition(::System::Single pos)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESMOOTHPATH_EVALUATEPOSITION_OFFSET))(this, pos);
		}

		::UnityEngine::Vector3 EvaluateTangent(::System::Single pos)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESMOOTHPATH_EVALUATETANGENT_OFFSET))(this, pos);
		}

		::UnityEngine::Quaternion EvaluateOrientation(::System::Single pos)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESMOOTHPATH_EVALUATEORIENTATION_OFFSET))(this, pos);
		}

		::UnityEngine::Quaternion RollAroundForward(::System::Single angle)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINESMOOTHPATH_ROLLAROUNDFORWARD_OFFSET))(this, angle);
		}
	};
}
