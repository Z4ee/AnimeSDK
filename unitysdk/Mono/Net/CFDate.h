#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

#define MONO_NET_CFDATE_CFDATECREATE_OFFSET UNITYSDK_OFFSET(0x1A311450)
#define MONO_NET_CFDATE_CREATE_OFFSET UNITYSDK_OFFSET(0x1A3114E0)
#define MONO_NET_CFDATE_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1A3116C0)
#define MONO_NET_CFDATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A311610)
#define MONO_NET_CFDATE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A3113E0)
#define MONO_NET_CFDATE_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x1A311600)
#define MONO_NET_CFDATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A311350)

namespace Mono::Net
{
	inline static constexpr unsigned int CFDate_TypeDefinitionIndex = 2605;

	class CFDate : public ::System::Object
	{
	public:
		::System::IntPtr handle; // 0x10

		::System::Void _ctor(::System::IntPtr handle, ::System::Boolean owns)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_CFDATE__CTOR_OFFSET))(this, handle, owns);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFDATE_FINALIZE_OFFSET))(this);
		}

		static ::System::IntPtr CFDateCreate(::System::IntPtr allocator, ::System::Double at)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Double))((::PBYTE)hIl2Cpp + MONO_NET_CFDATE_CFDATECREATE_OFFSET))(allocator, at);
		}

		static ::Mono::Net::CFDate* Create(::System::DateTime date)
		{
			return ((::Mono::Net::CFDate*(*)(::System::DateTime))((::PBYTE)hIl2Cpp + MONO_NET_CFDATE_CREATE_OFFSET))(date);
		}

		::System::IntPtr get_Handle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFDATE_GET_HANDLE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFDATE_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_CFDATE_DISPOSE_1_OFFSET))(this, disposing);
		}
	};
}
