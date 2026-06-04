#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachinePathBase_PositionUnits.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachinePathBase_Appearance; }

#define CINEMACHINE_CINEMACHINEPATHBASE_DISTANCECACHEISVALID_OFFSET UNITYSDK_OFFSET(0x14655720)
#define CINEMACHINE_CINEMACHINEPATHBASE_EVALUATEORIENTATIONATUNIT_OFFSET UNITYSDK_OFFSET(0x1463B9B0)
#define CINEMACHINE_CINEMACHINEPATHBASE_EVALUATEPOSITIONATUNIT_OFFSET UNITYSDK_OFFSET(0x1463B960)
#define CINEMACHINE_CINEMACHINEPATHBASE_EVALUATETANGENTATUNIT_OFFSET UNITYSDK_OFFSET(0x146556D0)
#define CINEMACHINE_CINEMACHINEPATHBASE_FINDCLOSESTPOINT_OFFSET UNITYSDK_OFFSET(0x14654C70)
#define CINEMACHINE_CINEMACHINEPATHBASE_FROMPATHNATIVEUNITS_OFFSET UNITYSDK_OFFSET(0x14655BD0)
#define CINEMACHINE_CINEMACHINEPATHBASE_GET_PATHLENGTH_OFFSET UNITYSDK_OFFSET(0x14655190)
#define CINEMACHINE_CINEMACHINEPATHBASE_INVALIDATEDISTANCECACHE_OFFSET UNITYSDK_OFFSET(0x14653DA0)
#define CINEMACHINE_CINEMACHINEPATHBASE_MAXUNIT_OFFSET UNITYSDK_OFFSET(0x146550B0)
#define CINEMACHINE_CINEMACHINEPATHBASE_MINUNIT_OFFSET UNITYSDK_OFFSET(0x14655090)
#define CINEMACHINE_CINEMACHINEPATHBASE_RESAMPLEPATH_OFFSET UNITYSDK_OFFSET(0x146557A0)
#define CINEMACHINE_CINEMACHINEPATHBASE_STANDARDIZEPATHDISTANCE_OFFSET UNITYSDK_OFFSET(0x14655370)
#define CINEMACHINE_CINEMACHINEPATHBASE_STANDARDIZEPOS_OFFSET UNITYSDK_OFFSET(0x14654010)
#define CINEMACHINE_CINEMACHINEPATHBASE_STANDARDIZEUNIT_OFFSET UNITYSDK_OFFSET(0x14655230)
#define CINEMACHINE_CINEMACHINEPATHBASE_TONATIVEPATHUNITS_OFFSET UNITYSDK_OFFSET(0x14655480)
#define CINEMACHINE_CINEMACHINEPATHBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x14654C20)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachinePathBase_TypeDefinitionIndex = 36881;

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

		::System::Single StandardizePos(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE_STANDARDIZEPOS_OFFSET))(this, a1);
		}

		::System::Single FindClosestPoint(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE_FINDCLOSESTPOINT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single MinUnit(::Cinemachine::CinemachinePathBase_PositionUnits a1)
		{
			return ((::System::Single(*)(::PVOID, ::Cinemachine::CinemachinePathBase_PositionUnits))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE_MINUNIT_OFFSET))(this, a1);
		}

		::System::Single MaxUnit(::Cinemachine::CinemachinePathBase_PositionUnits a1)
		{
			return ((::System::Single(*)(::PVOID, ::Cinemachine::CinemachinePathBase_PositionUnits))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE_MAXUNIT_OFFSET))(this, a1);
		}

		::System::Single StandardizeUnit(::System::Single a1, ::Cinemachine::CinemachinePathBase_PositionUnits a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::Cinemachine::CinemachinePathBase_PositionUnits))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE_STANDARDIZEUNIT_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 EvaluatePositionAtUnit(::System::Single a1, ::Cinemachine::CinemachinePathBase_PositionUnits a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::Cinemachine::CinemachinePathBase_PositionUnits))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE_EVALUATEPOSITIONATUNIT_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 EvaluateTangentAtUnit(::System::Single a1, ::Cinemachine::CinemachinePathBase_PositionUnits a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::Cinemachine::CinemachinePathBase_PositionUnits))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE_EVALUATETANGENTATUNIT_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Quaternion EvaluateOrientationAtUnit(::System::Single a1, ::Cinemachine::CinemachinePathBase_PositionUnits a2)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Single, ::Cinemachine::CinemachinePathBase_PositionUnits))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE_EVALUATEORIENTATIONATUNIT_OFFSET))(this, a1, a2);
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

		::System::Single StandardizePathDistance(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE_STANDARDIZEPATHDISTANCE_OFFSET))(this, a1);
		}

		::System::Single ToNativePathUnits(::System::Single a1, ::Cinemachine::CinemachinePathBase_PositionUnits a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::Cinemachine::CinemachinePathBase_PositionUnits))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE_TONATIVEPATHUNITS_OFFSET))(this, a1, a2);
		}

		::System::Single FromPathNativeUnits(::System::Single a1, ::Cinemachine::CinemachinePathBase_PositionUnits a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::Cinemachine::CinemachinePathBase_PositionUnits))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE_FROMPATHNATIVEUNITS_OFFSET))(this, a1, a2);
		}

		::System::Void ResamplePath(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEPATHBASE_RESAMPLEPATH_OFFSET))(this, a1);
		}
	};
}
