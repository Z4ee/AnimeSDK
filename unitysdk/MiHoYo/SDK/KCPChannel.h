#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/IKCPChannel.h"
#include "unitysdk/MiHoYo/SDK/SecurityTunnel_AuthInfo.h"

namespace System::IO { class MemoryStream; }
namespace System::Net { class IPEndPoint; }
namespace System::Net::Sockets { class Socket; }

#define MIHOYO_SDK_KCPCHANNEL_CONNECT_OFFSET UNITYSDK_OFFSET(0x1C6FE940)
#define MIHOYO_SDK_KCPCHANNEL_DISCONNECT_OFFSET UNITYSDK_OFFSET(0x1C6FE4F0)
#define MIHOYO_SDK_KCPCHANNEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C6FE3D0)
#define MIHOYO_SDK_KCPCHANNEL_GET_M_NREMOTECONV_OFFSET UNITYSDK_OFFSET(0x1C6FDFB0)
#define MIHOYO_SDK_KCPCHANNEL_GET_M_NUSERDATA_OFFSET UNITYSDK_OFFSET(0x1C6FDF90)
#define MIHOYO_SDK_KCPCHANNEL_HANDLECONNNECT_OFFSET UNITYSDK_OFFSET(0x1C6FE100)
#define MIHOYO_SDK_KCPCHANNEL_HANDLERECV_OFFSET UNITYSDK_OFFSET(0x1C6FF290)
#define MIHOYO_SDK_KCPCHANNEL_HANDLETIMEOUT_OFFSET UNITYSDK_OFFSET(0x1C6FEE90)
#define MIHOYO_SDK_KCPCHANNEL_KCPOUTPUT_OFFSET UNITYSDK_OFFSET(0x1C6FDEA0)
#define MIHOYO_SDK_KCPCHANNEL_KCPSEND_OFFSET UNITYSDK_OFFSET(0x1C6FFF30)
#define MIHOYO_SDK_KCPCHANNEL_OUTPUT_OFFSET UNITYSDK_OFFSET(0x1C6FFAD0)
#define MIHOYO_SDK_KCPCHANNEL_SEND_OFFSET UNITYSDK_OFFSET(0x1C6FEDF0)
#define MIHOYO_SDK_KCPCHANNEL_SETOUTPUT_OFFSET UNITYSDK_OFFSET(0x1C6FE610)
#define MIHOYO_SDK_KCPCHANNEL_SET_M_NREMOTECONV_OFFSET UNITYSDK_OFFSET(0x1C6FDFC0)
#define MIHOYO_SDK_KCPCHANNEL_SET_M_NUSERDATA_OFFSET UNITYSDK_OFFSET(0x1C6FDFA0)
#define MIHOYO_SDK_KCPCHANNEL_START_OFFSET UNITYSDK_OFFSET(0x1C6FFAC0)
#define MIHOYO_SDK_KCPCHANNEL_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C6FEF60)
#define MIHOYO_SDK_KCPCHANNEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6FDFD0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int KCPChannel_TypeDefinitionIndex = 46576;

	class KCPChannel : public ::MiHoYo::SDK::IKCPChannel
	{
	public:
		::System::IO::MemoryStream* m_kcpStream; // 0x58
		::System::Net::Sockets::Socket* m_socketUdp; // 0x60
		::System::Net::IPEndPoint* m_remoteEndPoint; // 0x68
		::System::UInt32 _m_nRemoteConv_k__BackingField; // 0x70
		::System::UInt32 m_nLastRecvTime; // 0x74
		::System::Boolean m_bIsConnected; // 0x78
		::System::Int32 m_nTimeoutMillisec; // 0x7C
		::System::UInt32 _m_nUserData_k__BackingField; // 0x80
		::System::Int32 m_nMtu; // 0x84
		::System::Int32 m_nWndSize; // 0x88
		::System::IntPtr m_kcpNative; // 0x90

		::System::Void _ctor(::System::UInt32 a1, ::System::Net::Sockets::Socket* a2, ::System::Net::IPEndPoint* a3, ::MiHoYo::SDK::SecurityTunnel_AuthInfo a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Net::Sockets::Socket*, ::System::Net::IPEndPoint*, ::MiHoYo::SDK::SecurityTunnel_AuthInfo))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCHANNEL__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 get_m_nUserData()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCHANNEL_GET_M_NUSERDATA_OFFSET))(this);
		}

		::System::Void set_m_nUserData(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCHANNEL_SET_M_NUSERDATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_m_nRemoteConv()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCHANNEL_GET_M_NREMOTECONV_OFFSET))(this);
		}

		::System::Void set_m_nRemoteConv(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCHANNEL_SET_M_NREMOTECONV_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCHANNEL_DISPOSE_OFFSET))(this);
		}

		::System::Void HandleConnnect(::System::UInt32 a1, ::MiHoYo::SDK::SecurityTunnel_AuthInfo a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MiHoYo::SDK::SecurityTunnel_AuthInfo))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCHANNEL_HANDLECONNNECT_OFFSET))(this, a1, a2);
		}

		::System::Void Connect(::MiHoYo::SDK::SecurityTunnel_AuthInfo a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_AuthInfo))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCHANNEL_CONNECT_OFFSET))(this, a1);
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

		::System::Void HandleRecv(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCHANNEL_HANDLERECV_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCHANNEL_START_OFFSET))(this);
		}

		::System::Void Output(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCHANNEL_OUTPUT_OFFSET))(this, a1, a2);
		}

		::System::Void SetOutput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCHANNEL_SETOUTPUT_OFFSET))(this);
		}

		static ::System::Int32 KcpOutput(::System::IntPtr a1, ::System::Int32 a2, ::System::IntPtr a3, ::System::IntPtr a4)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCHANNEL_KCPOUTPUT_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void KcpSend(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCHANNEL_KCPSEND_OFFSET))(this, a1, a2);
		}

		::System::Void Send(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCHANNEL_SEND_OFFSET))(this, a1, a2, a3);
		}
	};
}
