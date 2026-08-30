#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachinePathBase.h"
#include "unitysdk/Cinemachine/CinemachinePath_Waypoint.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CINEMACHINE_CINEMACHINEPATH_EVALUATEORIENTATION_OFFSET UNITYSDK_OFFSET(0x164737A0)
#define CINEMACHINE_CINEMACHINEPATH_EVALUATEPOSITION_OFFSET UNITYSDK_OFFSET(0x16473140)
#define CINEMACHINE_CINEMACHINEPATH_EVALUATETANGENT_OFFSET UNITYSDK_OFFSET(0x164733F0)
#define CINEMACHINE_CINEMACHINEPATH_GETBOUNDINGINDICES_OFFSET UNITYSDK_OFFSET(0x16472CA0)
#define CINEMACHINE_CINEMACHINEPATH_GET_DISTANCECACHESAMPLESTEPSPERSEGMENT_OFFSET UNITYSDK_OFFSET(0x16472C90)
#define CINEMACHINE_CINEMACHINEPATH_GET_LOOPED_OFFSET UNITYSDK_OFFSET(0x16472B70)
#define CINEMACHINE_CINEMACHINEPATH_GET_MAXPOS_OFFSET UNITYSDK_OFFSET(0x16472B30)
#define CINEMACHINE_CINEMACHINEPATH_GET_MINPOS_OFFSET UNITYSDK_OFFSET(0x16472B20)
#define CINEMACHINE_CINEMACHINEPATH_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x16473C10)
#define CINEMACHINE_CINEMACHINEPATH_RESET_OFFSET UNITYSDK_OFFSET(0x16472B80)
#define CINEMACHINE_CINEMACHINEPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x16473C20)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachinePath_TypeDefinitionIndex = 38447;

	class CinemachinePath : public ::Cinemachine::CinemachinePathBase
	{
	public:
		::System::Boolean m_Looped; // 0x48
		::Il2CppArray<::Cinemachine::CinemachinePath_Waypoint>* m_Waypoints; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATH__CTOR_OFFSET))(this);
		}

		::System::Single get_MinPos()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATH_GET_MINPOS_OFFSET))(this);
		}

		::System::Single get_MaxPos()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATH_GET_MAXPOS_OFFSET))(this);
		}

		::System::Boolean get_Looped()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATH_GET_LOOPED_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATH_RESET_OFFSET))(this);
		}

		::System::Int32 get_DistanceCacheSampleStepsPerSegment()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATH_GET_DISTANCECACHESAMPLESTEPSPERSEGMENT_OFFSET))(this);
		}

		::System::Single GetBoundingIndices(::System::Single a1, ::System::Int32& a2, ::System::Int32& a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATH_GETBOUNDINGINDICES_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 EvaluatePosition(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATH_EVALUATEPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 EvaluateTangent(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATH_EVALUATETANGENT_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion EvaluateOrientation(::System::Single a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATH_EVALUATEORIENTATION_OFFSET))(this, a1);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATH_ONVALIDATE_OFFSET))(this);
		}
	};
}
