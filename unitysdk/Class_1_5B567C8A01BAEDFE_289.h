#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_289_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E204CC0)
#define CLASS_1_5B567C8A01BAEDFE_289_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2049B0)
#define CLASS_1_5B567C8A01BAEDFE_289_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E204AC0)
#define CLASS_1_5B567C8A01BAEDFE_289_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2049F0)
#define CLASS_1_5B567C8A01BAEDFE_289_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E204C20)
#define CLASS_1_5B567C8A01BAEDFE_289_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E204D10)
#define CLASS_1_5B567C8A01BAEDFE_289_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E204CE0)
#define CLASS_1_5B567C8A01BAEDFE_289_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E204930)
#define CLASS_1_5B567C8A01BAEDFE_289_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E204960)
#define CLASS_1_5B567C8A01BAEDFE_289_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E204C50)
#define CLASS_1_5B567C8A01BAEDFE_289_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E204CB0)
#define CLASS_1_5B567C8A01BAEDFE_289__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E204D60)
#define CLASS_1_5B567C8A01BAEDFE_289__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E204980)
#define CLASS_1_5B567C8A01BAEDFE_289__CTOR_OFFSET UNITYSDK_OFFSET(0x1E204970)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_289_TypeDefinitionIndex = 32143;

class Class_1_5B567C8A01BAEDFE_289 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_289*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_289*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_289_TypeDefinitionIndex)->GetStaticField(0x38300);
	}
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_289__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_289* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_289*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_289__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_289__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_289*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_289*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_289_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_289_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_289* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_289*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_289_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_289_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_289* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_289*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_289_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_289_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_289_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_289_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_289_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_289* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_289*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_289_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_289_MERGEFROM_1_OFFSET))(this, a1);
	}
};
