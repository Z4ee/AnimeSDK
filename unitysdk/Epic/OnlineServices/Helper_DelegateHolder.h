#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class Delegate; }

#define EPIC_ONLINESERVICES_HELPER_DELEGATEHOLDER_GET_NOTIFICATIONID_OFFSET UNITYSDK_OFFSET(0xB370A60)
#define EPIC_ONLINESERVICES_HELPER_DELEGATEHOLDER_GET_PRIVATE_OFFSET UNITYSDK_OFFSET(0xB370A20)
#define EPIC_ONLINESERVICES_HELPER_DELEGATEHOLDER_GET_PUBLIC_OFFSET UNITYSDK_OFFSET(0xB370A00)
#define EPIC_ONLINESERVICES_HELPER_DELEGATEHOLDER_GET_STRUCTDELEGATES_OFFSET UNITYSDK_OFFSET(0xB370A40)
#define EPIC_ONLINESERVICES_HELPER_DELEGATEHOLDER_SET_NOTIFICATIONID_OFFSET UNITYSDK_OFFSET(0xB370A70)
#define EPIC_ONLINESERVICES_HELPER_DELEGATEHOLDER_SET_PRIVATE_OFFSET UNITYSDK_OFFSET(0xB370A30)
#define EPIC_ONLINESERVICES_HELPER_DELEGATEHOLDER_SET_PUBLIC_OFFSET UNITYSDK_OFFSET(0xB370A10)
#define EPIC_ONLINESERVICES_HELPER_DELEGATEHOLDER_SET_STRUCTDELEGATES_OFFSET UNITYSDK_OFFSET(0xB370A50)
#define EPIC_ONLINESERVICES_HELPER_DELEGATEHOLDER__CTOR_OFFSET UNITYSDK_OFFSET(0xB370640)

namespace Epic::OnlineServices
{
	inline static constexpr unsigned int Helper_DelegateHolder_TypeDefinitionIndex = 44915;

	class Helper_DelegateHolder : public ::System::Object
	{
	public:
		::System::Delegate* _Public_k__BackingField; // 0x10
		::Il2CppArray<::System::Delegate*>* _StructDelegates_k__BackingField; // 0x18
		::System::Delegate* _Private_k__BackingField; // 0x20
		::System::Nullable_1<::System::UInt64> _NotificationId_k__BackingField; // 0x28

		::System::Void _ctor(::System::Delegate* a1, ::System::Delegate* a2, ::Il2CppArray<::System::Delegate*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Delegate*, ::System::Delegate*, ::Il2CppArray<::System::Delegate*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_DELEGATEHOLDER__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Delegate* get_Public()
		{
			return ((::System::Delegate*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_DELEGATEHOLDER_GET_PUBLIC_OFFSET))(this);
		}

		::System::Void set_Public(::System::Delegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Delegate*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_DELEGATEHOLDER_SET_PUBLIC_OFFSET))(this, a1);
		}

		::System::Delegate* get_Private()
		{
			return ((::System::Delegate*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_DELEGATEHOLDER_GET_PRIVATE_OFFSET))(this);
		}

		::System::Void set_Private(::System::Delegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Delegate*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_DELEGATEHOLDER_SET_PRIVATE_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Delegate*>* get_StructDelegates()
		{
			return ((::Il2CppArray<::System::Delegate*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_DELEGATEHOLDER_GET_STRUCTDELEGATES_OFFSET))(this);
		}

		::System::Void set_StructDelegates(::Il2CppArray<::System::Delegate*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Delegate*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_DELEGATEHOLDER_SET_STRUCTDELEGATES_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::UInt64> get_NotificationId()
		{
			return ((::System::Nullable_1<::System::UInt64>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_DELEGATEHOLDER_GET_NOTIFICATIONID_OFFSET))(this);
		}

		::System::Void set_NotificationId(::System::Nullable_1<::System::UInt64> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::UInt64>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_DELEGATEHOLDER_SET_NOTIFICATIONID_OFFSET))(this, a1);
		}
	};
}
