#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GOOGLE_PROTOBUF_UNKNOWNFIELD_ADDFIXED32_OFFSET UNITYSDK_OFFSET(0x15B28380)
#define GOOGLE_PROTOBUF_UNKNOWNFIELD_ADDFIXED64_OFFSET UNITYSDK_OFFSET(0x15B28400)
#define GOOGLE_PROTOBUF_UNKNOWNFIELD_ADDGROUP_OFFSET UNITYSDK_OFFSET(0x15B284D0)
#define GOOGLE_PROTOBUF_UNKNOWNFIELD_ADDLENGTHDELIMITED_OFFSET UNITYSDK_OFFSET(0x15B28480)
#define GOOGLE_PROTOBUF_UNKNOWNFIELD_ADDVARINT_OFFSET UNITYSDK_OFFSET(0x15B28300)
#define GOOGLE_PROTOBUF_UNKNOWNFIELD_EQUALS_OFFSET UNITYSDK_OFFSET(0x15B27360)
#define GOOGLE_PROTOBUF_UNKNOWNFIELD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x15B27440)
#define GOOGLE_PROTOBUF_UNKNOWNFIELD_GETSERIALIZEDSIZE_OFFSET UNITYSDK_OFFSET(0x15B27AC0)
#define GOOGLE_PROTOBUF_UNKNOWNFIELD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x15B28240)
#define GOOGLE_PROTOBUF_UNKNOWNFIELD_WRITETO_OFFSET UNITYSDK_OFFSET(0x15B274E0)
#define GOOGLE_PROTOBUF_UNKNOWNFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x15B27350)

namespace Google::Protobuf
{
	inline static constexpr unsigned int UnknownField_TypeDefinitionIndex = 6200;

	class UnknownField : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Google::Protobuf::UnknownFieldSet*>* groupList; // 0x10
		::System::Collections::Generic::List_1<::System::UInt64>* fixed64List; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* fixed32List; // 0x20
		::System::Collections::Generic::List_1<::Google::Protobuf::ByteString*>* lengthDelimitedList; // 0x28
		::System::Collections::Generic::List_1<::System::UInt64>* varintList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_UNKNOWNFIELD__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_UNKNOWNFIELD_EQUALS_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_UNKNOWNFIELD_GETHASHCODE_OFFSET))(this);
		}

		::System::Void WriteTo(::System::Int32 fieldNumber, ::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_UNKNOWNFIELD_WRITETO_OFFSET))(this, fieldNumber, output);
		}

		::System::Int32 GetSerializedSize(::System::Int32 fieldNumber)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_UNKNOWNFIELD_GETSERIALIZEDSIZE_OFFSET))(this, fieldNumber);
		}

		::Google::Protobuf::UnknownField* MergeFrom(::Google::Protobuf::UnknownField* other)
		{
			return ((::Google::Protobuf::UnknownField*(*)(::PVOID, ::Google::Protobuf::UnknownField*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_UNKNOWNFIELD_MERGEFROM_OFFSET))(this, other);
		}

		::Google::Protobuf::UnknownField* AddVarint(::System::UInt64 value)
		{
			return ((::Google::Protobuf::UnknownField*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_UNKNOWNFIELD_ADDVARINT_OFFSET))(this, value);
		}

		::Google::Protobuf::UnknownField* AddFixed32(::System::UInt32 value)
		{
			return ((::Google::Protobuf::UnknownField*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_UNKNOWNFIELD_ADDFIXED32_OFFSET))(this, value);
		}

		::Google::Protobuf::UnknownField* AddFixed64(::System::UInt64 value)
		{
			return ((::Google::Protobuf::UnknownField*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_UNKNOWNFIELD_ADDFIXED64_OFFSET))(this, value);
		}

		::Google::Protobuf::UnknownField* AddLengthDelimited(::Google::Protobuf::ByteString* value)
		{
			return ((::Google::Protobuf::UnknownField*(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_UNKNOWNFIELD_ADDLENGTHDELIMITED_OFFSET))(this, value);
		}

		::Google::Protobuf::UnknownField* AddGroup(::Google::Protobuf::UnknownFieldSet* value)
		{
			return ((::Google::Protobuf::UnknownField*(*)(::PVOID, ::Google::Protobuf::UnknownFieldSet*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_UNKNOWNFIELD_ADDGROUP_OFFSET))(this, value);
		}
	};
}
