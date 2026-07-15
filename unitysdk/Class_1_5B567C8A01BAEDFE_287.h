#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_287_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1BCF4F70)
#define CLASS_1_5B567C8A01BAEDFE_287_CLONE_OFFSET UNITYSDK_OFFSET(0x1BCF4C10)
#define CLASS_1_5B567C8A01BAEDFE_287_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1BCF4D70)
#define CLASS_1_5B567C8A01BAEDFE_287_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BCF4C80)
#define CLASS_1_5B567C8A01BAEDFE_287_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BCF4ED0)
#define CLASS_1_5B567C8A01BAEDFE_287_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1BCF4FC0)
#define CLASS_1_5B567C8A01BAEDFE_287_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1BCF4F90)
#define CLASS_1_5B567C8A01BAEDFE_287_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1BCF4B60)
#define CLASS_1_5B567C8A01BAEDFE_287_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1BCF4BC0)
#define CLASS_1_5B567C8A01BAEDFE_287_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BCF4F00)
#define CLASS_1_5B567C8A01BAEDFE_287_WRITETO_OFFSET UNITYSDK_OFFSET(0x1BCF4F60)
#define CLASS_1_5B567C8A01BAEDFE_287__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BCF5010)
#define CLASS_1_5B567C8A01BAEDFE_287__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BCF4BE0)
#define CLASS_1_5B567C8A01BAEDFE_287__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCF4BD0)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_287_TypeDefinitionIndex = 31406;

class Class_1_5B567C8A01BAEDFE_287 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_287*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_287*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_287_TypeDefinitionIndex)->GetStaticField(0xE6A0);
	}
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_287__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_287* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_287*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_287__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_287__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_287*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_287*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_287_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_287_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_287* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_287*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_287_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_287_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_287* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_287*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_287_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_287_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_287_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_287_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_287_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_287* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_287*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_287_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_287_MERGEFROM_1_OFFSET))(this, a1);
	}
};
