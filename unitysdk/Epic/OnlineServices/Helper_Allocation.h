#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_HELPER_ALLOCATION_GET_CACHEDDATA_OFFSET UNITYSDK_OFFSET(0x1D690AD0)
#define EPIC_ONLINESERVICES_HELPER_ALLOCATION_GET_ISCACHEDARRAYELEMENTALLOCATED_OFFSET UNITYSDK_OFFSET(0x1D690AF0)
#define EPIC_ONLINESERVICES_HELPER_ALLOCATION_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1D690AB0)
#define EPIC_ONLINESERVICES_HELPER_ALLOCATION_SETCACHEDDATA_OFFSET UNITYSDK_OFFSET(0x1D690B10)
#define EPIC_ONLINESERVICES_HELPER_ALLOCATION_SET_CACHEDDATA_OFFSET UNITYSDK_OFFSET(0x1D690AE0)
#define EPIC_ONLINESERVICES_HELPER_ALLOCATION_SET_ISCACHEDARRAYELEMENTALLOCATED_OFFSET UNITYSDK_OFFSET(0x1D690B00)
#define EPIC_ONLINESERVICES_HELPER_ALLOCATION_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x1D690AC0)
#define EPIC_ONLINESERVICES_HELPER_ALLOCATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D68FF20)

namespace Epic::OnlineServices
{
	inline static constexpr unsigned int Helper_Allocation_TypeDefinitionIndex = 44914;

	class Helper_Allocation : public ::System::Object
	{
	public:
		::System::Object* _CachedData_k__BackingField; // 0x10
		::System::Int32 _Size_k__BackingField; // 0x18
		::System::Nullable_1<::System::Boolean> _IsCachedArrayElementAllocated_k__BackingField; // 0x1C

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_ALLOCATION__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_Size()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_ALLOCATION_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_Size(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_ALLOCATION_SET_SIZE_OFFSET))(this, a1);
		}

		::System::Object* get_CachedData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_ALLOCATION_GET_CACHEDDATA_OFFSET))(this);
		}

		::System::Void set_CachedData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_ALLOCATION_SET_CACHEDDATA_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::Boolean> get_IsCachedArrayElementAllocated()
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_ALLOCATION_GET_ISCACHEDARRAYELEMENTALLOCATED_OFFSET))(this);
		}

		::System::Void set_IsCachedArrayElementAllocated(::System::Nullable_1<::System::Boolean> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_ALLOCATION_SET_ISCACHEDARRAYELEMENTALLOCATED_OFFSET))(this, a1);
		}

		::System::Void SetCachedData(::System::Object* a1, ::System::Nullable_1<::System::Boolean> a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_ALLOCATION_SETCACHEDDATA_OFFSET))(this, a1, a2);
		}
	};
}
