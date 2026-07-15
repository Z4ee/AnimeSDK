#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D818CA99906737D6;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_242BFB9DE152D766_90_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CF58AE0)
#define CLASS_1_242BFB9DE152D766_90_CLONE_OFFSET UNITYSDK_OFFSET(0x1CF584C0)
#define CLASS_1_242BFB9DE152D766_90_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CF586D0)
#define CLASS_1_242BFB9DE152D766_90_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CF58560)
#define CLASS_1_242BFB9DE152D766_90_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CF589A0)
#define CLASS_1_242BFB9DE152D766_90_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CF58BB0)
#define CLASS_1_242BFB9DE152D766_90_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CF58B40)
#define CLASS_1_242BFB9DE152D766_90_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1CF58540)
#define CLASS_1_242BFB9DE152D766_90_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CF58400)
#define CLASS_1_242BFB9DE152D766_90_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1CF58550)
#define CLASS_1_242BFB9DE152D766_90_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CF58430)
#define CLASS_1_242BFB9DE152D766_90_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CF589F0)
#define CLASS_1_242BFB9DE152D766_90_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CF58A50)
#define CLASS_1_242BFB9DE152D766_90__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF58D30)
#define CLASS_1_242BFB9DE152D766_90__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CF58450)
#define CLASS_1_242BFB9DE152D766_90__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF58440)

inline static constexpr unsigned int Class_1_242BFB9DE152D766_90_TypeDefinitionIndex = 32204;

class Class_1_242BFB9DE152D766_90 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_90*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_90*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_242BFB9DE152D766_90_TypeDefinitionIndex)->GetStaticField(0x31D60);
	}
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	::Class_1_D818CA99906737D6* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_90__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_242BFB9DE152D766_90* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_90*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_90__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_90__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_90*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_90*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_90_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_90_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_242BFB9DE152D766_90* Clone()
	{
		return ((::Class_1_242BFB9DE152D766_90*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_90_CLONE_OFFSET))(this);
	}

	::Class_1_D818CA99906737D6* Method_1_24748FC20F375725()
	{
		return ((::Class_1_D818CA99906737D6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_90_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D818CA99906737D6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D818CA99906737D6*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_90_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_90_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_242BFB9DE152D766_90* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_242BFB9DE152D766_90*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_90_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_90_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_90_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_90_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_90_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_242BFB9DE152D766_90* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_90*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_90_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_90_MERGEFROM_1_OFFSET))(this, a1);
	}
};
