#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C9D4110)
#define CLASS_1_5B567C8A01BAEDFE_CLONE_OFFSET UNITYSDK_OFFSET(0x1C9C1AE0)
#define CLASS_1_5B567C8A01BAEDFE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C9D3F40)
#define CLASS_1_5B567C8A01BAEDFE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C9D3E50)
#define CLASS_1_5B567C8A01BAEDFE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C9C2C50)
#define CLASS_1_5B567C8A01BAEDFE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C9D4130)
#define CLASS_1_5B567C8A01BAEDFE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C9C42E0)
#define CLASS_1_5B567C8A01BAEDFE_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C9D3DB0)
#define CLASS_1_5B567C8A01BAEDFE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C9D3E10)
#define CLASS_1_5B567C8A01BAEDFE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C9D40A0)
#define CLASS_1_5B567C8A01BAEDFE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C9D4100)
#define CLASS_1_5B567C8A01BAEDFE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C9D4180)
#define CLASS_1_5B567C8A01BAEDFE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C9D3E20)
#define CLASS_1_5B567C8A01BAEDFE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9C42D0)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_TypeDefinitionIndex = 24313;

class Class_1_5B567C8A01BAEDFE : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_TypeDefinitionIndex)->GetStaticField(0x3D20);
	}
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_MERGEFROM_1_OFFSET))(this, a1);
	}
};
