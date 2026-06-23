#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::IO { class MemoryStream; }

#define FOUNDATION_BYTESWRITER_WRITEBYTES_1_OFFSET UNITYSDK_OFFSET(0x1E4F0B90)
#define FOUNDATION_BYTESWRITER_WRITEBYTES_2_OFFSET UNITYSDK_OFFSET(0x1E4F0C80)
#define FOUNDATION_BYTESWRITER_WRITEBYTES_3_OFFSET UNITYSDK_OFFSET(0x1E4F0D70)
#define FOUNDATION_BYTESWRITER_WRITEBYTES_4_OFFSET UNITYSDK_OFFSET(0x1E4F0E60)
#define FOUNDATION_BYTESWRITER_WRITEBYTES_5_OFFSET UNITYSDK_OFFSET(0x1E4F0F50)
#define FOUNDATION_BYTESWRITER_WRITEBYTES_OFFSET UNITYSDK_OFFSET(0x1E4F0AA0)
#define FOUNDATION_BYTESWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4F1040)

namespace Foundation
{
	inline static constexpr unsigned int BytesWriter_TypeDefinitionIndex = 8038;

	class BytesWriter : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* _bytes; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BYTESWRITER__CTOR_OFFSET))(this);
		}

		::System::Int32 WriteBytes(::System::IO::MemoryStream* stream, ::System::Int16 value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IO::MemoryStream*, ::System::Int16))((::PBYTE)hIl2Cpp + FOUNDATION_BYTESWRITER_WRITEBYTES_OFFSET))(this, stream, value);
		}

		::System::Int32 WriteBytes_1(::System::IO::MemoryStream* stream, ::System::UInt16 value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IO::MemoryStream*, ::System::UInt16))((::PBYTE)hIl2Cpp + FOUNDATION_BYTESWRITER_WRITEBYTES_1_OFFSET))(this, stream, value);
		}

		::System::Int32 WriteBytes_2(::System::IO::MemoryStream* stream, ::System::Int32 value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IO::MemoryStream*, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_BYTESWRITER_WRITEBYTES_2_OFFSET))(this, stream, value);
		}

		::System::Int32 WriteBytes_3(::System::IO::MemoryStream* stream, ::System::UInt32 value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IO::MemoryStream*, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_BYTESWRITER_WRITEBYTES_3_OFFSET))(this, stream, value);
		}

		::System::Int32 WriteBytes_4(::System::IO::MemoryStream* stream, ::System::Int64 value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IO::MemoryStream*, ::System::Int64))((::PBYTE)hIl2Cpp + FOUNDATION_BYTESWRITER_WRITEBYTES_4_OFFSET))(this, stream, value);
		}

		::System::Int32 WriteBytes_5(::System::IO::MemoryStream* stream, ::System::UInt64 value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IO::MemoryStream*, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_BYTESWRITER_WRITEBYTES_5_OFFSET))(this, stream, value);
		}
	};
}
