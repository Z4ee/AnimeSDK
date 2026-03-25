#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPGTOOLS_OCTREE_GENERATION_OCTREENODEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAB18840)

namespace RPGTools::Octree::Generation
{
	inline static constexpr unsigned int OctreeNodeData_TypeDefinitionIndex = 39627;

	class OctreeNodeData : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 localPosition; // 0x10
		::System::Single size; // 0x1C
		::System::UInt32 depth; // 0x20
		::System::Boolean valid; // 0x24
		::Il2CppArray<::RPGTools::Octree::Generation::OctreeNodeData*>* children; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREENODEDATA__CTOR_OFFSET))(this);
		}
	};
}
