#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_255;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_455008579EB95638_23_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A0445B0)
#define CLASS_1_455008579EB95638_23_CLONE_OFFSET UNITYSDK_OFFSET(0x1A044160)
#define CLASS_1_455008579EB95638_23_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A0441E0)
#define CLASS_1_455008579EB95638_23_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A0441B0)
#define CLASS_1_455008579EB95638_23_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A0442C0)
#define CLASS_1_455008579EB95638_23_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A044740)
#define CLASS_1_455008579EB95638_23_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A044690)
#define CLASS_1_455008579EB95638_23_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1A0441A0)
#define CLASS_1_455008579EB95638_23_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A043FC0)
#define CLASS_1_455008579EB95638_23_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1A044190)
#define CLASS_1_455008579EB95638_23_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A043FF0)
#define CLASS_1_455008579EB95638_23_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A044470)
#define CLASS_1_455008579EB95638_23_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A0444D0)
#define CLASS_1_455008579EB95638_23__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A044940)
#define CLASS_1_455008579EB95638_23__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A044070)
#define CLASS_1_455008579EB95638_23__CTOR_OFFSET UNITYSDK_OFFSET(0x1A044000)

inline static constexpr unsigned int Class_1_455008579EB95638_23_TypeDefinitionIndex = 26241;

class Class_1_455008579EB95638_23 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_255*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_255*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455008579EB95638_23_TypeDefinitionIndex)->GetStaticField(0x2D9B0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_23*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_23*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455008579EB95638_23_TypeDefinitionIndex)->GetStaticField(0x2D9B8);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455008579EB95638_23_TypeDefinitionIndex)->GetStaticField(0x2D9C0);
	}
	// static const ::System::Int32 Field_1_3 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x7; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_255*>* Field_1_5; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_6; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_23__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_455008579EB95638_23* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_23*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_23__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_23__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_23*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_23*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_23_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_23_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_455008579EB95638_23* Clone()
	{
		return ((::Class_1_455008579EB95638_23*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_23_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_255*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_255*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_23_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_23_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_23_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_455008579EB95638_23* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_455008579EB95638_23*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_23_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_23_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_23_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_23_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_23_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_455008579EB95638_23* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_23*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_23_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_23_MERGEFROM_1_OFFSET))(this, a1);
	}
};
