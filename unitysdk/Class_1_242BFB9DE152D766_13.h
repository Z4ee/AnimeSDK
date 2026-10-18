#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0A99AF1699F7F17E_12;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_242BFB9DE152D766_13_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB202B0)
#define CLASS_1_242BFB9DE152D766_13_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB1FC40)
#define CLASS_1_242BFB9DE152D766_13_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB1FE50)
#define CLASS_1_242BFB9DE152D766_13_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB1FCE0)
#define CLASS_1_242BFB9DE152D766_13_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB20120)
#define CLASS_1_242BFB9DE152D766_13_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB203A0)
#define CLASS_1_242BFB9DE152D766_13_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB20310)
#define CLASS_1_242BFB9DE152D766_13_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1EB1FCC0)
#define CLASS_1_242BFB9DE152D766_13_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1EB1FB80)
#define CLASS_1_242BFB9DE152D766_13_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1EB1FCD0)
#define CLASS_1_242BFB9DE152D766_13_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB1FBB0)
#define CLASS_1_242BFB9DE152D766_13_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB201C0)
#define CLASS_1_242BFB9DE152D766_13_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB20220)
#define CLASS_1_242BFB9DE152D766_13__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB20550)
#define CLASS_1_242BFB9DE152D766_13__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB1FBD0)
#define CLASS_1_242BFB9DE152D766_13__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB1FBC0)

inline static constexpr unsigned int Class_1_242BFB9DE152D766_13_TypeDefinitionIndex = 32908;

class Class_1_242BFB9DE152D766_13 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_13*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_13*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_242BFB9DE152D766_13_TypeDefinitionIndex)->GetStaticField(0x60660);
	}
	// static const ::System::Int32 LCOKGIEHFLP = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Class_1_0A99AF1699F7F17E_12* NDNEIFMKELC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_13__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_242BFB9DE152D766_13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_13*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_13__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_13__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_13*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_13*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_13_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_13_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_242BFB9DE152D766_13* Clone()
	{
		return ((::Class_1_242BFB9DE152D766_13*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_13_CLONE_OFFSET))(this);
	}

	::Class_1_0A99AF1699F7F17E_12* Method_1_24748FC20F375725()
	{
		return ((::Class_1_0A99AF1699F7F17E_12*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_13_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_0A99AF1699F7F17E_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A99AF1699F7F17E_12*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_13_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_13_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_242BFB9DE152D766_13* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_242BFB9DE152D766_13*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_13_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_13_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_13_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_13_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_13_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_242BFB9DE152D766_13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_13*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_13_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_13_MERGEFROM_1_OFFSET))(this, a1);
	}
};
