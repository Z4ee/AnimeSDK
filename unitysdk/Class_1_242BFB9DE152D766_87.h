#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_959;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_242BFB9DE152D766_87_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C9705A0)
#define CLASS_1_242BFB9DE152D766_87_CLONE_OFFSET UNITYSDK_OFFSET(0x1C96FF60)
#define CLASS_1_242BFB9DE152D766_87_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C970180)
#define CLASS_1_242BFB9DE152D766_87_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C970010)
#define CLASS_1_242BFB9DE152D766_87_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C970450)
#define CLASS_1_242BFB9DE152D766_87_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C970690)
#define CLASS_1_242BFB9DE152D766_87_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C970600)
#define CLASS_1_242BFB9DE152D766_87_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C96FFF0)
#define CLASS_1_242BFB9DE152D766_87_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C96FE90)
#define CLASS_1_242BFB9DE152D766_87_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C970000)
#define CLASS_1_242BFB9DE152D766_87_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C96FEC0)
#define CLASS_1_242BFB9DE152D766_87_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C9704B0)
#define CLASS_1_242BFB9DE152D766_87_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C970510)
#define CLASS_1_242BFB9DE152D766_87__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C970810)
#define CLASS_1_242BFB9DE152D766_87__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C96FEE0)
#define CLASS_1_242BFB9DE152D766_87__CTOR_OFFSET UNITYSDK_OFFSET(0x1C96FED0)

inline static constexpr unsigned int Class_1_242BFB9DE152D766_87_TypeDefinitionIndex = 31800;

class Class_1_242BFB9DE152D766_87 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_87*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_87*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_242BFB9DE152D766_87_TypeDefinitionIndex)->GetStaticField(0x2CE30);
	}
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	::Class_1_D17272E82AE804C2_959* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_87__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_242BFB9DE152D766_87* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_87*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_87__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_87__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_87*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_87*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_87_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_87_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_242BFB9DE152D766_87* Clone()
	{
		return ((::Class_1_242BFB9DE152D766_87*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_87_CLONE_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_959* Method_1_24748FC20F375725()
	{
		return ((::Class_1_D17272E82AE804C2_959*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_87_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D17272E82AE804C2_959* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_959*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_87_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_87_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_242BFB9DE152D766_87* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_242BFB9DE152D766_87*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_87_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_87_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_87_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_87_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_87_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_242BFB9DE152D766_87* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_87*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_87_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_87_MERGEFROM_1_OFFSET))(this, a1);
	}
};
