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

#define CLASS_1_B1FF62FAE312BC49_8_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E30830)
#define CLASS_1_B1FF62FAE312BC49_8_CLONE_OFFSET UNITYSDK_OFFSET(0x17E30140)
#define CLASS_1_B1FF62FAE312BC49_8_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E30250)
#define CLASS_1_B1FF62FAE312BC49_8_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E30220)
#define CLASS_1_B1FF62FAE312BC49_8_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E30350)
#define CLASS_1_B1FF62FAE312BC49_8_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E30BA0)
#define CLASS_1_B1FF62FAE312BC49_8_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E30B00)
#define CLASS_1_B1FF62FAE312BC49_8_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17E301C0)
#define CLASS_1_B1FF62FAE312BC49_8_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x17E301E0)
#define CLASS_1_B1FF62FAE312BC49_8_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x17E30200)
#define CLASS_1_B1FF62FAE312BC49_8_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17E30190)
#define CLASS_1_B1FF62FAE312BC49_8_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x17E30180)
#define CLASS_1_B1FF62FAE312BC49_8_METHOD_1_554199E0076172C5_2_OFFSET UNITYSDK_OFFSET(0x17E301B0)
#define CLASS_1_B1FF62FAE312BC49_8_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17E30170)
#define CLASS_1_B1FF62FAE312BC49_8_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17E301D0)
#define CLASS_1_B1FF62FAE312BC49_8_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x17E301F0)
#define CLASS_1_B1FF62FAE312BC49_8_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x17E30210)
#define CLASS_1_B1FF62FAE312BC49_8_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17E301A0)
#define CLASS_1_B1FF62FAE312BC49_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E2FEF0)
#define CLASS_1_B1FF62FAE312BC49_8_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E30610)
#define CLASS_1_B1FF62FAE312BC49_8_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E30670)
#define CLASS_1_B1FF62FAE312BC49_8__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E30D70)
#define CLASS_1_B1FF62FAE312BC49_8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E2FFD0)
#define CLASS_1_B1FF62FAE312BC49_8__CTOR_OFFSET UNITYSDK_OFFSET(0x17E2FF00)

inline static constexpr unsigned int Class_1_B1FF62FAE312BC49_8_TypeDefinitionIndex = 25793;

class Class_1_B1FF62FAE312BC49_8 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B1FF62FAE312BC49_8_TypeDefinitionIndex)->GetStaticField(0x236D0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B1FF62FAE312BC49_8_TypeDefinitionIndex)->GetStaticField(0x236D8);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_10()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B1FF62FAE312BC49_8_TypeDefinitionIndex)->GetStaticField(0x236E0);
	}
	// static const ::System::Int32 Field_1_1 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_9 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_12 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_14 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_16 = 0x1; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_11; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_6; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x28
	::System::UInt32 Field_1_17; // 0x30
	::System::UInt32 Field_1_8; // 0x34
	::System::UInt32 Field_1_15; // 0x38
	::System::UInt32 Field_1_13; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_8__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_B1FF62FAE312BC49_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_8*))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_8__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_8__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_B1FF62FAE312BC49_8* Clone()
	{
		return ((::Class_1_B1FF62FAE312BC49_8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_8_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_8_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_8_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_8_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_8_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_8_METHOD_1_554199E0076172C5_2_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_8_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_8_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_8_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_8_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_8_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_8_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_8_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_B1FF62FAE312BC49_8* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_8*))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_8_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_8_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_8_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_8_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_8_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_B1FF62FAE312BC49_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_8*))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_8_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B1FF62FAE312BC49_8_MERGEFROM_1_OFFSET))(this, a1);
	}
};
