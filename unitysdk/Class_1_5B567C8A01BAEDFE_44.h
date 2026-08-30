#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_44_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2287A0)
#define CLASS_1_5B567C8A01BAEDFE_44_CLONE_OFFSET UNITYSDK_OFFSET(0x1E228490)
#define CLASS_1_5B567C8A01BAEDFE_44_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2285A0)
#define CLASS_1_5B567C8A01BAEDFE_44_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2284D0)
#define CLASS_1_5B567C8A01BAEDFE_44_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E228700)
#define CLASS_1_5B567C8A01BAEDFE_44_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2287F0)
#define CLASS_1_5B567C8A01BAEDFE_44_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2287C0)
#define CLASS_1_5B567C8A01BAEDFE_44_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E228410)
#define CLASS_1_5B567C8A01BAEDFE_44_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E228440)
#define CLASS_1_5B567C8A01BAEDFE_44_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E228730)
#define CLASS_1_5B567C8A01BAEDFE_44_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E228790)
#define CLASS_1_5B567C8A01BAEDFE_44__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E228840)
#define CLASS_1_5B567C8A01BAEDFE_44__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E228460)
#define CLASS_1_5B567C8A01BAEDFE_44__CTOR_OFFSET UNITYSDK_OFFSET(0x1E228450)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_44_TypeDefinitionIndex = 26406;

class Class_1_5B567C8A01BAEDFE_44 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_44*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_44*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_44_TypeDefinitionIndex)->GetStaticField(0x43740);
	}
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_44__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_44* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_44*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_44__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_44__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_44*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_44*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_44_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_44_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_44* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_44*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_44_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_44_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_44* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_44*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_44_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_44_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_44_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_44_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_44_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_44* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_44*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_44_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_44_MERGEFROM_1_OFFSET))(this, a1);
	}
};
