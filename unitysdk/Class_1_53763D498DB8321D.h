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

#define CLASS_1_53763D498DB8321D_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x192F3470)
#define CLASS_1_53763D498DB8321D_CLONE_OFFSET UNITYSDK_OFFSET(0x192F2ED0)
#define CLASS_1_53763D498DB8321D_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x192F2FD0)
#define CLASS_1_53763D498DB8321D_EQUALS_OFFSET UNITYSDK_OFFSET(0x192F2FA0)
#define CLASS_1_53763D498DB8321D_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x192F30B0)
#define CLASS_1_53763D498DB8321D_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x192F3730)
#define CLASS_1_53763D498DB8321D_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x192F36B0)
#define CLASS_1_53763D498DB8321D_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x192F2F60)
#define CLASS_1_53763D498DB8321D_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x192F2F80)
#define CLASS_1_53763D498DB8321D_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x192F2F30)
#define CLASS_1_53763D498DB8321D_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x192F2F50)
#define CLASS_1_53763D498DB8321D_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x192F2F00)
#define CLASS_1_53763D498DB8321D_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x192F2D00)
#define CLASS_1_53763D498DB8321D_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x192F2F70)
#define CLASS_1_53763D498DB8321D_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x192F2F90)
#define CLASS_1_53763D498DB8321D_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x192F2F40)
#define CLASS_1_53763D498DB8321D_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x192F2F20)
#define CLASS_1_53763D498DB8321D_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x192F2F10)
#define CLASS_1_53763D498DB8321D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x192F2D30)
#define CLASS_1_53763D498DB8321D_TOSTRING_OFFSET UNITYSDK_OFFSET(0x192F32A0)
#define CLASS_1_53763D498DB8321D_WRITETO_OFFSET UNITYSDK_OFFSET(0x192F3300)
#define CLASS_1_53763D498DB8321D__CCTOR_OFFSET UNITYSDK_OFFSET(0x192F38B0)
#define CLASS_1_53763D498DB8321D__CTOR_1_OFFSET UNITYSDK_OFFSET(0x192F2DD0)
#define CLASS_1_53763D498DB8321D__CTOR_OFFSET UNITYSDK_OFFSET(0x192F2D40)

inline static constexpr unsigned int Class_1_53763D498DB8321D_TypeDefinitionIndex = 24880;

class Class_1_53763D498DB8321D : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_53763D498DB8321D_TypeDefinitionIndex)->GetStaticField(0x5DAB0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_10()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_53763D498DB8321D_TypeDefinitionIndex)->GetStaticField(0x5DAB8);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_53763D498DB8321D*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_53763D498DB8321D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_53763D498DB8321D_TypeDefinitionIndex)->GetStaticField(0x5DAC0);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_12 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_14 = 0xD; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_11; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_4; // 0x20
	::System::UInt32 Field_1_13; // 0x28
	::System::UInt32 Field_1_8; // 0x2C
	::System::Boolean Field_1_6; // 0x30
	::System::UInt32 Field_1_15; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53763D498DB8321D__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_53763D498DB8321D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_53763D498DB8321D*))((::PBYTE)hIl2Cpp + CLASS_1_53763D498DB8321D__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_53763D498DB8321D__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_53763D498DB8321D*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_53763D498DB8321D*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_53763D498DB8321D_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53763D498DB8321D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_53763D498DB8321D* Clone()
	{
		return ((::Class_1_53763D498DB8321D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53763D498DB8321D_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53763D498DB8321D_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53763D498DB8321D_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_53763D498DB8321D_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53763D498DB8321D_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_53763D498DB8321D_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53763D498DB8321D_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53763D498DB8321D_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_53763D498DB8321D_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53763D498DB8321D_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_53763D498DB8321D_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_53763D498DB8321D_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_53763D498DB8321D* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_53763D498DB8321D*))((::PBYTE)hIl2Cpp + CLASS_1_53763D498DB8321D_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53763D498DB8321D_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53763D498DB8321D_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_53763D498DB8321D_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53763D498DB8321D_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_53763D498DB8321D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_53763D498DB8321D*))((::PBYTE)hIl2Cpp + CLASS_1_53763D498DB8321D_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_53763D498DB8321D_MERGEFROM_1_OFFSET))(this, a1);
	}
};
