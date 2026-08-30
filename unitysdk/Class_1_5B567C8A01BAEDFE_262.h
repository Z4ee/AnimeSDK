#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_262_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF41890)
#define CLASS_1_5B567C8A01BAEDFE_262_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF41580)
#define CLASS_1_5B567C8A01BAEDFE_262_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF41690)
#define CLASS_1_5B567C8A01BAEDFE_262_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF415C0)
#define CLASS_1_5B567C8A01BAEDFE_262_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF417F0)
#define CLASS_1_5B567C8A01BAEDFE_262_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF418E0)
#define CLASS_1_5B567C8A01BAEDFE_262_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF418B0)
#define CLASS_1_5B567C8A01BAEDFE_262_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1DF41500)
#define CLASS_1_5B567C8A01BAEDFE_262_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF41530)
#define CLASS_1_5B567C8A01BAEDFE_262_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF41820)
#define CLASS_1_5B567C8A01BAEDFE_262_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF41880)
#define CLASS_1_5B567C8A01BAEDFE_262__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF41930)
#define CLASS_1_5B567C8A01BAEDFE_262__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF41550)
#define CLASS_1_5B567C8A01BAEDFE_262__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF41540)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_262_TypeDefinitionIndex = 31492;

class Class_1_5B567C8A01BAEDFE_262 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_262*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_262*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_262_TypeDefinitionIndex)->GetStaticField(0x46F60);
	}
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_262__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_262* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_262*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_262__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_262__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_262*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_262*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_262_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_262_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_262* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_262*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_262_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_262_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_262* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_262*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_262_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_262_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_262_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_262_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_262_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_262* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_262*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_262_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_262_MERGEFROM_1_OFFSET))(this, a1);
	}
};
