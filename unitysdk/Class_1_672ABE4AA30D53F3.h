#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_9.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_672ABE4AA30D53F3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A18E680)
#define CLASS_1_672ABE4AA30D53F3_CLONE_OFFSET UNITYSDK_OFFSET(0x1A18E2E0)
#define CLASS_1_672ABE4AA30D53F3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A18E430)
#define CLASS_1_672ABE4AA30D53F3_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A18E340)
#define CLASS_1_672ABE4AA30D53F3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A18E4E0)
#define CLASS_1_672ABE4AA30D53F3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A18E850)
#define CLASS_1_672ABE4AA30D53F3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A18E7B0)
#define CLASS_1_672ABE4AA30D53F3_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A18E320)
#define CLASS_1_672ABE4AA30D53F3_METHOD_1_2E179BEDD6B3AA06_OFFSET UNITYSDK_OFFSET(0x1A18E310)
#define CLASS_1_672ABE4AA30D53F3_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A18E1D0)
#define CLASS_1_672ABE4AA30D53F3_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A18E330)
#define CLASS_1_672ABE4AA30D53F3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A18E200)
#define CLASS_1_672ABE4AA30D53F3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A18E550)
#define CLASS_1_672ABE4AA30D53F3_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A18E5B0)
#define CLASS_1_672ABE4AA30D53F3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A18EA10)
#define CLASS_1_672ABE4AA30D53F3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A18E250)
#define CLASS_1_672ABE4AA30D53F3__CTOR_OFFSET UNITYSDK_OFFSET(0x1A18E210)

inline static constexpr unsigned int Class_1_672ABE4AA30D53F3_TypeDefinitionIndex = 24901;

class Class_1_672ABE4AA30D53F3 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_672ABE4AA30D53F3*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_672ABE4AA30D53F3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_672ABE4AA30D53F3_TypeDefinitionIndex)->GetStaticField(0x2EA30);
	}
	static ::Google::Protobuf::FieldCodec_1<::Enum_3_ED790DAC948A65A9_9>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Enum_3_ED790DAC948A65A9_9>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_672ABE4AA30D53F3_TypeDefinitionIndex)->GetStaticField(0x2EA38);
	}
	// static const ::System::Int32 Field_1_2 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x7; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_ED790DAC948A65A9_9>* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x18
	::System::UInt32 Field_1_6; // 0x20

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

	::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_ED790DAC948A65A9_9>* Method_1_2E179BEDD6B3AA06()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Enum_3_ED790DAC948A65A9_9>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_672ABE4AA30D53F3_METHOD_1_2E179BEDD6B3AA06_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_672ABE4AA30D53F3_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_672ABE4AA30D53F3_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
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
