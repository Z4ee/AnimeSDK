#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0A99AF1699F7F17E_9;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_242BFB9DE152D766_11_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB6C400)
#define CLASS_1_242BFB9DE152D766_11_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB6BD90)
#define CLASS_1_242BFB9DE152D766_11_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB6BFA0)
#define CLASS_1_242BFB9DE152D766_11_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB6BE30)
#define CLASS_1_242BFB9DE152D766_11_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB6C270)
#define CLASS_1_242BFB9DE152D766_11_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB6C4F0)
#define CLASS_1_242BFB9DE152D766_11_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB6C460)
#define CLASS_1_242BFB9DE152D766_11_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1EB6BE10)
#define CLASS_1_242BFB9DE152D766_11_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1EB6BCD0)
#define CLASS_1_242BFB9DE152D766_11_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1EB6BE20)
#define CLASS_1_242BFB9DE152D766_11_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB6BD00)
#define CLASS_1_242BFB9DE152D766_11_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB6C310)
#define CLASS_1_242BFB9DE152D766_11_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB6C370)
#define CLASS_1_242BFB9DE152D766_11__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB6C6A0)
#define CLASS_1_242BFB9DE152D766_11__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB6BD20)
#define CLASS_1_242BFB9DE152D766_11__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB6BD10)

inline static constexpr unsigned int Class_1_242BFB9DE152D766_11_TypeDefinitionIndex = 32256;

class Class_1_242BFB9DE152D766_11 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_11*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_11*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_242BFB9DE152D766_11_TypeDefinitionIndex)->GetStaticField(0x5F60);
	}
	// static const ::System::Int32 LCOKGIEHFLP = 0xA; // 0x0
	::Class_1_0A99AF1699F7F17E_9* NDNEIFMKELC; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_11__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_242BFB9DE152D766_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_11*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_11__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_11__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_11*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_11*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_11_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_11_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_242BFB9DE152D766_11* Clone()
	{
		return ((::Class_1_242BFB9DE152D766_11*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_11_CLONE_OFFSET))(this);
	}

	::Class_1_0A99AF1699F7F17E_9* Method_1_24748FC20F375725()
	{
		return ((::Class_1_0A99AF1699F7F17E_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_11_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_0A99AF1699F7F17E_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A99AF1699F7F17E_9*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_11_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_11_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_242BFB9DE152D766_11* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_242BFB9DE152D766_11*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_11_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_11_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_11_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_11_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_11_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_242BFB9DE152D766_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_11*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_11_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_11_MERGEFROM_1_OFFSET))(this, a1);
	}
};
