#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C9E417278351157F_5;
class Class_1_D17272E82AE804C2_271;
class Class_1_D17272E82AE804C2_272;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_A57EDD0666353753_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C439DC0)
#define CLASS_1_A57EDD0666353753_CLONE_OFFSET UNITYSDK_OFFSET(0x1C439990)
#define CLASS_1_A57EDD0666353753_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C439A20)
#define CLASS_1_A57EDD0666353753_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C4399F0)
#define CLASS_1_A57EDD0666353753_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C439B90)
#define CLASS_1_A57EDD0666353753_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C43A020)
#define CLASS_1_A57EDD0666353753_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C439ED0)
#define CLASS_1_A57EDD0666353753_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C4397C0)
#define CLASS_1_A57EDD0666353753_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x1C4399D0)
#define CLASS_1_A57EDD0666353753_METHOD_1_6E1EC2DF63D7020F_2_OFFSET UNITYSDK_OFFSET(0x1C4399E0)
#define CLASS_1_A57EDD0666353753_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1C4399C0)
#define CLASS_1_A57EDD0666353753_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C4397F0)
#define CLASS_1_A57EDD0666353753_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C439C40)
#define CLASS_1_A57EDD0666353753_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C439CA0)
#define CLASS_1_A57EDD0666353753__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C43A2B0)
#define CLASS_1_A57EDD0666353753__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C439880)
#define CLASS_1_A57EDD0666353753__CTOR_OFFSET UNITYSDK_OFFSET(0x1C439800)

inline static constexpr unsigned int Class_1_A57EDD0666353753_TypeDefinitionIndex = 26666;

class Class_1_A57EDD0666353753 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_271*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_271*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A57EDD0666353753_TypeDefinitionIndex)->GetStaticField(0x26FB0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_A57EDD0666353753*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_A57EDD0666353753*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A57EDD0666353753_TypeDefinitionIndex)->GetStaticField(0x26FB8);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_C9E417278351157F_5*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_C9E417278351157F_5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A57EDD0666353753_TypeDefinitionIndex)->GetStaticField(0x26FC0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_272*>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_272*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A57EDD0666353753_TypeDefinitionIndex)->GetStaticField(0x26FC8);
	}
	// static const ::System::Int32 Field_1_4 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xC; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C9E417278351157F_5*>* Field_1_7; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_272*>* Field_1_8; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_271*>* Field_1_9; // 0x20
	::Google::Protobuf::UnknownFieldSet* Field_1_10; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A57EDD0666353753__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_A57EDD0666353753* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A57EDD0666353753*))((::PBYTE)hIl2Cpp + CLASS_1_A57EDD0666353753__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A57EDD0666353753__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_A57EDD0666353753*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_A57EDD0666353753*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A57EDD0666353753_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A57EDD0666353753_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_A57EDD0666353753* Clone()
	{
		return ((::Class_1_A57EDD0666353753*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A57EDD0666353753_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C9E417278351157F_5*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_C9E417278351157F_5*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A57EDD0666353753_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_271*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_271*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A57EDD0666353753_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_272*>* Method_1_6E1EC2DF63D7020F_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_272*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A57EDD0666353753_METHOD_1_6E1EC2DF63D7020F_2_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A57EDD0666353753_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_A57EDD0666353753* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A57EDD0666353753*))((::PBYTE)hIl2Cpp + CLASS_1_A57EDD0666353753_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A57EDD0666353753_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A57EDD0666353753_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A57EDD0666353753_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A57EDD0666353753_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_A57EDD0666353753* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A57EDD0666353753*))((::PBYTE)hIl2Cpp + CLASS_1_A57EDD0666353753_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A57EDD0666353753_MERGEFROM_1_OFFSET))(this, a1);
	}
};
