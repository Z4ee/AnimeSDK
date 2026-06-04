#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0F1B992870941C13_3.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_12.h"
#include "unitysdk/System/Object.h"

class Class_1_C9DFE5EE7107C629_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_01C2B9641EF803B2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1AB76EE0)
#define CLASS_1_01C2B9641EF803B2_CLONE_OFFSET UNITYSDK_OFFSET(0x1AB76A80)
#define CLASS_1_01C2B9641EF803B2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1AB76B50)
#define CLASS_1_01C2B9641EF803B2_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AB76B20)
#define CLASS_1_01C2B9641EF803B2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AB76C20)
#define CLASS_1_01C2B9641EF803B2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1AB77210)
#define CLASS_1_01C2B9641EF803B2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1AB77150)
#define CLASS_1_01C2B9641EF803B2_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1AB76AD0)
#define CLASS_1_01C2B9641EF803B2_METHOD_1_3DACC45AC8150727_1_OFFSET UNITYSDK_OFFSET(0x1AB76B00)
#define CLASS_1_01C2B9641EF803B2_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1AB76AC0)
#define CLASS_1_01C2B9641EF803B2_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1AB76960)
#define CLASS_1_01C2B9641EF803B2_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1AB76B10)
#define CLASS_1_01C2B9641EF803B2_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1AB76AE0)
#define CLASS_1_01C2B9641EF803B2_METHOD_1_A96DCA30C6927810_1_OFFSET UNITYSDK_OFFSET(0x1AB76AF0)
#define CLASS_1_01C2B9641EF803B2_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1AB76AB0)
#define CLASS_1_01C2B9641EF803B2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1AB76990)
#define CLASS_1_01C2B9641EF803B2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AB76D20)
#define CLASS_1_01C2B9641EF803B2_WRITETO_OFFSET UNITYSDK_OFFSET(0x1AB76D80)
#define CLASS_1_01C2B9641EF803B2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AB772F0)
#define CLASS_1_01C2B9641EF803B2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AB769E0)
#define CLASS_1_01C2B9641EF803B2__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB769A0)

inline static constexpr unsigned int Class_1_01C2B9641EF803B2_TypeDefinitionIndex = 25795;

class Class_1_01C2B9641EF803B2 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_01C2B9641EF803B2*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_01C2B9641EF803B2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_01C2B9641EF803B2_TypeDefinitionIndex)->GetStaticField(0x23760);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_C9DFE5EE7107C629_2*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_C9DFE5EE7107C629_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_01C2B9641EF803B2_TypeDefinitionIndex)->GetStaticField(0x23768);
	}
	// static const ::System::Int32 Field_1_2 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xB; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C9DFE5EE7107C629_2*>* Field_1_6; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_7; // 0x18
	::Enum_3_0F1B992870941C13_3 Field_1_8; // 0x20
	::Enum_3_ED790DAC948A65A9_12 Field_1_9; // 0x24
	::System::UInt32 Field_1_10; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01C2B9641EF803B2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_01C2B9641EF803B2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_01C2B9641EF803B2*))((::PBYTE)hIl2Cpp + CLASS_1_01C2B9641EF803B2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_01C2B9641EF803B2__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_01C2B9641EF803B2*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_01C2B9641EF803B2*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_01C2B9641EF803B2_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01C2B9641EF803B2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_01C2B9641EF803B2* Clone()
	{
		return ((::Class_1_01C2B9641EF803B2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01C2B9641EF803B2_CLONE_OFFSET))(this);
	}

	::Enum_3_0F1B992870941C13_3 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0F1B992870941C13_3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01C2B9641EF803B2_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0F1B992870941C13_3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0F1B992870941C13_3))((::PBYTE)hIl2Cpp + CLASS_1_01C2B9641EF803B2_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01C2B9641EF803B2_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_01C2B9641EF803B2_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Enum_3_ED790DAC948A65A9_12 Method_1_A96DCA30C6927810_1()
	{
		return ((::Enum_3_ED790DAC948A65A9_12(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01C2B9641EF803B2_METHOD_1_A96DCA30C6927810_1_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727_1(::Enum_3_ED790DAC948A65A9_12 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_12))((::PBYTE)hIl2Cpp + CLASS_1_01C2B9641EF803B2_METHOD_1_3DACC45AC8150727_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C9DFE5EE7107C629_2*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C9DFE5EE7107C629_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01C2B9641EF803B2_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_01C2B9641EF803B2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_01C2B9641EF803B2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_01C2B9641EF803B2*))((::PBYTE)hIl2Cpp + CLASS_1_01C2B9641EF803B2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01C2B9641EF803B2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01C2B9641EF803B2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_01C2B9641EF803B2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01C2B9641EF803B2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_01C2B9641EF803B2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_01C2B9641EF803B2*))((::PBYTE)hIl2Cpp + CLASS_1_01C2B9641EF803B2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_01C2B9641EF803B2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
