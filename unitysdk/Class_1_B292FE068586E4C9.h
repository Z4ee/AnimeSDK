#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4CF8088A158DCE25_17;
class Class_1_4CF8088A158DCE25_18;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_B292FE068586E4C9_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17B86170)
#define CLASS_1_B292FE068586E4C9_CLONE_OFFSET UNITYSDK_OFFSET(0x17B85D20)
#define CLASS_1_B292FE068586E4C9_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17B85DA0)
#define CLASS_1_B292FE068586E4C9_EQUALS_OFFSET UNITYSDK_OFFSET(0x17B85D70)
#define CLASS_1_B292FE068586E4C9_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17B85E80)
#define CLASS_1_B292FE068586E4C9_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17B86340)
#define CLASS_1_B292FE068586E4C9_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17B86250)
#define CLASS_1_B292FE068586E4C9_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x17B85D60)
#define CLASS_1_B292FE068586E4C9_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17B85D50)
#define CLASS_1_B292FE068586E4C9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17B85BA0)
#define CLASS_1_B292FE068586E4C9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17B86020)
#define CLASS_1_B292FE068586E4C9_WRITETO_OFFSET UNITYSDK_OFFSET(0x17B86080)
#define CLASS_1_B292FE068586E4C9__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B86470)
#define CLASS_1_B292FE068586E4C9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17B85C20)
#define CLASS_1_B292FE068586E4C9__CTOR_OFFSET UNITYSDK_OFFSET(0x17B85BB0)

inline static constexpr unsigned int Class_1_B292FE068586E4C9_TypeDefinitionIndex = 23958;

class Class_1_B292FE068586E4C9 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_4CF8088A158DCE25_17*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_4CF8088A158DCE25_17*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B292FE068586E4C9_TypeDefinitionIndex)->GetStaticField(0x304D0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_4CF8088A158DCE25_18*>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_4CF8088A158DCE25_18*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B292FE068586E4C9_TypeDefinitionIndex)->GetStaticField(0x304D8);
	}
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xF; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4CF8088A158DCE25_18*>* Field_1_6; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4CF8088A158DCE25_17*>* Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_B292FE068586E4C9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B292FE068586E4C9*))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_B292FE068586E4C9* Clone()
	{
		return ((::Class_1_B292FE068586E4C9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4CF8088A158DCE25_17*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4CF8088A158DCE25_17*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4CF8088A158DCE25_18*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4CF8088A158DCE25_18*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_B292FE068586E4C9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B292FE068586E4C9*))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_B292FE068586E4C9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B292FE068586E4C9*))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_MERGEFROM_1_OFFSET))(this, a1);
	}
};
