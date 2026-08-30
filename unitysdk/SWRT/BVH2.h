#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SWRT/AABB.h"
#include "unitysdk/SWRT/BVH2_AABBWrap.h"
#include "unitysdk/SWRT/BVH2_FNode.h"
#include "unitysdk/System/Object.h"

namespace SWRT { class BVH2_HNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SWRT_BVH2_BUILD_OFFSET UNITYSDK_OFFSET(0x1C6F9220)
#define SWRT_BVH2_CONVERTTOFNODES_OFFSET UNITYSDK_OFFSET(0x1C6F95C0)
#define SWRT_BVH2_SPLITBYSAH_OFFSET UNITYSDK_OFFSET(0x1C6F9830)
#define SWRT_BVH2_SPLITBYVARIANCE_OFFSET UNITYSDK_OFFSET(0x1C6F9D90)
#define SWRT_BVH2__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F8EA0)

namespace SWRT
{
	inline static constexpr unsigned int BVH2_TypeDefinitionIndex = 36806;

	class BVH2 : public ::System::Object
	{
	public:
		::SWRT::BVH2_HNode* _HRoot; // 0x10
		::Il2CppArray<::System::Single>* _RightCosts; // 0x18
		::System::Collections::Generic::List_1<::SWRT::BVH2_FNode>* _FNodes; // 0x20

		::System::Void _ctor(::System::Collections::Generic::List_1<::SWRT::AABB>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::SWRT::AABB>*, ::System::Int32))((::PBYTE)hIl2Cpp + SWRT_BVH2__CTOR_OFFSET))(this, a1, a2);
		}

		::SWRT::BVH2_HNode* Build(::System::Collections::Generic::List_1<::SWRT::BVH2_AABBWrap>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::SWRT::BVH2_HNode*(*)(::PVOID, ::System::Collections::Generic::List_1<::SWRT::BVH2_AABBWrap>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SWRT_BVH2_BUILD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 SplitByVariance(::System::Collections::Generic::List_1<::SWRT::BVH2_AABBWrap>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::SWRT::BVH2_AABBWrap>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SWRT_BVH2_SPLITBYVARIANCE_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 SplitBySAH(::System::Collections::Generic::List_1<::SWRT::BVH2_AABBWrap>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::SWRT::BVH2_AABBWrap>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SWRT_BVH2_SPLITBYSAH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ConvertToFNodes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SWRT_BVH2_CONVERTTOFNODES_OFFSET))(this);
		}
	};
}
