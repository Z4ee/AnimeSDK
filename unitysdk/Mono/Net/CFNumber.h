#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Net/CFObject.h"

#define MONO_NET_CFNUMBER_ASINT32_OFFSET UNITYSDK_OFFSET(0x1A840160)
#define MONO_NET_CFNUMBER_CFNUMBERGETVALUE_OFFSET UNITYSDK_OFFSET(0x1A8400C0)

namespace Mono::Net
{
	inline static constexpr unsigned int CFNumber_TypeDefinitionIndex = 2400;

	class CFNumber : public ::Mono::Net::CFObject
	{
	public:
		static ::System::Boolean CFNumberGetValue(::System::IntPtr a1, ::System::IntPtr a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::IntPtr, ::System::Int32&))((::PBYTE)hIl2Cpp + MONO_NET_CFNUMBER_CFNUMBERGETVALUE_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 AsInt32(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFNUMBER_ASINT32_OFFSET))(a1);
		}
	};
}
