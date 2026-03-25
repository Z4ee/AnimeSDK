#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63C076C405BE0674_1.h"
#include "unitysdk/System/Object.h"

class Class_1_3A7B270FE0BE90AE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_A21ACB7E0A72D3E4_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17BB56F0)
#define CLASS_1_A21ACB7E0A72D3E4_2_CLONE_OFFSET UNITYSDK_OFFSET(0x17BB5230)
#define CLASS_1_A21ACB7E0A72D3E4_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17BB53B0)
#define CLASS_1_A21ACB7E0A72D3E4_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x17BB52B0)
#define CLASS_1_A21ACB7E0A72D3E4_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17BB5470)
#define CLASS_1_A21ACB7E0A72D3E4_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17BB5970)
#define CLASS_1_A21ACB7E0A72D3E4_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17BB58C0)
#define CLASS_1_A21ACB7E0A72D3E4_2_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17BB5290)
#define CLASS_1_A21ACB7E0A72D3E4_2_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17BB5270)
#define CLASS_1_A21ACB7E0A72D3E4_2_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17BB5280)
#define CLASS_1_A21ACB7E0A72D3E4_2_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17BB52A0)
#define CLASS_1_A21ACB7E0A72D3E4_2_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17BB5260)
#define CLASS_1_A21ACB7E0A72D3E4_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17BB5110)
#define CLASS_1_A21ACB7E0A72D3E4_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17BB5570)
#define CLASS_1_A21ACB7E0A72D3E4_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x17BB55D0)
#define CLASS_1_A21ACB7E0A72D3E4_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x17BB5A50)
#define CLASS_1_A21ACB7E0A72D3E4_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17BB5170)
#define CLASS_1_A21ACB7E0A72D3E4_2__CTOR_OFFSET UNITYSDK_OFFSET(0x17BB5120)

inline static constexpr unsigned int Class_1_A21ACB7E0A72D3E4_2_TypeDefinitionIndex = 25263;

class Class_1_A21ACB7E0A72D3E4_2 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_3A7B270FE0BE90AE*>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_3A7B270FE0BE90AE*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A21ACB7E0A72D3E4_2_TypeDefinitionIndex)->GetStaticField(0x344F0);
	}
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x5; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3A7B270FE0BE90AE*>* Field_1_5; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Enum_3_63C076C405BE0674_1 Field_1_2; // 0x20
	::System::UInt32 Field_1_7; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_A21ACB7E0A72D3E4_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A21ACB7E0A72D3E4_2*))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_2__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_A21ACB7E0A72D3E4_2* Clone()
	{
		return ((::Class_1_A21ACB7E0A72D3E4_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_2_CLONE_OFFSET))(this);
	}

	::Enum_3_63C076C405BE0674_1 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_63C076C405BE0674_1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_2_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_63C076C405BE0674_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63C076C405BE0674_1))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_2_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3A7B270FE0BE90AE*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_3A7B270FE0BE90AE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_2_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_2_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_2_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_A21ACB7E0A72D3E4_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A21ACB7E0A72D3E4_2*))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_A21ACB7E0A72D3E4_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A21ACB7E0A72D3E4_2*))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
