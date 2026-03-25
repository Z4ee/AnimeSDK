#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_P2P_RECEIVEPACKETOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x86AFCF0)
#define EPIC_ONLINESERVICES_P2P_RECEIVEPACKETOPTIONS_GET_MAXDATASIZEBYTES_OFFSET UNITYSDK_OFFSET(0x86AFD10)
#define EPIC_ONLINESERVICES_P2P_RECEIVEPACKETOPTIONS_GET_REQUESTEDCHANNEL_OFFSET UNITYSDK_OFFSET(0x86AFD30)
#define EPIC_ONLINESERVICES_P2P_RECEIVEPACKETOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x86AFD00)
#define EPIC_ONLINESERVICES_P2P_RECEIVEPACKETOPTIONS_SET_MAXDATASIZEBYTES_OFFSET UNITYSDK_OFFSET(0x86AFD20)
#define EPIC_ONLINESERVICES_P2P_RECEIVEPACKETOPTIONS_SET_REQUESTEDCHANNEL_OFFSET UNITYSDK_OFFSET(0x86AFD40)
#define EPIC_ONLINESERVICES_P2P_RECEIVEPACKETOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x86AFD50)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int ReceivePacketOptions_TypeDefinitionIndex = 35922;

	class ReceivePacketOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::System::UInt32 _MaxDataSizeBytes_k__BackingField; // 0x18
		::System::Nullable_1<::System::Byte> _RequestedChannel_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_RECEIVEPACKETOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_RECEIVEPACKETOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_RECEIVEPACKETOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxDataSizeBytes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_RECEIVEPACKETOPTIONS_GET_MAXDATASIZEBYTES_OFFSET))(this);
		}

		::System::Void set_MaxDataSizeBytes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_RECEIVEPACKETOPTIONS_SET_MAXDATASIZEBYTES_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::Byte> get_RequestedChannel()
		{
			return ((::System::Nullable_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_RECEIVEPACKETOPTIONS_GET_REQUESTEDCHANNEL_OFFSET))(this);
		}

		::System::Void set_RequestedChannel(::System::Nullable_1<::System::Byte> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Byte>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_RECEIVEPACKETOPTIONS_SET_REQUESTEDCHANNEL_OFFSET))(this, value);
		}
	};
}
