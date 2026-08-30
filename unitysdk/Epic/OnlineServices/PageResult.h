#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/PageResultInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_PAGERESULT_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xB3B7D80)
#define EPIC_ONLINESERVICES_PAGERESULT_GET_STARTINDEX_OFFSET UNITYSDK_OFFSET(0xB3B7D60)
#define EPIC_ONLINESERVICES_PAGERESULT_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xB3B7DA0)
#define EPIC_ONLINESERVICES_PAGERESULT_SET_1_OFFSET UNITYSDK_OFFSET(0xB3B7E90)
#define EPIC_ONLINESERVICES_PAGERESULT_SET_COUNT_OFFSET UNITYSDK_OFFSET(0xB3B7D90)
#define EPIC_ONLINESERVICES_PAGERESULT_SET_OFFSET UNITYSDK_OFFSET(0xB3B7DC0)
#define EPIC_ONLINESERVICES_PAGERESULT_SET_STARTINDEX_OFFSET UNITYSDK_OFFSET(0xB3B7D70)
#define EPIC_ONLINESERVICES_PAGERESULT_SET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xB3B7DB0)
#define EPIC_ONLINESERVICES_PAGERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0xB3B7FE0)

namespace Epic::OnlineServices
{
	inline static constexpr unsigned int PageResult_TypeDefinitionIndex = 44934;

	class PageResult : public ::System::Object
	{
	public:
		::System::Int32 _StartIndex_k__BackingField; // 0x10
		::System::Int32 _Count_k__BackingField; // 0x14
		::System::Int32 _TotalCount_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PAGERESULT__CTOR_OFFSET))(this);
		}

		::System::Int32 get_StartIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PAGERESULT_GET_STARTINDEX_OFFSET))(this);
		}

		::System::Void set_StartIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PAGERESULT_SET_STARTINDEX_OFFSET))(this, a1);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PAGERESULT_GET_COUNT_OFFSET))(this);
		}

		::System::Void set_Count(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PAGERESULT_SET_COUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_TotalCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PAGERESULT_GET_TOTALCOUNT_OFFSET))(this);
		}

		::System::Void set_TotalCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PAGERESULT_SET_TOTALCOUNT_OFFSET))(this, a1);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::PageResultInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::PageResultInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PAGERESULT_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PAGERESULT_SET_1_OFFSET))(this, a1);
		}
	};
}
