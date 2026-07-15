#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_44;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_242BFB9DE152D766_32_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C4141F0)
#define CLASS_1_242BFB9DE152D766_32_CLONE_OFFSET UNITYSDK_OFFSET(0x1C413B20)
#define CLASS_1_242BFB9DE152D766_32_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C413DD0)
#define CLASS_1_242BFB9DE152D766_32_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C413C30)
#define CLASS_1_242BFB9DE152D766_32_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C4140A0)
#define CLASS_1_242BFB9DE152D766_32_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C414310)
#define CLASS_1_242BFB9DE152D766_32_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C414250)
#define CLASS_1_242BFB9DE152D766_32_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C413C10)
#define CLASS_1_242BFB9DE152D766_32_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C413A00)
#define CLASS_1_242BFB9DE152D766_32_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C413C20)
#define CLASS_1_242BFB9DE152D766_32_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C413A60)
#define CLASS_1_242BFB9DE152D766_32_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C414100)
#define CLASS_1_242BFB9DE152D766_32_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C414160)
#define CLASS_1_242BFB9DE152D766_32__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4144A0)
#define CLASS_1_242BFB9DE152D766_32__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C413A80)
#define CLASS_1_242BFB9DE152D766_32__CTOR_OFFSET UNITYSDK_OFFSET(0x1C413A70)

inline static constexpr unsigned int Class_1_242BFB9DE152D766_32_TypeDefinitionIndex = 28700;

class Class_1_242BFB9DE152D766_32 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_32*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_32*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_242BFB9DE152D766_32_TypeDefinitionIndex)->GetStaticField(0x33730);
	}
	// static const ::System::Int32 Field_1_1 = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_2; // 0x10
	::Class_1_1CBA230307F9C289_44* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_32__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_242BFB9DE152D766_32* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_32*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_32__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_32__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_32*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_32*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_32_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_32_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_242BFB9DE152D766_32* Clone()
	{
		return ((::Class_1_242BFB9DE152D766_32*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_32_CLONE_OFFSET))(this);
	}

	::Class_1_1CBA230307F9C289_44* Method_1_24748FC20F375725()
	{
		return ((::Class_1_1CBA230307F9C289_44*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_32_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_1CBA230307F9C289_44* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_44*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_32_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_32_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_242BFB9DE152D766_32* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_242BFB9DE152D766_32*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_32_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_32_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_32_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_32_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_32_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_242BFB9DE152D766_32* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_32*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_32_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_32_MERGEFROM_1_OFFSET))(this, a1);
	}
};
