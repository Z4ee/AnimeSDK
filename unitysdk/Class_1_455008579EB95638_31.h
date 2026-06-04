#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_298;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_455008579EB95638_31_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A96AA80)
#define CLASS_1_455008579EB95638_31_CLONE_OFFSET UNITYSDK_OFFSET(0x1A96A5E0)
#define CLASS_1_455008579EB95638_31_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A96A6B0)
#define CLASS_1_455008579EB95638_31_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A96A650)
#define CLASS_1_455008579EB95638_31_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A96A790)
#define CLASS_1_455008579EB95638_31_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A96AC10)
#define CLASS_1_455008579EB95638_31_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A96AB60)
#define CLASS_1_455008579EB95638_31_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A96A3C0)
#define CLASS_1_455008579EB95638_31_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1A96A640)
#define CLASS_1_455008579EB95638_31_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1A96A630)
#define CLASS_1_455008579EB95638_31_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A96A420)
#define CLASS_1_455008579EB95638_31_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A96A940)
#define CLASS_1_455008579EB95638_31_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A96A9A0)
#define CLASS_1_455008579EB95638_31__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A96AE30)
#define CLASS_1_455008579EB95638_31__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A96A4C0)
#define CLASS_1_455008579EB95638_31__CTOR_OFFSET UNITYSDK_OFFSET(0x1A96A430)

inline static constexpr unsigned int Class_1_455008579EB95638_31_TypeDefinitionIndex = 26646;

class Class_1_455008579EB95638_31 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_31*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_31*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455008579EB95638_31_TypeDefinitionIndex)->GetStaticField(0x64450);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_298*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D17272E82AE804C2_298*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455008579EB95638_31_TypeDefinitionIndex)->GetStaticField(0x64458);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455008579EB95638_31_TypeDefinitionIndex)->GetStaticField(0x64460);
	}
	// static const ::System::Int32 Field_1_3 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_6; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_298*>* Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_31__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_455008579EB95638_31* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_31*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_31__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_31__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_31*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_31*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_31_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_31_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_455008579EB95638_31* Clone()
	{
		return ((::Class_1_455008579EB95638_31*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_31_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_298*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_298*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_31_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_31_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_31_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_455008579EB95638_31* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_455008579EB95638_31*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_31_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_31_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_31_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_31_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_31_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_455008579EB95638_31* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_31*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_31_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_31_MERGEFROM_1_OFFSET))(this, a1);
	}
};
