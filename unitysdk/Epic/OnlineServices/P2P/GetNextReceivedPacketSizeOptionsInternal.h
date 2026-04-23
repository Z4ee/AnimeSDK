#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::P2P { class GetNextReceivedPacketSizeOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_P2P_GETNEXTRECEIVEDPACKETSIZEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x57FD0)
#define EPIC_ONLINESERVICES_P2P_GETNEXTRECEIVEDPACKETSIZEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x57F60)
#define EPIC_ONLINESERVICES_P2P_GETNEXTRECEIVEDPACKETSIZEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x57DE0)
#define EPIC_ONLINESERVICES_P2P_GETNEXTRECEIVEDPACKETSIZEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x57F50)
#define EPIC_ONLINESERVICES_P2P_GETNEXTRECEIVEDPACKETSIZEOPTIONSINTERNAL_SET_REQUESTEDCHANNEL_OFFSET UNITYSDK_OFFSET(0x57EA0)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int GetNextReceivedPacketSizeOptionsInternal_TypeDefinitionIndex = 41714;

	struct alignas(8) GetNextReceivedPacketSizeOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_RequestedChannel; // 0x20

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_GETNEXTRECEIVEDPACKETSIZEOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		/*
		::System::Void set_RequestedChannel(::System::Nullable_1<::System::Byte> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Byte>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_GETNEXTRECEIVEDPACKETSIZEOPTIONSINTERNAL_SET_REQUESTEDCHANNEL_OFFSET))(this, value);
		}
		*/

		::System::Void Set(::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_GETNEXTRECEIVEDPACKETSIZEOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_GETNEXTRECEIVEDPACKETSIZEOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_GETNEXTRECEIVEDPACKETSIZEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
