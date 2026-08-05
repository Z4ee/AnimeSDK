#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GpuCollisionBox.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class LeavesComputeSolver;
class LeavesConfig;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define LEAVESSYSTEM_BAKESCENECOLLISION_OFFSET UNITYSDK_OFFSET(0x1D6CFA40)
#define LEAVESSYSTEM_BUILDXZBOUNDS_OFFSET UNITYSDK_OFFSET(0x1D6CDA40)
#define LEAVESSYSTEM_CALCULATESPAWNCOUNT_OFFSET UNITYSDK_OFFSET(0x1D6D0530)
#define LEAVESSYSTEM_ENSURERUNTIMEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1D6CF770)
#define LEAVESSYSTEM_GETBOUNDSXZ_OFFSET UNITYSDK_OFFSET(0x1D6CD9A0)
#define LEAVESSYSTEM_GET_BAKEDCOLLISIONBOXCOUNT_OFFSET UNITYSDK_OFFSET(0x1D6D0750)
#define LEAVESSYSTEM_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1D6CD7F0)
#define LEAVESSYSTEM_GET_ISREADY_OFFSET UNITYSDK_OFFSET(0x1D6CD800)
#define LEAVESSYSTEM_GET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0x1D6CD990)
#define LEAVESSYSTEM_GET_LASTSTEPCPUMS_OFFSET UNITYSDK_OFFSET(0x1D6CD980)
#define LEAVESSYSTEM_GET_PROCEDURALMATERIAL_OFFSET UNITYSDK_OFFSET(0x1D6CD680)
#define LEAVESSYSTEM_GET_SOLVER_OFFSET UNITYSDK_OFFSET(0x1D6CD670)
#define LEAVESSYSTEM_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1D6CE5C0)
#define LEAVESSYSTEM_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1D6CE000)
#define LEAVESSYSTEM_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1D6CDFA0)
#define LEAVESSYSTEM_RELEASERUNTIMEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1D6CE730)
#define LEAVESSYSTEM_RESETSYSTEM_OFFSET UNITYSDK_OFFSET(0x1D6D0480)
#define LEAVESSYSTEM_RESOLVEBOUNDARYBOUNDS_OFFSET UNITYSDK_OFFSET(0x1D6CDB80)
#define LEAVESSYSTEM_SCANCOLLISIONSOURCES_OFFSET UNITYSDK_OFFSET(0x1D6D0760)
#define LEAVESSYSTEM_SHUTDOWNSYSTEM_OFFSET UNITYSDK_OFFSET(0x1D6CE6C0)
#define LEAVESSYSTEM_SIMULATESTEP_OFFSET UNITYSDK_OFFSET(0x1D6CF000)
#define LEAVESSYSTEM_STARTSYSTEM_OFFSET UNITYSDK_OFFSET(0x1D6CE0A0)
#define LEAVESSYSTEM_STOPSYSTEM_OFFSET UNITYSDK_OFFSET(0x1D6D0430)
#define LEAVESSYSTEM_TICKFIXED_OFFSET UNITYSDK_OFFSET(0x1D6CEEC0)
#define LEAVESSYSTEM_TICKSIMULATION_OFFSET UNITYSDK_OFFSET(0x1D6CED00)
#define LEAVESSYSTEM_TRYGETCHARACTERPOSITION_OFFSET UNITYSDK_OFFSET(0x1D6D0250)
#define LEAVESSYSTEM_TRYGETRUNTIMEMAINCHARACTERPOSITION_OFFSET UNITYSDK_OFFSET(0x1D6D0610)
#define LEAVESSYSTEM_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D6CE9B0)
#define LEAVESSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D0C70)

inline static constexpr unsigned int LeavesSystem_TypeDefinitionIndex = 27224;

