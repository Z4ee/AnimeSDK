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

#define CLASS_1_E14A0A1A8B1F847C_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A5775C0)
#define CLASS_1_E14A0A1A8B1F847C_CLONE_OFFSET UNITYSDK_OFFSET(0x1A576CA0)
#define CLASS_1_E14A0A1A8B1F847C_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A576E20)
#define CLASS_1_E14A0A1A8B1F847C_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A576DF0)
#define CLASS_1_E14A0A1A8B1F847C_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A577010)
#define CLASS_1_E14A0A1A8B1F847C_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A577AA0)
#define CLASS_1_E14A0A1A8B1F847C_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A5779D0)
#define CLASS_1_E14A0A1A8B1F847C_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A576D00)
#define CLASS_1_E14A0A1A8B1F847C_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1A576D90)
#define CLASS_1_E14A0A1A8B1F847C_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1A576DB0)
#define CLASS_1_E14A0A1A8B1F847C_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x1A576DD0)
#define CLASS_1_E14A0A1A8B1F847C_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A576CD0)
#define CLASS_1_E14A0A1A8B1F847C_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1A576D40)
#define CLASS_1_E14A0A1A8B1F847C_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1A576CF0)
#define CLASS_1_E14A0A1A8B1F847C_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A576AA0)
#define CLASS_1_E14A0A1A8B1F847C_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A576D10)
#define CLASS_1_E14A0A1A8B1F847C_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1A576DA0)
#define CLASS_1_E14A0A1A8B1F847C_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1A576DC0)
#define CLASS_1_E14A0A1A8B1F847C_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x1A576DE0)
#define CLASS_1_E14A0A1A8B1F847C_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A576CE0)
#define CLASS_1_E14A0A1A8B1F847C_METHOD_1_8633AE51B23EBDFD_1_OFFSET UNITYSDK_OFFSET(0x1A576D80)
#define CLASS_1_E14A0A1A8B1F847C_METHOD_1_8633AE51B23EBDFD_OFFSET UNITYSDK_OFFSET(0x1A576D30)
#define CLASS_1_E14A0A1A8B1F847C_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x1A576D60)
#define CLASS_1_E14A0A1A8B1F847C_METHOD_1_C229FF62B898C0B2_1_OFFSET UNITYSDK_OFFSET(0x1A576D70)
#define CLASS_1_E14A0A1A8B1F847C_METHOD_1_C229FF62B898C0B2_OFFSET UNITYSDK_OFFSET(0x1A576D20)
#define CLASS_1_E14A0A1A8B1F847C_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1A576D50)
#define CLASS_1_E14A0A1A8B1F847C_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A576AD0)
#define CLASS_1_E14A0A1A8B1F847C_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A5772F0)
#define CLASS_1_E14A0A1A8B1F847C_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A577350)
#define CLASS_1_E14A0A1A8B1F847C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A577CA0)
#define CLASS_1_E14A0A1A8B1F847C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A576B70)
#define CLASS_1_E14A0A1A8B1F847C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A576AE0)

inline static constexpr unsigned int Class_1_E14A0A1A8B1F847C_TypeDefinitionIndex = 24066;

class Class_1_E14A0A1A8B1F847C : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_E14A0A1A8B1F847C*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_E14A0A1A8B1F847C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E14A0A1A8B1F847C_TypeDefinitionIndex)->GetStaticField(0x14F00);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E14A0A1A8B1F847C_TypeDefinitionIndex)->GetStaticField(0x14F08);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E14A0A1A8B1F847C_TypeDefinitionIndex)->GetStaticField(0x14F10);
	}
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_12 = 0xA; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_13; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_14; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_15; // 0x20
	::System::Double Field_1_16; // 0x28
	::System::UInt32 Field_1_17; // 0x30
	::System::UInt32 Field_1_18; // 0x34
	::System::UInt32 Field_1_19; // 0x38
	::System::UInt32 Field_1_20; // 0x3C
	::System::Double Field_1_21; // 0x40
	::System::UInt32 Field_1_22; // 0x48
	::System::Int32 Field_1_23; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E14A0A1A8B1F847C__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_E14A0A1A8B1F847C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E14A0A1A8B1F847C*))((::PBYTE)hIl2Cpp + CLASS_1_E14A0A1A8B1F847C__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E14A0A1A8B1F847C__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_E14A0A1A8B1F847C*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_E14A0A1A8B1F847C*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E14A0A1A8B1F847C_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E14A0A1A8B1F847C_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_E14A0A1A8B1F847C* Clone()
	{
		return ((::Class_1_E14A0A1A8B1F847C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E14A0A1A8B1F847C_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E14A0A1A8B1F847C_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E14A0A1A8B1F847C_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E14A0A1A8B1F847C_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E14A0A1A8B1F847C_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E14A0A1A8B1F847C_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E14A0A1A8B1F847C_METHOD_1_C229FF62B898C0B2_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_E14A0A1A8B1F847C_METHOD_1_8633AE51B23EBDFD_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E14A0A1A8B1F847C_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E14A0A1A8B1F847C_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E14A0A1A8B1F847C_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2_1()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E14A0A1A8B1F847C_METHOD_1_C229FF62B898C0B2_1_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD_1(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_E14A0A1A8B1F847C_METHOD_1_8633AE51B23EBDFD_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E14A0A1A8B1F847C_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E14A0A1A8B1F847C_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E14A0A1A8B1F847C_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E14A0A1A8B1F847C_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E14A0A1A8B1F847C_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E14A0A1A8B1F847C_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E14A0A1A8B1F847C_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E14A0A1A8B1F847C* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E14A0A1A8B1F847C*))((::PBYTE)hIl2Cpp + CLASS_1_E14A0A1A8B1F847C_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E14A0A1A8B1F847C_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E14A0A1A8B1F847C_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E14A0A1A8B1F847C_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E14A0A1A8B1F847C_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_E14A0A1A8B1F847C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E14A0A1A8B1F847C*))((::PBYTE)hIl2Cpp + CLASS_1_E14A0A1A8B1F847C_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E14A0A1A8B1F847C_MERGEFROM_1_OFFSET))(this, a1);
	}
};
