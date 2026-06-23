#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Net/Security/BufferOffsetSize.h"

#define MONO_NET_SECURITY_BUFFEROFFSETSIZE2_APPENDDATA_OFFSET UNITYSDK_OFFSET(0x1BEB0DF0)
#define MONO_NET_SECURITY_BUFFEROFFSETSIZE2_MAKEROOM_OFFSET UNITYSDK_OFFSET(0x1BEB0D40)
#define MONO_NET_SECURITY_BUFFEROFFSETSIZE2_RESET_OFFSET UNITYSDK_OFFSET(0x1BEB0CC0)
#define MONO_NET_SECURITY_BUFFEROFFSETSIZE2__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEB0C70)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int BufferOffsetSize2_TypeDefinitionIndex = 2606;

	class BufferOffsetSize2 : public ::Mono::Net::Security::BufferOffsetSize
	{
	public:
		::System::Int32 InitialSize; // 0x28

		::System::Void _ctor(::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_BUFFEROFFSETSIZE2__CTOR_OFFSET))(this, size);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_BUFFEROFFSETSIZE2_RESET_OFFSET))(this);
		}

		::System::Void MakeRoom(::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_BUFFEROFFSETSIZE2_MAKEROOM_OFFSET))(this, size);
		}

		::System::Void AppendData(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_BUFFEROFFSETSIZE2_APPENDDATA_OFFSET))(this, buffer, offset, size);
		}
	};
}
