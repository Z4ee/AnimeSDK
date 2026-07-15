#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EBB10EC01CCC4716_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_242BFB9DE152D766_55_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C8F5A80)
#define CLASS_1_242BFB9DE152D766_55_CLONE_OFFSET UNITYSDK_OFFSET(0x1C8F5410)
#define CLASS_1_242BFB9DE152D766_55_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C8F5670)
#define CLASS_1_242BFB9DE152D766_55_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C8F5500)
#define CLASS_1_242BFB9DE152D766_55_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C8F5940)
#define CLASS_1_242BFB9DE152D766_55_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C8F5BF0)
#define CLASS_1_242BFB9DE152D766_55_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C8F5AE0)
#define CLASS_1_242BFB9DE152D766_55_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C8F54E0)
#define CLASS_1_242BFB9DE152D766_55_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C8F5300)
#define CLASS_1_242BFB9DE152D766_55_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C8F54F0)
#define CLASS_1_242BFB9DE152D766_55_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C8F5330)
#define CLASS_1_242BFB9DE152D766_55_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C8F5990)
#define CLASS_1_242BFB9DE152D766_55_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C8F59F0)
#define CLASS_1_242BFB9DE152D766_55__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8F5D80)
#define CLASS_1_242BFB9DE152D766_55__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C8F5350)
#define CLASS_1_242BFB9DE152D766_55__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8F5340)

inline static constexpr unsigned int Class_1_242BFB9DE152D766_55_TypeDefinitionIndex = 30913;

class Class_1_242BFB9DE152D766_55 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_55*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_55*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_242BFB9DE152D766_55_TypeDefinitionIndex)->GetStaticField(0x2FE50);
	}
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	::Class_1_EBB10EC01CCC4716_1* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_55__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_242BFB9DE152D766_55* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_55*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_55__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_55__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_55*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_55*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_55_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_55_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_242BFB9DE152D766_55* Clone()
	{
		return ((::Class_1_242BFB9DE152D766_55*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_55_CLONE_OFFSET))(this);
	}

	::Class_1_EBB10EC01CCC4716_1* Method_1_24748FC20F375725()
	{
		return ((::Class_1_EBB10EC01CCC4716_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_55_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_EBB10EC01CCC4716_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_1*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_55_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_55_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_242BFB9DE152D766_55* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_242BFB9DE152D766_55*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_55_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_55_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_55_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_55_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_55_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_242BFB9DE152D766_55* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_55*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_55_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_55_MERGEFROM_1_OFFSET))(this, a1);
	}
};
