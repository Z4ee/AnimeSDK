#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CE9B29BCEEDBFC4A;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_242BFB9DE152D766_101_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C8B5F80)
#define CLASS_1_242BFB9DE152D766_101_CLONE_OFFSET UNITYSDK_OFFSET(0x1C8B58E0)
#define CLASS_1_242BFB9DE152D766_101_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C8B5B70)
#define CLASS_1_242BFB9DE152D766_101_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C8B59D0)
#define CLASS_1_242BFB9DE152D766_101_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C8B5E40)
#define CLASS_1_242BFB9DE152D766_101_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C8B6070)
#define CLASS_1_242BFB9DE152D766_101_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C8B5FE0)
#define CLASS_1_242BFB9DE152D766_101_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C8B59B0)
#define CLASS_1_242BFB9DE152D766_101_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C8B57D0)
#define CLASS_1_242BFB9DE152D766_101_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C8B59C0)
#define CLASS_1_242BFB9DE152D766_101_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C8B5830)
#define CLASS_1_242BFB9DE152D766_101_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C8B5E90)
#define CLASS_1_242BFB9DE152D766_101_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C8B5EF0)
#define CLASS_1_242BFB9DE152D766_101__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8B6200)
#define CLASS_1_242BFB9DE152D766_101__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C8B5850)
#define CLASS_1_242BFB9DE152D766_101__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8B5840)

inline static constexpr unsigned int Class_1_242BFB9DE152D766_101_TypeDefinitionIndex = 33343;

class Class_1_242BFB9DE152D766_101 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_101*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_101*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_242BFB9DE152D766_101_TypeDefinitionIndex)->GetStaticField(0x2B000);
	}
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	::Class_1_CE9B29BCEEDBFC4A* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_101__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_242BFB9DE152D766_101* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_101*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_101__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_101__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_101*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_101*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_101_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_101_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_242BFB9DE152D766_101* Clone()
	{
		return ((::Class_1_242BFB9DE152D766_101*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_101_CLONE_OFFSET))(this);
	}

	::Class_1_CE9B29BCEEDBFC4A* Method_1_24748FC20F375725()
	{
		return ((::Class_1_CE9B29BCEEDBFC4A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_101_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_CE9B29BCEEDBFC4A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CE9B29BCEEDBFC4A*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_101_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_101_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_242BFB9DE152D766_101* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_242BFB9DE152D766_101*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_101_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_101_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_101_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_101_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_101_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_242BFB9DE152D766_101* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_101*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_101_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_101_MERGEFROM_1_OFFSET))(this, a1);
	}
};
