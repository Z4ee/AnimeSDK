#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_58_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C50BF30)
#define CLASS_1_5B567C8A01BAEDFE_58_CLONE_OFFSET UNITYSDK_OFFSET(0x1C50BBD0)
#define CLASS_1_5B567C8A01BAEDFE_58_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C50BD30)
#define CLASS_1_5B567C8A01BAEDFE_58_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C50BC40)
#define CLASS_1_5B567C8A01BAEDFE_58_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C50BE90)
#define CLASS_1_5B567C8A01BAEDFE_58_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C50BF80)
#define CLASS_1_5B567C8A01BAEDFE_58_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C50BF50)
#define CLASS_1_5B567C8A01BAEDFE_58_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C50BB20)
#define CLASS_1_5B567C8A01BAEDFE_58_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C50BB80)
#define CLASS_1_5B567C8A01BAEDFE_58_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C50BEC0)
#define CLASS_1_5B567C8A01BAEDFE_58_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C50BF20)
#define CLASS_1_5B567C8A01BAEDFE_58__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C50BFD0)
#define CLASS_1_5B567C8A01BAEDFE_58__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C50BBA0)
#define CLASS_1_5B567C8A01BAEDFE_58__CTOR_OFFSET UNITYSDK_OFFSET(0x1C50BB90)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_58_TypeDefinitionIndex = 25954;

class Class_1_5B567C8A01BAEDFE_58 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_58*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_58*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_58_TypeDefinitionIndex)->GetStaticField(0x8430);
	}
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_58__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_58* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_58*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_58__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_58__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_58*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_58*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_58_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_58_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_58* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_58*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_58_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_58_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_58* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_58*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_58_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_58_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_58_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_58_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_58_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_58* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_58*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_58_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_58_MERGEFROM_1_OFFSET))(this, a1);
	}
};
