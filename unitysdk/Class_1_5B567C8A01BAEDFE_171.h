#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_171_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19A59F70)
#define CLASS_1_5B567C8A01BAEDFE_171_CLONE_OFFSET UNITYSDK_OFFSET(0x19A59D80)
#define CLASS_1_5B567C8A01BAEDFE_171_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19A59E80)
#define CLASS_1_5B567C8A01BAEDFE_171_EQUALS_OFFSET UNITYSDK_OFFSET(0x19A59DF0)
#define CLASS_1_5B567C8A01BAEDFE_171_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19A59ED0)
#define CLASS_1_5B567C8A01BAEDFE_171_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19A59FC0)
#define CLASS_1_5B567C8A01BAEDFE_171_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19A59F90)
#define CLASS_1_5B567C8A01BAEDFE_171_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19A59CD0)
#define CLASS_1_5B567C8A01BAEDFE_171_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19A59D30)
#define CLASS_1_5B567C8A01BAEDFE_171_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19A59F00)
#define CLASS_1_5B567C8A01BAEDFE_171_WRITETO_OFFSET UNITYSDK_OFFSET(0x19A59F60)
#define CLASS_1_5B567C8A01BAEDFE_171__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A5A010)
#define CLASS_1_5B567C8A01BAEDFE_171__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19A59D50)
#define CLASS_1_5B567C8A01BAEDFE_171__CTOR_OFFSET UNITYSDK_OFFSET(0x19A59D40)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_171_TypeDefinitionIndex = 28306;

class Class_1_5B567C8A01BAEDFE_171 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_171*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_171*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_171_TypeDefinitionIndex)->GetStaticField(0x4E9A0);
	}
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_171__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_171* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_171*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_171__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_171__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_171*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_171*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_171_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_171_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_171* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_171*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_171_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_171_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_171* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_171*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_171_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_171_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_171_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_171_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_171_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_171* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_171*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_171_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_171_MERGEFROM_1_OFFSET))(this, a1);
	}
};
