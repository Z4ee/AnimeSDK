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

#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_ACCEPTCONNECTION_OFFSET UNITYSDK_OFFSET(0x1CC3EE00)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_ADDNOTIFYINCOMINGPACKETQUEUEFULL_OFFSET UNITYSDK_OFFSET(0x1CC3EF50)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_ADDNOTIFYPEERCONNECTIONCLOSED_OFFSET UNITYSDK_OFFSET(0x1CC3F1D0)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_ADDNOTIFYPEERCONNECTIONESTABLISHED_OFFSET UNITYSDK_OFFSET(0x1CC3F3B0)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_ADDNOTIFYPEERCONNECTIONREQUEST_OFFSET UNITYSDK_OFFSET(0x1CC3F590)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_CLEARPACKETQUEUE_OFFSET UNITYSDK_OFFSET(0x1CC3F770)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_CLOSECONNECTIONS_OFFSET UNITYSDK_OFFSET(0x1CC3FA10)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_CLOSECONNECTION_OFFSET UNITYSDK_OFFSET(0x1CC3F8C0)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_GETNATTYPE_OFFSET UNITYSDK_OFFSET(0x1CC3FB60)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_GETNEXTRECEIVEDPACKETSIZE_OFFSET UNITYSDK_OFFSET(0x1CC3FD60)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_GETPACKETQUEUEINFO_OFFSET UNITYSDK_OFFSET(0x1CC3FEC0)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_GETPORTRANGE_OFFSET UNITYSDK_OFFSET(0x1CC401D0)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_GETRELAYCONTROL_OFFSET UNITYSDK_OFFSET(0x1CC403E0)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_ONINCOMINGCONNECTIONREQUESTCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1CC3EB10)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_ONINCOMINGPACKETQUEUEFULLCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1CC3EBA0)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_ONPEERCONNECTIONESTABLISHEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1CC3EC30)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_ONQUERYNATTYPECOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1CC3ECC0)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_ONREMOTECONNECTIONCLOSEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1CC3ED50)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_QUERYNATTYPE_OFFSET UNITYSDK_OFFSET(0x1CC405E0)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_RECEIVEPACKET_OFFSET UNITYSDK_OFFSET(0x1CC40850)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_REMOVENOTIFYINCOMINGPACKETQUEUEFULL_OFFSET UNITYSDK_OFFSET(0x1CC40C60)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_REMOVENOTIFYPEERCONNECTIONCLOSED_OFFSET UNITYSDK_OFFSET(0x1CC40D40)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_REMOVENOTIFYPEERCONNECTIONESTABLISHED_OFFSET UNITYSDK_OFFSET(0x1CC40E20)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_REMOVENOTIFYPEERCONNECTIONREQUEST_OFFSET UNITYSDK_OFFSET(0x1CC40F00)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_SENDPACKET_OFFSET UNITYSDK_OFFSET(0x1CC40FE0)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_SETPACKETQUEUESIZE_OFFSET UNITYSDK_OFFSET(0x1CC41130)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_SETPORTRANGE_OFFSET UNITYSDK_OFFSET(0x1CC41280)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE_SETRELAYCONTROL_OFFSET UNITYSDK_OFFSET(0x1CC413D0)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CC3EDF0)
#define EPIC_ONLINESERVICES_P2P_P2PINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC3EDE0)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int P2PInterface_TypeDefinitionIndex = 36183;

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

		::System::Void _ctor_1(::System::IntPtr innerHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE__CTOR_1_OFFSET))(this, innerHandle);
		}

		::Epic::OnlineServices::Result AcceptConnection(::Epic::OnlineServices::P2P::AcceptConnectionOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::P2P::AcceptConnectionOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_ACCEPTCONNECTION_OFFSET))(this, options);
		}

		::System::UInt64 AddNotifyIncomingPacketQueueFull(::Epic::OnlineServices::P2P::AddNotifyIncomingPacketQueueFullOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullCallback* incomingPacketQueueFullHandler)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::P2P::AddNotifyIncomingPacketQueueFullOptions*, ::System::Object*, ::Epic::OnlineServices::P2P::OnIncomingPacketQueueFullCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_ADDNOTIFYINCOMINGPACKETQUEUEFULL_OFFSET))(this, options, clientData, incomingPacketQueueFullHandler);
		}

		::System::UInt64 AddNotifyPeerConnectionClosed(::Epic::OnlineServices::P2P::AddNotifyPeerConnectionClosedOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallback* connectionClosedHandler)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::P2P::AddNotifyPeerConnectionClosedOptions*, ::System::Object*, ::Epic::OnlineServices::P2P::OnRemoteConnectionClosedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_ADDNOTIFYPEERCONNECTIONCLOSED_OFFSET))(this, options, clientData, connectionClosedHandler);
		}

		::System::UInt64 AddNotifyPeerConnectionEstablished(::Epic::OnlineServices::P2P::AddNotifyPeerConnectionEstablishedOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallback* connectionEstablishedHandler)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::P2P::AddNotifyPeerConnectionEstablishedOptions*, ::System::Object*, ::Epic::OnlineServices::P2P::OnPeerConnectionEstablishedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_ADDNOTIFYPEERCONNECTIONESTABLISHED_OFFSET))(this, options, clientData, connectionEstablishedHandler);
		}

		::System::UInt64 AddNotifyPeerConnectionRequest(::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::P2P::OnIncomingConnectionRequestCallback* connectionRequestHandler)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::P2P::AddNotifyPeerConnectionRequestOptions*, ::System::Object*, ::Epic::OnlineServices::P2P::OnIncomingConnectionRequestCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_ADDNOTIFYPEERCONNECTIONREQUEST_OFFSET))(this, options, clientData, connectionRequestHandler);
		}

		::Epic::OnlineServices::Result ClearPacketQueue(::Epic::OnlineServices::P2P::ClearPacketQueueOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::P2P::ClearPacketQueueOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_CLEARPACKETQUEUE_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result CloseConnection(::Epic::OnlineServices::P2P::CloseConnectionOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::P2P::CloseConnectionOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_CLOSECONNECTION_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result CloseConnections(::Epic::OnlineServices::P2P::CloseConnectionsOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::P2P::CloseConnectionsOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_CLOSECONNECTIONS_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result GetNATType(::Epic::OnlineServices::P2P::GetNATTypeOptions* options, ::Epic::OnlineServices::P2P::NATType& outNATType)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::P2P::GetNATTypeOptions*, ::Epic::OnlineServices::P2P::NATType&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_GETNATTYPE_OFFSET))(this, options, outNATType);
		}

		::Epic::OnlineServices::Result GetNextReceivedPacketSize(::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions* options, ::System::UInt32& outPacketSizeBytes)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::P2P::GetNextReceivedPacketSizeOptions*, ::System::UInt32&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_GETNEXTRECEIVEDPACKETSIZE_OFFSET))(this, options, outPacketSizeBytes);
		}

		::Epic::OnlineServices::Result GetPacketQueueInfo(::Epic::OnlineServices::P2P::GetPacketQueueInfoOptions* options, ::Epic::OnlineServices::P2P::PacketQueueInfo*& outPacketQueueInfo)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::P2P::GetPacketQueueInfoOptions*, ::Epic::OnlineServices::P2P::PacketQueueInfo*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_GETPACKETQUEUEINFO_OFFSET))(this, options, outPacketQueueInfo);
		}

		::Epic::OnlineServices::Result GetPortRange(::Epic::OnlineServices::P2P::GetPortRangeOptions* options, ::System::UInt16& outPort, ::System::UInt16& outNumAdditionalPortsToTry)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::P2P::GetPortRangeOptions*, ::System::UInt16&, ::System::UInt16&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_GETPORTRANGE_OFFSET))(this, options, outPort, outNumAdditionalPortsToTry);
		}

		::Epic::OnlineServices::Result GetRelayControl(::Epic::OnlineServices::P2P::GetRelayControlOptions* options, ::Epic::OnlineServices::P2P::RelayControl& outRelayControl)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::P2P::GetRelayControlOptions*, ::Epic::OnlineServices::P2P::RelayControl&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_GETRELAYCONTROL_OFFSET))(this, options, outRelayControl);
		}

		::System::Void QueryNATType(::Epic::OnlineServices::P2P::QueryNATTypeOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::QueryNATTypeOptions*, ::System::Object*, ::Epic::OnlineServices::P2P::OnQueryNATTypeCompleteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_QUERYNATTYPE_OFFSET))(this, options, clientData, completionDelegate);
		}

		::Epic::OnlineServices::Result ReceivePacket(::Epic::OnlineServices::P2P::ReceivePacketOptions* options, ::Epic::OnlineServices::ProductUserId*& outPeerId, ::Epic::OnlineServices::P2P::SocketId*& outSocketId, ::System::Byte& outChannel, ::Il2CppArray<::System::Byte>*& outData)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::P2P::ReceivePacketOptions*, ::Epic::OnlineServices::ProductUserId*&, ::Epic::OnlineServices::P2P::SocketId*&, ::System::Byte&, ::Il2CppArray<::System::Byte>*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_RECEIVEPACKET_OFFSET))(this, options, outPeerId, outSocketId, outChannel, outData);
		}

		::System::Void RemoveNotifyIncomingPacketQueueFull(::System::UInt64 notificationId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_REMOVENOTIFYINCOMINGPACKETQUEUEFULL_OFFSET))(this, notificationId);
		}

		::System::Void RemoveNotifyPeerConnectionClosed(::System::UInt64 notificationId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_REMOVENOTIFYPEERCONNECTIONCLOSED_OFFSET))(this, notificationId);
		}

		::System::Void RemoveNotifyPeerConnectionEstablished(::System::UInt64 notificationId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_REMOVENOTIFYPEERCONNECTIONESTABLISHED_OFFSET))(this, notificationId);
		}

		::System::Void RemoveNotifyPeerConnectionRequest(::System::UInt64 notificationId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_REMOVENOTIFYPEERCONNECTIONREQUEST_OFFSET))(this, notificationId);
		}

		::Epic::OnlineServices::Result SendPacket(::Epic::OnlineServices::P2P::SendPacketOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::P2P::SendPacketOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_SENDPACKET_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result SetPacketQueueSize(::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::P2P::SetPacketQueueSizeOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_SETPACKETQUEUESIZE_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result SetPortRange(::Epic::OnlineServices::P2P::SetPortRangeOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::P2P::SetPortRangeOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_SETPORTRANGE_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result SetRelayControl(::Epic::OnlineServices::P2P::SetRelayControlOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::P2P::SetRelayControlOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_SETRELAYCONTROL_OFFSET))(this, options);
		}

		static ::System::Void OnIncomingConnectionRequestCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_ONINCOMINGCONNECTIONREQUESTCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnIncomingPacketQueueFullCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_ONINCOMINGPACKETQUEUEFULLCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnPeerConnectionEstablishedCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_ONPEERCONNECTIONESTABLISHEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnQueryNATTypeCompleteCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_ONQUERYNATTYPECOMPLETECALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnRemoteConnectionClosedCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_P2PINTERFACE_ONREMOTECONNECTIONCLOSEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}
	};
}
