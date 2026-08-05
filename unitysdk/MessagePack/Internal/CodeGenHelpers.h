#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/System/Buffers/ReadOnlySequence_1.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

namespace System { class String; }

#define MESSAGEPACK_INTERNAL_CODEGENHELPERS_GETARRAYFROMNULLABLESEQUENCE_OFFSET UNITYSDK_OFFSET(0x1E8BDA00)
#define MESSAGEPACK_INTERNAL_CODEGENHELPERS_GETENCODEDSTRINGBYTES_OFFSET UNITYSDK_OFFSET(0x1E8BD2A0)
#define MESSAGEPACK_INTERNAL_CODEGENHELPERS_GETSPANFROMSEQUENCE_1_OFFSET UNITYSDK_OFFSET(0x1E8BD870)
#define MESSAGEPACK_INTERNAL_CODEGENHELPERS_GETSPANFROMSEQUENCE_OFFSET UNITYSDK_OFFSET(0x1E8BD6E0)
#define MESSAGEPACK_INTERNAL_CODEGENHELPERS_READSTRINGSPAN_OFFSET UNITYSDK_OFFSET(0x1E8BD7D0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int CodeGenHelpers_TypeDefinitionIndex = 30929;

	class CodeGenHelpers : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>* GetEncodedStringBytes(::System::String* value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_CODEGENHELPERS_GETENCODEDSTRINGBYTES_OFFSET))(value);
		}

		static ::System::ReadOnlySpan_1<::System::Byte> GetSpanFromSequence(::System::Buffers::ReadOnlySequence_1<::System::Byte>& sequence)
		{
			return ((::System::ReadOnlySpan_1<::System::Byte>(*)(::System::Buffers::ReadOnlySequence_1<::System::Byte>&))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_CODEGENHELPERS_GETSPANFROMSEQUENCE_OFFSET))(sequence);
		}

		static ::System::ReadOnlySpan_1<::System::Byte> ReadStringSpan(::MessagePack::MessagePackReader& reader)
		{
			return ((::System::ReadOnlySpan_1<::System::Byte>(*)(::MessagePack::MessagePackReader&))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_CODEGENHELPERS_READSTRINGSPAN_OFFSET))(reader);
		}

		static ::Il2CppArray<::System::Byte>* GetArrayFromNullableSequence(::System::Nullable_1<::System::Buffers::ReadOnlySequence_1<::System::Byte>>& sequence)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Nullable_1<::System::Buffers::ReadOnlySequence_1<::System::Byte>>&))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_CODEGENHELPERS_GETARRAYFROMNULLABLESEQUENCE_OFFSET))(sequence);
		}

		static ::System::ReadOnlySpan_1<::System::Byte> GetSpanFromSequence_1(::System::Nullable_1<::System::Buffers::ReadOnlySequence_1<::System::Byte>>& sequence)
		{
			return ((::System::ReadOnlySpan_1<::System::Byte>(*)(::System::Nullable_1<::System::Buffers::ReadOnlySequence_1<::System::Byte>>&))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_CODEGENHELPERS_GETSPANFROMSEQUENCE_1_OFFSET))(sequence);
		}
	};
}
