#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A57EDD0666353753;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_242BFB9DE152D766_104_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CD3F920)
#define CLASS_1_242BFB9DE152D766_104_CLONE_OFFSET UNITYSDK_OFFSET(0x1CD3F2A0)
#define CLASS_1_242BFB9DE152D766_104_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CD3F510)
#define CLASS_1_242BFB9DE152D766_104_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CD3F370)
#define CLASS_1_242BFB9DE152D766_104_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CD3F7E0)
#define CLASS_1_242BFB9DE152D766_104_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CD3FA50)
#define CLASS_1_242BFB9DE152D766_104_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CD3F980)
#define CLASS_1_242BFB9DE152D766_104_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1CD3F350)
#define CLASS_1_242BFB9DE152D766_104_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1CD3F1B0)
#define CLASS_1_242BFB9DE152D766_104_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1CD3F360)
#define CLASS_1_242BFB9DE152D766_104_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CD3F210)
#define CLASS_1_242BFB9DE152D766_104_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CD3F830)
#define CLASS_1_242BFB9DE152D766_104_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CD3F890)
#define CLASS_1_242BFB9DE152D766_104__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD3FC40)
#define CLASS_1_242BFB9DE152D766_104__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CD3F230)
#define CLASS_1_242BFB9DE152D766_104__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD3F220)

inline static constexpr unsigned int Class_1_242BFB9DE152D766_104_TypeDefinitionIndex = 33470;

class Class_1_242BFB9DE152D766_104 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_104*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_104*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_242BFB9DE152D766_104_TypeDefinitionIndex)->GetStaticField(0x25440);
	}
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	::Class_1_A57EDD0666353753* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_104__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_242BFB9DE152D766_104* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_104*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_104__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_104__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_104*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_104*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_104_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_104_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_242BFB9DE152D766_104* Clone()
	{
		return ((::Class_1_242BFB9DE152D766_104*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_104_CLONE_OFFSET))(this);
	}

	::Class_1_A57EDD0666353753* Method_1_24748FC20F375725()
	{
		return ((::Class_1_A57EDD0666353753*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_104_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_A57EDD0666353753* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A57EDD0666353753*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_104_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_104_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_242BFB9DE152D766_104* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_242BFB9DE152D766_104*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_104_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_104_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_104_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_104_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_104_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_242BFB9DE152D766_104* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_104*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_104_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_104_MERGEFROM_1_OFFSET))(this, a1);
	}
};
