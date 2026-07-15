#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_1139;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_455008579EB95638_12_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CEC1C40)
#define CLASS_1_455008579EB95638_12_CLONE_OFFSET UNITYSDK_OFFSET(0x1CEC17F0)
#define CLASS_1_455008579EB95638_12_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CEC1870)
#define CLASS_1_455008579EB95638_12_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CEC1840)
#define CLASS_1_455008579EB95638_12_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CEC19C0)
#define CLASS_1_455008579EB95638_12_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CEC1DD0)
#define CLASS_1_455008579EB95638_12_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CEC1D20)
#define CLASS_1_455008579EB95638_12_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1CEC1820)
#define CLASS_1_455008579EB95638_12_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CEC1640)
#define CLASS_1_455008579EB95638_12_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1CEC1830)
#define CLASS_1_455008579EB95638_12_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CEC1670)
#define CLASS_1_455008579EB95638_12_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CEC1B00)
#define CLASS_1_455008579EB95638_12_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CEC1B60)
#define CLASS_1_455008579EB95638_12__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEC1FD0)
#define CLASS_1_455008579EB95638_12__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CEC1700)
#define CLASS_1_455008579EB95638_12__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEC1680)

inline static constexpr unsigned int Class_1_455008579EB95638_12_TypeDefinitionIndex = 33275;

class Class_1_455008579EB95638_12 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455008579EB95638_12_TypeDefinitionIndex)->GetStaticField(0x43B10);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_1139*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_1139*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455008579EB95638_12_TypeDefinitionIndex)->GetStaticField(0x43B18);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_12*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_12*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455008579EB95638_12_TypeDefinitionIndex)->GetStaticField(0x43B20);
	}
	// static const ::System::Int32 Field_1_3 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xE; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_1139*>* Field_1_5; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_6; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_12__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_455008579EB95638_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_12*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_12__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_12__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_12*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_12*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_12_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_12_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_455008579EB95638_12* Clone()
	{
		return ((::Class_1_455008579EB95638_12*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_12_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_12_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_1139*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_1139*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_12_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_12_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_455008579EB95638_12* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_455008579EB95638_12*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_12_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_12_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_12_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_12_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_12_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_455008579EB95638_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_12*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_12_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_12_MERGEFROM_1_OFFSET))(this, a1);
	}
};
