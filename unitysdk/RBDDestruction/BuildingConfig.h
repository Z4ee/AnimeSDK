#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }

#define RBDDESTRUCTION_BUILDINGCONFIG_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x191039C0)
#define RBDDESTRUCTION_BUILDINGCONFIG_ONENABLE_OFFSET UNITYSDK_OFFSET(0x19103470)
#define RBDDESTRUCTION_BUILDINGCONFIG_RESET_OFFSET UNITYSDK_OFFSET(0x19103A00)
#define RBDDESTRUCTION_BUILDINGCONFIG_SWITCH_OFFSET UNITYSDK_OFFSET(0x19103830)
#define RBDDESTRUCTION_BUILDINGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19103B80)

namespace RBDDestruction
{
	inline static constexpr unsigned int BuildingConfig_TypeDefinitionIndex = 29697;

	class BuildingConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Mesh* originalBuildingMesh; // 0x18
		::System::Int32 selectedIndex; // 0x20
		::System::Int32 collectionID; // 0x24
		::System::Boolean isActive; // 0x28
		::System::Boolean isDestroyed; // 0x29
		::UnityEngine::BoxCollider* buildingCollider; // 0x30
		::UnityEngine::MeshRenderer* mr; // 0x38
		::UnityEngine::MeshFilter* mf; // 0x40
		::UnityEngine::MaterialPropertyBlock* mpb; // 0x48
		::System::Int32 _CollectionID; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_BUILDINGCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_BUILDINGCONFIG_ONENABLE_OFFSET))(this);
		}

		::System::Void Switch(::System::Boolean open)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_BUILDINGCONFIG_SWITCH_OFFSET))(this, open);
		}

		::System::Void Activate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_BUILDINGCONFIG_ACTIVATE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_BUILDINGCONFIG_RESET_OFFSET))(this);
		}
	};
}
