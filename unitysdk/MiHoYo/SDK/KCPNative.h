#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class KcpOutput; }
namespace System { class String; }

#define MIHOYO_SDK_KCPNATIVE_IKCP_CHECK_OFFSET UNITYSDK_OFFSET(0x8D2AB20)
#define MIHOYO_SDK_KCPNATIVE_IKCP_CREATE_OFFSET UNITYSDK_OFFSET(0x8D2ABB0)
#define MIHOYO_SDK_KCPNATIVE_IKCP_FLUSH_OFFSET UNITYSDK_OFFSET(0x8D2AC40)
#define MIHOYO_SDK_KCPNATIVE_IKCP_GETCONV_OFFSET UNITYSDK_OFFSET(0x8D2ACC0)
#define MIHOYO_SDK_KCPNATIVE_IKCP_INPUT_OFFSET UNITYSDK_OFFSET(0x8D2AD40)
#define MIHOYO_SDK_KCPNATIVE_IKCP_NODELAY_OFFSET UNITYSDK_OFFSET(0x8D2ADE0)
#define MIHOYO_SDK_KCPNATIVE_IKCP_PEEKSIZE_OFFSET UNITYSDK_OFFSET(0x8D2AE90)
#define MIHOYO_SDK_KCPNATIVE_IKCP_RECV_OFFSET UNITYSDK_OFFSET(0x8D2AF10)
#define MIHOYO_SDK_KCPNATIVE_IKCP_RELEASE_OFFSET UNITYSDK_OFFSET(0x8D2AFB0)
#define MIHOYO_SDK_KCPNATIVE_IKCP_SEND_OFFSET UNITYSDK_OFFSET(0x8D2B030)
#define MIHOYO_SDK_KCPNATIVE_IKCP_SETMINRTO_OFFSET UNITYSDK_OFFSET(0x8D2B0D0)
#define MIHOYO_SDK_KCPNATIVE_IKCP_SETMTU_OFFSET UNITYSDK_OFFSET(0x8D2B150)
#define MIHOYO_SDK_KCPNATIVE_IKCP_SETOUTPUT_OFFSET UNITYSDK_OFFSET(0x8D2B1E0)
#define MIHOYO_SDK_KCPNATIVE_IKCP_UPDATE_OFFSET UNITYSDK_OFFSET(0x8D2B270)
#define MIHOYO_SDK_KCPNATIVE_IKCP_WAITSND_OFFSET UNITYSDK_OFFSET(0x8D2B2F0)
#define MIHOYO_SDK_KCPNATIVE_IKCP_WNDSIZE_OFFSET UNITYSDK_OFFSET(0x8D2B370)
#define MIHOYO_SDK_KCPNATIVE_KCPCHECK_OFFSET UNITYSDK_OFFSET(0x8D2B400)
#define MIHOYO_SDK_KCPNATIVE_KCPCREATE_OFFSET UNITYSDK_OFFSET(0x8D2B490)
#define MIHOYO_SDK_KCPNATIVE_KCPFLUSH_OFFSET UNITYSDK_OFFSET(0x8D2B520)
#define MIHOYO_SDK_KCPNATIVE_KCPGETCONV_OFFSET UNITYSDK_OFFSET(0x8D2B5A0)
#define MIHOYO_SDK_KCPNATIVE_KCPINPUT_OFFSET UNITYSDK_OFFSET(0x8D2B630)
#define MIHOYO_SDK_KCPNATIVE_KCPNODELAY_OFFSET UNITYSDK_OFFSET(0x8D2B6E0)
#define MIHOYO_SDK_KCPNATIVE_KCPPEEKSIZE_OFFSET UNITYSDK_OFFSET(0x8D2B7A0)
#define MIHOYO_SDK_KCPNATIVE_KCPRECV_OFFSET UNITYSDK_OFFSET(0x8D2B830)
#define MIHOYO_SDK_KCPNATIVE_KCPRELEASE_OFFSET UNITYSDK_OFFSET(0x8D2B8D0)
#define MIHOYO_SDK_KCPNATIVE_KCPSEND_OFFSET UNITYSDK_OFFSET(0x8D2B950)
#define MIHOYO_SDK_KCPNATIVE_KCPSETMINRTO_OFFSET UNITYSDK_OFFSET(0x8D2B9F0)
#define MIHOYO_SDK_KCPNATIVE_KCPSETMTU_OFFSET UNITYSDK_OFFSET(0x8D2BA80)
#define MIHOYO_SDK_KCPNATIVE_KCPSETOUTPUT_OFFSET UNITYSDK_OFFSET(0x8D2BB10)
#define MIHOYO_SDK_KCPNATIVE_KCPUPDATE_OFFSET UNITYSDK_OFFSET(0x8D2BBA0)
#define MIHOYO_SDK_KCPNATIVE_KCPWAITSND_OFFSET UNITYSDK_OFFSET(0x8D2BC30)
#define MIHOYO_SDK_KCPNATIVE_KCPWNDSIZE_OFFSET UNITYSDK_OFFSET(0x8D2BCC0)
#define MIHOYO_SDK_KCPNATIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x8D2BD60)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int KCPNative_TypeDefinitionIndex = 42740;

	class KCPNative : public ::System::Object
	{
	public:
		// static const ::System::String* KcpDLL; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE__CTOR_OFFSET))(this);
		}

		static ::System::UInt32 ikcp_check(::System::IntPtr kcp, ::System::UInt32 current)
		{
			return ((::System::UInt32(*)(::System::IntPtr, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_IKCP_CHECK_OFFSET))(kcp, current);
		}

		static ::System::IntPtr ikcp_create(::System::UInt32 conv, ::System::IntPtr user)
		{
			return ((::System::IntPtr(*)(::System::UInt32, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_IKCP_CREATE_OFFSET))(conv, user);
		}

		static ::System::Void ikcp_flush(::System::IntPtr kcp)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_IKCP_FLUSH_OFFSET))(kcp);
		}

		static ::System::UInt32 ikcp_getconv(::System::IntPtr ptr)
		{
			return ((::System::UInt32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_IKCP_GETCONV_OFFSET))(ptr);
		}

		static ::System::Int32 ikcp_input(::System::IntPtr kcp, ::Il2CppArray<::System::Byte>* data, ::System::Int32 offset, ::System::Int32 size)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_IKCP_INPUT_OFFSET))(kcp, data, offset, size);
		}

		static ::System::Int32 ikcp_nodelay(::System::IntPtr kcp, ::System::Int32 nodelay, ::System::Int32 interval, ::System::Int32 resend, ::System::Int32 nc)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_IKCP_NODELAY_OFFSET))(kcp, nodelay, interval, resend, nc);
		}

		static ::System::Int32 ikcp_peeksize(::System::IntPtr kcp)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_IKCP_PEEKSIZE_OFFSET))(kcp);
		}

		static ::System::Int32 ikcp_recv(::System::IntPtr kcp, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32 len)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_IKCP_RECV_OFFSET))(kcp, buffer, len);
		}

		static ::System::Void ikcp_release(::System::IntPtr kcp)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_IKCP_RELEASE_OFFSET))(kcp);
		}

		static ::System::Int32 ikcp_send(::System::IntPtr kcp, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32 len)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_IKCP_SEND_OFFSET))(kcp, buffer, len);
		}

		static ::System::Void ikcp_setminrto(::System::IntPtr ptr, ::System::Int32 minrto)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_IKCP_SETMINRTO_OFFSET))(ptr, minrto);
		}

		static ::System::Int32 ikcp_setmtu(::System::IntPtr kcp, ::System::Int32 mtu)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_IKCP_SETMTU_OFFSET))(kcp, mtu);
		}

		static ::System::Void ikcp_setoutput(::System::IntPtr kcp, ::MiHoYo::SDK::KcpOutput* output)
		{
			return ((::System::Void(*)(::System::IntPtr, ::MiHoYo::SDK::KcpOutput*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_IKCP_SETOUTPUT_OFFSET))(kcp, output);
		}

		static ::System::Void ikcp_update(::System::IntPtr kcp, ::System::UInt32 current)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_IKCP_UPDATE_OFFSET))(kcp, current);
		}

		static ::System::Int32 ikcp_waitsnd(::System::IntPtr kcp)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_IKCP_WAITSND_OFFSET))(kcp);
		}

		static ::System::Int32 ikcp_wndsize(::System::IntPtr kcp, ::System::Int32 sndwnd, ::System::Int32 rcvwnd)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_IKCP_WNDSIZE_OFFSET))(kcp, sndwnd, rcvwnd);
		}

		static ::System::UInt32 KcpCheck(::System::IntPtr kcp, ::System::UInt32 current)
		{
			return ((::System::UInt32(*)(::System::IntPtr, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_KCPCHECK_OFFSET))(kcp, current);
		}

		static ::System::IntPtr KcpCreate(::System::UInt32 conv, ::System::IntPtr user)
		{
			return ((::System::IntPtr(*)(::System::UInt32, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_KCPCREATE_OFFSET))(conv, user);
		}

		static ::System::Void KcpFlush(::System::IntPtr kcp)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_KCPFLUSH_OFFSET))(kcp);
		}

		static ::System::UInt32 KcpGetconv(::System::IntPtr ptr)
		{
			return ((::System::UInt32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_KCPGETCONV_OFFSET))(ptr);
		}

		static ::System::Int32 KcpInput(::System::IntPtr kcp, ::Il2CppArray<::System::Byte>* data, ::System::Int32 offset, ::System::Int32 size)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_KCPINPUT_OFFSET))(kcp, data, offset, size);
		}

		static ::System::Int32 KcpNodelay(::System::IntPtr kcp, ::System::Int32 nodelay, ::System::Int32 interval, ::System::Int32 resend, ::System::Int32 nc)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_KCPNODELAY_OFFSET))(kcp, nodelay, interval, resend, nc);
		}

		static ::System::Int32 KcpPeeksize(::System::IntPtr kcp)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_KCPPEEKSIZE_OFFSET))(kcp);
		}

		static ::System::Int32 KcpRecv(::System::IntPtr kcp, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32 len)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_KCPRECV_OFFSET))(kcp, buffer, len);
		}

		static ::System::Void KcpRelease(::System::IntPtr kcp)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_KCPRELEASE_OFFSET))(kcp);
		}

		static ::System::Int32 KcpSend(::System::IntPtr kcp, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32 len)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_KCPSEND_OFFSET))(kcp, buffer, len);
		}

		static ::System::Void KcpSetminrto(::System::IntPtr kcp, ::System::Int32 minrto)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_KCPSETMINRTO_OFFSET))(kcp, minrto);
		}

		static ::System::Int32 KcpSetmtu(::System::IntPtr kcp, ::System::Int32 mtu)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_KCPSETMTU_OFFSET))(kcp, mtu);
		}

		static ::System::Void KcpSetoutput(::System::IntPtr kcp, ::MiHoYo::SDK::KcpOutput* output)
		{
			return ((::System::Void(*)(::System::IntPtr, ::MiHoYo::SDK::KcpOutput*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_KCPSETOUTPUT_OFFSET))(kcp, output);
		}

		static ::System::Void KcpUpdate(::System::IntPtr kcp, ::System::UInt32 current)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_KCPUPDATE_OFFSET))(kcp, current);
		}

		static ::System::Int32 KcpWaitsnd(::System::IntPtr kcp)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_KCPWAITSND_OFFSET))(kcp);
		}

		static ::System::Int32 KcpWndsize(::System::IntPtr kcp, ::System::Int32 sndwnd, ::System::Int32 rcvwnd)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPNATIVE_KCPWNDSIZE_OFFSET))(kcp, sndwnd, rcvwnd);
		}
	};
}
