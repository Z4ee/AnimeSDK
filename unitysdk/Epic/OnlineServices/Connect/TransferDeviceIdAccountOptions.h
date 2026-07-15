#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_CONNECT_TRANSFERDEVICEIDACCOUNTOPTIONS_GET_LOCALDEVICEUSERID_OFFSET UNITYSDK_OFFSET(0x1C1A0960)
#define EPIC_ONLINESERVICES_CONNECT_TRANSFERDEVICEIDACCOUNTOPTIONS_GET_PRIMARYLOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C1A0940)
#define EPIC_ONLINESERVICES_CONNECT_TRANSFERDEVICEIDACCOUNTOPTIONS_GET_PRODUCTUSERIDTOPRESERVE_OFFSET UNITYSDK_OFFSET(0x1C1A0980)
#define EPIC_ONLINESERVICES_CONNECT_TRANSFERDEVICEIDACCOUNTOPTIONS_SET_LOCALDEVICEUSERID_OFFSET UNITYSDK_OFFSET(0x1C1A0970)
#define EPIC_ONLINESERVICES_CONNECT_TRANSFERDEVICEIDACCOUNTOPTIONS_SET_PRIMARYLOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1C1A0950)
#define EPIC_ONLINESERVICES_CONNECT_TRANSFERDEVICEIDACCOUNTOPTIONS_SET_PRODUCTUSERIDTOPRESERVE_OFFSET UNITYSDK_OFFSET(0x1C1A0990)
#define EPIC_ONLINESERVICES_CONNECT_TRANSFERDEVICEIDACCOUNTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1A09A0)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int TransferDeviceIdAccountOptions_TypeDefinitionIndex = 44004;

	class TransferDeviceIdAccountOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _PrimaryLocalUserId_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _ProductUserIdToPreserve_k__BackingField; // 0x18
		::Epic::OnlineServices::ProductUserId* _LocalDeviceUserId_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_TRANSFERDEVICEIDACCOUNTOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_PrimaryLocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_TRANSFERDEVICEIDACCOUNTOPTIONS_GET_PRIMARYLOCALUSERID_OFFSET))(this);
		}

		::System::Void set_PrimaryLocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_TRANSFERDEVICEIDACCOUNTOPTIONS_SET_PRIMARYLOCALUSERID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalDeviceUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_TRANSFERDEVICEIDACCOUNTOPTIONS_GET_LOCALDEVICEUSERID_OFFSET))(this);
		}

		::System::Void set_LocalDeviceUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_TRANSFERDEVICEIDACCOUNTOPTIONS_SET_LOCALDEVICEUSERID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ProductUserId* get_ProductUserIdToPreserve()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_TRANSFERDEVICEIDACCOUNTOPTIONS_GET_PRODUCTUSERIDTOPRESERVE_OFFSET))(this);
		}

		::System::Void set_ProductUserIdToPreserve(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_TRANSFERDEVICEIDACCOUNTOPTIONS_SET_PRODUCTUSERIDTOPRESERVE_OFFSET))(this, a1);
		}
	};
}
