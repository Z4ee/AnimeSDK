#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_181_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DB4A030)
#define CLASS_1_5B567C8A01BAEDFE_181_CLONE_OFFSET UNITYSDK_OFFSET(0x1DB49D20)
#define CLASS_1_5B567C8A01BAEDFE_181_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DB49E30)
#define CLASS_1_5B567C8A01BAEDFE_181_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DB49D60)
#define CLASS_1_5B567C8A01BAEDFE_181_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DB49F90)
#define CLASS_1_5B567C8A01BAEDFE_181_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DB4A080)
#define CLASS_1_5B567C8A01BAEDFE_181_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DB4A050)
#define CLASS_1_5B567C8A01BAEDFE_181_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1DB49CA0)
#define CLASS_1_5B567C8A01BAEDFE_181_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DB49CD0)
#define CLASS_1_5B567C8A01BAEDFE_181_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DB49FC0)
#define CLASS_1_5B567C8A01BAEDFE_181_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DB4A020)
#define CLASS_1_5B567C8A01BAEDFE_181__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DB4A0D0)
#define CLASS_1_5B567C8A01BAEDFE_181__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DB49CF0)
#define CLASS_1_5B567C8A01BAEDFE_181__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB49CE0)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_181_TypeDefinitionIndex = 29718;

class Class_1_5B567C8A01BAEDFE_181 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_181*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_181*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_181_TypeDefinitionIndex)->GetStaticField(0x36540);
	}
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_181__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_181* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_181*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_181__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_181__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_181*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_181*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_181_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_181_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_181* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_181*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_181_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_181_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_181* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_181*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_181_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_181_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_181_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_181_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_181_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_181* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_181*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_181_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_181_MERGEFROM_1_OFFSET))(this, a1);
	}
};
