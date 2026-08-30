#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPGTools::Octree::Generation { class OctreeAreaData; }
namespace RPGTools::Octree::Generation { class OctreeLinkData; }
namespace System { class String; }

#define RPGTOOLS_OCTREE_GENERATION_OCTREEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B525E70)

namespace RPGTools::Octree::Generation
{
	inline static constexpr unsigned int OctreeData_TypeDefinitionIndex = 49324;

	class OctreeData : public ::System::Object
	{
	public:
		::System::Int32 count; // 0x10
		::System::Int32 maxDepth; // 0x14
		::UnityEngine::Vector3 position; // 0x18
		::UnityEngine::Quaternion rotation; // 0x24
		::Il2CppArray<::RPGTools::Octree::Generation::OctreeLinkData*>* links; // 0x38
		::Il2CppArray<::RPGTools::Octree::Generation::OctreeAreaData*>* areas; // 0x40
		::System::String* nodeFilePath; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREEDATA__CTOR_OFFSET))(this);
		}
	};
}
