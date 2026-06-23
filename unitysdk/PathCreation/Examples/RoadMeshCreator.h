#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PathCreation/Examples/PathSceneTool.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }

#define PATHCREATION_EXAMPLES_ROADMESHCREATOR_ASSIGNMATERIALS_OFFSET UNITYSDK_OFFSET(0x1DABCD70)
#define PATHCREATION_EXAMPLES_ROADMESHCREATOR_ASSIGNMESHCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x1DABC590)
#define PATHCREATION_EXAMPLES_ROADMESHCREATOR_CREATEROADMESH_OFFSET UNITYSDK_OFFSET(0x1DABD200)
#define PATHCREATION_EXAMPLES_ROADMESHCREATOR_PATHUPDATED_OFFSET UNITYSDK_OFFSET(0x1DABC440)
#define PATHCREATION_EXAMPLES_ROADMESHCREATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1DABEBD0)

namespace PathCreation::Examples
{
	inline static constexpr unsigned int RoadMeshCreator_TypeDefinitionIndex = 37467;

	class RoadMeshCreator : public ::PathCreation::Examples::PathSceneTool
	{
	public:
		::System::Single roadWidth; // 0x30
		::System::Single thickness; // 0x34
		::System::Boolean flattenSurface; // 0x38
		::UnityEngine::Material* roadMaterial; // 0x40
		::UnityEngine::Material* undersideMaterial; // 0x48
		::System::Single textureTiling; // 0x50
		::UnityEngine::GameObject* meshHolder; // 0x58
		::UnityEngine::MeshFilter* meshFilter; // 0x60
		::UnityEngine::MeshRenderer* meshRenderer; // 0x68
		::UnityEngine::Mesh* mesh; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_EXAMPLES_ROADMESHCREATOR__CTOR_OFFSET))(this);
		}

		::System::Void PathUpdated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_EXAMPLES_ROADMESHCREATOR_PATHUPDATED_OFFSET))(this);
		}

		::System::Void CreateRoadMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_EXAMPLES_ROADMESHCREATOR_CREATEROADMESH_OFFSET))(this);
		}

		::System::Void AssignMeshComponents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_EXAMPLES_ROADMESHCREATOR_ASSIGNMESHCOMPONENTS_OFFSET))(this);
		}

		::System::Void AssignMaterials()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_EXAMPLES_ROADMESHCREATOR_ASSIGNMATERIALS_OFFSET))(this);
		}
	};
}
