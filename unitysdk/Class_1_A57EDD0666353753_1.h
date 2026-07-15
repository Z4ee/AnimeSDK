#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_732;
class Class_1_D17272E82AE804C2_733;
class Class_1_D17272E82AE804C2_734;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_A57EDD0666353753_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CC04C40)
#define CLASS_1_A57EDD0666353753_1_CLONE_OFFSET UNITYSDK_OFFSET(0x1CC04810)
#define CLASS_1_A57EDD0666353753_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CC048A0)
#define CLASS_1_A57EDD0666353753_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CC04870)
#define CLASS_1_A57EDD0666353753_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CC04A10)
#define CLASS_1_A57EDD0666353753_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CC04EA0)
#define CLASS_1_A57EDD0666353753_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CC04D50)
#define CLASS_1_A57EDD0666353753_1_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CC04670)
#define CLASS_1_A57EDD0666353753_1_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x1CC04850)
#define CLASS_1_A57EDD0666353753_1_METHOD_1_6E1EC2DF63D7020F_2_OFFSET UNITYSDK_OFFSET(0x1CC04860)
#define CLASS_1_A57EDD0666353753_1_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1CC04840)
#define CLASS_1_A57EDD0666353753_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CC046A0)
#define CLASS_1_A57EDD0666353753_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CC04AC0)
#define CLASS_1_A57EDD0666353753_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CC04B20)
#define CLASS_1_A57EDD0666353753_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC05140)
#define CLASS_1_A57EDD0666353753_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CC04750)
#define CLASS_1_A57EDD0666353753_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC046B0)

inline static constexpr unsigned int Class_1_A57EDD0666353753_1_TypeDefinitionIndex = 30008;

class Class_1_A57EDD0666353753_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_734*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_734*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A57EDD0666353753_1_TypeDefinitionIndex)->GetStaticField(0x3BEC0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_A57EDD0666353753_1*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_A57EDD0666353753_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A57EDD0666353753_1_TypeDefinitionIndex)->GetStaticField(0x3BEC8);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_732*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_732*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A57EDD0666353753_1_TypeDefinitionIndex)->GetStaticField(0x3BED0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_733*>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_733*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A57EDD0666353753_1_TypeDefinitionIndex)->GetStaticField(0x3BED8);
	}
	// static const ::System::Int32 Field_1_4 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_7; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_732*>* Field_1_8; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_733*>* Field_1_9; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_734*>* Field_1_10; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A57EDD0666353753_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_A57EDD0666353753_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A57EDD0666353753_1*))((::PBYTE)hIl2Cpp + CLASS_1_A57EDD0666353753_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A57EDD0666353753_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_A57EDD0666353753_1*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_A57EDD0666353753_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A57EDD0666353753_1_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A57EDD0666353753_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_A57EDD0666353753_1* Clone()
	{
		return ((::Class_1_A57EDD0666353753_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A57EDD0666353753_1_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_732*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_732*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A57EDD0666353753_1_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_733*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_733*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A57EDD0666353753_1_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_734*>* Method_1_6E1EC2DF63D7020F_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_734*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A57EDD0666353753_1_METHOD_1_6E1EC2DF63D7020F_2_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A57EDD0666353753_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_A57EDD0666353753_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A57EDD0666353753_1*))((::PBYTE)hIl2Cpp + CLASS_1_A57EDD0666353753_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A57EDD0666353753_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A57EDD0666353753_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A57EDD0666353753_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A57EDD0666353753_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_A57EDD0666353753_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A57EDD0666353753_1*))((::PBYTE)hIl2Cpp + CLASS_1_A57EDD0666353753_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A57EDD0666353753_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
