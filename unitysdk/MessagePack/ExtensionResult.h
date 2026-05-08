#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Buffers/ReadOnlySequence_1.h"
#include "unitysdk/System/ValueType.h"

#define MESSAGEPACK_EXTENSIONRESULT_GET_DATA_OFFSET UNITYSDK_OFFSET(0x3A5480)
#define MESSAGEPACK_EXTENSIONRESULT_GET_HEADER_OFFSET UNITYSDK_OFFSET(0x94BBF0)
#define MESSAGEPACK_EXTENSIONRESULT_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x2E7930)
#define MESSAGEPACK_EXTENSIONRESULT_SET_DATA_OFFSET UNITYSDK_OFFSET(0x94BBE0)
#define MESSAGEPACK_EXTENSIONRESULT_SET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x2E7740)
#define MESSAGEPACK_EXTENSIONRESULT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3EBF80)
#define MESSAGEPACK_EXTENSIONRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x94BB80)

namespace MessagePack
{
	inline static constexpr unsigned int ExtensionResult_TypeDefinitionIndex = 27352;

	struct alignas(8) ExtensionResult
	{
		::System::SByte _TypeCode_k__BackingField; // 0x10
		::System::Buffers::ReadOnlySequence_1<::System::Byte> _Data_k__BackingField; // 0x18

		/*
		::System::Void _ctor(::System::SByte typeCode, ::System::Memory_1<::System::Byte> data)
		{
			return ((::System::Void(*)(::PVOID, ::System::SByte, ::System::Memory_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_EXTENSIONRESULT__CTOR_OFFSET))(this, typeCode, data);
		}
		*/

		::System::Void _ctor_1(::System::SByte typeCode, ::System::Buffers::ReadOnlySequence_1<::System::Byte> data)
		{
			return ((::System::Void(*)(::PVOID, ::System::SByte, ::System::Buffers::ReadOnlySequence_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_EXTENSIONRESULT__CTOR_1_OFFSET))(this, typeCode, data);
		}

		::System::SByte get_TypeCode()
		{
			return ((::System::SByte(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_EXTENSIONRESULT_GET_TYPECODE_OFFSET))(this);
		}

		::System::Void set_TypeCode(::System::SByte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::SByte))((::PBYTE)hIl2Cpp + MESSAGEPACK_EXTENSIONRESULT_SET_TYPECODE_OFFSET))(this, value);
		}

		::System::Buffers::ReadOnlySequence_1<::System::Byte> get_Data()
		{
			return ((::System::Buffers::ReadOnlySequence_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_EXTENSIONRESULT_GET_DATA_OFFSET))(this);
		}

		::System::Void set_Data(::System::Buffers::ReadOnlySequence_1<::System::Byte> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Buffers::ReadOnlySequence_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_EXTENSIONRESULT_SET_DATA_OFFSET))(this, value);
		}

		/*
		::MessagePack::ExtensionHeader get_Header()
		{
			return ((::MessagePack::ExtensionHeader(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_EXTENSIONRESULT_GET_HEADER_OFFSET))(this);
		}
		*/
	};
}
