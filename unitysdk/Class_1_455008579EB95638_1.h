#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_306;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_455008579EB95638_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF0D500)
#define CLASS_1_455008579EB95638_1_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF0D0B0)
#define CLASS_1_455008579EB95638_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF0D130)
#define CLASS_1_455008579EB95638_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF0D100)
#define CLASS_1_455008579EB95638_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF0D280)
#define CLASS_1_455008579EB95638_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF0D690)
#define CLASS_1_455008579EB95638_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF0D5E0)
#define CLASS_1_455008579EB95638_1_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1DF0D0E0)
#define CLASS_1_455008579EB95638_1_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1DF0CF00)
#define CLASS_1_455008579EB95638_1_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1DF0D0F0)
#define CLASS_1_455008579EB95638_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF0CF30)
#define CLASS_1_455008579EB95638_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF0D3C0)
#define CLASS_1_455008579EB95638_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF0D420)
#define CLASS_1_455008579EB95638_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF0D890)
#define CLASS_1_455008579EB95638_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF0CFC0)
#define CLASS_1_455008579EB95638_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF0CF40)

inline static constexpr unsigned int Class_1_455008579EB95638_1_TypeDefinitionIndex = 27883;

class Class_1_455008579EB95638_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_1*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455008579EB95638_1_TypeDefinitionIndex)->GetStaticField(0x369B0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_AECPGHALGEL()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455008579EB95638_1_TypeDefinitionIndex)->GetStaticField(0x369B8);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_306*>** StaticGet_BBEMPGBKGKC()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_306*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455008579EB95638_1_TypeDefinitionIndex)->GetStaticField(0x369C0);
	}
	// static const ::System::Int32 FALMDJBLKNL = 0xA; // 0x0
	// static const ::System::Int32 JBJPMJNGFMI = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LLBGCFGNIGM; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_306*>* EIIJCHKGEMA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_455008579EB95638_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_1*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_1*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_1_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_455008579EB95638_1* Clone()
	{
		return ((::Class_1_455008579EB95638_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_1_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_1_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_306*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_306*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_1_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_455008579EB95638_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_455008579EB95638_1*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_455008579EB95638_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_1*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
