#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SWRT/BVH8_CWNode.h"
#include "unitysdk/SWRT/BVH8_Decision.h"
#include "unitysdk/System/Object.h"

namespace SWRT { class BVH2; }
namespace SWRT { class BVH8_WNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SWRT_BVH8_BUILD_OFFSET UNITYSDK_OFFSET(0x18F2F250)
#define SWRT_BVH8_CALCULATEDECISION_OFFSET UNITYSDK_OFFSET(0x18F2E950)
#define SWRT_BVH8_CONVERTTOCWBVH_OFFSET UNITYSDK_OFFSET(0x18F2FC10)
#define SWRT_BVH8_GATHERPRIMITIVES_OFFSET UNITYSDK_OFFSET(0x18F30DF0)
#define SWRT_BVH8_GETCHILDREN_OFFSET UNITYSDK_OFFSET(0x18F303F0)
#define SWRT_BVH8_NEXTPOWEROFTWOFLOATUNSAFE_OFFSET UNITYSDK_OFFSET(0x18F30ED0)
#define SWRT_BVH8_SORTCHILDREN_OFFSET UNITYSDK_OFFSET(0x18F305A0)
#define SWRT_BVH8__CTOR_OFFSET UNITYSDK_OFFSET(0x18F2E5D0)

namespace SWRT
{
	inline static constexpr unsigned int BVH8_TypeDefinitionIndex = 35168;

	class BVH8 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::SWRT::BVH8_CWNode>* _CWNodes; // 0x10
		::Il2CppArray<::System::Single>* _Cost; // 0x18
		::Il2CppArray<::System::Boolean>* _SlotEmpty; // 0x20
		::Il2CppArray<::System::Int32>* _Assignment; // 0x28
		::System::Collections::Generic::List_1<::SWRT::BVH8_WNode*>* _WNodes; // 0x30
		::Il2CppArray<::SWRT::BVH8_Decision>* _Decisions; // 0x38
		::System::Collections::Generic::List_1<::System::Int32>* _PrimIndices; // 0x40
		::Il2CppArray<::System::Int32>* _ChildrenCopy; // 0x48

		::System::Void _ctor(::SWRT::BVH2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SWRT::BVH2*))((::PBYTE)hIl2Cpp + SWRT_BVH8__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 CalculateDecision(::SWRT::BVH2* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::SWRT::BVH2*, ::System::Int32))((::PBYTE)hIl2Cpp + SWRT_BVH8_CALCULATEDECISION_OFFSET))(this, a1, a2);
		}

		::System::Void GetChildren(::SWRT::BVH2* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Int32>* a4, ::System::Int32& a5)
		{
			return ((::System::Void(*)(::PVOID, ::SWRT::BVH2*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::System::Int32&))((::PBYTE)hIl2Cpp + SWRT_BVH8_GETCHILDREN_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void SortChildren(::SWRT::BVH2* a1, ::System::Int32 a2, ::Il2CppArray<::System::Int32>* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::SWRT::BVH2*, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + SWRT_BVH8_SORTCHILDREN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 GatherPrimitives(::SWRT::BVH2* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::SWRT::BVH2*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + SWRT_BVH8_GATHERPRIMITIVES_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Build(::SWRT::BVH2* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::SWRT::BVH2*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SWRT_BVH8_BUILD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ConvertToCWBVH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SWRT_BVH8_CONVERTTOCWBVH_OFFSET))(this);
		}

		::System::Single NextPowerOfTwoFloatUnsafe(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SWRT_BVH8_NEXTPOWEROFTWOFLOATUNSAFE_OFFSET))(this, a1);
		}
	};
}
