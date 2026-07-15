#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C3162D2F7EA647B9;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_242BFB9DE152D766_65_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C93E120)
#define CLASS_1_242BFB9DE152D766_65_CLONE_OFFSET UNITYSDK_OFFSET(0x1C93DA50)
#define CLASS_1_242BFB9DE152D766_65_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C93DCC0)
#define CLASS_1_242BFB9DE152D766_65_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C93DB20)
#define CLASS_1_242BFB9DE152D766_65_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C93DF90)
#define CLASS_1_242BFB9DE152D766_65_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C93E210)
#define CLASS_1_242BFB9DE152D766_65_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C93E180)
#define CLASS_1_242BFB9DE152D766_65_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C93DB00)
#define CLASS_1_242BFB9DE152D766_65_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C93D960)
#define CLASS_1_242BFB9DE152D766_65_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C93DB10)
#define CLASS_1_242BFB9DE152D766_65_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C93D9C0)
#define CLASS_1_242BFB9DE152D766_65_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C93E030)
#define CLASS_1_242BFB9DE152D766_65_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C93E090)
#define CLASS_1_242BFB9DE152D766_65__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C93E3C0)
#define CLASS_1_242BFB9DE152D766_65__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C93D9E0)
#define CLASS_1_242BFB9DE152D766_65__CTOR_OFFSET UNITYSDK_OFFSET(0x1C93D9D0)

inline static constexpr unsigned int Class_1_242BFB9DE152D766_65_TypeDefinitionIndex = 31259;

class Class_1_242BFB9DE152D766_65 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_65*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_65*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_242BFB9DE152D766_65_TypeDefinitionIndex)->GetStaticField(0x4B2C0);
	}
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	::Class_1_C3162D2F7EA647B9* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_65__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_242BFB9DE152D766_65* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_65*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_65__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_65__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_65*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_65*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_65_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_65_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_242BFB9DE152D766_65* Clone()
	{
		return ((::Class_1_242BFB9DE152D766_65*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_65_CLONE_OFFSET))(this);
	}

	::Class_1_C3162D2F7EA647B9* Method_1_24748FC20F375725()
	{
		return ((::Class_1_C3162D2F7EA647B9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_65_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_C3162D2F7EA647B9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C3162D2F7EA647B9*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_65_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_65_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_242BFB9DE152D766_65* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_242BFB9DE152D766_65*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_65_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_65_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_65_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_65_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_65_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_242BFB9DE152D766_65* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_65*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_65_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_65_MERGEFROM_1_OFFSET))(this, a1);
	}
};
