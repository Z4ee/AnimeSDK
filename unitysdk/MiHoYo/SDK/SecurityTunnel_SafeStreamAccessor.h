#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::IO { class Stream; }

#define MIHOYO_SDK_SECURITYTUNNEL_SAFESTREAMACCESSOR_TRYREADSTREAM_OFFSET UNITYSDK_OFFSET(0x858EA30)
#define MIHOYO_SDK_SECURITYTUNNEL_SAFESTREAMACCESSOR_TRYWRITESTREAM_OFFSET UNITYSDK_OFFSET(0x858C310)
#define MIHOYO_SDK_SECURITYTUNNEL_SAFESTREAMACCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x8594600)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_SafeStreamAccessor_TypeDefinitionIndex = 37174;

	class SecurityTunnel_SafeStreamAccessor : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_SAFESTREAMACCESSOR__CTOR_OFFSET))(this);
		}

		static ::Il2CppArray<::System::Byte>* TryReadStream(::System::IO::Stream* stream, ::System::UInt32 length, ::System::Boolean convertEndian)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::IO::Stream*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_SAFESTREAMACCESSOR_TRYREADSTREAM_OFFSET))(stream, length, convertEndian);
		}

		static ::System::Void TryWriteStream(::System::IO::Stream* stream, ::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::System::Void(*)(::System::IO::Stream*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_SAFESTREAMACCESSOR_TRYWRITESTREAM_OFFSET))(stream, bytes);
		}
	};
}
