#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_42.h"
#include "unitysdk/System/Object.h"

class Class_1_4CF8088A158DCE25_41;
class Class_1_B33C6EDD7227DE6C_1;
class Class_1_FA4F4A67B1C04320_437;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_3B43A8498FA6F0B3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18145200)
#define CLASS_1_3B43A8498FA6F0B3_CLONE_OFFSET UNITYSDK_OFFSET(0x18144C00)
#define CLASS_1_3B43A8498FA6F0B3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18144CB0)
#define CLASS_1_3B43A8498FA6F0B3_EQUALS_OFFSET UNITYSDK_OFFSET(0x18144C80)
#define CLASS_1_3B43A8498FA6F0B3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18144DC0)
#define CLASS_1_3B43A8498FA6F0B3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18145520)
#define CLASS_1_3B43A8498FA6F0B3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x181453C0)
#define CLASS_1_3B43A8498FA6F0B3_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x18144C70)
#define CLASS_1_3B43A8498FA6F0B3_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x18144C40)
#define CLASS_1_3B43A8498FA6F0B3_METHOD_1_6E1EC2DF63D7020F_2_OFFSET UNITYSDK_OFFSET(0x18144C50)
#define CLASS_1_3B43A8498FA6F0B3_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x18144C30)
#define CLASS_1_3B43A8498FA6F0B3_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x18144C60)
#define CLASS_1_3B43A8498FA6F0B3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18144A50)
#define CLASS_1_3B43A8498FA6F0B3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18145020)
#define CLASS_1_3B43A8498FA6F0B3_WRITETO_OFFSET UNITYSDK_OFFSET(0x18145080)
#define CLASS_1_3B43A8498FA6F0B3__CCTOR_OFFSET UNITYSDK_OFFSET(0x18145680)
#define CLASS_1_3B43A8498FA6F0B3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18144AE0)
#define CLASS_1_3B43A8498FA6F0B3__CTOR_OFFSET UNITYSDK_OFFSET(0x18144A60)

inline static constexpr unsigned int Class_1_3B43A8498FA6F0B3_TypeDefinitionIndex = 25008;

class Class_1_3B43A8498FA6F0B3 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_437*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_437*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3B43A8498FA6F0B3_TypeDefinitionIndex)->GetStaticField(0x4D90);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_B33C6EDD7227DE6C_1*>** StaticGet_Field_1_8()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_B33C6EDD7227DE6C_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3B43A8498FA6F0B3_TypeDefinitionIndex)->GetStaticField(0x4D98);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_4CF8088A158DCE25_41*>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_4CF8088A158DCE25_41*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3B43A8498FA6F0B3_TypeDefinitionIndex)->GetStaticField(0x4DA0);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_10 = 0xA; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4CF8088A158DCE25_41*>* Field_1_6; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B33C6EDD7227DE6C_1*>* Field_1_9; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_437*>* Field_1_3; // 0x28
	::Enum_3_0A3761FE34514D6C_42 Field_1_11; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B43A8498FA6F0B3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_3B43A8498FA6F0B3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3B43A8498FA6F0B3*))((::PBYTE)hIl2Cpp + CLASS_1_3B43A8498FA6F0B3__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3B43A8498FA6F0B3__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B43A8498FA6F0B3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_3B43A8498FA6F0B3* Clone()
	{
		return ((::Class_1_3B43A8498FA6F0B3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B43A8498FA6F0B3_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_437*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_437*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B43A8498FA6F0B3_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4CF8088A158DCE25_41*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4CF8088A158DCE25_41*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B43A8498FA6F0B3_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B33C6EDD7227DE6C_1*>* Method_1_6E1EC2DF63D7020F_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B33C6EDD7227DE6C_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B43A8498FA6F0B3_METHOD_1_6E1EC2DF63D7020F_2_OFFSET))(this);
	}

	::Enum_3_0A3761FE34514D6C_42 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_42(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B43A8498FA6F0B3_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_42 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_42))((::PBYTE)hIl2Cpp + CLASS_1_3B43A8498FA6F0B3_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3B43A8498FA6F0B3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_3B43A8498FA6F0B3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3B43A8498FA6F0B3*))((::PBYTE)hIl2Cpp + CLASS_1_3B43A8498FA6F0B3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B43A8498FA6F0B3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B43A8498FA6F0B3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3B43A8498FA6F0B3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B43A8498FA6F0B3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_3B43A8498FA6F0B3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3B43A8498FA6F0B3*))((::PBYTE)hIl2Cpp + CLASS_1_3B43A8498FA6F0B3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3B43A8498FA6F0B3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