class LeavesSystem : public ::UnityEngine::MonoBehaviour
{
public:
	// static const ::System::Single RuntimeCharacterValidMinY; // 0x0
	::LeavesConfig* config; // 0x18
	::UnityEngine::Material* leafProceduralMaterial; // 0x20
	::UnityEngine::ComputeShader* leavesComputeShader; // 0x28
	::UnityEngine::Transform* characterTransform; // 0x30
	::UnityEngine::Vector2 yellowBoxCenterOffsetXZ; // 0x38
	::UnityEngine::Vector2 yellowBoxHalfExtentsXZ; // 0x40
	::UnityEngine::Vector2 redBoxCenterOffsetXZ; // 0x48
	::UnityEngine::Vector2 redBoxHalfExtentsXZ; // 0x50
	::UnityEngine::Vector3 collisionQueryCenterOffset; // 0x58
	::UnityEngine::Vector3 collisionQueryHalfExtents; // 0x64
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* collisionSourceObjects; // 0x70
	::System::Boolean autoStart; // 0x78
	::System::Boolean runInEditMode; // 0x79
	::LeavesComputeSolver* _solver; // 0x80
	::System::Boolean _isInitialized; // 0x88
	::System::Boolean _isRunning; // 0x89
	::UnityEngine::Material* _runtimeProceduralMaterial; // 0x90
	::System::Single _spawnAccumulator; // 0x98
	::System::Single _stepAccumulator; // 0x9C
	::System::Single _postInitSpawnTimer; // 0xA0
	::System::Int32 _nextSpawnLeafIndex; // 0xA4
	::System::UInt32 _randomSeed; // 0xA8
	::System::Int32 _initialSpawnRemaining; // 0xAC
	::UnityEngine::Vector3 _prevCharacterPos; // 0xB0
	::UnityEngine::Vector3 _laggedCharacterPos; // 0xBC
	::System::Boolean _hasCharacterHistory; // 0xC8
	::Il2CppArray<::GpuCollisionBox>* _bakedCollisionBoxes; // 0xD0
	::System::Int32 _bakedCollisionBoxCount; // 0xD8
	::System::Boolean _collisionBoxesDirty; // 0xDC
	::System::Single _lastStepCpuMs; // 0xE0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAVESSYSTEM__CTOR_OFFSET))(this);
	}

	::LeavesComputeSolver* get_Solver()
	{
		return ((::LeavesComputeSolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAVESSYSTEM_GET_SOLVER_OFFSET))(this);
	}

	::UnityEngine::Material* get_ProceduralMaterial()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAVESSYSTEM_GET_PROCEDURALMATERIAL_OFFSET))(this);
	}

	::LeavesConfig* get_Config()
	{
		return ((::LeavesConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAVESSYSTEM_GET_CONFIG_OFFSET))(this);
	}

	::System::Boolean get_IsReady()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAVESSYSTEM_GET_ISREADY_OFFSET))(this);
	}

	::System::Single get_LastStepCpuMs()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAVESSYSTEM_GET_LASTSTEPCPUMS_OFFSET))(this);
	}

	::System::Boolean get_IsRunning()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAVESSYSTEM_GET_ISRUNNING_OFFSET))(this);
	}

	static ::UnityEngine::Vector4 GetBoundsXZ(::UnityEngine::Bounds b)
	{
		return ((::UnityEngine::Vector4(*)(::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + LEAVESSYSTEM_GETBOUNDSXZ_OFFSET))(b);
	}

	static ::UnityEngine::Bounds BuildXZBounds(::UnityEngine::Vector3 sysPos, ::UnityEngine::Vector2 centerOffsetXZ, ::UnityEngine::Vector2 halfExtentsXZ)
	{
		return ((::UnityEngine::Bounds(*)(::UnityEngine::Vector3, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + LEAVESSYSTEM_BUILDXZBOUNDS_OFFSET))(sysPos, centerOffsetXZ, halfExtentsXZ);
	}

	::System::Void ResolveBoundaryBounds(::UnityEngine::Vector3 sysPos, ::UnityEngine::Vector4& yellowBoundsXZ, ::UnityEngine::Vector4& redBoundsXZ)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector4&, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + LEAVESSYSTEM_RESOLVEBOUNDARYBOUNDS_OFFSET))(this, sysPos, yellowBoundsXZ, redBoundsXZ);
	}

	::System::Void OnValidate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAVESSYSTEM_ONVALIDATE_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAVESSYSTEM_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAVESSYSTEM_ONDISABLE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAVESSYSTEM_UPDATE_OFFSET))(this);
	}

	::System::Void TickSimulation(::System::Single frameDelta)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LEAVESSYSTEM_TICKSIMULATION_OFFSET))(this, frameDelta);
	}

	::System::Void StartSystem()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAVESSYSTEM_STARTSYSTEM_OFFSET))(this);
	}

	::System::Void StopSystem()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAVESSYSTEM_STOPSYSTEM_OFFSET))(this);
	}

	::System::Void ResetSystem()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAVESSYSTEM_RESETSYSTEM_OFFSET))(this);
	}

	::System::Void ShutdownSystem()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAVESSYSTEM_SHUTDOWNSYSTEM_OFFSET))(this);
	}

	::System::Void EnsureRuntimeMaterial()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAVESSYSTEM_ENSURERUNTIMEMATERIAL_OFFSET))(this);
	}

	::System::Void ReleaseRuntimeMaterial()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAVESSYSTEM_RELEASERUNTIMEMATERIAL_OFFSET))(this);
	}

	::System::Void TickFixed(::System::Single frameDelta)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LEAVESSYSTEM_TICKFIXED_OFFSET))(this, frameDelta);
	}

	::System::Void SimulateStep(::System::Single stepDelta)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LEAVESSYSTEM_SIMULATESTEP_OFFSET))(this, stepDelta);
	}

	::System::Int32 CalculateSpawnCount(::System::Single stepDelta)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LEAVESSYSTEM_CALCULATESPAWNCOUNT_OFFSET))(this, stepDelta);
	}

	::System::Boolean TryGetCharacterPosition(::UnityEngine::Vector3& characterPos)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + LEAVESSYSTEM_TRYGETCHARACTERPOSITION_OFFSET))(this, characterPos);
	}

	static ::System::Boolean TryGetRuntimeMainCharacterPosition(::UnityEngine::Vector3& runtimePos)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + LEAVESSYSTEM_TRYGETRUNTIMEMAINCHARACTERPOSITION_OFFSET))(runtimePos);
	}

	::System::Int32 get_BakedCollisionBoxCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAVESSYSTEM_GET_BAKEDCOLLISIONBOXCOUNT_OFFSET))(this);
	}

	::System::Void ScanCollisionSources()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAVESSYSTEM_SCANCOLLISIONSOURCES_OFFSET))(this);
	}

	::System::Void BakeSceneCollision()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAVESSYSTEM_BAKESCENECOLLISION_OFFSET))(this);
	}
};
