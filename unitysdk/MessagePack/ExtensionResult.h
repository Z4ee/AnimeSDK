#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Buffers/ReadOnlySequence_1.h"
#include "unitysdk/System/ValueType.h"

#define MESSAGEPACK_EXTENSIONRESULT_GET_DATA_OFFSET UNITYSDK_OFFSET(0x2D2B7A0)
#define MESSAGEPACK_EXTENSIONRESULT_SET_DATA_OFFSET UNITYSDK_OFFSET(0x38268C0)
#define MESSAGEPACK_EXTENSIONRESULT_SET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x13CFF0)
#define MESSAGEPACK_EXTENSIONRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x3826890)

namespace MessagePack
{
	inline static constexpr unsigned int ExtensionResult_TypeDefinitionIndex = 7115;

	struct alignas(8) ExtensionResult
	{
		::System::SByte _TypeCode_k__BackingField; // 0x10
		::System::Buffers::ReadOnlySequence_1<::System::Byte> _Data_k__BackingField; // 0x18

		::System::Void _ctor(::System::SByte a1, ::System::Buffers::ReadOnlySequence_1<::System::Byte> a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::SByte, ::System::Buffers::ReadOnlySequence_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_EXTENSIONRESULT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void set_TypeCode(::System::SByte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::SByte))((::PBYTE)hIl2Cpp + MESSAGEPACK_EXTENSIONRESULT_SET_TYPECODE_OFFSET))(this, a1);
		}

		::System::Buffers::ReadOnlySequence_1<::System::Byte> get_Data()
		{
			return ((::System::Buffers::ReadOnlySequence_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_EXTENSIONRESULT_GET_DATA_OFFSET))(this);
		}

		::System::Void set_Data(::System::Buffers::ReadOnlySequence_1<::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Buffers::ReadOnlySequence_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_EXTENSIONRESULT_SET_DATA_OFFSET))(this, a1);
		}
	};
}
