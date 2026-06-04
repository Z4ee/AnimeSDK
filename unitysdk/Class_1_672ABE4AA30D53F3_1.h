#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_46.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_672ABE4AA30D53F3_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A2A5030)
#define CLASS_1_672ABE4AA30D53F3_1_CLONE_OFFSET UNITYSDK_OFFSET(0x1A2A4C40)
#define CLASS_1_672ABE4AA30D53F3_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A2A4CC0)
#define CLASS_1_672ABE4AA30D53F3_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A2A4C90)
#define CLASS_1_672ABE4AA30D53F3_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A2A4DA0)
#define CLASS_1_672ABE4AA30D53F3_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A2A51C0)
#define CLASS_1_672ABE4AA30D53F3_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A2A5110)
#define CLASS_1_672ABE4AA30D53F3_1_METHOD_1_2E179BEDD6B3AA06_OFFSET UNITYSDK_OFFSET(0x1A2A4C70)
#define CLASS_1_672ABE4AA30D53F3_1_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1A2A4C80)
#define CLASS_1_672ABE4AA30D53F3_1_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A2A4AA0)
#define CLASS_1_672ABE4AA30D53F3_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A2A4AD0)
#define CLASS_1_672ABE4AA30D53F3_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A2A4EF0)
#define CLASS_1_672ABE4AA30D53F3_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A2A4F50)
#define CLASS_1_672ABE4AA30D53F3_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2A52D0)
#define CLASS_1_672ABE4AA30D53F3_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A2A4B50)
#define CLASS_1_672ABE4AA30D53F3_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2A4AE0)

inline static constexpr unsigned int Class_1_672ABE4AA30D53F3_1_TypeDefinitionIndex = 28420;

class Class_1_672ABE4AA30D53F3_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_672ABE4AA30D53F3_1_TypeDefinitionIndex)->GetStaticField(0x4A700);
	}
	static ::Google::Protobuf::FieldCodec_1<::Enum_3_0A3761FE34514D6C_46>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Enum_3_0A3761FE34514D6C_46>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_672ABE4AA30D53F3_1_TypeDefinitionIndex)->GetStaticField(0x4A708);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_672ABE4AA30D53F3_1*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_672ABE4AA30D53F3_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_672ABE4AA30D53F3_1_TypeDefinitionIndex)->GetStaticField(0x4A710);
	}
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xD; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_0A3761FE34514D6C_46>* Field_1_5; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_6; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_672ABE4AA30D53F3_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_672ABE4AA30D53F3_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_672ABE4AA30D53F3_1*))((::PBYTE)hIl2Cpp + CLASS_1_672ABE4AA30D53F3_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_672ABE4AA30D53F3_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_672ABE4AA30D53F3_1*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_672ABE4AA30D53F3_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_672ABE4AA30D53F3_1_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_672ABE4AA30D53F3_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_672ABE4AA30D53F3_1* Clone()
	{
		return ((::Class_1_672ABE4AA30D53F3_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_672ABE4AA30D53F3_1_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_0A3761FE34514D6C_46>* Method_1_2E179BEDD6B3AA06()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_0A3761FE34514D6C_46>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_672ABE4AA30D53F3_1_METHOD_1_2E179BEDD6B3AA06_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_672ABE4AA30D53F3_1_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_672ABE4AA30D53F3_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_672ABE4AA30D53F3_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_672ABE4AA30D53F3_1*))((::PBYTE)hIl2Cpp + CLASS_1_672ABE4AA30D53F3_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_672ABE4AA30D53F3_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_672ABE4AA30D53F3_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_672ABE4AA30D53F3_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_672ABE4AA30D53F3_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_672ABE4AA30D53F3_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_672ABE4AA30D53F3_1*))((::PBYTE)hIl2Cpp + CLASS_1_672ABE4AA30D53F3_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_672ABE4AA30D53F3_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
