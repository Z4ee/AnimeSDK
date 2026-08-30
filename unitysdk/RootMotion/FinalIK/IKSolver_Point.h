#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_IKSOLVER_POINT_FIXTRANSFORM_OFFSET UNITYSDK_OFFSET(0x196AA6A0)
#define ROOTMOTION_FINALIK_IKSOLVER_POINT_STOREDEFAULTLOCALSTATE_OFFSET UNITYSDK_OFFSET(0x196AA610)
#define ROOTMOTION_FINALIK_IKSOLVER_POINT_UPDATESOLVERLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x196AA840)
#define ROOTMOTION_FINALIK_IKSOLVER_POINT_UPDATESOLVERLOCALSTATE_OFFSET UNITYSDK_OFFSET(0x196AA930)
#define ROOTMOTION_FINALIK_IKSOLVER_POINT_UPDATESOLVERPOSITION_OFFSET UNITYSDK_OFFSET(0x196AA7E0)
#define ROOTMOTION_FINALIK_IKSOLVER_POINT_UPDATESOLVERSTATE_OFFSET UNITYSDK_OFFSET(0x196AA8A0)
#define ROOTMOTION_FINALIK_IKSOLVER_POINT__CTOR_OFFSET UNITYSDK_OFFSET(0x196AA410)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolver_Point_TypeDefinitionIndex = 44876;

	class IKSolver_Point : public ::System::Object
	{
	public:
		::UnityEngine::Transform* transform; // 0x10
		::System::Single weight; // 0x18
		::UnityEngine::Vector3 solverPosition; // 0x1C
		::UnityEngine::Quaternion solverRotation; // 0x28
		::UnityEngine::Vector3 defaultLocalPosition; // 0x38
		::UnityEngine::Quaternion defaultLocalRotation; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_POINT__CTOR_OFFSET))(this);
		}

		::System::Void StoreDefaultLocalState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_POINT_STOREDEFAULTLOCALSTATE_OFFSET))(this);
		}

		::System::Void FixTransform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_POINT_FIXTRANSFORM_OFFSET))(this);
		}

		::System::Void UpdateSolverPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_POINT_UPDATESOLVERPOSITION_OFFSET))(this);
		}

		::System::Void UpdateSolverLocalPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_POINT_UPDATESOLVERLOCALPOSITION_OFFSET))(this);
		}

		::System::Void UpdateSolverState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_POINT_UPDATESOLVERSTATE_OFFSET))(this);
		}

		::System::Void UpdateSolverLocalState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVER_POINT_UPDATESOLVERLOCALSTATE_OFFSET))(this);
		}
	};
}
