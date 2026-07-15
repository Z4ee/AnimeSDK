#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_808;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_455008579EB95638_8_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CC616D0)
#define CLASS_1_455008579EB95638_8_CLONE_OFFSET UNITYSDK_OFFSET(0x1CC61220)
#define CLASS_1_455008579EB95638_8_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CC612F0)
#define CLASS_1_455008579EB95638_8_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CC61290)
#define CLASS_1_455008579EB95638_8_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CC61440)
#define CLASS_1_455008579EB95638_8_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CC61860)
#define CLASS_1_455008579EB95638_8_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CC617B0)
#define CLASS_1_455008579EB95638_8_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1CC60FF0)
#define CLASS_1_455008579EB95638_8_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1CC61280)
#define CLASS_1_455008579EB95638_8_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1CC61270)
#define CLASS_1_455008579EB95638_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CC61050)
#define CLASS_1_455008579EB95638_8_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CC61590)
#define CLASS_1_455008579EB95638_8_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CC615F0)
#define CLASS_1_455008579EB95638_8__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC61A80)
#define CLASS_1_455008579EB95638_8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CC610F0)
#define CLASS_1_455008579EB95638_8__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC61060)

inline static constexpr unsigned int Class_1_455008579EB95638_8_TypeDefinitionIndex = 30396;

class Class_1_455008579EB95638_8 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_808*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_808*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455008579EB95638_8_TypeDefinitionIndex)->GetStaticField(0x3A5F0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455008579EB95638_8_TypeDefinitionIndex)->GetStaticField(0x3A5F8);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_8*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455008579EB95638_8_TypeDefinitionIndex)->GetStaticField(0x3A600);
	}
	// static const ::System::Int32 Field_1_3 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x1; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_5; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_6; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_808*>* Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_8__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_455008579EB95638_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_8*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_8__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_8__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_8*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_8*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_8_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_455008579EB95638_8* Clone()
	{
		return ((::Class_1_455008579EB95638_8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_8_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_808*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_808*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_8_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_8_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_8_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_455008579EB95638_8* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_455008579EB95638_8*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_8_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_8_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_8_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_8_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_8_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_455008579EB95638_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_8*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_8_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_8_MERGEFROM_1_OFFSET))(this, a1);
	}
};
