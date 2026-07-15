#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Octree/Generation/OctreeNodeNativeChildren.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPGTools::Octree::Generation { class OctreeNodeData; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define RPGTOOLS_OCTREE_GENERATION_OCTREENODENATIVEDATA_METHOD_2_4F98D710DEC1E009_OFFSET UNITYSDK_OFFSET(0x39E9200)
#define RPGTOOLS_OCTREE_GENERATION_OCTREENODENATIVEDATA_METHOD_2_9FAD2B943055017C_OFFSET UNITYSDK_OFFSET(0x39E9210)
#define RPGTOOLS_OCTREE_GENERATION_OCTREENODENATIVEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x39E9190)

namespace RPGTools::Octree::Generation
{
	inline static constexpr unsigned int OctreeNodeNativeData_TypeDefinitionIndex = 47063;

	struct alignas(4) OctreeNodeNativeData
	{
		::UnityEngine::Vector3 localPosition; // 0x10
		::System::Single size; // 0x1C
		::System::UInt32 depth; // 0x20
		::System::Boolean valid; // 0x24
		::System::Boolean leaf; // 0x25
		::System::Int32 parent; // 0x28
		::RPGTools::Octree::Generation::OctreeNodeNativeChildren children; // 0x2C

		::System::Void _ctor(::RPGTools::Octree::Generation::OctreeNodeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Octree::Generation::OctreeNodeData*))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREENODENATIVEDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void Method_2_4F98D710DEC1E009(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREENODENATIVEDATA_METHOD_2_4F98D710DEC1E009_OFFSET))(this, a1);
		}

		::System::Void Method_2_9FAD2B943055017C(::System::IO::BinaryReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREENODENATIVEDATA_METHOD_2_9FAD2B943055017C_OFFSET))(this, a1);
		}
	};
}
