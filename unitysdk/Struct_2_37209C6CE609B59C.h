#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Octree/Generation/OctreeNodeNativeChildren.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_C84A84118567060F;

#define STRUCT_2_37209C6CE609B59C__CTOR_OFFSET UNITYSDK_OFFSET(0x2BCEA60)

inline static constexpr unsigned int Struct_2_37209C6CE609B59C_TypeDefinitionIndex = 46135;

struct alignas(4) Struct_2_37209C6CE609B59C
{
	::UnityEngine::Vector3 Field_2_0; // 0x10
	::UnityEngine::Vector3 Field_2_1; // 0x1C
	::System::Single Field_2_2; // 0x28
	::System::UInt32 Field_2_3; // 0x2C
	::System::Boolean Field_2_4; // 0x30
	::System::Boolean Field_2_5; // 0x31
	::System::Int32 Field_2_6; // 0x34
	::RPGTools::Octree::Generation::OctreeNodeNativeChildren Field_2_7; // 0x38

	/*
	::System::Void _ctor(::Class_1_C84A84118567060F* a1, ::RPGTools::Octree::Generation::OctreeNodeNativeData a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C84A84118567060F*, ::RPGTools::Octree::Generation::OctreeNodeNativeData))((::PBYTE)hIl2Cpp + STRUCT_2_37209C6CE609B59C__CTOR_OFFSET))(this, a1, a2);
	}
	*/
};
