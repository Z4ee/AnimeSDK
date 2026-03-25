#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C9281D1A95E9298A;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5FEFAED860528596_72_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1801FA40)
#define CLASS_1_5FEFAED860528596_72_CLONE_OFFSET UNITYSDK_OFFSET(0x1801F620)
#define CLASS_1_5FEFAED860528596_72_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1801F770)
#define CLASS_1_5FEFAED860528596_72_EQUALS_OFFSET UNITYSDK_OFFSET(0x1801F680)
#define CLASS_1_5FEFAED860528596_72_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1801F820)
#define CLASS_1_5FEFAED860528596_72_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1801FC10)
#define CLASS_1_5FEFAED860528596_72_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1801FB70)
#define CLASS_1_5FEFAED860528596_72_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1801F660)
#define CLASS_1_5FEFAED860528596_72_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1801F650)
#define CLASS_1_5FEFAED860528596_72_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1801F670)
#define CLASS_1_5FEFAED860528596_72_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1801F540)
#define CLASS_1_5FEFAED860528596_72_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1801F910)
#define CLASS_1_5FEFAED860528596_72_WRITETO_OFFSET UNITYSDK_OFFSET(0x1801F970)
#define CLASS_1_5FEFAED860528596_72__CCTOR_OFFSET UNITYSDK_OFFSET(0x1801FCD0)
#define CLASS_1_5FEFAED860528596_72__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1801F590)
#define CLASS_1_5FEFAED860528596_72__CTOR_OFFSET UNITYSDK_OFFSET(0x1801F550)

inline static constexpr unsigned int Class_1_5FEFAED860528596_72_TypeDefinitionIndex = 26125;

class Class_1_5FEFAED860528596_72 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_C9281D1A95E9298A*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_C9281D1A95E9298A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5FEFAED860528596_72_TypeDefinitionIndex)->GetStaticField(0x2F470);
	}
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C9281D1A95E9298A*>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_72__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5FEFAED860528596_72* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_72*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_72__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_72__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_72_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5FEFAED860528596_72* Clone()
	{
		return ((::Class_1_5FEFAED860528596_72*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_72_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C9281D1A95E9298A*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C9281D1A95E9298A*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_72_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_72_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_72_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_72_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5FEFAED860528596_72* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5FEFAED860528596_72*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_72_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_72_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_72_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_72_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_72_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5FEFAED860528596_72* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_72*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_72_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5FEFAED860528596_72_MERGEFROM_1_OFFSET))(this, a1);
	}
};
