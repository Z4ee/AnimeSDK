#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0F1B992870941C13_3.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_8.h"
#include "unitysdk/System/Object.h"

class Class_1_C9DFE5EE7107C629_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_41E463E2F6B34AB8_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17D72990)
#define CLASS_1_41E463E2F6B34AB8_1_CLONE_OFFSET UNITYSDK_OFFSET(0x17D72540)
#define CLASS_1_41E463E2F6B34AB8_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17D72610)
#define CLASS_1_41E463E2F6B34AB8_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x17D725E0)
#define CLASS_1_41E463E2F6B34AB8_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17D726E0)
#define CLASS_1_41E463E2F6B34AB8_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17D72CE0)
#define CLASS_1_41E463E2F6B34AB8_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17D72C20)
#define CLASS_1_41E463E2F6B34AB8_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17D725C0)
#define CLASS_1_41E463E2F6B34AB8_1_METHOD_1_3DACC45AC8150727_1_OFFSET UNITYSDK_OFFSET(0x17D725B0)
#define CLASS_1_41E463E2F6B34AB8_1_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17D72590)
#define CLASS_1_41E463E2F6B34AB8_1_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17D72570)
#define CLASS_1_41E463E2F6B34AB8_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17D725D0)
#define CLASS_1_41E463E2F6B34AB8_1_METHOD_1_A96DCA30C6927810_1_OFFSET UNITYSDK_OFFSET(0x17D725A0)
#define CLASS_1_41E463E2F6B34AB8_1_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17D72580)
#define CLASS_1_41E463E2F6B34AB8_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17D72450)
#define CLASS_1_41E463E2F6B34AB8_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17D727E0)
#define CLASS_1_41E463E2F6B34AB8_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x17D72840)
#define CLASS_1_41E463E2F6B34AB8_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D72DD0)
#define CLASS_1_41E463E2F6B34AB8_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17D724A0)
#define CLASS_1_41E463E2F6B34AB8_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17D72460)

inline static constexpr unsigned int Class_1_41E463E2F6B34AB8_1_TypeDefinitionIndex = 23882;

class Class_1_41E463E2F6B34AB8_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_C9DFE5EE7107C629_1*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_C9DFE5EE7107C629_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_41E463E2F6B34AB8_1_TypeDefinitionIndex)->GetStaticField(0x15150);
	}
	// static const ::System::Int32 Field_1_1 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x5; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C9DFE5EE7107C629_1*>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_9; // 0x20
	::Enum_3_ED790DAC948A65A9_8 Field_1_5; // 0x24
	::Enum_3_0F1B992870941C13_3 Field_1_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41E463E2F6B34AB8_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_41E463E2F6B34AB8_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_41E463E2F6B34AB8_1*))((::PBYTE)hIl2Cpp + CLASS_1_41E463E2F6B34AB8_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_41E463E2F6B34AB8_1__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41E463E2F6B34AB8_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_41E463E2F6B34AB8_1* Clone()
	{
		return ((::Class_1_41E463E2F6B34AB8_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41E463E2F6B34AB8_1_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C9DFE5EE7107C629_1*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C9DFE5EE7107C629_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41E463E2F6B34AB8_1_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Enum_3_ED790DAC948A65A9_8 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_ED790DAC948A65A9_8(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41E463E2F6B34AB8_1_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_ED790DAC948A65A9_8 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_8))((::PBYTE)hIl2Cpp + CLASS_1_41E463E2F6B34AB8_1_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Enum_3_0F1B992870941C13_3 Method_1_A96DCA30C6927810_1()
	{
		return ((::Enum_3_0F1B992870941C13_3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41E463E2F6B34AB8_1_METHOD_1_A96DCA30C6927810_1_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727_1(::Enum_3_0F1B992870941C13_3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0F1B992870941C13_3))((::PBYTE)hIl2Cpp + CLASS_1_41E463E2F6B34AB8_1_METHOD_1_3DACC45AC8150727_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41E463E2F6B34AB8_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_41E463E2F6B34AB8_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_41E463E2F6B34AB8_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_41E463E2F6B34AB8_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_41E463E2F6B34AB8_1*))((::PBYTE)hIl2Cpp + CLASS_1_41E463E2F6B34AB8_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41E463E2F6B34AB8_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41E463E2F6B34AB8_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_41E463E2F6B34AB8_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41E463E2F6B34AB8_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_41E463E2F6B34AB8_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_41E463E2F6B34AB8_1*))((::PBYTE)hIl2Cpp + CLASS_1_41E463E2F6B34AB8_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_41E463E2F6B34AB8_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
