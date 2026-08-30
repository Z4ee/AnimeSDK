#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Net/CFObject.h"

namespace Mono::Net { class CFString; }

#define MONO_NET_CFRUNLOOP_ADDSOURCE_OFFSET UNITYSDK_OFFSET(0x1E8F47E0)
#define MONO_NET_CFRUNLOOP_CFRUNLOOPADDSOURCE_OFFSET UNITYSDK_OFFSET(0x1E8F8710)
#define MONO_NET_CFRUNLOOP_CFRUNLOOPGETCURRENT_OFFSET UNITYSDK_OFFSET(0x1E8F88D0)
#define MONO_NET_CFRUNLOOP_CFRUNLOOPREMOVESOURCE_OFFSET UNITYSDK_OFFSET(0x1E8F87A0)
#define MONO_NET_CFRUNLOOP_CFRUNLOOPRUNINMODE_OFFSET UNITYSDK_OFFSET(0x1E8F8830)
#define MONO_NET_CFRUNLOOP_CFRUNLOOPSTOP_OFFSET UNITYSDK_OFFSET(0x1E8F8950)
#define MONO_NET_CFRUNLOOP_GET_CURRENTRUNLOOP_OFFSET UNITYSDK_OFFSET(0x1E8F45C0)
#define MONO_NET_CFRUNLOOP_REMOVESOURCE_OFFSET UNITYSDK_OFFSET(0x1E8F4930)
#define MONO_NET_CFRUNLOOP_RUNINMODE_OFFSET UNITYSDK_OFFSET(0x1E8F4880)
#define MONO_NET_CFRUNLOOP_STOP_OFFSET UNITYSDK_OFFSET(0x1E8F56F0)
#define MONO_NET_CFRUNLOOP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8F89D0)

namespace Mono::Net
{
	inline static constexpr unsigned int CFRunLoop_TypeDefinitionIndex = 2413;

	class CFRunLoop : public ::Mono::Net::CFObject
	{
	public:
		::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_CFRUNLOOP__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void CFRunLoopAddSource(::System::IntPtr a1, ::System::IntPtr a2, ::System::IntPtr a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFRUNLOOP_CFRUNLOOPADDSOURCE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CFRunLoopRemoveSource(::System::IntPtr a1, ::System::IntPtr a2, ::System::IntPtr a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFRUNLOOP_CFRUNLOOPREMOVESOURCE_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 CFRunLoopRunInMode(::System::IntPtr a1, ::System::Double a2, ::System::Boolean a3)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Double, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_CFRUNLOOP_CFRUNLOOPRUNINMODE_OFFSET))(a1, a2, a3);
		}

		static ::System::IntPtr CFRunLoopGetCurrent()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + MONO_NET_CFRUNLOOP_CFRUNLOOPGETCURRENT_OFFSET))();
		}

		static ::System::Void CFRunLoopStop(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFRUNLOOP_CFRUNLOOPSTOP_OFFSET))(a1);
		}

		static ::Mono::Net::CFRunLoop* get_CurrentRunLoop()
		{
			return ((::Mono::Net::CFRunLoop*(*)())((::PBYTE)hIl2Cpp + MONO_NET_CFRUNLOOP_GET_CURRENTRUNLOOP_OFFSET))();
		}

		::System::Void AddSource(::System::IntPtr a1, ::Mono::Net::CFString* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::Mono::Net::CFString*))((::PBYTE)hIl2Cpp + MONO_NET_CFRUNLOOP_ADDSOURCE_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveSource(::System::IntPtr a1, ::Mono::Net::CFString* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::Mono::Net::CFString*))((::PBYTE)hIl2Cpp + MONO_NET_CFRUNLOOP_REMOVESOURCE_OFFSET))(this, a1, a2);
		}

		::System::Int32 RunInMode(::Mono::Net::CFString* a1, ::System::Double a2, ::System::Boolean a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Mono::Net::CFString*, ::System::Double, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_CFRUNLOOP_RUNINMODE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFRUNLOOP_STOP_OFFSET))(this);
		}
	};
}
