#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_TWISTSOLVER_FIXTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1F138DD0)
#define ROOTMOTION_FINALIK_TWISTSOLVER_INITIATE_OFFSET UNITYSDK_OFFSET(0x1F138100)
#define ROOTMOTION_FINALIK_TWISTSOLVER_RELAX_OFFSET UNITYSDK_OFFSET(0x1F138EB0)
#define ROOTMOTION_FINALIK_TWISTSOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F138070)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int TwistSolver_TypeDefinitionIndex = 38851;

	class TwistSolver : public ::System::Object
	{
	public:
		::UnityEngine::Transform* transform; // 0x10
		::UnityEngine::Transform* parent; // 0x18
		::Il2CppArray<::UnityEngine::Transform*>* children; // 0x20
		::System::Single weight; // 0x28
		::System::Single parentChildCrossfade; // 0x2C
		::System::Single twistAngleOffset; // 0x30
		::UnityEngine::Vector3 twistAxis; // 0x34
		::UnityEngine::Vector3 axis; // 0x40
		::UnityEngine::Vector3 axisRelativeToParentDefault; // 0x4C
		::UnityEngine::Vector3 axisRelativeToChildDefault; // 0x58
		::Il2CppArray<::UnityEngine::Quaternion>* childRotations; // 0x68
		::System::Boolean inititated; // 0x70
		::UnityEngine::Quaternion defaultLocalRotation; // 0x74
		::Il2CppArray<::UnityEngine::Quaternion>* defaultChildLocalRotations; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_TWISTSOLVER__CTOR_OFFSET))(this);
		}

		::System::Void Initiate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_TWISTSOLVER_INITIATE_OFFSET))(this);
		}

		::System::Void FixTransforms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_TWISTSOLVER_FIXTRANSFORMS_OFFSET))(this);
		}

		::System::Void Relax()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_TWISTSOLVER_RELAX_OFFSET))(this);
		}
	};
}
