#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76_2.h"
#include "unitysdk/System/Object.h"

class Class_1_F3622139E5E134C0_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_E682E41F826FB54E_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A7FB560)
#define CLASS_1_E682E41F826FB54E_CLONE_OFFSET UNITYSDK_OFFSET(0x1A7FB110)
#define CLASS_1_E682E41F826FB54E_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A7FB260)
#define CLASS_1_E682E41F826FB54E_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A7FB170)
#define CLASS_1_E682E41F826FB54E_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A7FB310)
#define CLASS_1_E682E41F826FB54E_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A7FB750)
#define CLASS_1_E682E41F826FB54E_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A7FB6B0)
#define CLASS_1_E682E41F826FB54E_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1A7FB150)
#define CLASS_1_E682E41F826FB54E_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A7FAFC0)
#define CLASS_1_E682E41F826FB54E_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1A7FB160)
#define CLASS_1_E682E41F826FB54E_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1A7FB140)
#define CLASS_1_E682E41F826FB54E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A7FAFF0)
#define CLASS_1_E682E41F826FB54E_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A7FB400)
#define CLASS_1_E682E41F826FB54E_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A7FB460)
#define CLASS_1_E682E41F826FB54E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A7FB920)
#define CLASS_1_E682E41F826FB54E__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A7FB050)
#define CLASS_1_E682E41F826FB54E__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7FB000)

inline static constexpr unsigned int Class_1_E682E41F826FB54E_TypeDefinitionIndex = 29455;

class Class_1_E682E41F826FB54E : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_F3622139E5E134C0_1*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_F3622139E5E134C0_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E682E41F826FB54E_TypeDefinitionIndex)->GetStaticField(0x4FB90);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_E682E41F826FB54E*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_E682E41F826FB54E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E682E41F826FB54E_TypeDefinitionIndex)->GetStaticField(0x4FB98);
	}
	// static const ::System::Int32 Field_1_2 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F3622139E5E134C0_1*>* Field_1_5; // 0x18
	::Enum_3_A35B38E5F9115A76_2 Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E682E41F826FB54E__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_E682E41F826FB54E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E682E41F826FB54E*))((::PBYTE)hIl2Cpp + CLASS_1_E682E41F826FB54E__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E682E41F826FB54E__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_E682E41F826FB54E*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_E682E41F826FB54E*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E682E41F826FB54E_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E682E41F826FB54E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_E682E41F826FB54E* Clone()
	{
		return ((::Class_1_E682E41F826FB54E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E682E41F826FB54E_CLONE_OFFSET))(this);
	}

	::Enum_3_A35B38E5F9115A76_2 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_A35B38E5F9115A76_2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E682E41F826FB54E_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_A35B38E5F9115A76_2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_A35B38E5F9115A76_2))((::PBYTE)hIl2Cpp + CLASS_1_E682E41F826FB54E_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F3622139E5E134C0_1*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F3622139E5E134C0_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E682E41F826FB54E_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E682E41F826FB54E_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E682E41F826FB54E* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E682E41F826FB54E*))((::PBYTE)hIl2Cpp + CLASS_1_E682E41F826FB54E_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E682E41F826FB54E_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E682E41F826FB54E_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E682E41F826FB54E_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E682E41F826FB54E_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_E682E41F826FB54E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E682E41F826FB54E*))((::PBYTE)hIl2Cpp + CLASS_1_E682E41F826FB54E_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E682E41F826FB54E_MERGEFROM_1_OFFSET))(this, a1);
	}
};
