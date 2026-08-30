#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Handle.h"
#include "unitysdk/Epic/OnlineServices/P2P/NATType.h"
#include "unitysdk/Epic/OnlineServices/P2P/RelayControl.h"
#include "unitysdk/Epic/OnlineServices/Result.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::P2P { class AcceptConnectionOptions; }
namespace Epic::OnlineServices::P2P { class AddNotifyIncomingPacketQueueFullOptions; }
namespace Epic::OnlineServices::P2P { class AddNotifyPeerConnectionClosedOptions; }
namespace Epic::OnlineServices::P2P { class AddNotifyPeerConnectionEstablishedOptions; }
namespace Epic::OnlineServices::P2P { class AddNotifyPeerConnectionRequestOptions; }
namespace Epic::OnlineServices::P2P { class ClearPacketQueueOptions; }
namespace Epic::OnlineServices::P2P { class CloseConnectionOptions; }
namespace Epic::OnlineServices::P2P { class CloseConnectionsOptions; }
namespace Epic::OnlineServices::P2P { class GetNATTypeOptions; }
namespace Epic::OnlineServices::P2P { class GetNextReceivedPacketSizeOptions; }
namespace Epic::OnlineServices::P2P { class GetPacketQueueInfoOptions; }
namespace Epic::OnlineServices::P2P { class GetPortRangeOptions; }
namespace Epic::OnlineServices::P2P { class GetRelayControlOptions; }
namespace Epic::OnlineServices::P2P { class OnIncomingConnectionRequestCallback; }
namespace Epic::OnlineServices::P2P { class OnIncomingPacketQueueFullCallback; }
namespace Epic::OnlineServices::P2P { class OnPeerConnectionEstablishedCallback; }
namespace Epic::OnlineServices::P2P { class OnQueryNATTypeCompleteCallback; }
namespace Epic::OnlineServices::P2P { class OnRemoteConnectionClosedCallback; }
namespace Epic::OnlineServices::P2P { class PacketQueueInfo; }
namespace Epic::OnlineServices::P2P { class QueryNATTypeOptions; }
namespace Epic::OnlineServices::P2P { class ReceivePacketOptions; }
namespace Epic::OnlineServices::P2P { class SendPacketOptions; }
namespace Epic::OnlineServices::P2P { class SetPacketQueueSizeOptions; }
namespace Epic::OnlineServices::P2P { class SetPortRangeOptions; }
namespace Epic::OnlineServices::P2P { class SetRelayControlOptions; }
namespace Epic::OnlineServices::P2P { class SocketId; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_ACCEPTCONNECTION_OFFSET UNITYSDK_OFFSET(0xB3B3260)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_ADDNOTIFYINCOMINGPACKETQUEUEFULL_OFFSET UNITYSDK_OFFSET(0xB3B33C0)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_ADDNOTIFYPEERCONNECTIONCLOSED_OFFSET UNITYSDK_OFFSET(0xB3B3670)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_ADDNOTIFYPEERCONNECTIONESTABLISHED_OFFSET UNITYSDK_OFFSET(0xB3B3860)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_ADDNOTIFYPEERCONNECTIONREQUEST_OFFSET UNITYSDK_OFFSET(0xB3B3A50)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_CLEARPACKETQUEUE_OFFSET UNITYSDK_OFFSET(0xB3B3C40)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_CLOSECONNECTIONS_OFFSET UNITYSDK_OFFSET(0xB3B3F00)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_CLOSECONNECTION_OFFSET UNITYSDK_OFFSET(0xB3B3DA0)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_GETNATTYPE_OFFSET UNITYSDK_OFFSET(0xB3B4060)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_GETNEXTRECEIVEDPACKETSIZE_OFFSET UNITYSDK_OFFSET(0xB3B4280)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_GETPACKETQUEUEINFO_OFFSET UNITYSDK_OFFSET(0xB3B43F0)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_GETPORTRANGE_OFFSET UNITYSDK_OFFSET(0xB3B4720)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_GETRELAYCONTROL_OFFSET UNITYSDK_OFFSET(0xB3B4960)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_ONINCOMINGCONNECTIONREQUESTCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xB3B2F20)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_ONINCOMINGPACKETQUEUEFULLCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xB3B2FC0)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_ONPEERCONNECTIONESTABLISHEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xB3B3060)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_ONQUERYNATTYPECOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xB3B3100)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_ONREMOTECONNECTIONCLOSEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xB3B31A0)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_QUERYNATTYPE_OFFSET UNITYSDK_OFFSET(0xB3B4B80)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_RECEIVEPACKET_OFFSET UNITYSDK_OFFSET(0xB3B4E20)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_REMOVENOTIFYINCOMINGPACKETQUEUEFULL_OFFSET UNITYSDK_OFFSET(0xB3B5150)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_REMOVENOTIFYPEERCONNECTIONCLOSED_OFFSET UNITYSDK_OFFSET(0xB3B5230)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_REMOVENOTIFYPEERCONNECTIONESTABLISHED_OFFSET UNITYSDK_OFFSET(0xB3B5310)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_REMOVENOTIFYPEERCONNECTIONREQUEST_OFFSET UNITYSDK_OFFSET(0xB3B53F0)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_SENDPACKET_OFFSET UNITYSDK_OFFSET(0xB3B54D0)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_SETPACKETQUEUESIZE_OFFSET UNITYSDK_OFFSET(0xB3B5630)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_SETPORTRANGE_OFFSET UNITYSDK_OFFSET(0xB3B5790)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_SETRELAYCONTROL_OFFSET UNITYSDK_OFFSET(0xB3B58F0)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0xB3B3250)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0xB3B3240)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int P2PInterface_TypeDefinitionIndex = 45588;

	class P2PInterface : public ::Epic::OnlineServices::Handle
	{
	public:
		// static const ::System::Int32 AcceptconnectionApiLatest = 0x1; // 0x0
		// static const ::System::Int32 AddnotifyincomingpacketqueuefullApiLatest = 0x1; // 0x0
		// static const ::System::Int32 AddnotifypeerconnectionclosedApiLatest = 0x1; // 0x0
		// static const ::System::Int32 AddnotifypeerconnectionestablishedApiLatest = 0x1; // 0x0
		// static const ::System::Int32 AddnotifypeerconnectionrequestApiLatest = 0x1; // 0x0
		// static const ::System::Int32 ClearpacketqueueApiLatest = 0x1; // 0x0
		// static const ::System::Int32 CloseconnectionApiLatest = 0x1; // 0x0
		// static const ::System::Int32 CloseconnectionsApiLatest = 0x1; // 0x0
		// static const ::System::Int32 GetnattypeApiLatest = 0x1; // 0x0
		// static const ::System::Int32 GetnextreceivedpacketsizeApiLatest = 0x2; // 0x0
		// static const ::System::Int32 GetpacketqueueinfoApiLatest = 0x1; // 0x0
		// static const ::System::Int32 GetportrangeApiLatest = 0x1; // 0x0
		// static const ::System::Int32 GetrelaycontrolApiLatest = 0x1; // 0x0
		// static const ::System::Int32 MaxConnections = 0x20; // 0x0
		// static const ::System::Int32 MaxPacketSize = 0x492; // 0x0
		// static const ::System::Int32 MaxQueueSizeUnlimited = 0x0; // 0x0
		// static const ::System::Int32 QuerynattypeApiLatest = 0x1; // 0x0
		// static const ::System::Int32 ReceivepacketApiLatest = 0x2; // 0x0
		// static const ::System::Int32 SendpacketApiLatest = 0x2; // 0x0
		// static const ::System::Int32 SetpacketqueuesizeApiLatest = 0x1; // 0x0
		// static const ::System::Int32 SetportrangeApiLatest = 0x1; // 0x0
		// static const ::System::Int32 SetrelaycontrolApiLatest = 0x1; // 0x0
		// static const ::System::Int32 SocketidApiLatest = 0x1; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE__CTOR_1_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result AcceptConnection(::Epic::OnlineServices::P2P::AcceptConnectionOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::P2P::AcceptConnectionOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_ACCEPTCONNECTION_OFFSET))(this, a1);
		}

		::System::UInt64 AddNotifyIncomingPacketQueueFull(::Epic::OnlineServices::P2P::AddNotifyIncomingPacketQueueFullOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullCallback* a3)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::P2P::AddNotifyIncomingPacketQueueFullOptions*, ::System::Object*, ::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_ADDNOTIFYINCOMINGPACKETQUEUEFULL_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt64 AddNotifyPeerConnectionClosed(::Epic::OnlineServices::P2P::AddNotifyPeerConnectionClosedOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallback* a3)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::P2P::AddNotifyPeerConnectionClosedOptions*, ::System::Object*, ::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_ADDNOTIFYPEERCONNECTIONCLOSED_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt64 AddNotifyPeerConnectionEstablished(::Epic::OnlineServices::P2P::AddNotifyPeerConnectionEstablishedOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallback* a3)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::P2P::AddNotifyPeerConnectionEstablishedOptions*, ::System::Object*, ::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_ADDNOTIFYPEERCONNECTIONESTABLISHED_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt64 AddNotifyPeerConnectionRequest(::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::P2P::OnIncomingConnectionRequestCallback* a3)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions*, ::System::Object*, ::Epic::OnlineServices::P2P::OnIncomingConnectionRequestCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_ADDNOTIFYPEERCONNECTIONREQUEST_OFFSET))(this, a1, a2, a3);
		}

		::Epic::OnlineServices::Result ClearPacketQueue(::Epic::OnlineServices::P2P::ClearPacketQueueOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::P2P::ClearPacketQueueOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_CLEARPACKETQUEUE_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result CloseConnection(::Epic::OnlineServices::P2P::CloseConnectionOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::P2P::CloseConnectionOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_CLOSECONNECTION_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result CloseConnections(::Epic::OnlineServices::P2P::CloseConnectionsOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::P2P::CloseConnectionsOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_CLOSECONNECTIONS_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result GetNATType(::Epic::OnlineServices::P2P::GetNATTypeOptions* a1, ::Epic::OnlineServices::P2P::NATType& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::P2P::GetNATTypeOptions*, ::Epic::OnlineServices::P2P::NATType&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_GETNATTYPE_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::Result GetNextReceivedPacketSize(::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions* a1, ::System::UInt32& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions*, ::System::UInt32&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_GETNEXTRECEIVEDPACKETSIZE_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::Result GetPacketQueueInfo(::Epic::OnlineServices::P2P::GetPacketQueueInfoOptions* a1, ::Epic::OnlineServices::P2P::PacketQueueInfo*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::P2P::GetPacketQueueInfoOptions*, ::Epic::OnlineServices::P2P::PacketQueueInfo*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_GETPACKETQUEUEINFO_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::Result GetPortRange(::Epic::OnlineServices::P2P::GetPortRangeOptions* a1, ::System::UInt16& a2, ::System::UInt16& a3)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::P2P::GetPortRangeOptions*, ::System::UInt16&, ::System::UInt16&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_GETPORTRANGE_OFFSET))(this, a1, a2, a3);
		}

		::Epic::OnlineServices::Result GetRelayControl(::Epic::OnlineServices::P2P::GetRelayControlOptions* a1, ::Epic::OnlineServices::P2P::RelayControl& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::P2P::GetRelayControlOptions*, ::Epic::OnlineServices::P2P::RelayControl&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_GETRELAYCONTROL_OFFSET))(this, a1, a2);
		}

		::System::Void QueryNATType(::Epic::OnlineServices::P2P::QueryNATTypeOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::QueryNATTypeOptions*, ::System::Object*, ::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_QUERYNATTYPE_OFFSET))(this, a1, a2, a3);
		}

		::Epic::OnlineServices::Result ReceivePacket(::Epic::OnlineServices::P2P::ReceivePacketOptions* a1, ::Epic::OnlineServices::ProductUserId*& a2, ::Epic::OnlineServices::P2P::SocketId*& a3, ::System::Byte& a4, ::Il2CppArray<::System::Byte>*& a5)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::P2P::ReceivePacketOptions*, ::Epic::OnlineServices::ProductUserId*&, ::Epic::OnlineServices::P2P::SocketId*&, ::System::Byte&, ::Il2CppArray<::System::Byte>*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_RECEIVEPACKET_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void RemoveNotifyIncomingPacketQueueFull(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_REMOVENOTIFYINCOMINGPACKETQUEUEFULL_OFFSET))(this, a1);
		}

		::System::Void RemoveNotifyPeerConnectionClosed(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_REMOVENOTIFYPEERCONNECTIONCLOSED_OFFSET))(this, a1);
		}

		::System::Void RemoveNotifyPeerConnectionEstablished(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_REMOVENOTIFYPEERCONNECTIONESTABLISHED_OFFSET))(this, a1);
		}

		::System::Void RemoveNotifyPeerConnectionRequest(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_REMOVENOTIFYPEERCONNECTIONREQUEST_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result SendPacket(::Epic::OnlineServices::P2P::SendPacketOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::P2P::SendPacketOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_SENDPACKET_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result SetPacketQueueSize(::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_SETPACKETQUEUESIZE_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result SetPortRange(::Epic::OnlineServices::P2P::SetPortRangeOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::P2P::SetPortRangeOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_SETPORTRANGE_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result SetRelayControl(::Epic::OnlineServices::P2P::SetRelayControlOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::P2P::SetRelayControlOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_SETRELAYCONTROL_OFFSET))(this, a1);
		}

		static ::System::Void OnIncomingConnectionRequestCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_ONINCOMINGCONNECTIONREQUESTCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnIncomingPacketQueueFullCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_ONINCOMINGPACKETQUEUEFULLCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnPeerConnectionEstablishedCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_ONPEERCONNECTIONESTABLISHEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnQueryNATTypeCompleteCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_ONQUERYNATTYPECOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnRemoteConnectionClosedCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_ONREMOTECONNECTIONCLOSEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}
	};
}
