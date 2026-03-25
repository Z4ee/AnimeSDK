#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_62.h"
#include "unitysdk/System/Object.h"

class Class_1_9D5608F598A30CAC_31;
class Class_1_AC225A1BAAB9FACC_8;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_DBE1913405A6C120_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17DF7860)
#define CLASS_1_DBE1913405A6C120_CLONE_OFFSET UNITYSDK_OFFSET(0x17DF7310)
#define CLASS_1_DBE1913405A6C120_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17DF73D0)
#define CLASS_1_DBE1913405A6C120_EQUALS_OFFSET UNITYSDK_OFFSET(0x17DF73A0)
#define CLASS_1_DBE1913405A6C120_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17DF74C0)
#define CLASS_1_DBE1913405A6C120_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17DF7BA0)
#define CLASS_1_DBE1913405A6C120_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17DF7A90)
#define CLASS_1_DBE1913405A6C120_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17DF7350)
#define CLASS_1_DBE1913405A6C120_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17DF7380)
#define CLASS_1_DBE1913405A6C120_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x17DF7390)
#define CLASS_1_DBE1913405A6C120_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17DF7340)
#define CLASS_1_DBE1913405A6C120_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17DF7360)
#define CLASS_1_DBE1913405A6C120_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17DF7370)
#define CLASS_1_DBE1913405A6C120_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17DF71C0)
#define CLASS_1_DBE1913405A6C120_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17DF7680)
#define CLASS_1_DBE1913405A6C120_WRITETO_OFFSET UNITYSDK_OFFSET(0x17DF76E0)
#define CLASS_1_DBE1913405A6C120__CCTOR_OFFSET UNITYSDK_OFFSET(0x17DF7CC0)
#define CLASS_1_DBE1913405A6C120__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17DF7230)
#define CLASS_1_DBE1913405A6C120__CTOR_OFFSET UNITYSDK_OFFSET(0x17DF71D0)

inline static constexpr unsigned int Class_1_DBE1913405A6C120_TypeDefinitionIndex = 26503;

class Class_1_DBE1913405A6C120 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_9D5608F598A30CAC_31*>** StaticGet_Field_1_9()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_9D5608F598A30CAC_31*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DBE1913405A6C120_TypeDefinitionIndex)->GetStaticField(0x1ED90);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_AC225A1BAAB9FACC_8*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_AC225A1BAAB9FACC_8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DBE1913405A6C120_TypeDefinitionIndex)->GetStaticField(0x1ED98);
	}
	// static const ::System::Int32 Field_1_1 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_8 = 0xB; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_9D5608F598A30CAC_31*>* Field_1_10; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_AC225A1BAAB9FACC_8*>* Field_1_3; // 0x20
	::System::UInt32 Field_1_5; // 0x28
	::Enum_3_0A3761FE34514D6C_62 Field_1_7; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBE1913405A6C120__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_DBE1913405A6C120* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DBE1913405A6C120*))((::PBYTE)hIl2Cpp + CLASS_1_DBE1913405A6C120__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DBE1913405A6C120__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBE1913405A6C120_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_DBE1913405A6C120* Clone()
	{
		return ((::Class_1_DBE1913405A6C120*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBE1913405A6C120_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_AC225A1BAAB9FACC_8*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_AC225A1BAAB9FACC_8*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBE1913405A6C120_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBE1913405A6C120_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DBE1913405A6C120_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Enum_3_0A3761FE34514D6C_62 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_62(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBE1913405A6C120_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_62 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_62))((::PBYTE)hIl2Cpp + CLASS_1_DBE1913405A6C120_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_9D5608F598A30CAC_31*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_9D5608F598A30CAC_31*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBE1913405A6C120_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_DBE1913405A6C120_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_DBE1913405A6C120* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DBE1913405A6C120*))((::PBYTE)hIl2Cpp + CLASS_1_DBE1913405A6C120_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBE1913405A6C120_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBE1913405A6C120_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_DBE1913405A6C120_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DBE1913405A6C120_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_DBE1913405A6C120* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DBE1913405A6C120*))((::PBYTE)hIl2Cpp + CLASS_1_DBE1913405A6C120_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_DBE1913405A6C120_MERGEFROM_1_OFFSET))(this, a1);
	}
};
