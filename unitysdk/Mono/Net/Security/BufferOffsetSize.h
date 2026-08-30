#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MONO_NET_SECURITY_BUFFEROFFSETSIZE_GET_ENDOFFSET_OFFSET UNITYSDK_OFFSET(0x1C476A70)
#define MONO_NET_SECURITY_BUFFEROFFSETSIZE_GET_REMAINING_OFFSET UNITYSDK_OFFSET(0x1C476A80)
#define MONO_NET_SECURITY_BUFFEROFFSETSIZE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C476AB0)
#define MONO_NET_SECURITY_BUFFEROFFSETSIZE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4764F0)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int BufferOffsetSize_TypeDefinitionIndex = 2422;

	class BufferOffsetSize : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* Buffer; // 0x10
		::System::Boolean Complete; // 0x18
		::System::Int32 Offset; // 0x1C
		::System::Int32 Size; // 0x20
		::System::Int32 TotalBytes; // 0x24

		::System::Void _ctor(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_BUFFEROFFSETSIZE__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 get_EndOffset()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_BUFFEROFFSETSIZE_GET_ENDOFFSET_OFFSET))(this);
		}

		::System::Int32 get_Remaining()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_BUFFEROFFSETSIZE_GET_REMAINING_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_BUFFEROFFSETSIZE_TOSTRING_OFFSET))(this);
		}
	};
}
