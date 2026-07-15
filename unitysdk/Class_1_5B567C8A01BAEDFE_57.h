#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_57_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CBBFE50)
#define CLASS_1_5B567C8A01BAEDFE_57_CLONE_OFFSET UNITYSDK_OFFSET(0x1CBBFAF0)
#define CLASS_1_5B567C8A01BAEDFE_57_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CBBFC50)
#define CLASS_1_5B567C8A01BAEDFE_57_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CBBFB60)
#define CLASS_1_5B567C8A01BAEDFE_57_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CBBFDB0)
#define CLASS_1_5B567C8A01BAEDFE_57_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CBBFEA0)
#define CLASS_1_5B567C8A01BAEDFE_57_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CBBFE70)
#define CLASS_1_5B567C8A01BAEDFE_57_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1CBBFA40)
#define CLASS_1_5B567C8A01BAEDFE_57_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CBBFAA0)
#define CLASS_1_5B567C8A01BAEDFE_57_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CBBFDE0)
#define CLASS_1_5B567C8A01BAEDFE_57_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CBBFE40)
#define CLASS_1_5B567C8A01BAEDFE_57__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CBBFEF0)
#define CLASS_1_5B567C8A01BAEDFE_57__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CBBFAC0)
#define CLASS_1_5B567C8A01BAEDFE_57__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBBFAB0)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_57_TypeDefinitionIndex = 25950;

class Class_1_5B567C8A01BAEDFE_57 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_57*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_57*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_57_TypeDefinitionIndex)->GetStaticField(0x53F70);
	}
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_57__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_57* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_57*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_57__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_57__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_57*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_57*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_57_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_57_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_57* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_57*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_57_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_57_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_57* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_57*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_57_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_57_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_57_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_57_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_57_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_57* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_57*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_57_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_57_MERGEFROM_1_OFFSET))(this, a1);
	}
};
