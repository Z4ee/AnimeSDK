#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::IO { class Stream; }

#define MIHOYO_SDK_SECURITYTUNNEL_SAFESTREAMACCESSOR_TRYREADSTREAM_OFFSET UNITYSDK_OFFSET(0xB2A8FC0)
#define MIHOYO_SDK_SECURITYTUNNEL_SAFESTREAMACCESSOR_TRYWRITESTREAM_OFFSET UNITYSDK_OFFSET(0xB2AC710)
#define MIHOYO_SDK_SECURITYTUNNEL_SAFESTREAMACCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0xB2AD610)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_SafeStreamAccessor_TypeDefinitionIndex = 46870;

	class SecurityTunnel_SafeStreamAccessor : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_SAFESTREAMACCESSOR__CTOR_OFFSET))(this);
		}

		static ::Il2CppArray<::System::Byte>* TryReadStream(::System::IO::Stream* a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::IO::Stream*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_SAFESTREAMACCESSOR_TRYREADSTREAM_OFFSET))(a1, a2, a3);
		}

		static ::System::Void TryWriteStream(::System::IO::Stream* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Void(*)(::System::IO::Stream*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_SAFESTREAMACCESSOR_TRYWRITESTREAM_OFFSET))(a1, a2);
		}
	};
}
