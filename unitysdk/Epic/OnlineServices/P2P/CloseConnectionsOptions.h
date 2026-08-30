#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::P2P { class SocketId; }

#define EPIC_ONLINESERVICES_P2P_CLOSECONNECTIONSOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1DF863A0)
#define EPIC_ONLINESERVICES_P2P_CLOSECONNECTIONSOPTIONS_GET_SOCKETID_OFFSET UNITYSDK_OFFSET(0x1DF863C0)
#define EPIC_ONLINESERVICES_P2P_CLOSECONNECTIONSOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1DF863B0)
#define EPIC_ONLINESERVICES_P2P_CLOSECONNECTIONSOPTIONS_SET_SOCKETID_OFFSET UNITYSDK_OFFSET(0x1DF863D0)
#define EPIC_ONLINESERVICES_P2P_CLOSECONNECTIONSOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF863E0)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int CloseConnectionsOptions_TypeDefinitionIndex = 45553;

	class CloseConnectionsOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::P2P::SocketId* _SocketId_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_CLOSECONNECTIONSOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_CLOSECONNECTIONSOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_CLOSECONNECTIONSOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::P2P::SocketId* get_SocketId()
		{
			return ((::Epic::OnlineServices::P2P::SocketId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_CLOSECONNECTIONSOPTIONS_GET_SOCKETID_OFFSET))(this);
		}

		::System::Void set_SocketId(::Epic::OnlineServices::P2P::SocketId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::SocketId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_CLOSECONNECTIONSOPTIONS_SET_SOCKETID_OFFSET))(this, a1);
		}
	};
}
