#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GpuCollisionBox.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class LeavesConfig;
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }

#define LEAVESCOMPUTESOLVER_ALLOCATEBUFFERS_OFFSET UNITYSDK_OFFSET(0x1AEB76A0)
#define LEAVESCOMPUTESOLVER_BINDALLBUFFERS_OFFSET UNITYSDK_OFFSET(0x1AEB7F20)
#define LEAVESCOMPUTESOLVER_BINDALLKERNELS_OFFSET UNITYSDK_OFFSET(0x1AEB81A0)
#define LEAVESCOMPUTESOLVER_CLEARBUFFERSTODEFAULTS_OFFSET UNITYSDK_OFFSET(0x1AEB7C30)
#define LEAVESCOMPUTESOLVER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AEB9460)
#define LEAVESCOMPUTESOLVER_GET_MAXLEAFCOUNT_OFFSET UNITYSDK_OFFSET(0x1AEB74D0)
#define LEAVESCOMPUTESOLVER_GET_NORMALSBUFFER_OFFSET UNITYSDK_OFFSET(0x1AEB74B0)
#define LEAVESCOMPUTESOLVER_GET_POSITIONSBUFFER_OFFSET UNITYSDK_OFFSET(0x1AEB74A0)
#define LEAVESCOMPUTESOLVER_GET_UVSBUFFER_OFFSET UNITYSDK_OFFSET(0x1AEB74C0)
#define LEAVESCOMPUTESOLVER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1AEB82B0)
#define LEAVESCOMPUTESOLVER_SIMULATE_OFFSET UNITYSDK_OFFSET(0x1AEB8960)
#define LEAVESCOMPUTESOLVER_THREADGROUPS_OFFSET UNITYSDK_OFFSET(0x1AEB8260)
#define LEAVESCOMPUTESOLVER_UPDATECOLLISIONBOXES_OFFSET UNITYSDK_OFFSET(0x1AEB88D0)
#define LEAVESCOMPUTESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEB74E0)

inline static constexpr unsigned int LeavesComputeSolver_TypeDefinitionIndex = 27084;

class LeavesComputeSolver : public ::System::Object
{
public:
	// static const ::System::Int32 LeafInfoStride = 0x14; // 0x0
	// static const ::System::Int32 Float3Stride = 0xC; // 0x0
	// static const ::System::Int32 Float2Stride = 0x8; // 0x0
	// static const ::System::Int32 FloatStride = 0x4; // 0x0
	::UnityEngine::ComputeBuffer* _normalsBuf; // 0x10
	::UnityEngine::ComputeBuffer* _positionsBuf; // 0x18
	::UnityEngine::ComputeBuffer* _collisionBoxesBuf; // 0x20
	::UnityEngine::ComputeBuffer* _leafInfoBuf; // 0x28
	::UnityEngine::ComputeBuffer* _restLengthsBuf; // 0x30
	::UnityEngine::ComputeBuffer* _predictedPositionsBuf; // 0x38
	::UnityEngine::ComputeBuffer* _oldPositionsBuf; // 0x40
	::UnityEngine::ComputeBuffer* _velocitiesBuf; // 0x48
	::UnityEngine::ComputeBuffer* _uvsBuf; // 0x50
	::UnityEngine::ComputeShader* _shader; // 0x58
	::System::Int32 _kernelSolveAll; // 0x60
	::System::Int32 _kernelFinalize; // 0x64
	::System::Int32 _kernelDistConstraint; // 0x68
	::System::Int32 _kernelCharForce; // 0x6C
	::System::Boolean _disposed; // 0x70
	::System::Int32 _kernelExtForces; // 0x74
	::System::Int32 _maxVertexCount; // 0x78
	::System::Int32 _kernelSave; // 0x7C
	::System::Int32 _kernelGroundCollision; // 0x80
	::System::Int32 _maxLeafCount; // 0x84
	::System::Int32 _kernelInit; // 0x88
	::System::Int32 _kernelBoxCollision; // 0x8C
	::System::Int32 _kernelBendConstraint; // 0x90
	::System::Int32 _collisionBoxCount; // 0x94

	::System::Void _ctor(::UnityEngine::ComputeShader* shader, ::System::Int32 maxLeafCount)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*, ::System::Int32))((::PBYTE)hIl2Cpp + LEAVESCOMPUTESOLVER__CTOR_OFFSET))(this, shader, maxLeafCount);
	}

	::UnityEngine::ComputeBuffer* get_PositionsBuffer()
	{
		return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAVESCOMPUTESOLVER_GET_POSITIONSBUFFER_OFFSET))(this);
	}

	::UnityEngine::ComputeBuffer* get_NormalsBuffer()
	{
		return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAVESCOMPUTESOLVER_GET_NORMALSBUFFER_OFFSET))(this);
	}

	::UnityEngine::ComputeBuffer* get_UVsBuffer()
	{
		return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAVESCOMPUTESOLVER_GET_UVSBUFFER_OFFSET))(this);
	}

	::System::Int32 get_MaxLeafCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAVESCOMPUTESOLVER_GET_MAXLEAFCOUNT_OFFSET))(this);
	}

	::System::Void AllocateBuffers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAVESCOMPUTESOLVER_ALLOCATEBUFFERS_OFFSET))(this);
	}

	::System::Void ClearBuffersToDefaults()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAVESCOMPUTESOLVER_CLEARBUFFERSTODEFAULTS_OFFSET))(this);
	}

	::System::Void BindAllBuffers(::System::Int32 kernel)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LEAVESCOMPUTESOLVER_BINDALLBUFFERS_OFFSET))(this, kernel);
	}

	::System::Void BindAllKernels()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAVESCOMPUTESOLVER_BINDALLKERNELS_OFFSET))(this);
	}

	static ::System::Int32 ThreadGroups(::System::Int32 count)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + LEAVESCOMPUTESOLVER_THREADGROUPS_OFFSET))(count);
	}

	::System::Void Initialize(::LeavesConfig* config, ::System::Int32 startLeafIndex, ::System::Int32 spawnCount, ::System::UInt32 randomSeed)
	{
		return ((::System::Void(*)(::PVOID, ::LeavesConfig*, ::System::Int32, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + LEAVESCOMPUTESOLVER_INITIALIZE_OFFSET))(this, config, startLeafIndex, spawnCount, randomSeed);
	}

	::System::Void UpdateCollisionBoxes(::Il2CppArray<::GpuCollisionBox>* boxes, ::System::Int32 count)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::GpuCollisionBox>*, ::System::Int32))((::PBYTE)hIl2Cpp + LEAVESCOMPUTESOLVER_UPDATECOLLISIONBOXES_OFFSET))(this, boxes, count);
	}

	::System::Void Simulate(::LeavesConfig* config, ::System::Single deltaTime, ::System::Single groundY, ::UnityEngine::Vector3 characterPosition, ::UnityEngine::Vector3 characterVelocity, ::UnityEngine::Vector4 yellowBoundsXZ, ::UnityEngine::Vector4 redBoundsXZ, ::System::Boolean enableCharacterInteraction, ::System::Boolean enableBoundaryBoxes, ::System::Boolean enableSceneCollision)
	{
		return ((::System::Void(*)(::PVOID, ::LeavesConfig*, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + LEAVESCOMPUTESOLVER_SIMULATE_OFFSET))(this, config, deltaTime, groundY, characterPosition, characterVelocity, yellowBoundsXZ, redBoundsXZ, enableCharacterInteraction, enableBoundaryBoxes, enableSceneCollision);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAVESCOMPUTESOLVER_DISPOSE_OFFSET))(this);
	}
};
