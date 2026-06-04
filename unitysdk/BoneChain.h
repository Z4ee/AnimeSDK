#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define BONECHAIN_GET_MAXDEFORMATIONANGLE_OFFSET UNITYSDK_OFFSET(0xB039B70)
#define BONECHAIN__CTOR_OFFSET UNITYSDK_OFFSET(0xB039B80)

inline static constexpr unsigned int BoneChain_TypeDefinitionIndex = 44597;

class BoneChain : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* bones; // 0x10
	::System::Single displacementConstraint; // 0x18
	::System::Single maxDeformationAngle; // 0x1C
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* originalLocalPositions; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* originalLocalRotations; // 0x28
	::System::Collections::Generic::List_1<::System::Single>* boneLengths; // 0x30
	::System::Collections::Generic::List_1<::System::Single>* originalBoneLengths; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* velocities; // 0x40
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* positionOffsets; // 0x48
	::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* rotationOffsets; // 0x50
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* originalDirections; // 0x58
	::System::Collections::Generic::List_1<::System::Single>* swingPhases; // 0x60
	::UnityEngine::Vector3 externalForce; // 0x68
	::System::Single externalForceDuration; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BONECHAIN__CTOR_OFFSET))(this);
	}

	::System::Single get_MaxDeformationAngle()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BONECHAIN_GET_MAXDEFORMATIONANGLE_OFFSET))(this);
	}
};
