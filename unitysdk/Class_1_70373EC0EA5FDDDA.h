#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_87B6445D24FE4E47;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_70373EC0EA5FDDDA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x197AF5A0)
#define CLASS_1_70373EC0EA5FDDDA_CLONE_OFFSET UNITYSDK_OFFSET(0x197AF140)
#define CLASS_1_70373EC0EA5FDDDA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x197AF290)
#define CLASS_1_70373EC0EA5FDDDA_EQUALS_OFFSET UNITYSDK_OFFSET(0x197AF1A0)
#define CLASS_1_70373EC0EA5FDDDA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x197AF350)
#define CLASS_1_70373EC0EA5FDDDA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x197AF7C0)
#define CLASS_1_70373EC0EA5FDDDA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x197AF710)
#define CLASS_1_70373EC0EA5FDDDA_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x197AF180)
#define CLASS_1_70373EC0EA5FDDDA_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x197AF020)
#define CLASS_1_70373EC0EA5FDDDA_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x197AF190)
#define CLASS_1_70373EC0EA5FDDDA_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x197AF170)
#define CLASS_1_70373EC0EA5FDDDA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x197AF050)
#define CLASS_1_70373EC0EA5FDDDA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x197AF460)
#define CLASS_1_70373EC0EA5FDDDA_WRITETO_OFFSET UNITYSDK_OFFSET(0x197AF4C0)
#define CLASS_1_70373EC0EA5FDDDA__CCTOR_OFFSET UNITYSDK_OFFSET(0x197AF880)
#define CLASS_1_70373EC0EA5FDDDA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x197AF0A0)
#define CLASS_1_70373EC0EA5FDDDA__CTOR_OFFSET UNITYSDK_OFFSET(0x197AF060)

inline static constexpr unsigned int Class_1_70373EC0EA5FDDDA_TypeDefinitionIndex = 28353;

class Class_1_70373EC0EA5FDDDA : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_87B6445D24FE4E47*>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_87B6445D24FE4E47*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_70373EC0EA5FDDDA_TypeDefinitionIndex)->GetStaticField(0x1DFF0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_70373EC0EA5FDDDA*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_70373EC0EA5FDDDA*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_70373EC0EA5FDDDA_TypeDefinitionIndex)->GetStaticField(0x1DFF8);
	}
	// static const ::System::Int32 Field_1_2 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_87B6445D24FE4E47*>* Field_1_6; // 0x18
	::System::UInt64 Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70373EC0EA5FDDDA__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_70373EC0EA5FDDDA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70373EC0EA5FDDDA*))((::PBYTE)hIl2Cpp + CLASS_1_70373EC0EA5FDDDA__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_70373EC0EA5FDDDA__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_70373EC0EA5FDDDA*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_70373EC0EA5FDDDA*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_70373EC0EA5FDDDA_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70373EC0EA5FDDDA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_70373EC0EA5FDDDA* Clone()
	{
		return ((::Class_1_70373EC0EA5FDDDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70373EC0EA5FDDDA_CLONE_OFFSET))(this);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70373EC0EA5FDDDA_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_70373EC0EA5FDDDA_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_87B6445D24FE4E47*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_87B6445D24FE4E47*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70373EC0EA5FDDDA_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_70373EC0EA5FDDDA_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_70373EC0EA5FDDDA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_70373EC0EA5FDDDA*))((::PBYTE)hIl2Cpp + CLASS_1_70373EC0EA5FDDDA_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70373EC0EA5FDDDA_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70373EC0EA5FDDDA_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_70373EC0EA5FDDDA_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70373EC0EA5FDDDA_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_70373EC0EA5FDDDA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70373EC0EA5FDDDA*))((::PBYTE)hIl2Cpp + CLASS_1_70373EC0EA5FDDDA_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_70373EC0EA5FDDDA_MERGEFROM_1_OFFSET))(this, a1);
	}
};
