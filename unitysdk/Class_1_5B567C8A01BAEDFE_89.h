#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_89_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9D66D0)
#define CLASS_1_5B567C8A01BAEDFE_89_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9D6370)
#define CLASS_1_5B567C8A01BAEDFE_89_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9D64D0)
#define CLASS_1_5B567C8A01BAEDFE_89_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9D63E0)
#define CLASS_1_5B567C8A01BAEDFE_89_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9D6630)
#define CLASS_1_5B567C8A01BAEDFE_89_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9D6720)
#define CLASS_1_5B567C8A01BAEDFE_89_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9D66F0)
#define CLASS_1_5B567C8A01BAEDFE_89_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E9D62C0)
#define CLASS_1_5B567C8A01BAEDFE_89_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9D6320)
#define CLASS_1_5B567C8A01BAEDFE_89_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9D6660)
#define CLASS_1_5B567C8A01BAEDFE_89_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9D66C0)
#define CLASS_1_5B567C8A01BAEDFE_89__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9D6770)
#define CLASS_1_5B567C8A01BAEDFE_89__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9D6340)
#define CLASS_1_5B567C8A01BAEDFE_89__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9D6330)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_89_TypeDefinitionIndex = 27209;

class Class_1_5B567C8A01BAEDFE_89 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_89*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_89*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_89_TypeDefinitionIndex)->GetStaticField(0x25930);
	}
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_89__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_89* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_89*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_89__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_89__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_89*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_89*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_89_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_89_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_89* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_89*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_89_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_89_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_89* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_89*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_89_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_89_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_89_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_89_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_89_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_89* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_89*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_89_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_89_MERGEFROM_1_OFFSET))(this, a1);
	}
};
