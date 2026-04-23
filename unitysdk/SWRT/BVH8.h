#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SWRT/BVH8_CWNode.h"
#include "unitysdk/SWRT/BVH8_Decision.h"
#include "unitysdk/System/Object.h"

namespace SWRT { class BVH2; }
namespace SWRT { class BVH8_WNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SWRT_BVH8_BUILD_OFFSET UNITYSDK_OFFSET(0x18188E30)
#define SWRT_BVH8_CALCULATEDECISION_OFFSET UNITYSDK_OFFSET(0x181884F0)
#define SWRT_BVH8_CONVERTTOCWBVH_OFFSET UNITYSDK_OFFSET(0x181898A0)
#define SWRT_BVH8_GATHERPRIMITIVES_OFFSET UNITYSDK_OFFSET(0x1818AC90)
#define SWRT_BVH8_GETCHILDREN_OFFSET UNITYSDK_OFFSET(0x1818A170)
#define SWRT_BVH8_NEXTPOWEROFTWOFLOATUNSAFE_OFFSET UNITYSDK_OFFSET(0x1818AD30)
#define SWRT_BVH8_SORTCHILDREN_OFFSET UNITYSDK_OFFSET(0x1818A390)
#define SWRT_BVH8__CTOR_OFFSET UNITYSDK_OFFSET(0x181881C0)

namespace SWRT
{
	inline static constexpr unsigned int BVH8_TypeDefinitionIndex = 34885;

	class BVH8 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::SWRT::BVH8_CWNode>* _CWNodes; // 0x10
		::Il2CppArray<::System::Int32>* _Assignment; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* _PrimIndices; // 0x20
		::Il2CppArray<::System::Int32>* _ChildrenCopy; // 0x28
		::Il2CppArray<::System::Single>* _Cost; // 0x30
		::Il2CppArray<::SWRT::BVH8_Decision>* _Decisions; // 0x38
		::System::Collections::Generic::List_1<::SWRT::BVH8_WNode*>* _WNodes; // 0x40
		::Il2CppArray<::System::Boolean>* _SlotEmpty; // 0x48

		::System::Void _ctor(::SWRT::BVH2* bvh2)
		{
			return ((::System::Void(*)(::PVOID, ::SWRT::BVH2*))((::PBYTE)hIl2Cpp + SWRT_BVH8__CTOR_OFFSET))(this, bvh2);
		}

		::System::Int32 CalculateDecision(::SWRT::BVH2* bvh2, ::System::Int32 nodeIndex2)
		{
			return ((::System::Int32(*)(::PVOID, ::SWRT::BVH2*, ::System::Int32))((::PBYTE)hIl2Cpp + SWRT_BVH8_CALCULATEDECISION_OFFSET))(this, bvh2, nodeIndex2);
		}

		::System::Void GetChildren(::SWRT::BVH2* bvh2, ::System::Int32 nodeIndex2, ::System::Int32 i, ::Il2CppArray<::System::Int32>* children, ::System::Int32& childCount)
		{
			return ((::System::Void(*)(::PVOID, ::SWRT::BVH2*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::System::Int32&))((::PBYTE)hIl2Cpp + SWRT_BVH8_GETCHILDREN_OFFSET))(this, bvh2, nodeIndex2, i, children, childCount);
		}

		::System::Void SortChildren(::SWRT::BVH2* bvh2, ::System::Int32 nodeIndex2, ::Il2CppArray<::System::Int32>* children, ::System::Int32 childCount)
		{
			return ((::System::Void(*)(::PVOID, ::SWRT::BVH2*, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + SWRT_BVH8_SORTCHILDREN_OFFSET))(this, bvh2, nodeIndex2, children, childCount);
		}

		::System::Int32 GatherPrimitives(::SWRT::BVH2* bvh2, ::System::Int32 nodeIndex2, ::System::Collections::Generic::List_1<::System::Int32>* primIndices)
		{
			return ((::System::Int32(*)(::PVOID, ::SWRT::BVH2*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + SWRT_BVH8_GATHERPRIMITIVES_OFFSET))(this, bvh2, nodeIndex2, primIndices);
		}

		::System::Void Build(::SWRT::BVH2* bvh2, ::System::Int32 nodeIndex2, ::System::Int32 nodeIndex8)
		{
			return ((::System::Void(*)(::PVOID, ::SWRT::BVH2*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SWRT_BVH8_BUILD_OFFSET))(this, bvh2, nodeIndex2, nodeIndex8);
		}

		::System::Void ConvertToCWBVH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SWRT_BVH8_CONVERTTOCWBVH_OFFSET))(this);
		}

		::System::Single NextPowerOfTwoFloatUnsafe(::System::Single x)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SWRT_BVH8_NEXTPOWEROFTWOFLOATUNSAFE_OFFSET))(this, x);
		}
	};
}
