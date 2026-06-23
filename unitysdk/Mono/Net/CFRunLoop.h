#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Net/CFObject.h"

namespace Mono::Net { class CFString; }

#define MONO_NET_CFRUNLOOP_ADDSOURCE_OFFSET UNITYSDK_OFFSET(0x1C2DDEF0)
#define MONO_NET_CFRUNLOOP_CFRUNLOOPADDSOURCE_OFFSET UNITYSDK_OFFSET(0x1C2DDA70)
#define MONO_NET_CFRUNLOOP_CFRUNLOOPGETCURRENT_OFFSET UNITYSDK_OFFSET(0x1C2DDC30)
#define MONO_NET_CFRUNLOOP_CFRUNLOOPREMOVESOURCE_OFFSET UNITYSDK_OFFSET(0x1C2DDB00)
#define MONO_NET_CFRUNLOOP_CFRUNLOOPRUNINMODE_OFFSET UNITYSDK_OFFSET(0x1C2DDB90)
#define MONO_NET_CFRUNLOOP_CFRUNLOOPSTOP_OFFSET UNITYSDK_OFFSET(0x1C2DDCB0)
#define MONO_NET_CFRUNLOOP_GET_CURRENTRUNLOOP_OFFSET UNITYSDK_OFFSET(0x1C2DDDC0)
#define MONO_NET_CFRUNLOOP_REMOVESOURCE_OFFSET UNITYSDK_OFFSET(0x1C2DDF90)
#define MONO_NET_CFRUNLOOP_RUNINMODE_OFFSET UNITYSDK_OFFSET(0x1C2DE030)
#define MONO_NET_CFRUNLOOP_STOP_OFFSET UNITYSDK_OFFSET(0x1C2DE0E0)
#define MONO_NET_CFRUNLOOP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2DDD30)

namespace Mono::Net
{
	inline static constexpr unsigned int CFRunLoop_TypeDefinitionIndex = 2594;

	class CFRunLoop : public ::Mono::Net::CFObject
	{
	public:
		::System::Void _ctor(::System::IntPtr handle, ::System::Boolean own)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_CFRUNLOOP__CTOR_OFFSET))(this, handle, own);
		}

		static ::System::Void CFRunLoopAddSource(::System::IntPtr rl, ::System::IntPtr source, ::System::IntPtr mode)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFRUNLOOP_CFRUNLOOPADDSOURCE_OFFSET))(rl, source, mode);
		}

		static ::System::Void CFRunLoopRemoveSource(::System::IntPtr rl, ::System::IntPtr source, ::System::IntPtr mode)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFRUNLOOP_CFRUNLOOPREMOVESOURCE_OFFSET))(rl, source, mode);
		}

		static ::System::Int32 CFRunLoopRunInMode(::System::IntPtr mode, ::System::Double seconds, ::System::Boolean returnAfterSourceHandled)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Double, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_CFRUNLOOP_CFRUNLOOPRUNINMODE_OFFSET))(mode, seconds, returnAfterSourceHandled);
		}

		static ::System::IntPtr CFRunLoopGetCurrent()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + MONO_NET_CFRUNLOOP_CFRUNLOOPGETCURRENT_OFFSET))();
		}

		static ::System::Void CFRunLoopStop(::System::IntPtr rl)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFRUNLOOP_CFRUNLOOPSTOP_OFFSET))(rl);
		}

		static ::Mono::Net::CFRunLoop* get_CurrentRunLoop()
		{
			return ((::Mono::Net::CFRunLoop*(*)())((::PBYTE)hIl2Cpp + MONO_NET_CFRUNLOOP_GET_CURRENTRUNLOOP_OFFSET))();
		}

		::System::Void AddSource(::System::IntPtr source, ::Mono::Net::CFString* mode)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::Mono::Net::CFString*))((::PBYTE)hIl2Cpp + MONO_NET_CFRUNLOOP_ADDSOURCE_OFFSET))(this, source, mode);
		}

		::System::Void RemoveSource(::System::IntPtr source, ::Mono::Net::CFString* mode)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::Mono::Net::CFString*))((::PBYTE)hIl2Cpp + MONO_NET_CFRUNLOOP_REMOVESOURCE_OFFSET))(this, source, mode);
		}

		::System::Int32 RunInMode(::Mono::Net::CFString* mode, ::System::Double seconds, ::System::Boolean returnAfterSourceHandled)
		{
			return ((::System::Int32(*)(::PVOID, ::Mono::Net::CFString*, ::System::Double, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_CFRUNLOOP_RUNINMODE_OFFSET))(this, mode, seconds, returnAfterSourceHandled);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFRUNLOOP_STOP_OFFSET))(this);
		}
	};
}
