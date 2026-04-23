#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Net/CFObject.h"

#define MONO_NET_CFNUMBER_ASINT32_OFFSET UNITYSDK_OFFSET(0x1A096730)
#define MONO_NET_CFNUMBER_CFNUMBERGETVALUE_OFFSET UNITYSDK_OFFSET(0x1A096690)

namespace Mono::Net
{
	inline static constexpr unsigned int CFNumber_TypeDefinitionIndex = 2396;

	class CFNumber : public ::Mono::Net::CFObject
	{
	public:
		static ::System::Boolean CFNumberGetValue(::System::IntPtr handle, ::System::IntPtr type, ::System::Int32& value)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::IntPtr, ::System::Int32&))((::PBYTE)hIl2Cpp + MONO_NET_CFNUMBER_CFNUMBERGETVALUE_OFFSET))(handle, type, value);
		}

		static ::System::Int32 AsInt32(::System::IntPtr handle)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFNUMBER_ASINT32_OFFSET))(handle);
		}
	};
}
