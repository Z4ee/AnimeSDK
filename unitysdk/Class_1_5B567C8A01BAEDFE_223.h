#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_223_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A06D010)
#define CLASS_1_5B567C8A01BAEDFE_223_CLONE_OFFSET UNITYSDK_OFFSET(0x1A06CE20)
#define CLASS_1_5B567C8A01BAEDFE_223_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A06CF20)
#define CLASS_1_5B567C8A01BAEDFE_223_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A06CE90)
#define CLASS_1_5B567C8A01BAEDFE_223_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A06CF70)
#define CLASS_1_5B567C8A01BAEDFE_223_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A06D060)
#define CLASS_1_5B567C8A01BAEDFE_223_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A06D030)
#define CLASS_1_5B567C8A01BAEDFE_223_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A06CD70)
#define CLASS_1_5B567C8A01BAEDFE_223_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A06CDD0)
#define CLASS_1_5B567C8A01BAEDFE_223_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A06CFA0)
#define CLASS_1_5B567C8A01BAEDFE_223_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A06D000)
#define CLASS_1_5B567C8A01BAEDFE_223__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A06D0B0)
#define CLASS_1_5B567C8A01BAEDFE_223__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A06CDF0)
#define CLASS_1_5B567C8A01BAEDFE_223__CTOR_OFFSET UNITYSDK_OFFSET(0x1A06CDE0)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_223_TypeDefinitionIndex = 29382;

class Class_1_5B567C8A01BAEDFE_223 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_223*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_223*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_223_TypeDefinitionIndex)->GetStaticField(0x331B0);
	}
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_223__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_223* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_223*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_223__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_223__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_223*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_223*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_223_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_223_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_223* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_223*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_223_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_223_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_223* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_223*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_223_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_223_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_223_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_223_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_223_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_223* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_223*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_223_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_223_MERGEFROM_1_OFFSET))(this, a1);
	}
};
