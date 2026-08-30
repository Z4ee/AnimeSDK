#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachinePathBase_PositionUnits.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachinePathBase_Appearance; }

#define CINEMACHINE_CINEMACHINEPATHBASE_DISTANCECACHEISVALID_OFFSET UNITYSDK_OFFSET(0x16474C50)
#define CINEMACHINE_CINEMACHINEPATHBASE_EVALUATEORIENTATIONATUNIT_OFFSET UNITYSDK_OFFSET(0x16458CB0)
#define CINEMACHINE_CINEMACHINEPATHBASE_EVALUATEPOSITIONATUNIT_OFFSET UNITYSDK_OFFSET(0x16458BF0)
#define CINEMACHINE_CINEMACHINEPATHBASE_EVALUATETANGENTATUNIT_OFFSET UNITYSDK_OFFSET(0x16474B90)
#define CINEMACHINE_CINEMACHINEPATHBASE_FINDCLOSESTPOINT_OFFSET UNITYSDK_OFFSET(0x16473CE0)
#define CINEMACHINE_CINEMACHINEPATHBASE_FROMPATHNATIVEUNITS_OFFSET UNITYSDK_OFFSET(0x16475420)
#define CINEMACHINE_CINEMACHINEPATHBASE_GET_PATHLENGTH_OFFSET UNITYSDK_OFFSET(0x164745D0)
#define CINEMACHINE_CINEMACHINEPATHBASE_INVALIDATEDISTANCECACHE_OFFSET UNITYSDK_OFFSET(0x16472C80)
#define CINEMACHINE_CINEMACHINEPATHBASE_MAXUNIT_OFFSET UNITYSDK_OFFSET(0x16474520)
#define CINEMACHINE_CINEMACHINEPATHBASE_MINUNIT_OFFSET UNITYSDK_OFFSET(0x16474490)
#define CINEMACHINE_CINEMACHINEPATHBASE_RESAMPLEPATH_OFFSET UNITYSDK_OFFSET(0x16474DF0)
#define CINEMACHINE_CINEMACHINEPATHBASE_STANDARDIZEPATHDISTANCE_OFFSET UNITYSDK_OFFSET(0x164747E0)
#define CINEMACHINE_CINEMACHINEPATHBASE_STANDARDIZEPOS_OFFSET UNITYSDK_OFFSET(0x16472E10)
#define CINEMACHINE_CINEMACHINEPATHBASE_STANDARDIZEUNIT_OFFSET UNITYSDK_OFFSET(0x164746E0)
#define CINEMACHINE_CINEMACHINEPATHBASE_TONATIVEPATHUNITS_OFFSET UNITYSDK_OFFSET(0x164748C0)
#define CINEMACHINE_CINEMACHINEPATHBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x16473C90)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachinePathBase_TypeDefinitionIndex = 38522;

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
