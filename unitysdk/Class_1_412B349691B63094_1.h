#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7FF19F6206AF6DD7_6;
class Class_1_D17272E82AE804C2_85;
class Class_1_DCE302F7FD05DE84;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_412B349691B63094_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x196C9E00)
#define CLASS_1_412B349691B63094_1_CLONE_OFFSET UNITYSDK_OFFSET(0x196C9760)
#define CLASS_1_412B349691B63094_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x196C9800)
#define CLASS_1_412B349691B63094_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x196C97D0)
#define CLASS_1_412B349691B63094_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x196C9940)
#define CLASS_1_412B349691B63094_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x196CA0B0)
#define CLASS_1_412B349691B63094_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x196C9F40)
#define CLASS_1_412B349691B63094_1_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x196C97A0)
#define CLASS_1_412B349691B63094_1_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x196C94E0)
#define CLASS_1_412B349691B63094_1_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x196C97B0)
#define CLASS_1_412B349691B63094_1_METHOD_1_6E1EC2DF63D7020F_2_OFFSET UNITYSDK_OFFSET(0x196C97C0)
#define CLASS_1_412B349691B63094_1_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x196C9790)
#define CLASS_1_412B349691B63094_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x196C9510)
#define CLASS_1_412B349691B63094_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x196C9C50)
#define CLASS_1_412B349691B63094_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x196C9CB0)
#define CLASS_1_412B349691B63094_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x196CA270)
#define CLASS_1_412B349691B63094_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x196C95E0)
#define CLASS_1_412B349691B63094_1__CTOR_OFFSET UNITYSDK_OFFSET(0x196C9520)

inline static constexpr unsigned int Class_1_412B349691B63094_1_TypeDefinitionIndex = 24860;

class Class_1_412B349691B63094_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_7FF19F6206AF6DD7_6*>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_7FF19F6206AF6DD7_6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_412B349691B63094_1_TypeDefinitionIndex)->GetStaticField(0x4A620);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_412B349691B63094_1*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_412B349691B63094_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_412B349691B63094_1_TypeDefinitionIndex)->GetStaticField(0x4A628);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_412B349691B63094_1_TypeDefinitionIndex)->GetStaticField(0x4A630);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_85*>** StaticGet_Field_1_9()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_85*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_412B349691B63094_1_TypeDefinitionIndex)->GetStaticField(0x4A638);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_DCE302F7FD05DE84*>** StaticGet_Field_1_12()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_DCE302F7FD05DE84*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_412B349691B63094_1_TypeDefinitionIndex)->GetStaticField(0x4A640);
	}
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_11 = 0xF; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7FF19F6206AF6DD7_6*>* Field_1_4; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_7; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_85*>* Field_1_10; // 0x28
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_DCE302F7FD05DE84*>* Field_1_13; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_412B349691B63094_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_412B349691B63094_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_412B349691B63094_1*))((::PBYTE)hIl2Cpp + CLASS_1_412B349691B63094_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_412B349691B63094_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_412B349691B63094_1*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_412B349691B63094_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_412B349691B63094_1_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_412B349691B63094_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_412B349691B63094_1* Clone()
	{
		return ((::Class_1_412B349691B63094_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_412B349691B63094_1_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7FF19F6206AF6DD7_6*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7FF19F6206AF6DD7_6*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_412B349691B63094_1_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_412B349691B63094_1_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_85*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_85*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_412B349691B63094_1_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_DCE302F7FD05DE84*>* Method_1_6E1EC2DF63D7020F_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_DCE302F7FD05DE84*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_412B349691B63094_1_METHOD_1_6E1EC2DF63D7020F_2_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_412B349691B63094_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_412B349691B63094_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_412B349691B63094_1*))((::PBYTE)hIl2Cpp + CLASS_1_412B349691B63094_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_412B349691B63094_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_412B349691B63094_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_412B349691B63094_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_412B349691B63094_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_412B349691B63094_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_412B349691B63094_1*))((::PBYTE)hIl2Cpp + CLASS_1_412B349691B63094_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_412B349691B63094_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
