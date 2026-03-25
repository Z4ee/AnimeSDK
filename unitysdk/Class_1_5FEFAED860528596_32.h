#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3C58D309C7A040F5_17;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5FEFAED860528596_32_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18133F70)
#define CLASS_1_5FEFAED860528596_32_CLONE_OFFSET UNITYSDK_OFFSET(0x18133AC0)
#define CLASS_1_5FEFAED860528596_32_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18133B90)
#define CLASS_1_5FEFAED860528596_32_EQUALS_OFFSET UNITYSDK_OFFSET(0x18133B30)
#define CLASS_1_5FEFAED860528596_32_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18133C70)
#define CLASS_1_5FEFAED860528596_32_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18134100)
#define CLASS_1_5FEFAED860528596_32_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18134050)
#define CLASS_1_5FEFAED860528596_32_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x18133B10)
#define CLASS_1_5FEFAED860528596_32_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x18133B20)
#define CLASS_1_5FEFAED860528596_32_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18133900)
#define CLASS_1_5FEFAED860528596_32_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18133E30)
#define CLASS_1_5FEFAED860528596_32_WRITETO_OFFSET UNITYSDK_OFFSET(0x18133E90)
#define CLASS_1_5FEFAED860528596_32__CCTOR_OFFSET UNITYSDK_OFFSET(0x18134220)
#define CLASS_1_5FEFAED860528596_32__CTOR_1_OFFSET UNITYSDK_OFFSET(0x181339A0)
#define CLASS_1_5FEFAED860528596_32__CTOR_OFFSET UNITYSDK_OFFSET(0x18133910)

inline static constexpr unsigned int Class_1_5FEFAED860528596_32_TypeDefinitionIndex = 24324;

class Class_1_5FEFAED860528596_32 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_3C58D309C7A040F5_17*>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_3C58D309C7A040F5_17*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5FEFAED860528596_32_TypeDefinitionIndex)->GetStaticField(0x40900);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5FEFAED860528596_32_TypeDefinitionIndex)->GetStaticField(0x40908);
	}
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x4; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3C58D309C7A040F5_17*>* Field_1_6; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_32__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5FEFAED860528596_32* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_32*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_32__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_32__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_32_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5FEFAED860528596_32* Clone()
	{
		return ((::Class_1_5FEFAED860528596_32*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_32_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_32_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3C58D309C7A040F5_17*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3C58D309C7A040F5_17*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_32_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_32_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5FEFAED860528596_32* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5FEFAED860528596_32*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_32_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_32_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_32_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_32_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_32_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5FEFAED860528596_32* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_32*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_32_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_32_MERGEFROM_1_OFFSET))(this, a1);
	}
};
