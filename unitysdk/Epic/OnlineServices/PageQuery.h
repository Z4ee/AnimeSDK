#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/PageQueryInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_PAGEQUERY_GET_MAXCOUNT_OFFSET UNITYSDK_OFFSET(0x1DF8ED00)
#define EPIC_ONLINESERVICES_PAGEQUERY_GET_STARTINDEX_OFFSET UNITYSDK_OFFSET(0x1DF8ECE0)
#define EPIC_ONLINESERVICES_PAGEQUERY_SET_1_OFFSET UNITYSDK_OFFSET(0x1DF8EDA0)
#define EPIC_ONLINESERVICES_PAGEQUERY_SET_MAXCOUNT_OFFSET UNITYSDK_OFFSET(0x1DF8ED10)
#define EPIC_ONLINESERVICES_PAGEQUERY_SET_OFFSET UNITYSDK_OFFSET(0x1DF8ED20)
#define EPIC_ONLINESERVICES_PAGEQUERY_SET_STARTINDEX_OFFSET UNITYSDK_OFFSET(0x1DF8ECF0)
#define EPIC_ONLINESERVICES_PAGEQUERY__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF8EEE0)

namespace Epic::OnlineServices
{
	inline static constexpr unsigned int PageQuery_TypeDefinitionIndex = 44932;

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

		::System::Void set_StartIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PAGEQUERY_SET_STARTINDEX_OFFSET))(this, a1);
		}

		::System::Int32 get_MaxCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PAGEQUERY_GET_MAXCOUNT_OFFSET))(this);
		}

		::System::Void set_MaxCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PAGEQUERY_SET_MAXCOUNT_OFFSET))(this, a1);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::PageQueryInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::PageQueryInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PAGEQUERY_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PAGEQUERY_SET_1_OFFSET))(this, a1);
		}
	};
}
