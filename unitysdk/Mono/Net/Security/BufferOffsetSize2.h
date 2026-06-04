#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Net/Security/BufferOffsetSize.h"

#define MONO_NET_SECURITY_BUFFEROFFSETSIZE2_APPENDDATA_OFFSET UNITYSDK_OFFSET(0x1AF0BA40)
#define MONO_NET_SECURITY_BUFFEROFFSETSIZE2_MAKEROOM_OFFSET UNITYSDK_OFFSET(0x1AF0B9B0)
#define MONO_NET_SECURITY_BUFFEROFFSETSIZE2_RESET_OFFSET UNITYSDK_OFFSET(0x1AF0B950)
#define MONO_NET_SECURITY_BUFFEROFFSETSIZE2__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF0B910)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int BufferOffsetSize2_TypeDefinitionIndex = 2412;

	class BufferOffsetSize2 : public ::Mono::Net::Security::BufferOffsetSize
	{
	public:
		::System::Int32 InitialSize; // 0x28

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_BUFFEROFFSETSIZE2__CTOR_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_BUFFEROFFSETSIZE2_RESET_OFFSET))(this);
		}

		::System::Void MakeRoom(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_BUFFEROFFSETSIZE2_MAKEROOM_OFFSET))(this, a1);
		}

		::System::Void AppendData(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_BUFFEROFFSETSIZE2_APPENDDATA_OFFSET))(this, a1, a2, a3);
		}
	};
}
