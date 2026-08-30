#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Connect { class TransferDeviceIdAccountOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_CONNECT_TRANSFERDEVICEIDACCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3AA80)
#define EPIC_ONLINESERVICES_CONNECT_TRANSFERDEVICEIDACCOUNTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3AA00)
#define EPIC_ONLINESERVICES_CONNECT_TRANSFERDEVICEIDACCOUNTOPTIONSINTERNAL_SET_LOCALDEVICEUSERID_OFFSET UNITYSDK_OFFSET(0x3A870)
#define EPIC_ONLINESERVICES_CONNECT_TRANSFERDEVICEIDACCOUNTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3A9F0)
#define EPIC_ONLINESERVICES_CONNECT_TRANSFERDEVICEIDACCOUNTOPTIONSINTERNAL_SET_PRIMARYLOCALUSERID_OFFSET UNITYSDK_OFFSET(0x3A7B0)
#define EPIC_ONLINESERVICES_CONNECT_TRANSFERDEVICEIDACCOUNTOPTIONSINTERNAL_SET_PRODUCTUSERIDTOPRESERVE_OFFSET UNITYSDK_OFFSET(0x3A930)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int TransferDeviceIdAccountOptionsInternal_TypeDefinitionIndex = 46187;

	struct alignas(8) TransferDeviceIdAccountOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_PrimaryLocalUserId; // 0x18
		::System::IntPtr m_LocalDeviceUserId; // 0x20
		::System::IntPtr m_ProductUserIdToPreserve; // 0x28

		::System::Void set_PrimaryLocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_TRANSFERDEVICEIDACCOUNTOPTIONSINTERNAL_SET_PRIMARYLOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void set_LocalDeviceUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_TRANSFERDEVICEIDACCOUNTOPTIONSINTERNAL_SET_LOCALDEVICEUSERID_OFFSET))(this, a1);
		}

		::System::Void set_ProductUserIdToPreserve(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_TRANSFERDEVICEIDACCOUNTOPTIONSINTERNAL_SET_PRODUCTUSERIDTOPRESERVE_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Connect::TransferDeviceIdAccountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_TRANSFERDEVICEIDACCOUNTOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_TRANSFERDEVICEIDACCOUNTOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_TRANSFERDEVICEIDACCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
