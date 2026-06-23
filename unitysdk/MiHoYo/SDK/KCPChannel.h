#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/IKCPChannel.h"
#include "unitysdk/MiHoYo/SDK/SecurityTunnel_AuthInfo.h"

namespace System::IO { class MemoryStream; }
namespace System::Net { class IPEndPoint; }
namespace System::Net::Sockets { class Socket; }

#define MIHOYO_SDK_KCPCHANNEL_CONNECT_OFFSET UNITYSDK_OFFSET(0x1C4D4ED0)
#define MIHOYO_SDK_KCPCHANNEL_DISCONNECT_OFFSET UNITYSDK_OFFSET(0x1C4D4DD0)
#define MIHOYO_SDK_KCPCHANNEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C4D4D10)
#define MIHOYO_SDK_KCPCHANNEL_GET_M_NREMOTECONV_OFFSET UNITYSDK_OFFSET(0x1C4D4800)
#define MIHOYO_SDK_KCPCHANNEL_GET_M_NUSERDATA_OFFSET UNITYSDK_OFFSET(0x1C4D47E0)
#define MIHOYO_SDK_KCPCHANNEL_HANDLECONNNECT_OFFSET UNITYSDK_OFFSET(0x1C4D4980)
#define MIHOYO_SDK_KCPCHANNEL_HANDLERECV_OFFSET UNITYSDK_OFFSET(0x1C4D5810)
#define MIHOYO_SDK_KCPCHANNEL_HANDLETIMEOUT_OFFSET UNITYSDK_OFFSET(0x1C4D5520)
#define MIHOYO_SDK_KCPCHANNEL_KCPOUTPUT_OFFSET UNITYSDK_OFFSET(0x1C4D4750)
#define MIHOYO_SDK_KCPCHANNEL_KCPSEND_OFFSET UNITYSDK_OFFSET(0x1C4D5FF0)
#define MIHOYO_SDK_KCPCHANNEL_OUTPUT_OFFSET UNITYSDK_OFFSET(0x1C4D5E00)
#define MIHOYO_SDK_KCPCHANNEL_SEND_OFFSET UNITYSDK_OFFSET(0x1C4D5480)
#define MIHOYO_SDK_KCPCHANNEL_SETOUTPUT_OFFSET UNITYSDK_OFFSET(0x1C4D4DE0)
#define MIHOYO_SDK_KCPCHANNEL_SET_M_NREMOTECONV_OFFSET UNITYSDK_OFFSET(0x1C4D4810)
#define MIHOYO_SDK_KCPCHANNEL_SET_M_NUSERDATA_OFFSET UNITYSDK_OFFSET(0x1C4D47F0)
#define MIHOYO_SDK_KCPCHANNEL_START_OFFSET UNITYSDK_OFFSET(0x1C4D5DF0)
#define MIHOYO_SDK_KCPCHANNEL_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C4D5620)
#define MIHOYO_SDK_KCPCHANNEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4D4820)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int KCPChannel_TypeDefinitionIndex = 36511;

	class KCPChannel : public ::MiHoYo::SDK::IKCPChannel
	{
	public:
		::System::Net::Sockets::Socket* m_socketUdp; // 0x58
		::System::IO::MemoryStream* m_kcpStream; // 0x60
		::System::Net::IPEndPoint* m_remoteEndPoint; // 0x68
		::System::IntPtr m_kcpNative; // 0x70
		::System::UInt32 _m_nUserData_k__BackingField; // 0x78
		::System::Int32 m_nMtu; // 0x7C
		::System::UInt32 m_nLastRecvTime; // 0x80
		::System::Boolean m_bIsConnected; // 0x84
		::System::UInt32 _m_nRemoteConv_k__BackingField; // 0x88
		::System::Int32 m_nTimeoutMillisec; // 0x8C
		::System::Int32 m_nWndSize; // 0x90

		::System::Void _ctor(::System::UInt32 localConn, ::System::Net::Sockets::Socket* socket, ::System::Net::IPEndPoint* remoteEndPoint, ::MiHoYo::SDK::SecurityTunnel_AuthInfo authInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Net::Sockets::Socket*, ::System::Net::IPEndPoint*, ::MiHoYo::SDK::SecurityTunnel_AuthInfo))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCHANNEL__CTOR_OFFSET))(this, localConn, socket, remoteEndPoint, authInfo);
		}

		::System::UInt32 get_m_nUserData()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCHANNEL_GET_M_NUSERDATA_OFFSET))(this);
		}

		::System::Void set_m_nUserData(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCHANNEL_SET_M_NUSERDATA_OFFSET))(this, value);
		}

		::System::UInt32 get_m_nRemoteConv()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCHANNEL_GET_M_NREMOTECONV_OFFSET))(this);
		}

		::System::Void set_m_nRemoteConv(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCHANNEL_SET_M_NREMOTECONV_OFFSET))(this, value);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCHANNEL_DISPOSE_OFFSET))(this);
		}

		::System::Void HandleConnnect(::System::UInt32 remoteConn, ::MiHoYo::SDK::SecurityTunnel_AuthInfo authInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MiHoYo::SDK::SecurityTunnel_AuthInfo))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCHANNEL_HANDLECONNNECT_OFFSET))(this, remoteConn, authInfo);
		}

		::System::Void Connect(::MiHoYo::SDK::SecurityTunnel_AuthInfo authInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_AuthInfo))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCHANNEL_CONNECT_OFFSET))(this, authInfo);
		}

		::System::Void Disconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCHANNEL_DISCONNECT_OFFSET))(this);
		}

		::System::Boolean HandleTimeout()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCHANNEL_HANDLETIMEOUT_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCHANNEL_UPDATE_OFFSET))(this);
		}

		::System::Void HandleRecv(::Il2CppArray<::System::Byte>* data, ::System::Int32 offset, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCHANNEL_HANDLERECV_OFFSET))(this, data, offset, length);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCHANNEL_START_OFFSET))(this);
		}

		::System::Void Output(::System::IntPtr bytes, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCHANNEL_OUTPUT_OFFSET))(this, bytes, count);
		}

		::System::Void SetOutput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCHANNEL_SETOUTPUT_OFFSET))(this);
		}

		static ::System::Int32 KcpOutput(::System::IntPtr bytes, ::System::Int32 len, ::System::IntPtr kcp, ::System::IntPtr user)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCHANNEL_KCPOUTPUT_OFFSET))(bytes, len, kcp, user);
		}

		::System::Void KcpSend(::Il2CppArray<::System::Byte>* buffers, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCHANNEL_KCPSEND_OFFSET))(this, buffers, length);
		}

		::System::Void Send(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 index, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCHANNEL_SEND_OFFSET))(this, buffer, index, length);
		}
	};
}
