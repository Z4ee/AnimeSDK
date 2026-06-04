#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_84_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19FC3470)
#define CLASS_1_5B567C8A01BAEDFE_84_CLONE_OFFSET UNITYSDK_OFFSET(0x19FC3280)
#define CLASS_1_5B567C8A01BAEDFE_84_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19FC3380)
#define CLASS_1_5B567C8A01BAEDFE_84_EQUALS_OFFSET UNITYSDK_OFFSET(0x19FC32F0)
#define CLASS_1_5B567C8A01BAEDFE_84_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19FC33D0)
#define CLASS_1_5B567C8A01BAEDFE_84_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19FC34C0)
#define CLASS_1_5B567C8A01BAEDFE_84_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19FC3490)
#define CLASS_1_5B567C8A01BAEDFE_84_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19FC31D0)
#define CLASS_1_5B567C8A01BAEDFE_84_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19FC3230)
#define CLASS_1_5B567C8A01BAEDFE_84_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19FC3400)
#define CLASS_1_5B567C8A01BAEDFE_84_WRITETO_OFFSET UNITYSDK_OFFSET(0x19FC3460)
#define CLASS_1_5B567C8A01BAEDFE_84__CCTOR_OFFSET UNITYSDK_OFFSET(0x19FC3510)
#define CLASS_1_5B567C8A01BAEDFE_84__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19FC3250)
#define CLASS_1_5B567C8A01BAEDFE_84__CTOR_OFFSET UNITYSDK_OFFSET(0x19FC3240)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_84_TypeDefinitionIndex = 25904;

class Class_1_5B567C8A01BAEDFE_84 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_84*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_84*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_84_TypeDefinitionIndex)->GetStaticField(0xF220);
	}
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_84__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_84* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_84*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_84__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_84__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_84*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_84*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_84_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_84_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_84* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_84*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_84_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_84_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_84* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_84*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_84_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_84_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_84_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_84_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_84_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_84* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_84*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_84_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_84_MERGEFROM_1_OFFSET))(this, a1);
	}
};
