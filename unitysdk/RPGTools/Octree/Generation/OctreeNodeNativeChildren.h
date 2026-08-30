#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define RPGTOOLS_OCTREE_GENERATION_OCTREENODENATIVECHILDREN_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x379DEC0)
#define RPGTOOLS_OCTREE_GENERATION_OCTREENODENATIVECHILDREN_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x3B89C50)
#define RPGTOOLS_OCTREE_GENERATION_OCTREENODENATIVECHILDREN_METHOD_2_206F77E5E3F223C5_OFFSET UNITYSDK_OFFSET(0x3B89C80)
#define RPGTOOLS_OCTREE_GENERATION_OCTREENODENATIVECHILDREN_METHOD_2_276E1CDD7DFA6E40_OFFSET UNITYSDK_OFFSET(0x3B89C70)
#define RPGTOOLS_OCTREE_GENERATION_OCTREENODENATIVECHILDREN_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x3B89C60)

namespace RPGTools::Octree::Generation
{
	inline static constexpr unsigned int OctreeNodeNativeChildren_TypeDefinitionIndex = 49325;

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

		::System::Void Method_2_276E1CDD7DFA6E40(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREENODENATIVECHILDREN_METHOD_2_276E1CDD7DFA6E40_OFFSET))(this, a1);
		}

		::System::Void Method_2_206F77E5E3F223C5(::System::IO::BinaryReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + RPGTOOLS_OCTREE_GENERATION_OCTREENODENATIVECHILDREN_METHOD_2_206F77E5E3F223C5_OFFSET))(this, a1);
		}
	};
}
