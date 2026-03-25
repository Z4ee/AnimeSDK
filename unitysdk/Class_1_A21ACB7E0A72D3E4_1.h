#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_41.h"
#include "unitysdk/System/Object.h"

class Class_1_6F289C13530086A8;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_A21ACB7E0A72D3E4_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17F25570)
#define CLASS_1_A21ACB7E0A72D3E4_1_CLONE_OFFSET UNITYSDK_OFFSET(0x17F250B0)
#define CLASS_1_A21ACB7E0A72D3E4_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17F25230)
#define CLASS_1_A21ACB7E0A72D3E4_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x17F25130)
#define CLASS_1_A21ACB7E0A72D3E4_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17F252F0)
#define CLASS_1_A21ACB7E0A72D3E4_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17F257E0)
#define CLASS_1_A21ACB7E0A72D3E4_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17F25730)
#define CLASS_1_A21ACB7E0A72D3E4_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17F250E0)
#define CLASS_1_A21ACB7E0A72D3E4_1_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17F25110)
#define CLASS_1_A21ACB7E0A72D3E4_1_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17F25120)
#define CLASS_1_A21ACB7E0A72D3E4_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17F250F0)
#define CLASS_1_A21ACB7E0A72D3E4_1_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17F25100)
#define CLASS_1_A21ACB7E0A72D3E4_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17F24F90)
#define CLASS_1_A21ACB7E0A72D3E4_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17F253F0)
#define CLASS_1_A21ACB7E0A72D3E4_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x17F25450)
#define CLASS_1_A21ACB7E0A72D3E4_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F258E0)
#define CLASS_1_A21ACB7E0A72D3E4_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17F24FF0)
#define CLASS_1_A21ACB7E0A72D3E4_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17F24FA0)

inline static constexpr unsigned int Class_1_A21ACB7E0A72D3E4_1_TypeDefinitionIndex = 24971;

class Class_1_A21ACB7E0A72D3E4_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_6F289C13530086A8*>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_6F289C13530086A8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A21ACB7E0A72D3E4_1_TypeDefinitionIndex)->GetStaticField(0x30BE0);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_6F289C13530086A8*>* Field_1_7; // 0x18
	::System::UInt32 Field_1_2; // 0x20
	::Enum_3_0A3761FE34514D6C_41 Field_1_4; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_A21ACB7E0A72D3E4_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A21ACB7E0A72D3E4_1*))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_1__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_A21ACB7E0A72D3E4_1* Clone()
	{
		return ((::Class_1_A21ACB7E0A72D3E4_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_1_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Enum_3_0A3761FE34514D6C_41 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0A3761FE34514D6C_41(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_1_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0A3761FE34514D6C_41 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_41))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_1_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_6F289C13530086A8*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_6F289C13530086A8*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_1_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_A21ACB7E0A72D3E4_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A21ACB7E0A72D3E4_1*))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_A21ACB7E0A72D3E4_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A21ACB7E0A72D3E4_1*))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A21ACB7E0A72D3E4_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
