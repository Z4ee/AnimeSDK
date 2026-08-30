#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class PageResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PAGERESULTINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10F00)
#define EPIC_ONLINESERVICES_PAGERESULTINTERNAL_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x784260)
#define EPIC_ONLINESERVICES_PAGERESULTINTERNAL_GET_STARTINDEX_OFFSET UNITYSDK_OFFSET(0x19050)
#define EPIC_ONLINESERVICES_PAGERESULTINTERNAL_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x12370)
#define EPIC_ONLINESERVICES_PAGERESULTINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3C45A00)
#define EPIC_ONLINESERVICES_PAGERESULTINTERNAL_SET_COUNT_OFFSET UNITYSDK_OFFSET(0xB596A0)
#define EPIC_ONLINESERVICES_PAGERESULTINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3C459E0)
#define EPIC_ONLINESERVICES_PAGERESULTINTERNAL_SET_STARTINDEX_OFFSET UNITYSDK_OFFSET(0x18EB0)
#define EPIC_ONLINESERVICES_PAGERESULTINTERNAL_SET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x379F970)

namespace Epic::OnlineServices
{
	inline static constexpr unsigned int PageResultInternal_TypeDefinitionIndex = 44935;

	struct alignas(4) PageResultInternal
	{
		::System::Int32 m_StartIndex; // 0x10
		::System::Int32 m_Count; // 0x14
		::System::Int32 m_TotalCount; // 0x18

		::System::Int32 get_StartIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PAGERESULTINTERNAL_GET_STARTINDEX_OFFSET))(this);
		}

		::System::Void set_StartIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PAGERESULTINTERNAL_SET_STARTINDEX_OFFSET))(this, a1);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PAGERESULTINTERNAL_GET_COUNT_OFFSET))(this);
		}

		::System::Void set_Count(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PAGERESULTINTERNAL_SET_COUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_TotalCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PAGERESULTINTERNAL_GET_TOTALCOUNT_OFFSET))(this);
		}

		::System::Void set_TotalCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PAGERESULTINTERNAL_SET_TOTALCOUNT_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::PageResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::PageResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PAGERESULTINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PAGERESULTINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PAGERESULTINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
