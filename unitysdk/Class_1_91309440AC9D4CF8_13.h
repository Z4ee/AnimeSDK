#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_925;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_91309440AC9D4CF8_13_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CD196E0)
#define CLASS_1_91309440AC9D4CF8_13_CLONE_OFFSET UNITYSDK_OFFSET(0x1CD190A0)
#define CLASS_1_91309440AC9D4CF8_13_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CD192C0)
#define CLASS_1_91309440AC9D4CF8_13_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CD19150)
#define CLASS_1_91309440AC9D4CF8_13_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CD19590)
#define CLASS_1_91309440AC9D4CF8_13_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CD197E0)
#define CLASS_1_91309440AC9D4CF8_13_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CD19740)
#define CLASS_1_91309440AC9D4CF8_13_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1CD19130)
#define CLASS_1_91309440AC9D4CF8_13_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CD18FD0)
#define CLASS_1_91309440AC9D4CF8_13_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1CD19140)
#define CLASS_1_91309440AC9D4CF8_13_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CD19000)
#define CLASS_1_91309440AC9D4CF8_13_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CD195F0)
#define CLASS_1_91309440AC9D4CF8_13_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CD19650)
#define CLASS_1_91309440AC9D4CF8_13__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD19960)
#define CLASS_1_91309440AC9D4CF8_13__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CD19020)
#define CLASS_1_91309440AC9D4CF8_13__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD19010)

inline static constexpr unsigned int Class_1_91309440AC9D4CF8_13_TypeDefinitionIndex = 31477;

class Class_1_91309440AC9D4CF8_13 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_91309440AC9D4CF8_13*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_91309440AC9D4CF8_13*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_91309440AC9D4CF8_13_TypeDefinitionIndex)->GetStaticField(0x3DB30);
	}
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	::Class_1_D17272E82AE804C2_925* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_13__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_91309440AC9D4CF8_13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_91309440AC9D4CF8_13*))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_13__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_13__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_91309440AC9D4CF8_13*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_91309440AC9D4CF8_13*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_13_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_13_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_91309440AC9D4CF8_13* Clone()
	{
		return ((::Class_1_91309440AC9D4CF8_13*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_13_CLONE_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_925* Method_1_24748FC20F375725()
	{
		return ((::Class_1_D17272E82AE804C2_925*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_13_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D17272E82AE804C2_925* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_925*))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_13_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_13_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_91309440AC9D4CF8_13* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_91309440AC9D4CF8_13*))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_13_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_13_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_13_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_13_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_13_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_91309440AC9D4CF8_13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_91309440AC9D4CF8_13*))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_13_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_13_MERGEFROM_1_OFFSET))(this, a1);
	}
};
