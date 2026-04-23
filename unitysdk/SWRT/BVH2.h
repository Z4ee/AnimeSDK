#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SWRT/AABB.h"
#include "unitysdk/SWRT/BVH2_AABBWrap.h"
#include "unitysdk/SWRT/BVH2_FNode.h"
#include "unitysdk/System/Object.h"

namespace SWRT { class BVH2_HNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SWRT_BVH2_BUILD_OFFSET UNITYSDK_OFFSET(0x181873E0)
#define SWRT_BVH2_CONVERTTOFNODES_OFFSET UNITYSDK_OFFSET(0x181876E0)
#define SWRT_BVH2_SPLITBYSAH_OFFSET UNITYSDK_OFFSET(0x181878E0)
#define SWRT_BVH2_SPLITBYVARIANCE_OFFSET UNITYSDK_OFFSET(0x18187E90)
#define SWRT_BVH2__CTOR_OFFSET UNITYSDK_OFFSET(0x181870F0)

namespace SWRT
{
	inline static constexpr unsigned int BVH2_TypeDefinitionIndex = 34880;

	class BVH2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::SWRT::BVH2_FNode>* _FNodes; // 0x10
		::SWRT::BVH2_HNode* _HRoot; // 0x18
		::Il2CppArray<::System::Single>* _RightCosts; // 0x20

		::System::Void _ctor(::System::Collections::Generic::List_1<::SWRT::AABB>* aabbs, ::System::Int32 primOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::SWRT::AABB>*, ::System::Int32))((::PBYTE)hIl2Cpp + SWRT_BVH2__CTOR_OFFSET))(this, aabbs, primOffset);
		}

		::SWRT::BVH2_HNode* Build(::System::Collections::Generic::List_1<::SWRT::BVH2_AABBWrap>* aabbs, ::System::Int32 begin, ::System::Int32 end, ::System::Int32 primOffset)
		{
			return ((::SWRT::BVH2_HNode*(*)(::PVOID, ::System::Collections::Generic::List_1<::SWRT::BVH2_AABBWrap>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SWRT_BVH2_BUILD_OFFSET))(this, aabbs, begin, end, primOffset);
		}

		::System::Int32 SplitByVariance(::System::Collections::Generic::List_1<::SWRT::BVH2_AABBWrap>* aabbs, ::System::Int32 begin, ::System::Int32 end)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::SWRT::BVH2_AABBWrap>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SWRT_BVH2_SPLITBYVARIANCE_OFFSET))(this, aabbs, begin, end);
		}

		::System::Int32 SplitBySAH(::System::Collections::Generic::List_1<::SWRT::BVH2_AABBWrap>* aabbs, ::System::Int32 begin, ::System::Int32 end)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::SWRT::BVH2_AABBWrap>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SWRT_BVH2_SPLITBYSAH_OFFSET))(this, aabbs, begin, end);
		}

		::System::Void ConvertToFNodes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SWRT_BVH2_CONVERTTOFNODES_OFFSET))(this);
		}
	};
}
