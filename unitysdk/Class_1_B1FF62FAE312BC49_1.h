#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_B1FF62FAE312BC49_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18168280)
#define CLASS_1_B1FF62FAE312BC49_1_CLONE_OFFSET UNITYSDK_OFFSET(0x18167B90)
#define CLASS_1_B1FF62FAE312BC49_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18167CA0)
#define CLASS_1_B1FF62FAE312BC49_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x18167C70)
#define CLASS_1_B1FF62FAE312BC49_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18167DB0)
#define CLASS_1_B1FF62FAE312BC49_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18168600)
#define CLASS_1_B1FF62FAE312BC49_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18168560)
#define CLASS_1_B1FF62FAE312BC49_1_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x18167BE0)
#define CLASS_1_B1FF62FAE312BC49_1_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x18167C00)
#define CLASS_1_B1FF62FAE312BC49_1_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x18167C40)
#define CLASS_1_B1FF62FAE312BC49_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x18167BC0)
#define CLASS_1_B1FF62FAE312BC49_1_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x18167C30)
#define CLASS_1_B1FF62FAE312BC49_1_METHOD_1_554199E0076172C5_2_OFFSET UNITYSDK_OFFSET(0x18167C60)
#define CLASS_1_B1FF62FAE312BC49_1_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x18167C20)
#define CLASS_1_B1FF62FAE312BC49_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x18167BF0)
#define CLASS_1_B1FF62FAE312BC49_1_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x18167C10)
#define CLASS_1_B1FF62FAE312BC49_1_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x18167C50)
#define CLASS_1_B1FF62FAE312BC49_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x18167BD0)
#define CLASS_1_B1FF62FAE312BC49_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18167950)
#define CLASS_1_B1FF62FAE312BC49_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18168090)
#define CLASS_1_B1FF62FAE312BC49_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x181680F0)
#define CLASS_1_B1FF62FAE312BC49_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x181687E0)
#define CLASS_1_B1FF62FAE312BC49_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18167A30)
#define CLASS_1_B1FF62FAE312BC49_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18167960)

inline static constexpr unsigned int Class_1_B1FF62FAE312BC49_1_TypeDefinitionIndex = 23382;

class Class_1_B1FF62FAE312BC49_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_11()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B1FF62FAE312BC49_1_TypeDefinitionIndex)->GetStaticField(0x6ED0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_8()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B1FF62FAE312BC49_1_TypeDefinitionIndex)->GetStaticField(0x6ED8);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_16()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B1FF62FAE312BC49_1_TypeDefinitionIndex)->GetStaticField(0x6EE0);
	}
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_10 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_13 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_15 = 0x4; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_17; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_9; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_12; // 0x28
	::System::UInt32 Field_1_14; // 0x30
	::System::UInt32 Field_1_6; // 0x34
	::System::UInt32 Field_1_2; // 0x38
	::System::UInt32 Field_1_4; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_B1FF62FAE312BC49_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_1*))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_1__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_B1FF62FAE312BC49_1* Clone()
	{
		return ((::Class_1_B1FF62FAE312BC49_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_1_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_1_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_1_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_1_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_1_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_1_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_1_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_1_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_1_METHOD_1_554199E0076172C5_2_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_B1FF62FAE312BC49_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_1*))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_B1FF62FAE312BC49_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_1*))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
