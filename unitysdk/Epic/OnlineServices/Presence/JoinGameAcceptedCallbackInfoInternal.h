#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET UNITYSDK_OFFSET(0x259D70)
#define EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x972DD0)
#define EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFOINTERNAL_GET_JOININFO_OFFSET UNITYSDK_OFFSET(0x972EE0)
#define EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFOINTERNAL_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x972F90)
#define EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFOINTERNAL_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x973000)
#define EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFOINTERNAL_GET_UIEVENTID_OFFSET UNITYSDK_OFFSET(0x3D1A20)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int JoinGameAcceptedCallbackInfoInternal_TypeDefinitionIndex = 36034;

	struct alignas(8) JoinGameAcceptedCallbackInfoInternal
	{
		::System::IntPtr m_ClientData; // 0x10
		::System::IntPtr m_JoinInfo; // 0x18
		::System::IntPtr m_LocalUserId; // 0x20
		::System::IntPtr m_TargetUserId; // 0x28
		::System::UInt64 m_UiEventId; // 0x30

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFOINTERNAL_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::IntPtr get_ClientDataAddress()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFOINTERNAL_GET_CLIENTDATAADDRESS_OFFSET))(this);
		}

		::System::String* get_JoinInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFOINTERNAL_GET_JOININFO_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFOINTERNAL_GET_LOCALUSERID_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFOINTERNAL_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::UInt64 get_UiEventId()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_JOINGAMEACCEPTEDCALLBACKINFOINTERNAL_GET_UIEVENTID_OFFSET))(this);
		}
	};
}
