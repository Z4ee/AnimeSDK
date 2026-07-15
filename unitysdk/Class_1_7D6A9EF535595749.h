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

#define CLASS_1_7D6A9EF535595749_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CC21480)
#define CLASS_1_7D6A9EF535595749_CLONE_OFFSET UNITYSDK_OFFSET(0x1CC21000)
#define CLASS_1_7D6A9EF535595749_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CC211E0)
#define CLASS_1_7D6A9EF535595749_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CC21060)
#define CLASS_1_7D6A9EF535595749_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CC21300)
#define CLASS_1_7D6A9EF535595749_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CC215C0)
#define CLASS_1_7D6A9EF535595749_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CC21520)
#define CLASS_1_7D6A9EF535595749_METHOD_1_2E179BEDD6B3AA06_OFFSET UNITYSDK_OFFSET(0x1CC21050)
#define CLASS_1_7D6A9EF535595749_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1CC20E90)
#define CLASS_1_7D6A9EF535595749_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CC20EF0)
#define CLASS_1_7D6A9EF535595749_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CC21370)
#define CLASS_1_7D6A9EF535595749_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CC213D0)
#define CLASS_1_7D6A9EF535595749__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC21790)
#define CLASS_1_7D6A9EF535595749__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CC20F50)
#define CLASS_1_7D6A9EF535595749__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC20F00)

inline static constexpr unsigned int Class_1_7D6A9EF535595749_TypeDefinitionIndex = 25407;

class Class_1_7D6A9EF535595749 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Enum_3_DFCB42601400F441>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Enum_3_DFCB42601400F441>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7D6A9EF535595749_TypeDefinitionIndex)->GetStaticField(0x28540);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_7D6A9EF535595749*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_7D6A9EF535595749*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7D6A9EF535595749_TypeDefinitionIndex)->GetStaticField(0x28548);
	}
	// static const ::System::Int32 Field_1_2 = 0x8; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_DFCB42601400F441>* Field_1_4; // 0x18

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

	static ::Google::Protobuf::MessageParser_1<::Class_1_7D6A9EF535595749*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_7D6A9EF535595749*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7D6A9EF535595749_METHOD_1_33819E510657F52F_OFFSET))();
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
