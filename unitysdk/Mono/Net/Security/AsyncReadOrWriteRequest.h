#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Net/Security/AsyncProtocolRequest.h"

namespace Mono::Net::Security { class BufferOffsetSize; }
namespace Mono::Net::Security { class MobileAuthenticatedStream; }
namespace System { class String; }

#define MONO_NET_SECURITY_ASYNCREADORWRITEREQUEST_GET_CURRENTSIZE_OFFSET UNITYSDK_OFFSET(0x1AF0B290)
#define MONO_NET_SECURITY_ASYNCREADORWRITEREQUEST_GET_USERBUFFER_OFFSET UNITYSDK_OFFSET(0x1AF0B280)
#define MONO_NET_SECURITY_ASYNCREADORWRITEREQUEST_SET_CURRENTSIZE_OFFSET UNITYSDK_OFFSET(0x1AF0B2A0)
#define MONO_NET_SECURITY_ASYNCREADORWRITEREQUEST_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AF0B3E0)
#define MONO_NET_SECURITY_ASYNCREADORWRITEREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF0B2B0)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int AsyncReadOrWriteRequest_TypeDefinitionIndex = 2420;

	class AsyncReadOrWriteRequest : public ::Mono::Net::Security::AsyncProtocolRequest
	{
	public:
		::Mono::Net::Security::BufferOffsetSize* _UserBuffer_k__BackingField; // 0x38
		::System::Int32 _CurrentSize_k__BackingField; // 0x40

		::System::Void _ctor(::Mono::Net::Security::MobileAuthenticatedStream* a1, ::System::Boolean a2, ::Il2CppArray<::System::Byte>* a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Net::Security::MobileAuthenticatedStream*, ::System::Boolean, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCREADORWRITEREQUEST__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::Mono::Net::Security::BufferOffsetSize* get_UserBuffer()
		{
			return ((::Mono::Net::Security::BufferOffsetSize*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCREADORWRITEREQUEST_GET_USERBUFFER_OFFSET))(this);
		}

		::System::Int32 get_CurrentSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCREADORWRITEREQUEST_GET_CURRENTSIZE_OFFSET))(this);
		}

		::System::Void set_CurrentSize(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCREADORWRITEREQUEST_SET_CURRENTSIZE_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCREADORWRITEREQUEST_TOSTRING_OFFSET))(this);
		}
	};
}
