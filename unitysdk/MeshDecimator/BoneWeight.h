#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define MESHDECIMATOR_BONEWEIGHT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA0D8B0)
#define MESHDECIMATOR_BONEWEIGHT_EQUALS_OFFSET UNITYSDK_OFFSET(0xA0D810)
#define MESHDECIMATOR_BONEWEIGHT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA0D760)
#define MESHDECIMATOR_BONEWEIGHT_MERGEBONEWEIGHT_OFFSET UNITYSDK_OFFSET(0xA0D700)
#define MESHDECIMATOR_BONEWEIGHT_MERGE_OFFSET UNITYSDK_OFFSET(0x1E273480)
#define MESHDECIMATOR_BONEWEIGHT_NORMALIZE_OFFSET UNITYSDK_OFFSET(0xA0D710)
#define MESHDECIMATOR_BONEWEIGHT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1E272A50)
#define MESHDECIMATOR_BONEWEIGHT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1E272C10)
#define MESHDECIMATOR_BONEWEIGHT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1E272BD0)
#define MESHDECIMATOR_BONEWEIGHT_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA0D910)
#define MESHDECIMATOR_BONEWEIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0xA0D6C0)

namespace MeshDecimator
{
	inline static constexpr unsigned int BoneWeight_TypeDefinitionIndex = 35473;

	struct alignas(4) BoneWeight
	{
		::System::Int32 boneIndex0; // 0x10
		::System::Int32 boneIndex1; // 0x14
		::System::Int32 boneIndex2; // 0x18
		::System::Int32 boneIndex3; // 0x1C
		::System::Single boneWeight0; // 0x20
		::System::Single boneWeight1; // 0x24
		::System::Single boneWeight2; // 0x28
		::System::Single boneWeight3; // 0x2C

		::System::Void _ctor(::System::Int32 boneIndex0, ::System::Int32 boneIndex1, ::System::Int32 boneIndex2, ::System::Int32 boneIndex3, ::System::Single boneWeight0, ::System::Single boneWeight1, ::System::Single boneWeight2, ::System::Single boneWeight3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MESHDECIMATOR_BONEWEIGHT__CTOR_OFFSET))(this, boneIndex0, boneIndex1, boneIndex2, boneIndex3, boneWeight0, boneWeight1, boneWeight2, boneWeight3);
		}

		static ::System::Boolean op_Equality(::MeshDecimator::BoneWeight lhs, ::MeshDecimator::BoneWeight rhs)
		{
			return ((::System::Boolean(*)(::MeshDecimator::BoneWeight, ::MeshDecimator::BoneWeight))((::PBYTE)hIl2Cpp + MESHDECIMATOR_BONEWEIGHT_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::MeshDecimator::BoneWeight lhs, ::MeshDecimator::BoneWeight rhs)
		{
			return ((::System::Boolean(*)(::MeshDecimator::BoneWeight, ::MeshDecimator::BoneWeight))((::PBYTE)hIl2Cpp + MESHDECIMATOR_BONEWEIGHT_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		/*
		static ::MeshDecimator::BoneWeight op_Implicit(::UnityEngine::BoneWeight bw)
		{
			return ((::MeshDecimator::BoneWeight(*)(::UnityEngine::BoneWeight))((::PBYTE)hIl2Cpp + MESHDECIMATOR_BONEWEIGHT_OP_IMPLICIT_OFFSET))(bw);
		}
		*/

		::System::Void MergeBoneWeight(::System::Int32 boneIndex, ::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MESHDECIMATOR_BONEWEIGHT_MERGEBONEWEIGHT_OFFSET))(this, boneIndex, weight);
		}

		::System::Void Normalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_BONEWEIGHT_NORMALIZE_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_BONEWEIGHT_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MESHDECIMATOR_BONEWEIGHT_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::MeshDecimator::BoneWeight other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MeshDecimator::BoneWeight))((::PBYTE)hIl2Cpp + MESHDECIMATOR_BONEWEIGHT_EQUALS_1_OFFSET))(this, other);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_BONEWEIGHT_TOSTRING_OFFSET))(this);
		}

		static ::System::Void Merge(::MeshDecimator::BoneWeight& a, ::MeshDecimator::BoneWeight& b)
		{
			return ((::System::Void(*)(::MeshDecimator::BoneWeight&, ::MeshDecimator::BoneWeight&))((::PBYTE)hIl2Cpp + MESHDECIMATOR_BONEWEIGHT_MERGE_OFFSET))(a, b);
		}
	};
}
