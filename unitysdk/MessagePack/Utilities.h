#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Utilities_NonGenericDictionaryEnumerable.h"
#include "unitysdk/System/Memory_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Buffers { template <typename T> class IBufferWriter_1; }
namespace System::Collections { class IDictionary; }

#define MESSAGEPACK_UTILITIES_GETENTRYENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D575F70)
#define MESSAGEPACK_UTILITIES_GETMEMORYCHECKRESULT_OFFSET UNITYSDK_OFFSET(0x1D575BD0)
#define MESSAGEPACK_UTILITIES__GETMEMORYCHECKRESULT_G__THROWINVALIDOPERATIONEXCEPTION_2_0_OFFSET UNITYSDK_OFFSET(0x1D575F20)

namespace MessagePack
{
	inline static constexpr unsigned int Utilities_TypeDefinitionIndex = 7193;

	class Utilities : public ::System::Object
	{
	public:
		static ::System::Memory_1<::System::Byte> GetMemoryCheckResult(::System::Buffers::IBufferWriter_1<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Memory_1<::System::Byte>(*)(::System::Buffers::IBufferWriter_1<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_UTILITIES_GETMEMORYCHECKRESULT_OFFSET))(a1, a2);
		}

		static ::MessagePack::Utilities_NonGenericDictionaryEnumerable GetEntryEnumerator(::System::Collections::IDictionary* a1)
		{
			return ((::MessagePack::Utilities_NonGenericDictionaryEnumerable(*)(::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UTILITIES_GETENTRYENUMERATOR_OFFSET))(a1);
		}

		static ::System::Void _GetMemoryCheckResult_g__ThrowInvalidOperationException_2_0(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UTILITIES__GETMEMORYCHECKRESULT_G__THROWINVALIDOPERATIONEXCEPTION_2_0_OFFSET))(a1);
		}
	};
}
