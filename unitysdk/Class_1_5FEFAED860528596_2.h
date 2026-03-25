#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D91A65E12C64271;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5FEFAED860528596_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17F42120)
#define CLASS_1_5FEFAED860528596_2_CLONE_OFFSET UNITYSDK_OFFSET(0x17F41CF0)
#define CLASS_1_5FEFAED860528596_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17F41E40)
#define CLASS_1_5FEFAED860528596_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x17F41D50)
#define CLASS_1_5FEFAED860528596_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17F41EF0)
#define CLASS_1_5FEFAED860528596_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17F422F0)
#define CLASS_1_5FEFAED860528596_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17F42250)
#define CLASS_1_5FEFAED860528596_2_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17F41D30)
#define CLASS_1_5FEFAED860528596_2_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17F41D20)
#define CLASS_1_5FEFAED860528596_2_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17F41D40)
#define CLASS_1_5FEFAED860528596_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17F41C10)
#define CLASS_1_5FEFAED860528596_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17F41FE0)
#define CLASS_1_5FEFAED860528596_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x17F42040)
#define CLASS_1_5FEFAED860528596_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F423B0)
#define CLASS_1_5FEFAED860528596_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17F41C60)
#define CLASS_1_5FEFAED860528596_2__CTOR_OFFSET UNITYSDK_OFFSET(0x17F41C20)

inline static constexpr unsigned int Class_1_5FEFAED860528596_2_TypeDefinitionIndex = 23247;

class Class_1_5FEFAED860528596_2 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_0D91A65E12C64271*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_0D91A65E12C64271*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5FEFAED860528596_2_TypeDefinitionIndex)->GetStaticField(0x316D0);
	}
	// static const ::System::Int32 Field_1_1 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x6; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_0D91A65E12C64271*>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5FEFAED860528596_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_2*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_2__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5FEFAED860528596_2* Clone()
	{
		return ((::Class_1_5FEFAED860528596_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_2_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_0D91A65E12C64271*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_0D91A65E12C64271*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_2_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_2_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_2_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5FEFAED860528596_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5FEFAED860528596_2*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5FEFAED860528596_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_2*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
