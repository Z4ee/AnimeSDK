#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4CF8088A158DCE25_100;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5FEFAED860528596_100_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x180675E0)
#define CLASS_1_5FEFAED860528596_100_CLONE_OFFSET UNITYSDK_OFFSET(0x180671C0)
#define CLASS_1_5FEFAED860528596_100_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18067310)
#define CLASS_1_5FEFAED860528596_100_EQUALS_OFFSET UNITYSDK_OFFSET(0x18067220)
#define CLASS_1_5FEFAED860528596_100_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x180673C0)
#define CLASS_1_5FEFAED860528596_100_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18067790)
#define CLASS_1_5FEFAED860528596_100_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x180676F0)
#define CLASS_1_5FEFAED860528596_100_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x180671F0)
#define CLASS_1_5FEFAED860528596_100_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x18067210)
#define CLASS_1_5FEFAED860528596_100_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x18067200)
#define CLASS_1_5FEFAED860528596_100_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x180670E0)
#define CLASS_1_5FEFAED860528596_100_TOSTRING_OFFSET UNITYSDK_OFFSET(0x180674B0)
#define CLASS_1_5FEFAED860528596_100_WRITETO_OFFSET UNITYSDK_OFFSET(0x18067510)
#define CLASS_1_5FEFAED860528596_100__CCTOR_OFFSET UNITYSDK_OFFSET(0x18067850)
#define CLASS_1_5FEFAED860528596_100__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18067130)
#define CLASS_1_5FEFAED860528596_100__CTOR_OFFSET UNITYSDK_OFFSET(0x180670F0)

inline static constexpr unsigned int Class_1_5FEFAED860528596_100_TypeDefinitionIndex = 27320;

class Class_1_5FEFAED860528596_100 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_4CF8088A158DCE25_100*>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_4CF8088A158DCE25_100*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5FEFAED860528596_100_TypeDefinitionIndex)->GetStaticField(0x31410);
	}
	// static const ::System::Int32 Field_1_1 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xF; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4CF8088A158DCE25_100*>* Field_1_5; // 0x18
	::System::UInt32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_100__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5FEFAED860528596_100* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_100*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_100__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_100__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_100_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5FEFAED860528596_100* Clone()
	{
		return ((::Class_1_5FEFAED860528596_100*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_100_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_100_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_100_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4CF8088A158DCE25_100*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4CF8088A158DCE25_100*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_100_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_100_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5FEFAED860528596_100* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5FEFAED860528596_100*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_100_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_100_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_100_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_100_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_100_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5FEFAED860528596_100* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_100*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_100_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_100_MERGEFROM_1_OFFSET))(this, a1);
	}
};
