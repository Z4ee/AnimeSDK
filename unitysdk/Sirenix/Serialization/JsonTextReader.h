#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/EntryType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Sirenix::Serialization { class DeserializationContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::IO { class Stream; }
namespace System::IO { class StreamReader; }

#define SIRENIX_SERIALIZATION_JSONTEXTREADER_CONSUMECHAR_OFFSET UNITYSDK_OFFSET(0x1E481DB0)
#define SIRENIX_SERIALIZATION_JSONTEXTREADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E480800)
#define SIRENIX_SERIALIZATION_JSONTEXTREADER_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1E480690)
#define SIRENIX_SERIALIZATION_JSONTEXTREADER_GUESSPRIMITIVETYPE_OFFSET UNITYSDK_OFFSET(0x1E482830)
#define SIRENIX_SERIALIZATION_JSONTEXTREADER_ISHEX_OFFSET UNITYSDK_OFFSET(0x1E481E70)
#define SIRENIX_SERIALIZATION_JSONTEXTREADER_PARSEENTRYFROMBUFFER_OFFSET UNITYSDK_OFFSET(0x1E482180)
#define SIRENIX_SERIALIZATION_JSONTEXTREADER_PARSEHEXCHAR_OFFSET UNITYSDK_OFFSET(0x1E481E90)
#define SIRENIX_SERIALIZATION_JSONTEXTREADER_PARSESINGLECHAR_OFFSET UNITYSDK_OFFSET(0x1E482A10)
#define SIRENIX_SERIALIZATION_JSONTEXTREADER_PEEKCHAR_OFFSET UNITYSDK_OFFSET(0x1E481C80)
#define SIRENIX_SERIALIZATION_JSONTEXTREADER_READCHARINTOBUFFER_OFFSET UNITYSDK_OFFSET(0x1E482000)
#define SIRENIX_SERIALIZATION_JSONTEXTREADER_READTONEXTENTRY_OFFSET UNITYSDK_OFFSET(0x1E480810)
#define SIRENIX_SERIALIZATION_JSONTEXTREADER_RESET_OFFSET UNITYSDK_OFFSET(0x1E4807D0)
#define SIRENIX_SERIALIZATION_JSONTEXTREADER_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1E4806A0)
#define SIRENIX_SERIALIZATION_JSONTEXTREADER_SKIPCHAR_OFFSET UNITYSDK_OFFSET(0x1E481D50)
#define SIRENIX_SERIALIZATION_JSONTEXTREADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E482A50)
#define SIRENIX_SERIALIZATION_JSONTEXTREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4806B0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int JsonTextReader_TypeDefinitionIndex = 7427;

	class JsonTextReader : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Char, ::System::Nullable_1<::Sirenix::Serialization::EntryType>>** StaticGet_EntryDelineators()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Char, ::System::Nullable_1<::Sirenix::Serialization::EntryType>>**)Il2CppClass::FromTypeDefinitionIndex(JsonTextReader_TypeDefinitionIndex)->GetStaticField(0x63C0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Char, ::System::Char>** StaticGet_UnescapeDictionary()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Char, ::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(JsonTextReader_TypeDefinitionIndex)->GetStaticField(0x63C8);
		}
		::System::IO::StreamReader* reader; // 0x10
		::System::Collections::Generic::Queue_1<::System::Char>* emergencyPlayback; // 0x18
		::Sirenix::Serialization::DeserializationContext* _Context_k__BackingField; // 0x20
		::Il2CppArray<::System::Char>* buffer; // 0x28
		::System::Int32 bufferIndex; // 0x30
		::System::Nullable_1<::System::Char> lastReadChar; // 0x34
		::System::Nullable_1<::System::Char> peekedChar; // 0x38

		::System::Void _ctor(::System::IO::Stream* stream, ::Sirenix::Serialization::DeserializationContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::Sirenix::Serialization::DeserializationContext*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONTEXTREADER__CTOR_OFFSET))(this, stream, context);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONTEXTREADER__CCTOR_OFFSET))();
		}

		::Sirenix::Serialization::DeserializationContext* get_Context()
		{
			return ((::Sirenix::Serialization::DeserializationContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONTEXTREADER_GET_CONTEXT_OFFSET))(this);
		}

		::System::Void set_Context(::Sirenix::Serialization::DeserializationContext* value)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::Serialization::DeserializationContext*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONTEXTREADER_SET_CONTEXT_OFFSET))(this, value);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONTEXTREADER_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONTEXTREADER_DISPOSE_OFFSET))(this);
		}

		::System::Void ReadToNextEntry(::System::String*& name, ::System::String*& valueContent, ::Sirenix::Serialization::EntryType& entry)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*&, ::System::String*&, ::Sirenix::Serialization::EntryType&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONTEXTREADER_READTONEXTENTRY_OFFSET))(this, name, valueContent, entry);
		}

		::System::Void ParseEntryFromBuffer(::System::String*& name, ::System::String*& valueContent, ::Sirenix::Serialization::EntryType& entry, ::System::Int32 valueSeparatorIndex, ::System::Nullable_1<::Sirenix::Serialization::EntryType> hintEntry)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*&, ::System::String*&, ::Sirenix::Serialization::EntryType&, ::System::Int32, ::System::Nullable_1<::Sirenix::Serialization::EntryType>))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONTEXTREADER_PARSEENTRYFROMBUFFER_OFFSET))(this, name, valueContent, entry, valueSeparatorIndex, hintEntry);
		}

		::System::Boolean IsHex(::System::Char c)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONTEXTREADER_ISHEX_OFFSET))(this, c);
		}

		::System::UInt32 ParseSingleChar(::System::Char c, ::System::UInt32 multiplier)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Char, ::System::UInt32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONTEXTREADER_PARSESINGLECHAR_OFFSET))(this, c, multiplier);
		}

		::System::Char ParseHexChar(::System::Char c1, ::System::Char c2, ::System::Char c3, ::System::Char c4)
		{
			return ((::System::Char(*)(::PVOID, ::System::Char, ::System::Char, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONTEXTREADER_PARSEHEXCHAR_OFFSET))(this, c1, c2, c3, c4);
		}

		::System::Char ReadCharIntoBuffer()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONTEXTREADER_READCHARINTOBUFFER_OFFSET))(this);
		}

		::System::Nullable_1<::Sirenix::Serialization::EntryType> GuessPrimitiveType(::System::String* content)
		{
			return ((::System::Nullable_1<::Sirenix::Serialization::EntryType>(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONTEXTREADER_GUESSPRIMITIVETYPE_OFFSET))(this, content);
		}

		::System::Char PeekChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONTEXTREADER_PEEKCHAR_OFFSET))(this);
		}

		::System::Void SkipChar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONTEXTREADER_SKIPCHAR_OFFSET))(this);
		}

		::System::Char ConsumeChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_JSONTEXTREADER_CONSUMECHAR_OFFSET))(this);
		}
	};
}
