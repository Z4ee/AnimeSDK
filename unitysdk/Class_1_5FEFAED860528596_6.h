#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5FEFAED860528596_5;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5FEFAED860528596_6_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18104850)
#define CLASS_1_5FEFAED860528596_6_CLONE_OFFSET UNITYSDK_OFFSET(0x18104420)
#define CLASS_1_5FEFAED860528596_6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18104570)
#define CLASS_1_5FEFAED860528596_6_EQUALS_OFFSET UNITYSDK_OFFSET(0x18104480)
#define CLASS_1_5FEFAED860528596_6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18104620)
#define CLASS_1_5FEFAED860528596_6_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18104A20)
#define CLASS_1_5FEFAED860528596_6_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18104980)
#define CLASS_1_5FEFAED860528596_6_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x18104460)
#define CLASS_1_5FEFAED860528596_6_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x18104450)
#define CLASS_1_5FEFAED860528596_6_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x18104470)
#define CLASS_1_5FEFAED860528596_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18104340)
#define CLASS_1_5FEFAED860528596_6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18104710)
#define CLASS_1_5FEFAED860528596_6_WRITETO_OFFSET UNITYSDK_OFFSET(0x18104770)
#define CLASS_1_5FEFAED860528596_6__CCTOR_OFFSET UNITYSDK_OFFSET(0x18104AE0)
#define CLASS_1_5FEFAED860528596_6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18104390)
#define CLASS_1_5FEFAED860528596_6__CTOR_OFFSET UNITYSDK_OFFSET(0x18104350)

inline static constexpr unsigned int Class_1_5FEFAED860528596_6_TypeDefinitionIndex = 23284;

class Class_1_5FEFAED860528596_6 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_5FEFAED860528596_5*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_5FEFAED860528596_5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5FEFAED860528596_6_TypeDefinitionIndex)->GetStaticField(0x37040);
	}
	// static const ::System::Int32 Field_1_1 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_5FEFAED860528596_5*>* Field_1_3; // 0x18
	::System::UInt32 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_6__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5FEFAED860528596_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_6*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_6__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_6__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5FEFAED860528596_6* Clone()
	{
		return ((::Class_1_5FEFAED860528596_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_6_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_5FEFAED860528596_5*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_5FEFAED860528596_5*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_6_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_6_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_6_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5FEFAED860528596_6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5FEFAED860528596_6*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_6_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_6_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_6_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_6_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5FEFAED860528596_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_6*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_6_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_6_MERGEFROM_1_OFFSET))(this, a1);
	}
};
