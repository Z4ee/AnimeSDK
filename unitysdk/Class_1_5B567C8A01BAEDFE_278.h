#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_278_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB909A0)
#define CLASS_1_5B567C8A01BAEDFE_278_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB90690)
#define CLASS_1_5B567C8A01BAEDFE_278_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB907A0)
#define CLASS_1_5B567C8A01BAEDFE_278_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB906D0)
#define CLASS_1_5B567C8A01BAEDFE_278_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB90900)
#define CLASS_1_5B567C8A01BAEDFE_278_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB909F0)
#define CLASS_1_5B567C8A01BAEDFE_278_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB909C0)
#define CLASS_1_5B567C8A01BAEDFE_278_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1EB90610)
#define CLASS_1_5B567C8A01BAEDFE_278_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB90640)
#define CLASS_1_5B567C8A01BAEDFE_278_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB90930)
#define CLASS_1_5B567C8A01BAEDFE_278_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB90990)
#define CLASS_1_5B567C8A01BAEDFE_278__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB90A40)
#define CLASS_1_5B567C8A01BAEDFE_278__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB90660)
#define CLASS_1_5B567C8A01BAEDFE_278__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB90650)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_278_TypeDefinitionIndex = 31780;

class Class_1_5B567C8A01BAEDFE_278 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_278*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_278*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_278_TypeDefinitionIndex)->GetStaticField(0x19500);
	}
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_278__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_278* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_278*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_278__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_278__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_278*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_278*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_278_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_278_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_278* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_278*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_278_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_278_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_278* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_278*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_278_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_278_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_278_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_278_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_278_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_278* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_278*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_278_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_278_MERGEFROM_1_OFFSET))(this, a1);
	}
};
