#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_168_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E56D0C0)
#define CLASS_1_5B567C8A01BAEDFE_168_CLONE_OFFSET UNITYSDK_OFFSET(0x1E56CDB0)
#define CLASS_1_5B567C8A01BAEDFE_168_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E56CEC0)
#define CLASS_1_5B567C8A01BAEDFE_168_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E56CDF0)
#define CLASS_1_5B567C8A01BAEDFE_168_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E56D020)
#define CLASS_1_5B567C8A01BAEDFE_168_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E56D110)
#define CLASS_1_5B567C8A01BAEDFE_168_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E56D0E0)
#define CLASS_1_5B567C8A01BAEDFE_168_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E56CD30)
#define CLASS_1_5B567C8A01BAEDFE_168_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E56CD60)
#define CLASS_1_5B567C8A01BAEDFE_168_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E56D050)
#define CLASS_1_5B567C8A01BAEDFE_168_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E56D0B0)
#define CLASS_1_5B567C8A01BAEDFE_168__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E56D160)
#define CLASS_1_5B567C8A01BAEDFE_168__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E56CD80)
#define CLASS_1_5B567C8A01BAEDFE_168__CTOR_OFFSET UNITYSDK_OFFSET(0x1E56CD70)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_168_TypeDefinitionIndex = 29324;

class Class_1_5B567C8A01BAEDFE_168 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_168*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_168*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_168_TypeDefinitionIndex)->GetStaticField(0x276C0);
	}
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_168__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_168* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_168*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_168__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_168__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_168*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_168*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_168_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_168_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_168* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_168*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_168_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_168_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_168* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_168*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_168_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_168_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_168_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_168_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_168_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_168* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_168*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_168_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_168_MERGEFROM_1_OFFSET))(this, a1);
	}
};
