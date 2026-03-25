#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachinePathBase_PositionUnits.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachinePathBase_Appearance; }

#define CINEMACHINE_CINEMACHINEPATHBASE_DISTANCECACHEISVALID_OFFSET UNITYSDK_OFFSET(0x119C93E0)
#define CINEMACHINE_CINEMACHINEPATHBASE_EVALUATEORIENTATIONATUNIT_OFFSET UNITYSDK_OFFSET(0x119ADE20)
#define CINEMACHINE_CINEMACHINEPATHBASE_EVALUATEPOSITIONATUNIT_OFFSET UNITYSDK_OFFSET(0x119ADDD0)
#define CINEMACHINE_CINEMACHINEPATHBASE_EVALUATETANGENTATUNIT_OFFSET UNITYSDK_OFFSET(0x119C9390)
#define CINEMACHINE_CINEMACHINEPATHBASE_FINDCLOSESTPOINT_OFFSET UNITYSDK_OFFSET(0x119C8910)
#define CINEMACHINE_CINEMACHINEPATHBASE_FROMPATHNATIVEUNITS_OFFSET UNITYSDK_OFFSET(0x119C98F0)
#define CINEMACHINE_CINEMACHINEPATHBASE_GET_PATHLENGTH_OFFSET UNITYSDK_OFFSET(0x119C8E30)
#define CINEMACHINE_CINEMACHINEPATHBASE_INVALIDATEDISTANCECACHE_OFFSET UNITYSDK_OFFSET(0x119C79D0)
#define CINEMACHINE_CINEMACHINEPATHBASE_MAXUNIT_OFFSET UNITYSDK_OFFSET(0x119C8D50)
#define CINEMACHINE_CINEMACHINEPATHBASE_MINUNIT_OFFSET UNITYSDK_OFFSET(0x119C8D30)
#define CINEMACHINE_CINEMACHINEPATHBASE_RESAMPLEPATH_OFFSET UNITYSDK_OFFSET(0x119C9460)
#define CINEMACHINE_CINEMACHINEPATHBASE_STANDARDIZEPATHDISTANCE_OFFSET UNITYSDK_OFFSET(0x119C9010)
#define CINEMACHINE_CINEMACHINEPATHBASE_STANDARDIZEPOS_OFFSET UNITYSDK_OFFSET(0x119C7C40)
#define CINEMACHINE_CINEMACHINEPATHBASE_STANDARDIZEUNIT_OFFSET UNITYSDK_OFFSET(0x119C8ED0)
#define CINEMACHINE_CINEMACHINEPATHBASE_TONATIVEPATHUNITS_OFFSET UNITYSDK_OFFSET(0x119C9120)
#define CINEMACHINE_CINEMACHINEPATHBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x119C88C0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachinePathBase_TypeDefinitionIndex = 30861;

	class CinemachinePathBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 m_Resolution; // 0x18
		::Cinemachine::CinemachinePathBase_Appearance* m_Appearance; // 0x20
		::Il2CppArray<::System::Single>* m_DistanceToPos; // 0x28
		::Il2CppArray<::System::Single>* m_PosToDistance; // 0x30
		::System::Int32 m_CachedSampleSteps; // 0x38
		::System::Single m_PathLength; // 0x3C
		::System::Single m_cachedPosStepSize; // 0x40
		::System::Single m_cachedDistanceStepSize; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE__CTOR_OFFSET))(this);
		}

		::System::Single StandardizePos(::System::Single pos)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE_STANDARDIZEPOS_OFFSET))(this, pos);
		}

		::System::Single FindClosestPoint(::UnityEngine::Vector3 p, ::System::Int32 startSegment, ::System::Int32 searchRadius, ::System::Int32 stepsPerSegment)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE_FINDCLOSESTPOINT_OFFSET))(this, p, startSegment, searchRadius, stepsPerSegment);
		}

		::System::Single MinUnit(::Cinemachine::CinemachinePathBase_PositionUnits units)
		{
			return ((::System::Single(*)(::PVOID, ::Cinemachine::CinemachinePathBase_PositionUnits))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE_MINUNIT_OFFSET))(this, units);
		}

		::System::Single MaxUnit(::Cinemachine::CinemachinePathBase_PositionUnits units)
		{
			return ((::System::Single(*)(::PVOID, ::Cinemachine::CinemachinePathBase_PositionUnits))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE_MAXUNIT_OFFSET))(this, units);
		}

		::System::Single StandardizeUnit(::System::Single pos, ::Cinemachine::CinemachinePathBase_PositionUnits units)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::Cinemachine::CinemachinePathBase_PositionUnits))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE_STANDARDIZEUNIT_OFFSET))(this, pos, units);
		}

		::UnityEngine::Vector3 EvaluatePositionAtUnit(::System::Single pos, ::Cinemachine::CinemachinePathBase_PositionUnits units)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::Cinemachine::CinemachinePathBase_PositionUnits))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE_EVALUATEPOSITIONATUNIT_OFFSET))(this, pos, units);
		}

		::UnityEngine::Vector3 EvaluateTangentAtUnit(::System::Single pos, ::Cinemachine::CinemachinePathBase_PositionUnits units)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::Cinemachine::CinemachinePathBase_PositionUnits))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE_EVALUATETANGENTATUNIT_OFFSET))(this, pos, units);
		}

		::UnityEngine::Quaternion EvaluateOrientationAtUnit(::System::Single pos, ::Cinemachine::CinemachinePathBase_PositionUnits units)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Single, ::Cinemachine::CinemachinePathBase_PositionUnits))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE_EVALUATEORIENTATIONATUNIT_OFFSET))(this, pos, units);
		}

		::System::Void InvalidateDistanceCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE_INVALIDATEDISTANCECACHE_OFFSET))(this);
		}

		::System::Boolean DistanceCacheIsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE_DISTANCECACHEISVALID_OFFSET))(this);
		}

		::System::Single get_PathLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE_GET_PATHLENGTH_OFFSET))(this);
		}

		::System::Single StandardizePathDistance(::System::Single distance)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE_STANDARDIZEPATHDISTANCE_OFFSET))(this, distance);
		}

		::System::Single ToNativePathUnits(::System::Single pos, ::Cinemachine::CinemachinePathBase_PositionUnits units)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::Cinemachine::CinemachinePathBase_PositionUnits))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE_TONATIVEPATHUNITS_OFFSET))(this, pos, units);
		}

		::System::Single FromPathNativeUnits(::System::Single pos, ::Cinemachine::CinemachinePathBase_PositionUnits units)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::Cinemachine::CinemachinePathBase_PositionUnits))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE_FROMPATHNATIVEUNITS_OFFSET))(this, pos, units);
		}

		::System::Void ResamplePath(::System::Int32 stepsPerSegment)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE_RESAMPLEPATH_OFFSET))(this, stepsPerSegment);
		}
	};
}
