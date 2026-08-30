#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_7D6A9EF535595749_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEEF110)
#define CLASS_1_7D6A9EF535595749_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEEECF0)
#define CLASS_1_7D6A9EF535595749_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEEEE70)
#define CLASS_1_7D6A9EF535595749_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEEED30)
#define CLASS_1_7D6A9EF535595749_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEEEF90)
#define CLASS_1_7D6A9EF535595749_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEEF250)
#define CLASS_1_7D6A9EF535595749_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEEF1B0)
#define CLASS_1_7D6A9EF535595749_METHOD_1_2E179BEDD6B3AA06_OFFSET UNITYSDK_OFFSET(0x1DEEED20)
#define CLASS_1_7D6A9EF535595749_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1DEEEBB0)
#define CLASS_1_7D6A9EF535595749_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEEEBE0)
#define CLASS_1_7D6A9EF535595749_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEEF000)
#define CLASS_1_7D6A9EF535595749_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEEF060)
#define CLASS_1_7D6A9EF535595749__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEEF420)
#define CLASS_1_7D6A9EF535595749__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEEEC40)
#define CLASS_1_7D6A9EF535595749__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEEEBF0)

inline static constexpr unsigned int Class_1_7D6A9EF535595749_TypeDefinitionIndex = 25996;

class Class_1_7D6A9EF535595749 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_7D6A9EF535595749*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_7D6A9EF535595749*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7D6A9EF535595749_TypeDefinitionIndex)->GetStaticField(0x38DA0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Enum_3_DFCB42601400F441>** StaticGet_JPAEBNKOHFA()
	{
		return (::Google::Protobuf::FieldCodec_1<::Enum_3_DFCB42601400F441>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7D6A9EF535595749_TypeDefinitionIndex)->GetStaticField(0x38DA8);
	}
	// static const ::System::Int32 DGOKAKPOELJ = 0x7; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_DFCB42601400F441>* KHHJMABBLAH; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D6A9EF535595749__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_7D6A9EF535595749* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7D6A9EF535595749*))((::PBYTE)hIl2Cpp + CLASS_1_7D6A9EF535595749__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7D6A9EF535595749__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_7D6A9EF535595749*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_7D6A9EF535595749*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7D6A9EF535595749_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D6A9EF535595749_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_7D6A9EF535595749* Clone()
	{
		return ((::Class_1_7D6A9EF535595749*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D6A9EF535595749_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_DFCB42601400F441>* Method_1_2E179BEDD6B3AA06()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_DFCB42601400F441>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D6A9EF535595749_METHOD_1_2E179BEDD6B3AA06_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7D6A9EF535595749_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_7D6A9EF535595749* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7D6A9EF535595749*))((::PBYTE)hIl2Cpp + CLASS_1_7D6A9EF535595749_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D6A9EF535595749_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D6A9EF535595749_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7D6A9EF535595749_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D6A9EF535595749_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_7D6A9EF535595749* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7D6A9EF535595749*))((::PBYTE)hIl2Cpp + CLASS_1_7D6A9EF535595749_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7D6A9EF535595749_MERGEFROM_1_OFFSET))(this, a1);
	}
};
