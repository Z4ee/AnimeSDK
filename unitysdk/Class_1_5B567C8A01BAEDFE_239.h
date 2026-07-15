#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_239_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CADAC70)
#define CLASS_1_5B567C8A01BAEDFE_239_CLONE_OFFSET UNITYSDK_OFFSET(0x1CADA910)
#define CLASS_1_5B567C8A01BAEDFE_239_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CADAA70)
#define CLASS_1_5B567C8A01BAEDFE_239_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CADA980)
#define CLASS_1_5B567C8A01BAEDFE_239_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CADABD0)
#define CLASS_1_5B567C8A01BAEDFE_239_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CADACC0)
#define CLASS_1_5B567C8A01BAEDFE_239_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CADAC90)
#define CLASS_1_5B567C8A01BAEDFE_239_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1CADA860)
#define CLASS_1_5B567C8A01BAEDFE_239_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CADA8C0)
#define CLASS_1_5B567C8A01BAEDFE_239_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CADAC00)
#define CLASS_1_5B567C8A01BAEDFE_239_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CADAC60)
#define CLASS_1_5B567C8A01BAEDFE_239__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CADAD10)
#define CLASS_1_5B567C8A01BAEDFE_239__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CADA8E0)
#define CLASS_1_5B567C8A01BAEDFE_239__CTOR_OFFSET UNITYSDK_OFFSET(0x1CADA8D0)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_239_TypeDefinitionIndex = 30265;

class Class_1_5B567C8A01BAEDFE_239 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_239*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_239*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_239_TypeDefinitionIndex)->GetStaticField(0x59670);
	}
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_239__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_239* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_239*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_239__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_239__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_239*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_239*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_239_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_239_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_239* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_239*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_239_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_239_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_239* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_239*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_239_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_239_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_239_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_239_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_239_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_239* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_239*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_239_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_239_MERGEFROM_1_OFFSET))(this, a1);
	}
};
