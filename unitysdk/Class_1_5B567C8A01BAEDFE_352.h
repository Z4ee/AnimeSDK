#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_352_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E273660)
#define CLASS_1_5B567C8A01BAEDFE_352_CLONE_OFFSET UNITYSDK_OFFSET(0x1E273350)
#define CLASS_1_5B567C8A01BAEDFE_352_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E273460)
#define CLASS_1_5B567C8A01BAEDFE_352_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E273390)
#define CLASS_1_5B567C8A01BAEDFE_352_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2735C0)
#define CLASS_1_5B567C8A01BAEDFE_352_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2736B0)
#define CLASS_1_5B567C8A01BAEDFE_352_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E273680)
#define CLASS_1_5B567C8A01BAEDFE_352_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E2732D0)
#define CLASS_1_5B567C8A01BAEDFE_352_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E273300)
#define CLASS_1_5B567C8A01BAEDFE_352_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2735F0)
#define CLASS_1_5B567C8A01BAEDFE_352_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E273650)
#define CLASS_1_5B567C8A01BAEDFE_352__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E273700)
#define CLASS_1_5B567C8A01BAEDFE_352__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E273320)
#define CLASS_1_5B567C8A01BAEDFE_352__CTOR_OFFSET UNITYSDK_OFFSET(0x1E273310)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_352_TypeDefinitionIndex = 33799;

class Class_1_5B567C8A01BAEDFE_352 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_352*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_352*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_352_TypeDefinitionIndex)->GetStaticField(0x5BBA0);
	}
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_352__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_352* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_352*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_352__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_352__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_352*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_352*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_352_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_352_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_352* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_352*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_352_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_352_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_352* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_352*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_352_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_352_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_352_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_352_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_352_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_352* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_352*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_352_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_352_MERGEFROM_1_OFFSET))(this, a1);
	}
};
