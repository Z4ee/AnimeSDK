#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class Delegate; }

#define EPIC_ONLINESERVICES_HELPER_DELEGATEHOLDER_GET_NOTIFICATIONID_OFFSET UNITYSDK_OFFSET(0x8E8EDE0)
#define EPIC_ONLINESERVICES_HELPER_DELEGATEHOLDER_GET_PRIVATE_OFFSET UNITYSDK_OFFSET(0x8E8EDA0)
#define EPIC_ONLINESERVICES_HELPER_DELEGATEHOLDER_GET_PUBLIC_OFFSET UNITYSDK_OFFSET(0x8E8ED80)
#define EPIC_ONLINESERVICES_HELPER_DELEGATEHOLDER_GET_STRUCTDELEGATES_OFFSET UNITYSDK_OFFSET(0x8E8EDC0)
#define EPIC_ONLINESERVICES_HELPER_DELEGATEHOLDER_SET_NOTIFICATIONID_OFFSET UNITYSDK_OFFSET(0x8E8EDF0)
#define EPIC_ONLINESERVICES_HELPER_DELEGATEHOLDER_SET_PRIVATE_OFFSET UNITYSDK_OFFSET(0x8E8EDB0)
#define EPIC_ONLINESERVICES_HELPER_DELEGATEHOLDER_SET_PUBLIC_OFFSET UNITYSDK_OFFSET(0x8E8ED90)
#define EPIC_ONLINESERVICES_HELPER_DELEGATEHOLDER_SET_STRUCTDELEGATES_OFFSET UNITYSDK_OFFSET(0x8E8EDD0)
#define EPIC_ONLINESERVICES_HELPER_DELEGATEHOLDER__CTOR_OFFSET UNITYSDK_OFFSET(0x8E8E9C0)

namespace Epic::OnlineServices
{
	inline static constexpr unsigned int Helper_DelegateHolder_TypeDefinitionIndex = 41069;

	class Helper_DelegateHolder : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Delegate*>* _StructDelegates_k__BackingField; // 0x10
		::System::Delegate* _Public_k__BackingField; // 0x18
		::System::Delegate* _Private_k__BackingField; // 0x20
		::System::Nullable_1<::System::UInt64> _NotificationId_k__BackingField; // 0x28

		::System::Void _ctor(::System::Delegate* publicDelegate, ::System::Delegate* privateDelegate, ::Il2CppArray<::System::Delegate*>* structDelegates)
		{
			return ((::System::Void(*)(::PVOID, ::System::Delegate*, ::System::Delegate*, ::Il2CppArray<::System::Delegate*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_DELEGATEHOLDER__CTOR_OFFSET))(this, publicDelegate, privateDelegate, structDelegates);
		}

		::System::Delegate* get_Public()
		{
			return ((::System::Delegate*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_DELEGATEHOLDER_GET_PUBLIC_OFFSET))(this);
		}

		::System::Void set_Public(::System::Delegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Delegate*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_DELEGATEHOLDER_SET_PUBLIC_OFFSET))(this, value);
		}

		::System::Delegate* get_Private()
		{
			return ((::System::Delegate*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_DELEGATEHOLDER_GET_PRIVATE_OFFSET))(this);
		}

		::System::Void set_Private(::System::Delegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Delegate*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_DELEGATEHOLDER_SET_PRIVATE_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Delegate*>* get_StructDelegates()
		{
			return ((::Il2CppArray<::System::Delegate*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_DELEGATEHOLDER_GET_STRUCTDELEGATES_OFFSET))(this);
		}

		::System::Void set_StructDelegates(::Il2CppArray<::System::Delegate*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Delegate*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_DELEGATEHOLDER_SET_STRUCTDELEGATES_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::UInt64> get_NotificationId()
		{
			return ((::System::Nullable_1<::System::UInt64>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_DELEGATEHOLDER_GET_NOTIFICATIONID_OFFSET))(this);
		}

		::System::Void set_NotificationId(::System::Nullable_1<::System::UInt64> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::UInt64>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_HELPER_DELEGATEHOLDER_SET_NOTIFICATIONID_OFFSET))(this, value);
		}
	};
}
