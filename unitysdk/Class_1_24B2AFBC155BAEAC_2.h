#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_24B2AFBC155BAEAC_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CFE3A40)
#define CLASS_1_24B2AFBC155BAEAC_2_CLONE_OFFSET UNITYSDK_OFFSET(0x1CFE33D0)
#define CLASS_1_24B2AFBC155BAEAC_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CFE34A0)
#define CLASS_1_24B2AFBC155BAEAC_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CFE3470)
#define CLASS_1_24B2AFBC155BAEAC_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CFE3550)
#define CLASS_1_24B2AFBC155BAEAC_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CFE3CF0)
#define CLASS_1_24B2AFBC155BAEAC_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CFE3C60)
#define CLASS_1_24B2AFBC155BAEAC_2_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CFE3440)
#define CLASS_1_24B2AFBC155BAEAC_2_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1CFE3430)
#define CLASS_1_24B2AFBC155BAEAC_2_METHOD_1_554199E0076172C5_2_OFFSET UNITYSDK_OFFSET(0x1CFE3460)
#define CLASS_1_24B2AFBC155BAEAC_2_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1CFE3400)
#define CLASS_1_24B2AFBC155BAEAC_2_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CFE3160)
#define CLASS_1_24B2AFBC155BAEAC_2_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CFE3450)
#define CLASS_1_24B2AFBC155BAEAC_2_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x1CFE3420)
#define CLASS_1_24B2AFBC155BAEAC_2_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1CFE3410)
#define CLASS_1_24B2AFBC155BAEAC_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CFE3190)
#define CLASS_1_24B2AFBC155BAEAC_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CFE37E0)
#define CLASS_1_24B2AFBC155BAEAC_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CFE3840)
#define CLASS_1_24B2AFBC155BAEAC_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CFE3E90)
#define CLASS_1_24B2AFBC155BAEAC_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CFE3270)
#define CLASS_1_24B2AFBC155BAEAC_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFE31A0)

inline static constexpr unsigned int Class_1_24B2AFBC155BAEAC_2_TypeDefinitionIndex = 29294;

class Class_1_24B2AFBC155BAEAC_2 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_24B2AFBC155BAEAC_2*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_24B2AFBC155BAEAC_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_24B2AFBC155BAEAC_2_TypeDefinitionIndex)->GetStaticField(0x36F40);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_24B2AFBC155BAEAC_2_TypeDefinitionIndex)->GetStaticField(0x36F48);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_24B2AFBC155BAEAC_2_TypeDefinitionIndex)->GetStaticField(0x36F50);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_24B2AFBC155BAEAC_2_TypeDefinitionIndex)->GetStaticField(0x36F58);
	}
	// static const ::System::Int32 Field_1_4 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x3; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_9; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_10; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_11; // 0x20
	::Google::Protobuf::UnknownFieldSet* Field_1_12; // 0x28
	::System::UInt32 Field_1_13; // 0x30
	::System::Int32 Field_1_14; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24B2AFBC155BAEAC_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_24B2AFBC155BAEAC_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24B2AFBC155BAEAC_2*))((::PBYTE)hIl2Cpp + CLASS_1_24B2AFBC155BAEAC_2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_24B2AFBC155BAEAC_2__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_24B2AFBC155BAEAC_2*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_24B2AFBC155BAEAC_2*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_24B2AFBC155BAEAC_2_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24B2AFBC155BAEAC_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_24B2AFBC155BAEAC_2* Clone()
	{
		return ((::Class_1_24B2AFBC155BAEAC_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24B2AFBC155BAEAC_2_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24B2AFBC155BAEAC_2_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24B2AFBC155BAEAC_2_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_24B2AFBC155BAEAC_2_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24B2AFBC155BAEAC_2_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24B2AFBC155BAEAC_2_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_24B2AFBC155BAEAC_2_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24B2AFBC155BAEAC_2_METHOD_1_554199E0076172C5_2_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_24B2AFBC155BAEAC_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_24B2AFBC155BAEAC_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_24B2AFBC155BAEAC_2*))((::PBYTE)hIl2Cpp + CLASS_1_24B2AFBC155BAEAC_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24B2AFBC155BAEAC_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24B2AFBC155BAEAC_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_24B2AFBC155BAEAC_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24B2AFBC155BAEAC_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_24B2AFBC155BAEAC_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24B2AFBC155BAEAC_2*))((::PBYTE)hIl2Cpp + CLASS_1_24B2AFBC155BAEAC_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_24B2AFBC155BAEAC_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
