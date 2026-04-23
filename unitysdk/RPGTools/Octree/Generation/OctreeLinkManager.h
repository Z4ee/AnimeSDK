#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_24CACD86BEDF8D9B;
namespace RPGTools::Octree::Generation { class OctreeManager; }

#define RPGTOOLS_OCTREE_GENERATION_OCTREELINKMANAGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB88B3C0)
#define RPGTOOLS_OCTREE_GENERATION_OCTREELINKMANAGER_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0xB88B1A0)
#define RPGTOOLS_OCTREE_GENERATION_OCTREELINKMANAGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB88B380)
#define RPGTOOLS_OCTREE_GENERATION_OCTREELINKMANAGER_RELINK_OFFSET UNITYSDK_OFFSET(0xB88AFF0)
#define RPGTOOLS_OCTREE_GENERATION_OCTREELINKMANAGER_UNLINK_OFFSET UNITYSDK_OFFSET(0xB88B140)
#define RPGTOOLS_OCTREE_GENERATION_OCTREELINKMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xB88B430)

namespace RPGTools::Octree::Generation
{
	inline static constexpr unsigned int OctreeLinkManager_TypeDefinitionIndex = 45546;

	class OctreeLinkManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::RPGTools::Octree::Generation::OctreeManager*>* Octrees; // 0x18
		::Class_1_24CACD86BEDF8D9B* Link; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREELINKMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Relink()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREELINKMANAGER_RELINK_OFFSET))(this);
		}

		::System::Void Unlink()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREELINKMANAGER_UNLINK_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREELINKMANAGER_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREELINKMANAGER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREELINKMANAGER_ONDISABLE_OFFSET))(this);
		}
	};
}
