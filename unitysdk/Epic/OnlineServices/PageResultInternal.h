#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class PageResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PAGERESULTINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x667A60)
#define EPIC_ONLINESERVICES_PAGERESULTINTERNAL_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x7A7C20)
#define EPIC_ONLINESERVICES_PAGERESULTINTERNAL_GET_STARTINDEX_OFFSET UNITYSDK_OFFSET(0x167710)
#define EPIC_ONLINESERVICES_PAGERESULTINTERNAL_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x676EB0)
#define EPIC_ONLINESERVICES_PAGERESULTINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3AAEEB0)
#define EPIC_ONLINESERVICES_PAGERESULTINTERNAL_SET_COUNT_OFFSET UNITYSDK_OFFSET(0xA4B350)
#define EPIC_ONLINESERVICES_PAGERESULTINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3AAEE90)
#define EPIC_ONLINESERVICES_PAGERESULTINTERNAL_SET_STARTINDEX_OFFSET UNITYSDK_OFFSET(0x167520)
#define EPIC_ONLINESERVICES_PAGERESULTINTERNAL_SET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x38C2BD0)

namespace Epic::OnlineServices
{
	inline static constexpr unsigned int PageResultInternal_TypeDefinitionIndex = 42753;

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
