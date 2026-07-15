#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_584;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_242BFB9DE152D766_33_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C95A660)
#define CLASS_1_242BFB9DE152D766_33_CLONE_OFFSET UNITYSDK_OFFSET(0x1C95A020)
#define CLASS_1_242BFB9DE152D766_33_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C95A240)
#define CLASS_1_242BFB9DE152D766_33_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C95A0D0)
#define CLASS_1_242BFB9DE152D766_33_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C95A510)
#define CLASS_1_242BFB9DE152D766_33_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C95A750)
#define CLASS_1_242BFB9DE152D766_33_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C95A6C0)
#define CLASS_1_242BFB9DE152D766_33_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C95A0B0)
#define CLASS_1_242BFB9DE152D766_33_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C959F50)
#define CLASS_1_242BFB9DE152D766_33_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C95A0C0)
#define CLASS_1_242BFB9DE152D766_33_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C959F80)
#define CLASS_1_242BFB9DE152D766_33_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C95A570)
#define CLASS_1_242BFB9DE152D766_33_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C95A5D0)
#define CLASS_1_242BFB9DE152D766_33__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C95A8D0)
#define CLASS_1_242BFB9DE152D766_33__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C959FA0)
#define CLASS_1_242BFB9DE152D766_33__CTOR_OFFSET UNITYSDK_OFFSET(0x1C959F90)

inline static constexpr unsigned int Class_1_242BFB9DE152D766_33_TypeDefinitionIndex = 28942;

class Class_1_242BFB9DE152D766_33 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_33*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_33*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_242BFB9DE152D766_33_TypeDefinitionIndex)->GetStaticField(0x2BA90);
	}
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	::Class_1_D17272E82AE804C2_584* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_33__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_242BFB9DE152D766_33* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_33*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_33__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_33__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_33*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_33*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_33_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_33_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_242BFB9DE152D766_33* Clone()
	{
		return ((::Class_1_242BFB9DE152D766_33*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_33_CLONE_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_584* Method_1_24748FC20F375725()
	{
		return ((::Class_1_D17272E82AE804C2_584*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_33_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D17272E82AE804C2_584* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_584*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_33_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_33_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_242BFB9DE152D766_33* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_242BFB9DE152D766_33*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_33_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_33_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_33_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_33_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_33_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_242BFB9DE152D766_33* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_33*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_33_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_33_MERGEFROM_1_OFFSET))(this, a1);
	}
};
