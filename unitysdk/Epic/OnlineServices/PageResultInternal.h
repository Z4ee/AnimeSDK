#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class PageResult; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PAGERESULTINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x283610)
#define EPIC_ONLINESERVICES_PAGERESULTINTERNAL_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x3EA3D0)
#define EPIC_ONLINESERVICES_PAGERESULTINTERNAL_GET_STARTINDEX_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define EPIC_ONLINESERVICES_PAGERESULTINTERNAL_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x2C19D0)
#define EPIC_ONLINESERVICES_PAGERESULTINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9C1270)
#define EPIC_ONLINESERVICES_PAGERESULTINTERNAL_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x5120D0)
#define EPIC_ONLINESERVICES_PAGERESULTINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9C1250)
#define EPIC_ONLINESERVICES_PAGERESULTINTERNAL_SET_STARTINDEX_OFFSET UNITYSDK_OFFSET(0x2B66C0)
#define EPIC_ONLINESERVICES_PAGERESULTINTERNAL_SET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x52CCD0)

namespace Epic::OnlineServices
{
	inline static constexpr unsigned int PageResultInternal_TypeDefinitionIndex = 34871;

	struct alignas(4) PageResultInternal
	{
		::System::Int32 m_StartIndex; // 0x10
		::System::Int32 m_Count; // 0x14
		::System::Int32 m_TotalCount; // 0x18

		::System::Int32 get_StartIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PAGERESULTINTERNAL_GET_STARTINDEX_OFFSET))(this);
		}

		::System::Void set_StartIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PAGERESULTINTERNAL_SET_STARTINDEX_OFFSET))(this, value);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PAGERESULTINTERNAL_GET_COUNT_OFFSET))(this);
		}

		::System::Void set_Count(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PAGERESULTINTERNAL_SET_COUNT_OFFSET))(this, value);
		}

		::System::Int32 get_TotalCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PAGERESULTINTERNAL_GET_TOTALCOUNT_OFFSET))(this);
		}

		::System::Void set_TotalCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PAGERESULTINTERNAL_SET_TOTALCOUNT_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::PageResult* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::PageResult*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PAGERESULTINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PAGERESULTINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PAGERESULTINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
