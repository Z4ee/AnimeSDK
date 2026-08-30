#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class PageQuery; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PAGEQUERYINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10F00)
#define EPIC_ONLINESERVICES_PAGEQUERYINTERNAL_GET_MAXCOUNT_OFFSET UNITYSDK_OFFSET(0x12370)
#define EPIC_ONLINESERVICES_PAGEQUERYINTERNAL_GET_STARTINDEX_OFFSET UNITYSDK_OFFSET(0x784260)
#define EPIC_ONLINESERVICES_PAGEQUERYINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3C45960)
#define EPIC_ONLINESERVICES_PAGEQUERYINTERNAL_SET_MAXCOUNT_OFFSET UNITYSDK_OFFSET(0x379F970)
#define EPIC_ONLINESERVICES_PAGEQUERYINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3C45940)
#define EPIC_ONLINESERVICES_PAGEQUERYINTERNAL_SET_STARTINDEX_OFFSET UNITYSDK_OFFSET(0xB596A0)

namespace Epic::OnlineServices
{
	inline static constexpr unsigned int PageQueryInternal_TypeDefinitionIndex = 44933;

	struct alignas(4) PageQueryInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::Int32 m_StartIndex; // 0x14
		::System::Int32 m_MaxCount; // 0x18

		::System::Int32 get_StartIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PAGEQUERYINTERNAL_GET_STARTINDEX_OFFSET))(this);
		}

		::System::Void set_StartIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PAGEQUERYINTERNAL_SET_STARTINDEX_OFFSET))(this, a1);
		}

		::System::Int32 get_MaxCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PAGEQUERYINTERNAL_GET_MAXCOUNT_OFFSET))(this);
		}

		::System::Void set_MaxCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PAGEQUERYINTERNAL_SET_MAXCOUNT_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::PageQuery* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::PageQuery*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PAGEQUERYINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PAGEQUERYINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PAGEQUERYINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
