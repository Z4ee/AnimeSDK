#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/PageQueryInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_PAGEQUERY_GET_MAXCOUNT_OFFSET UNITYSDK_OFFSET(0x1DFEEDC0)
#define EPIC_ONLINESERVICES_PAGEQUERY_GET_STARTINDEX_OFFSET UNITYSDK_OFFSET(0x1DFEEDA0)
#define EPIC_ONLINESERVICES_PAGEQUERY_SET_1_OFFSET UNITYSDK_OFFSET(0x1DFEEE60)
#define EPIC_ONLINESERVICES_PAGEQUERY_SET_MAXCOUNT_OFFSET UNITYSDK_OFFSET(0x1DFEEDD0)
#define EPIC_ONLINESERVICES_PAGEQUERY_SET_OFFSET UNITYSDK_OFFSET(0x1DFEEDE0)
#define EPIC_ONLINESERVICES_PAGEQUERY_SET_STARTINDEX_OFFSET UNITYSDK_OFFSET(0x1DFEEDB0)
#define EPIC_ONLINESERVICES_PAGEQUERY__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFEEFB0)

namespace Epic::OnlineServices
{
	inline static constexpr unsigned int PageQuery_TypeDefinitionIndex = 35527;

	class PageQuery : public ::System::Object
	{
	public:
		::System::Int32 _StartIndex_k__BackingField; // 0x10
		::System::Int32 _MaxCount_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PAGEQUERY__CTOR_OFFSET))(this);
		}

		::System::Int32 get_StartIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PAGEQUERY_GET_STARTINDEX_OFFSET))(this);
		}

		::System::Void set_StartIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PAGEQUERY_SET_STARTINDEX_OFFSET))(this, value);
		}

		::System::Int32 get_MaxCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PAGEQUERY_GET_MAXCOUNT_OFFSET))(this);
		}

		::System::Void set_MaxCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PAGEQUERY_SET_MAXCOUNT_OFFSET))(this, value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::PageQueryInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::PageQueryInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PAGEQUERY_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PAGEQUERY_SET_1_OFFSET))(this, other);
		}
	};
}
