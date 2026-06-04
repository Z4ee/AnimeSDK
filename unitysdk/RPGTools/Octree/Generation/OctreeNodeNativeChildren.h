#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define RPGTOOLS_OCTREE_GENERATION_OCTREENODENATIVECHILDREN_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x148740)
#define RPGTOOLS_OCTREE_GENERATION_OCTREENODENATIVECHILDREN_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x148750)
#define RPGTOOLS_OCTREE_GENERATION_OCTREENODENATIVECHILDREN_METHOD_2_0F3ED20595B696E9_OFFSET UNITYSDK_OFFSET(0x148780)
#define RPGTOOLS_OCTREE_GENERATION_OCTREENODENATIVECHILDREN_METHOD_2_9A1147DF38EDFEA5_OFFSET UNITYSDK_OFFSET(0x148770)
#define RPGTOOLS_OCTREE_GENERATION_OCTREENODENATIVECHILDREN_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x148760)

namespace RPGTools::Octree::Generation
{
	inline static constexpr unsigned int OctreeNodeNativeChildren_TypeDefinitionIndex = 46123;

	struct alignas(4) OctreeNodeNativeChildren
	{
		::System::Int32 Child0; // 0x10
		::System::Int32 Child1; // 0x14
		::System::Int32 Child2; // 0x18
		::System::Int32 Child3; // 0x1C
		::System::Int32 Child4; // 0x20
		::System::Int32 Child5; // 0x24
		::System::Int32 Child6; // 0x28
		::System::Int32 Child7; // 0x2C

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREENODENATIVECHILDREN_GET_COUNT_OFFSET))(this);
		}

		::System::Int32 get_Item(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREENODENATIVECHILDREN_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREENODENATIVECHILDREN_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_9A1147DF38EDFEA5(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREENODENATIVECHILDREN_METHOD_2_9A1147DF38EDFEA5_OFFSET))(this, a1);
		}

		::System::Void Method_2_0F3ED20595B696E9(::System::IO::BinaryReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREENODENATIVECHILDREN_METHOD_2_0F3ED20595B696E9_OFFSET))(this, a1);
		}
	};
}
