#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_48.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_672ABE4AA30D53F3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CEBBB20)
#define CLASS_1_672ABE4AA30D53F3_CLONE_OFFSET UNITYSDK_OFFSET(0x1CEBB6D0)
#define CLASS_1_672ABE4AA30D53F3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CEBB750)
#define CLASS_1_672ABE4AA30D53F3_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CEBB720)
#define CLASS_1_672ABE4AA30D53F3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CEBB8A0)
#define CLASS_1_672ABE4AA30D53F3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CEBBCB0)
#define CLASS_1_672ABE4AA30D53F3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CEBBC00)
#define CLASS_1_672ABE4AA30D53F3_METHOD_1_2E179BEDD6B3AA06_OFFSET UNITYSDK_OFFSET(0x1CEBB710)
#define CLASS_1_672ABE4AA30D53F3_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1CEBB700)
#define CLASS_1_672ABE4AA30D53F3_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CEBB520)
#define CLASS_1_672ABE4AA30D53F3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CEBB550)
#define CLASS_1_672ABE4AA30D53F3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CEBB9E0)
#define CLASS_1_672ABE4AA30D53F3_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CEBBA40)
#define CLASS_1_672ABE4AA30D53F3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEBBDC0)
#define CLASS_1_672ABE4AA30D53F3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CEBB5E0)
#define CLASS_1_672ABE4AA30D53F3__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEBB560)

inline static constexpr unsigned int Class_1_672ABE4AA30D53F3_TypeDefinitionIndex = 28958;

class Class_1_672ABE4AA30D53F3 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Enum_3_0A3761FE34514D6C_48>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Enum_3_0A3761FE34514D6C_48>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_672ABE4AA30D53F3_TypeDefinitionIndex)->GetStaticField(0x436B0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_672ABE4AA30D53F3_TypeDefinitionIndex)->GetStaticField(0x436B8);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_672ABE4AA30D53F3*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_672ABE4AA30D53F3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_672ABE4AA30D53F3_TypeDefinitionIndex)->GetStaticField(0x436C0);
	}
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xB; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_6; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_0A3761FE34514D6C_48>* Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_672ABE4AA30D53F3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_672ABE4AA30D53F3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_672ABE4AA30D53F3*))((::PBYTE)hIl2Cpp + CLASS_1_672ABE4AA30D53F3__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_672ABE4AA30D53F3__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_672ABE4AA30D53F3*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_672ABE4AA30D53F3*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_672ABE4AA30D53F3_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_672ABE4AA30D53F3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_672ABE4AA30D53F3* Clone()
	{
		return ((::Class_1_672ABE4AA30D53F3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_672ABE4AA30D53F3_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_672ABE4AA30D53F3_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_0A3761FE34514D6C_48>* Method_1_2E179BEDD6B3AA06()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_0A3761FE34514D6C_48>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_672ABE4AA30D53F3_METHOD_1_2E179BEDD6B3AA06_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_672ABE4AA30D53F3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_672ABE4AA30D53F3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_672ABE4AA30D53F3*))((::PBYTE)hIl2Cpp + CLASS_1_672ABE4AA30D53F3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_672ABE4AA30D53F3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_672ABE4AA30D53F3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_672ABE4AA30D53F3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_672ABE4AA30D53F3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_672ABE4AA30D53F3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_672ABE4AA30D53F3*))((::PBYTE)hIl2Cpp + CLASS_1_672ABE4AA30D53F3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_672ABE4AA30D53F3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
