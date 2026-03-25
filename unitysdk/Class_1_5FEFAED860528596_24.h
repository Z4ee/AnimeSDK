#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3C58D309C7A040F5_15;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5FEFAED860528596_24_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18136650)
#define CLASS_1_5FEFAED860528596_24_CLONE_OFFSET UNITYSDK_OFFSET(0x18136230)
#define CLASS_1_5FEFAED860528596_24_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18136380)
#define CLASS_1_5FEFAED860528596_24_EQUALS_OFFSET UNITYSDK_OFFSET(0x18136290)
#define CLASS_1_5FEFAED860528596_24_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18136430)
#define CLASS_1_5FEFAED860528596_24_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18136820)
#define CLASS_1_5FEFAED860528596_24_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18136780)
#define CLASS_1_5FEFAED860528596_24_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x18136270)
#define CLASS_1_5FEFAED860528596_24_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x18136260)
#define CLASS_1_5FEFAED860528596_24_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x18136280)
#define CLASS_1_5FEFAED860528596_24_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18136110)
#define CLASS_1_5FEFAED860528596_24_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18136520)
#define CLASS_1_5FEFAED860528596_24_WRITETO_OFFSET UNITYSDK_OFFSET(0x18136580)
#define CLASS_1_5FEFAED860528596_24__CCTOR_OFFSET UNITYSDK_OFFSET(0x18136900)
#define CLASS_1_5FEFAED860528596_24__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18136170)
#define CLASS_1_5FEFAED860528596_24__CTOR_OFFSET UNITYSDK_OFFSET(0x18136120)

inline static constexpr unsigned int Class_1_5FEFAED860528596_24_TypeDefinitionIndex = 24124;

class Class_1_5FEFAED860528596_24 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_3C58D309C7A040F5_15*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_3C58D309C7A040F5_15*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5FEFAED860528596_24_TypeDefinitionIndex)->GetStaticField(0x409C0);
	}
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x8; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3C58D309C7A040F5_15*>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_24__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5FEFAED860528596_24* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_24*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_24__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_24__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_24_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5FEFAED860528596_24* Clone()
	{
		return ((::Class_1_5FEFAED860528596_24*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_24_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3C58D309C7A040F5_15*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3C58D309C7A040F5_15*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_24_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_24_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_24_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_24_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5FEFAED860528596_24* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5FEFAED860528596_24*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_24_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_24_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_24_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_24_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_24_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5FEFAED860528596_24* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_24*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_24_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_24_MERGEFROM_1_OFFSET))(this, a1);
	}
};
