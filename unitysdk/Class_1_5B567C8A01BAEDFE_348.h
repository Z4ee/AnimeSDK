#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_348_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C688C90)
#define CLASS_1_5B567C8A01BAEDFE_348_CLONE_OFFSET UNITYSDK_OFFSET(0x1C688980)
#define CLASS_1_5B567C8A01BAEDFE_348_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C688A90)
#define CLASS_1_5B567C8A01BAEDFE_348_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C6889C0)
#define CLASS_1_5B567C8A01BAEDFE_348_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C688BF0)
#define CLASS_1_5B567C8A01BAEDFE_348_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C688CE0)
#define CLASS_1_5B567C8A01BAEDFE_348_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C688CB0)
#define CLASS_1_5B567C8A01BAEDFE_348_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C688900)
#define CLASS_1_5B567C8A01BAEDFE_348_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C688930)
#define CLASS_1_5B567C8A01BAEDFE_348_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C688C20)
#define CLASS_1_5B567C8A01BAEDFE_348_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C688C80)
#define CLASS_1_5B567C8A01BAEDFE_348__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C688D30)
#define CLASS_1_5B567C8A01BAEDFE_348__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C688950)
#define CLASS_1_5B567C8A01BAEDFE_348__CTOR_OFFSET UNITYSDK_OFFSET(0x1C688940)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_348_TypeDefinitionIndex = 33107;

class Class_1_5B567C8A01BAEDFE_348 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_348*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_348*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_348_TypeDefinitionIndex)->GetStaticField(0x213B0);
	}
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_348__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_348* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_348*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_348__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_348__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_348*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_348*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_348_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_348_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_348* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_348*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_348_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_348_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_348* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_348*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_348_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_348_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_348_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_348_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_348_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_348* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_348*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_348_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_348_MERGEFROM_1_OFFSET))(this, a1);
	}
};
