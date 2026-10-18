#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3E926525914B2E70_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_242BFB9DE152D766_89_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE6B2A0)
#define CLASS_1_242BFB9DE152D766_89_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE6AC80)
#define CLASS_1_242BFB9DE152D766_89_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE6AE90)
#define CLASS_1_242BFB9DE152D766_89_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE6AD20)
#define CLASS_1_242BFB9DE152D766_89_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE6B160)
#define CLASS_1_242BFB9DE152D766_89_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE6B3A0)
#define CLASS_1_242BFB9DE152D766_89_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE6B300)
#define CLASS_1_242BFB9DE152D766_89_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1DE6AD00)
#define CLASS_1_242BFB9DE152D766_89_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1DE6ABC0)
#define CLASS_1_242BFB9DE152D766_89_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1DE6AD10)
#define CLASS_1_242BFB9DE152D766_89_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE6ABF0)
#define CLASS_1_242BFB9DE152D766_89_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE6B1B0)
#define CLASS_1_242BFB9DE152D766_89_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE6B210)
#define CLASS_1_242BFB9DE152D766_89__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE6B570)
#define CLASS_1_242BFB9DE152D766_89__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE6AC10)
#define CLASS_1_242BFB9DE152D766_89__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE6AC00)

inline static constexpr unsigned int Class_1_242BFB9DE152D766_89_TypeDefinitionIndex = 33061;

class Class_1_242BFB9DE152D766_89 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_89*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_89*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_242BFB9DE152D766_89_TypeDefinitionIndex)->GetStaticField(0x1F190);
	}
	// static const ::System::Int32 HDBOFDMMOKM = 0xD; // 0x0
	::Class_1_3E926525914B2E70_2* AJCJMNPJCOJ; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_89__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_242BFB9DE152D766_89* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_89*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_89__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_89__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_89*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_89*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_89_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_89_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_242BFB9DE152D766_89* Clone()
	{
		return ((::Class_1_242BFB9DE152D766_89*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_89_CLONE_OFFSET))(this);
	}

	::Class_1_3E926525914B2E70_2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_3E926525914B2E70_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_89_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_3E926525914B2E70_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3E926525914B2E70_2*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_89_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_89_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_242BFB9DE152D766_89* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_242BFB9DE152D766_89*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_89_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_89_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_89_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_89_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_89_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_242BFB9DE152D766_89* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_89*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_89_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_89_MERGEFROM_1_OFFSET))(this, a1);
	}
};
