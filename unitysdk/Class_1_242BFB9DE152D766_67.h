#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_242BFB9DE152D766_65;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_242BFB9DE152D766_67_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CBB73D0)
#define CLASS_1_242BFB9DE152D766_67_CLONE_OFFSET UNITYSDK_OFFSET(0x1CBB6C50)
#define CLASS_1_242BFB9DE152D766_67_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CBB6F40)
#define CLASS_1_242BFB9DE152D766_67_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CBB6DD0)
#define CLASS_1_242BFB9DE152D766_67_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CBB7210)
#define CLASS_1_242BFB9DE152D766_67_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CBB7540)
#define CLASS_1_242BFB9DE152D766_67_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CBB7430)
#define CLASS_1_242BFB9DE152D766_67_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1CBB6DB0)
#define CLASS_1_242BFB9DE152D766_67_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CBB6AB0)
#define CLASS_1_242BFB9DE152D766_67_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1CBB6DC0)
#define CLASS_1_242BFB9DE152D766_67_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CBB6AE0)
#define CLASS_1_242BFB9DE152D766_67_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CBB72E0)
#define CLASS_1_242BFB9DE152D766_67_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CBB7340)
#define CLASS_1_242BFB9DE152D766_67__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CBB76D0)
#define CLASS_1_242BFB9DE152D766_67__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CBB6B00)
#define CLASS_1_242BFB9DE152D766_67__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBB6AF0)

inline static constexpr unsigned int Class_1_242BFB9DE152D766_67_TypeDefinitionIndex = 31329;

class Class_1_242BFB9DE152D766_67 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_67*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_67*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_242BFB9DE152D766_67_TypeDefinitionIndex)->GetStaticField(0x53A50);
	}
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_2; // 0x10
	::Class_1_242BFB9DE152D766_65* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_67__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_242BFB9DE152D766_67* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_67*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_67__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_67__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_67*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_67*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_67_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_67_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_242BFB9DE152D766_67* Clone()
	{
		return ((::Class_1_242BFB9DE152D766_67*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_67_CLONE_OFFSET))(this);
	}

	::Class_1_242BFB9DE152D766_65* Method_1_24748FC20F375725()
	{
		return ((::Class_1_242BFB9DE152D766_65*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_67_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_242BFB9DE152D766_65* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_65*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_67_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_67_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_242BFB9DE152D766_67* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_242BFB9DE152D766_67*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_67_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_67_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_67_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_67_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_67_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_242BFB9DE152D766_67* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_67*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_67_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_67_MERGEFROM_1_OFFSET))(this, a1);
	}
};
