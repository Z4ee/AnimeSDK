#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPGTools::Octree::Generation { class OctreeData; }

#define RPGTOOLS_OCTREE_GENERATION_OCTREEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0xB88AFC0)

namespace RPGTools::Octree::Generation
{
	inline static constexpr unsigned int OctreeAsset_TypeDefinitionIndex = 45535;

	class OctreeAsset : public ::UnityEngine::ScriptableObject
	{
	public:
		::RPGTools::Octree::Generation::OctreeData* TreeData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREEASSET__CTOR_OFFSET))(this);
		}
	};
}
