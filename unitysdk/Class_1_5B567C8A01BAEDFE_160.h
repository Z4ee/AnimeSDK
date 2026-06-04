#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_160_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1AB336F0)
#define CLASS_1_5B567C8A01BAEDFE_160_CLONE_OFFSET UNITYSDK_OFFSET(0x1AB33500)
#define CLASS_1_5B567C8A01BAEDFE_160_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1AB33600)
#define CLASS_1_5B567C8A01BAEDFE_160_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AB33570)
#define CLASS_1_5B567C8A01BAEDFE_160_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AB33650)
#define CLASS_1_5B567C8A01BAEDFE_160_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1AB33740)
#define CLASS_1_5B567C8A01BAEDFE_160_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1AB33710)
#define CLASS_1_5B567C8A01BAEDFE_160_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1AB33450)
#define CLASS_1_5B567C8A01BAEDFE_160_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1AB334B0)
#define CLASS_1_5B567C8A01BAEDFE_160_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AB33680)
#define CLASS_1_5B567C8A01BAEDFE_160_WRITETO_OFFSET UNITYSDK_OFFSET(0x1AB336E0)
#define CLASS_1_5B567C8A01BAEDFE_160__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AB33790)
#define CLASS_1_5B567C8A01BAEDFE_160__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AB334D0)
#define CLASS_1_5B567C8A01BAEDFE_160__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB334C0)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_160_TypeDefinitionIndex = 27873;

class Class_1_5B567C8A01BAEDFE_160 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_160*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_160*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_160_TypeDefinitionIndex)->GetStaticField(0x182E0);
	}
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_160__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_160* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_160*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_160__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_160__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_160*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_160*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_160_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_160_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_160* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_160*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_160_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_160_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_160* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_160*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_160_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_160_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_160_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_160_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_160_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_160* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_160*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_160_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_160_MERGEFROM_1_OFFSET))(this, a1);
	}
};
