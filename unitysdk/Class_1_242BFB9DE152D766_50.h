#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4E17DBE66E488E00;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_242BFB9DE152D766_50_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E36FF20)
#define CLASS_1_242BFB9DE152D766_50_CLONE_OFFSET UNITYSDK_OFFSET(0x1E36F880)
#define CLASS_1_242BFB9DE152D766_50_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E36FB10)
#define CLASS_1_242BFB9DE152D766_50_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E36F970)
#define CLASS_1_242BFB9DE152D766_50_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E36FDE0)
#define CLASS_1_242BFB9DE152D766_50_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E370010)
#define CLASS_1_242BFB9DE152D766_50_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E36FF80)
#define CLASS_1_242BFB9DE152D766_50_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1E36F950)
#define CLASS_1_242BFB9DE152D766_50_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E36F770)
#define CLASS_1_242BFB9DE152D766_50_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1E36F960)
#define CLASS_1_242BFB9DE152D766_50_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E36F7D0)
#define CLASS_1_242BFB9DE152D766_50_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E36FE30)
#define CLASS_1_242BFB9DE152D766_50_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E36FE90)
#define CLASS_1_242BFB9DE152D766_50__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3701A0)
#define CLASS_1_242BFB9DE152D766_50__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E36F7F0)
#define CLASS_1_242BFB9DE152D766_50__CTOR_OFFSET UNITYSDK_OFFSET(0x1E36F7E0)

inline static constexpr unsigned int Class_1_242BFB9DE152D766_50_TypeDefinitionIndex = 31045;

class Class_1_242BFB9DE152D766_50 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_50*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_50*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_242BFB9DE152D766_50_TypeDefinitionIndex)->GetStaticField(0x59470);
	}
	// static const ::System::Int32 FHEGNKDJLFN = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Class_1_4E17DBE66E488E00* GNEMPOKDHAA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_50__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_242BFB9DE152D766_50* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_50*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_50__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_50__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_50*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_50*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_50_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_50_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_242BFB9DE152D766_50* Clone()
	{
		return ((::Class_1_242BFB9DE152D766_50*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_50_CLONE_OFFSET))(this);
	}

	::Class_1_4E17DBE66E488E00* Method_1_24748FC20F375725()
	{
		return ((::Class_1_4E17DBE66E488E00*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_50_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_4E17DBE66E488E00* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4E17DBE66E488E00*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_50_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_50_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_242BFB9DE152D766_50* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_242BFB9DE152D766_50*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_50_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_50_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_50_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_50_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_50_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_242BFB9DE152D766_50* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_50*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_50_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_50_MERGEFROM_1_OFFSET))(this, a1);
	}
};
