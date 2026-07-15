#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_339_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C80BD30)
#define CLASS_1_5B567C8A01BAEDFE_339_CLONE_OFFSET UNITYSDK_OFFSET(0x1C80B9D0)
#define CLASS_1_5B567C8A01BAEDFE_339_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C80BB30)
#define CLASS_1_5B567C8A01BAEDFE_339_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C80BA40)
#define CLASS_1_5B567C8A01BAEDFE_339_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C80BC90)
#define CLASS_1_5B567C8A01BAEDFE_339_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C80BD80)
#define CLASS_1_5B567C8A01BAEDFE_339_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C80BD50)
#define CLASS_1_5B567C8A01BAEDFE_339_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C80B920)
#define CLASS_1_5B567C8A01BAEDFE_339_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C80B980)
#define CLASS_1_5B567C8A01BAEDFE_339_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C80BCC0)
#define CLASS_1_5B567C8A01BAEDFE_339_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C80BD20)
#define CLASS_1_5B567C8A01BAEDFE_339__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C80BDD0)
#define CLASS_1_5B567C8A01BAEDFE_339__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C80B9A0)
#define CLASS_1_5B567C8A01BAEDFE_339__CTOR_OFFSET UNITYSDK_OFFSET(0x1C80B990)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_339_TypeDefinitionIndex = 32953;

class Class_1_5B567C8A01BAEDFE_339 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_339*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_339*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_339_TypeDefinitionIndex)->GetStaticField(0x2A1E0);
	}
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_339__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_339* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_339*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_339__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_339__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_339*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_339*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_339_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_339_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_339* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_339*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_339_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_339_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_339* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_339*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_339_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_339_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_339_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_339_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_339_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_339* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_339*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_339_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_339_MERGEFROM_1_OFFSET))(this, a1);
	}
};
