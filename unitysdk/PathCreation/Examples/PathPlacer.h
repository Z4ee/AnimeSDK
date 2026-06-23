#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PathCreation/Examples/PathPlacer_MainAxis.h"
#include "unitysdk/PathCreation/Examples/PathPlacer_PlaceObjType.h"
#include "unitysdk/PathCreation/Examples/PathPlacer_PropData.h"
#include "unitysdk/PathCreation/Examples/PathPlacer_PropPlaceType.h"
#include "unitysdk/PathCreation/Examples/PathSceneTool.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }

#define PATHCREATION_EXAMPLES_PATHPLACER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DABBF50)

namespace PathCreation::Examples
{
	inline static constexpr unsigned int PathPlacer_TypeDefinitionIndex = 37460;

	class PathPlacer : public ::PathCreation::Examples::PathSceneTool
	{
	public:
		// static const ::System::Single minSpacing; // 0x0
		::PathCreation::Examples::PathPlacer_PlaceObjType m_PlaceObjType; // 0x30
		::PathCreation::Examples::PathPlacer_PropPlaceType m_PropPlaceType; // 0x34
		::UnityEngine::GameObject* m_Holder; // 0x38
		::System::Collections::Generic::List_1<::PathCreation::Examples::PathPlacer_PropData>* m_PrefabDataList; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* m_PrefabList; // 0x48
		::UnityEngine::GameObject* m_Prefab; // 0x50
		::UnityEngine::Vector3 m_RotateOffset; // 0x58
		::System::Single m_Spacing; // 0x64
		::UnityEngine::Vector3 m_PositionOffset; // 0x68
		::System::Single m_RailWayLikeThickness; // 0x74
		::Il2CppArray<::UnityEngine::Material*>* m_Materials; // 0x78
		::System::Boolean m_UseGeneratedNormal; // 0x80
		::PathCreation::Examples::PathPlacer_MainAxis axis; // 0x84
		::System::Boolean snapToCollider; // 0x88
		::System::Single snapColliderOffset; // 0x8C
		::UnityEngine::LayerMask snapColliderLayer; // 0x90
		::System::Boolean meshAutoScale; // 0x94
		::System::Boolean isNeedSave; // 0x95
		::UnityEngine::MeshFilter* m_MeshFilter; // 0x98
		::UnityEngine::MeshRenderer* m_MeshRenderer; // 0xA0
		::UnityEngine::GameObject* m_MeshHolder; // 0xA8
		::UnityEngine::Mesh* m_Mesh; // 0xB0
		::System::Boolean softEdge; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_EXAMPLES_PATHPLACER__CTOR_OFFSET))(this);
		}
	};
}
