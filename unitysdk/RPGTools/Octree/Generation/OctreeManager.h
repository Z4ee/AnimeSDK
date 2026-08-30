#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Octree/Generation/OctreeManager_LinkData.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_C0325AE94F8526BE;
class Class_1_C84A84118567060F;
namespace RPGTools::Octree::Generation { class OctreeAsset; }
namespace RPGTools::Octree::Generation { class OctreeLinkData; }
namespace RPGTools::Octree::Generation { class OctreeManager_AreaData; }
namespace UnityEngine { class Transform; }

#define RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER_BUILDNAVIGATIONPATH_OFFSET UNITYSDK_OFFSET(0xE808C00)
#define RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER_BUILDOCTREE_OFFSET UNITYSDK_OFFSET(0xE808230)
#define RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER_DISPOSETREE_OFFSET UNITYSDK_OFFSET(0xE8081D0)
#define RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER_GET_TREE_OFFSET UNITYSDK_OFFSET(0xE808BF0)
#define RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE808150)
#define RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0xE808000)
#define RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER__BUILDOCTREE_B__11_0_OFFSET UNITYSDK_OFFSET(0xE808EA0)
#define RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xE808E40)

namespace RPGTools::Octree::Generation
{
	inline static constexpr unsigned int OctreeManager_TypeDefinitionIndex = 49332;

	class OctreeManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean ShowDebugGizmos; // 0x18
		::UnityEngine::Transform* Origin; // 0x20
		::System::Single Size; // 0x28
		::System::Int32 MaxDepth; // 0x2C
		::UnityEngine::LayerMask LayerMask; // 0x30
		::Il2CppArray<::RPGTools::Octree::Generation::OctreeManager_LinkData>* LinkDatas; // 0x38
		::Il2CppArray<::RPGTools::Octree::Generation::OctreeManager_AreaData*>* AreaDatas; // 0x40
		::RPGTools::Octree::Generation::OctreeAsset* BuildData; // 0x48
		::Class_1_C84A84118567060F* FBAGIJDJHIB; // 0x50
		::UnityEngine::Transform* Start; // 0x58
		::UnityEngine::Transform* End; // 0x60
		::Class_1_C0325AE94F8526BE* ANJPDCEFJDJ; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER_ONDISABLE_OFFSET))(this);
		}

		::System::Void BuildOctree()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER_BUILDOCTREE_OFFSET))(this);
		}

		::System::Void DisposeTree()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER_DISPOSETREE_OFFSET))(this);
		}

		::Class_1_C84A84118567060F* get_Tree()
		{
			return ((::Class_1_C84A84118567060F*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER_GET_TREE_OFFSET))(this);
		}

		::System::Void BuildNavigationPath()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER_BUILDNAVIGATIONPATH_OFFSET))(this);
		}

		::RPGTools::Octree::Generation::OctreeLinkData* _BuildOctree_b__11_0(::RPGTools::Octree::Generation::OctreeManager_LinkData a1)
		{
			return ((::RPGTools::Octree::Generation::OctreeLinkData*(*)(::PVOID, ::RPGTools::Octree::Generation::OctreeManager_LinkData))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREEMANAGER__BUILDOCTREE_B__11_0_OFFSET))(this, a1);
		}
	};
}
