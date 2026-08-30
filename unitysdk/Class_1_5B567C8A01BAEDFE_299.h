#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_299_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2F9FE0)
#define CLASS_1_5B567C8A01BAEDFE_299_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2F9C80)
#define CLASS_1_5B567C8A01BAEDFE_299_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2F9DE0)
#define CLASS_1_5B567C8A01BAEDFE_299_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2F9CF0)
#define CLASS_1_5B567C8A01BAEDFE_299_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2F9F40)
#define CLASS_1_5B567C8A01BAEDFE_299_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2FA030)
#define CLASS_1_5B567C8A01BAEDFE_299_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2FA000)
#define CLASS_1_5B567C8A01BAEDFE_299_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E2F9BD0)
#define CLASS_1_5B567C8A01BAEDFE_299_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2F9C30)
#define CLASS_1_5B567C8A01BAEDFE_299_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2F9F70)
#define CLASS_1_5B567C8A01BAEDFE_299_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2F9FD0)
#define CLASS_1_5B567C8A01BAEDFE_299__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2FA080)
#define CLASS_1_5B567C8A01BAEDFE_299__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2F9C50)
#define CLASS_1_5B567C8A01BAEDFE_299__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2F9C40)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_299_TypeDefinitionIndex = 32459;

class Class_1_5B567C8A01BAEDFE_299 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_299*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_299*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_299_TypeDefinitionIndex)->GetStaticField(0x41A10);
	}
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_299__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_299* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_299*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_299__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_299__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_299*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_299*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_299_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_299_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_299* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_299*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_299_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_299_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_299* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_299*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_299_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_299_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_299_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_299_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_299_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_299* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_299*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_299_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_299_MERGEFROM_1_OFFSET))(this, a1);
	}
};
