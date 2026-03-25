#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6EBEA8069CDA622C_7;
class Class_1_6EBEA8069CDA622C_8;
class Class_1_8E5A9F762BDF32F5;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_0CE138302AEB5621_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1802A620)
#define CLASS_1_0CE138302AEB5621_2_CLONE_OFFSET UNITYSDK_OFFSET(0x1802A050)
#define CLASS_1_0CE138302AEB5621_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1802A130)
#define CLASS_1_0CE138302AEB5621_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x1802A0D0)
#define CLASS_1_0CE138302AEB5621_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1802A240)
#define CLASS_1_0CE138302AEB5621_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1802A880)
#define CLASS_1_0CE138302AEB5621_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1802A730)
#define CLASS_1_0CE138302AEB5621_2_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x1802A0B0)
#define CLASS_1_0CE138302AEB5621_2_METHOD_1_6E1EC2DF63D7020F_2_OFFSET UNITYSDK_OFFSET(0x1802A0C0)
#define CLASS_1_0CE138302AEB5621_2_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1802A0A0)
#define CLASS_1_0CE138302AEB5621_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18029EE0)
#define CLASS_1_0CE138302AEB5621_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1802A4A0)
#define CLASS_1_0CE138302AEB5621_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x1802A500)
#define CLASS_1_0CE138302AEB5621_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1802AA10)
#define CLASS_1_0CE138302AEB5621_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18029F90)
#define CLASS_1_0CE138302AEB5621_2__CTOR_OFFSET UNITYSDK_OFFSET(0x18029EF0)

inline static constexpr unsigned int Class_1_0CE138302AEB5621_2_TypeDefinitionIndex = 24766;

class Class_1_0CE138302AEB5621_2 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_6EBEA8069CDA622C_7*>** StaticGet_Field_1_8()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_6EBEA8069CDA622C_7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0CE138302AEB5621_2_TypeDefinitionIndex)->GetStaticField(0x2F8C0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_6EBEA8069CDA622C_8*>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_6EBEA8069CDA622C_8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0CE138302AEB5621_2_TypeDefinitionIndex)->GetStaticField(0x2F8C8);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_8E5A9F762BDF32F5*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_8E5A9F762BDF32F5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0CE138302AEB5621_2_TypeDefinitionIndex)->GetStaticField(0x2F8D0);
	}
	// static const ::System::Int32 Field_1_1 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x5; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_8E5A9F762BDF32F5*>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_6EBEA8069CDA622C_8*>* Field_1_6; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_6EBEA8069CDA622C_7*>* Field_1_9; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CE138302AEB5621_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_0CE138302AEB5621_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0CE138302AEB5621_2*))((::PBYTE)hIl2Cpp + CLASS_1_0CE138302AEB5621_2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0CE138302AEB5621_2__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CE138302AEB5621_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_0CE138302AEB5621_2* Clone()
	{
		return ((::Class_1_0CE138302AEB5621_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CE138302AEB5621_2_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_8E5A9F762BDF32F5*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_8E5A9F762BDF32F5*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CE138302AEB5621_2_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_6EBEA8069CDA622C_8*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_6EBEA8069CDA622C_8*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CE138302AEB5621_2_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_6EBEA8069CDA622C_7*>* Method_1_6E1EC2DF63D7020F_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_6EBEA8069CDA622C_7*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CE138302AEB5621_2_METHOD_1_6E1EC2DF63D7020F_2_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0CE138302AEB5621_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_0CE138302AEB5621_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0CE138302AEB5621_2*))((::PBYTE)hIl2Cpp + CLASS_1_0CE138302AEB5621_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CE138302AEB5621_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CE138302AEB5621_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0CE138302AEB5621_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CE138302AEB5621_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_0CE138302AEB5621_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0CE138302AEB5621_2*))((::PBYTE)hIl2Cpp + CLASS_1_0CE138302AEB5621_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0CE138302AEB5621_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
