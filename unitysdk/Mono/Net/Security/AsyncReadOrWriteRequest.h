#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Net/Security/AsyncProtocolRequest.h"

namespace Mono::Net::Security { class BufferOffsetSize; }
namespace Mono::Net::Security { class MobileAuthenticatedStream; }
namespace System { class String; }

#define MONO_NET_SECURITY_ASYNCREADORWRITEREQUEST_GET_CURRENTSIZE_OFFSET UNITYSDK_OFFSET(0x1A099FE0)
#define MONO_NET_SECURITY_ASYNCREADORWRITEREQUEST_GET_USERBUFFER_OFFSET UNITYSDK_OFFSET(0x1A099FD0)
#define MONO_NET_SECURITY_ASYNCREADORWRITEREQUEST_SET_CURRENTSIZE_OFFSET UNITYSDK_OFFSET(0x1A099FF0)
#define MONO_NET_SECURITY_ASYNCREADORWRITEREQUEST_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A09A130)
#define MONO_NET_SECURITY_ASYNCREADORWRITEREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1A09A000)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int AsyncReadOrWriteRequest_TypeDefinitionIndex = 2420;

	class AsyncReadOrWriteRequest : public ::Mono::Net::Security::AsyncProtocolRequest
	{
	public:
		::Mono::Net::Security::BufferOffsetSize* _UserBuffer_k__BackingField; // 0x38
		::System::Int32 _CurrentSize_k__BackingField; // 0x40

		::System::Void _ctor(::Mono::Net::Security::MobileAuthenticatedStream* parent, ::System::Boolean sync, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Net::Security::MobileAuthenticatedStream*, ::System::Boolean, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCREADORWRITEREQUEST__CTOR_OFFSET))(this, parent, sync, buffer, offset, size);
		}

		::Mono::Net::Security::BufferOffsetSize* get_UserBuffer()
		{
			return ((::Mono::Net::Security::BufferOffsetSize*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCREADORWRITEREQUEST_GET_USERBUFFER_OFFSET))(this);
		}

		::System::Int32 get_CurrentSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCREADORWRITEREQUEST_GET_CURRENTSIZE_OFFSET))(this);
		}

		::System::Void set_CurrentSize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCREADORWRITEREQUEST_SET_CURRENTSIZE_OFFSET))(this, value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCREADORWRITEREQUEST_TOSTRING_OFFSET))(this);
		}
	};
}
