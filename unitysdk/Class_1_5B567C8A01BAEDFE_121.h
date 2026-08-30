#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_121_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7C2240)
#define CLASS_1_5B567C8A01BAEDFE_121_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7C1EE0)
#define CLASS_1_5B567C8A01BAEDFE_121_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7C2040)
#define CLASS_1_5B567C8A01BAEDFE_121_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7C1F50)
#define CLASS_1_5B567C8A01BAEDFE_121_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7C21A0)
#define CLASS_1_5B567C8A01BAEDFE_121_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7C2290)
#define CLASS_1_5B567C8A01BAEDFE_121_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7C2260)
#define CLASS_1_5B567C8A01BAEDFE_121_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E7C1E30)
#define CLASS_1_5B567C8A01BAEDFE_121_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7C1E90)
#define CLASS_1_5B567C8A01BAEDFE_121_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7C21D0)
#define CLASS_1_5B567C8A01BAEDFE_121_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7C2230)
#define CLASS_1_5B567C8A01BAEDFE_121__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7C22E0)
#define CLASS_1_5B567C8A01BAEDFE_121__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7C1EB0)
#define CLASS_1_5B567C8A01BAEDFE_121__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7C1EA0)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_121_TypeDefinitionIndex = 28124;

class Class_1_5B567C8A01BAEDFE_121 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_121*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_121*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_121_TypeDefinitionIndex)->GetStaticField(0x325E0);
	}
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_121__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_121* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_121*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_121__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_121__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_121*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_121*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_121_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_121_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_121* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_121*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_121_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_121_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_121* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_121*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_121_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_121_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_121_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_121_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_121_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_121* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_121*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_121_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_121_MERGEFROM_1_OFFSET))(this, a1);
	}
};
