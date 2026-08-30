#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_IKSOLVER_TIPPOINT_GET_TIPPOSITION_OFFSET UNITYSDK_OFFSET(0xB3099A0)
#define ROOTMOTION_FINALIK_IKSOLVER_TIPPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0xB312DE0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolver_TipPoint_TypeDefinitionIndex = 44875;

	class IKSolver_TipPoint : public ::System::Object
	{
	public:
		::UnityEngine::Transform* tipTransform; // 0x10
		::UnityEngine::Vector3 tipOffset; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_TIPPOINT__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_TipPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_TIPPOINT_GET_TIPPOSITION_OFFSET))(this);
		}
	};
}
