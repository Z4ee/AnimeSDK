#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_HELPER_ALLOCATION_GET_CACHEDDATA_OFFSET UNITYSDK_OFFSET(0x1A2BC830)
#define EPIC_ONLINESERVICES_HELPER_ALLOCATION_GET_ISCACHEDARRAYELEMENTALLOCATED_OFFSET UNITYSDK_OFFSET(0x1A2BC850)
#define EPIC_ONLINESERVICES_HELPER_ALLOCATION_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1A2BC810)
#define EPIC_ONLINESERVICES_HELPER_ALLOCATION_SETCACHEDDATA_OFFSET UNITYSDK_OFFSET(0x1A2BC880)
#define EPIC_ONLINESERVICES_HELPER_ALLOCATION_SET_CACHEDDATA_OFFSET UNITYSDK_OFFSET(0x1A2BC840)
#define EPIC_ONLINESERVICES_HELPER_ALLOCATION_SET_ISCACHEDARRAYELEMENTALLOCATED_OFFSET UNITYSDK_OFFSET(0x1A2BC860)
#define EPIC_ONLINESERVICES_HELPER_ALLOCATION_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x1A2BC820)
#define EPIC_ONLINESERVICES_HELPER_ALLOCATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2BC870)

namespace Epic::OnlineServices
{
	inline static constexpr unsigned int Helper_Allocation_TypeDefinitionIndex = 33287;

	class Helper_Allocation : public ::System::Object
	{
	public:
		::System::Object* _CachedData_k__BackingField; // 0x10
		::System::Nullable_1<::System::Boolean> _IsCachedArrayElementAllocated_k__BackingField; // 0x18
		::System::Int32 _Size_k__BackingField; // 0x1C

		::System::Void _ctor(::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_ALLOCATION__CTOR_OFFSET))(this, size);
		}

		::System::Int32 get_Size()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_ALLOCATION_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_Size(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_ALLOCATION_SET_SIZE_OFFSET))(this, value);
		}

		::System::Object* get_CachedData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_ALLOCATION_GET_CACHEDDATA_OFFSET))(this);
		}

		::System::Void set_CachedData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_ALLOCATION_SET_CACHEDDATA_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::Boolean> get_IsCachedArrayElementAllocated()
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_ALLOCATION_GET_ISCACHEDARRAYELEMENTALLOCATED_OFFSET))(this);
		}

		::System::Void set_IsCachedArrayElementAllocated(::System::Nullable_1<::System::Boolean> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_ALLOCATION_SET_ISCACHEDARRAYELEMENTALLOCATED_OFFSET))(this, value);
		}

		::System::Void SetCachedData(::System::Object* data, ::System::Nullable_1<::System::Boolean> isCachedArrayElementAllocated)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_ALLOCATION_SETCACHEDDATA_OFFSET))(this, data, isCachedArrayElementAllocated);
		}
	};
}
