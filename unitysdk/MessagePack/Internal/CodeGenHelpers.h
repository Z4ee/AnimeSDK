#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Buffers/ReadOnlySequence_1.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MESSAGEPACK_INTERNAL_CODEGENHELPERS_GETARRAYFROMNULLABLESEQUENCE_OFFSET UNITYSDK_OFFSET(0x15D46F20)
#define MESSAGEPACK_INTERNAL_CODEGENHELPERS_GETENCODEDSTRINGBYTES_OFFSET UNITYSDK_OFFSET(0x15D46A80)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int CodeGenHelpers_TypeDefinitionIndex = 9142;

	class CodeGenHelpers : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>* GetEncodedStringBytes(::System::String* value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_CODEGENHELPERS_GETENCODEDSTRINGBYTES_OFFSET))(value);
		}

		static ::Il2CppArray<::System::Byte>* GetArrayFromNullableSequence(::System::Nullable_1<::System::Buffers::ReadOnlySequence_1<::System::Byte>>& sequence)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Nullable_1<::System::Buffers::ReadOnlySequence_1<::System::Byte>>&))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_CODEGENHELPERS_GETARRAYFROMNULLABLESEQUENCE_OFFSET))(sequence);
		}
	};
}
