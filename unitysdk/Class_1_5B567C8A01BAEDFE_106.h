#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_106_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6FE450)
#define CLASS_1_5B567C8A01BAEDFE_106_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6FE140)
#define CLASS_1_5B567C8A01BAEDFE_106_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6FE250)
#define CLASS_1_5B567C8A01BAEDFE_106_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6FE180)
#define CLASS_1_5B567C8A01BAEDFE_106_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6FE3B0)
#define CLASS_1_5B567C8A01BAEDFE_106_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6FE4A0)
#define CLASS_1_5B567C8A01BAEDFE_106_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6FE470)
#define CLASS_1_5B567C8A01BAEDFE_106_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E6FE0C0)
#define CLASS_1_5B567C8A01BAEDFE_106_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6FE0F0)
#define CLASS_1_5B567C8A01BAEDFE_106_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6FE3E0)
#define CLASS_1_5B567C8A01BAEDFE_106_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6FE440)
#define CLASS_1_5B567C8A01BAEDFE_106__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6FE4F0)
#define CLASS_1_5B567C8A01BAEDFE_106__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6FE110)
#define CLASS_1_5B567C8A01BAEDFE_106__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6FE100)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_106_TypeDefinitionIndex = 27894;

class Class_1_5B567C8A01BAEDFE_106 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_106*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_106*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_106_TypeDefinitionIndex)->GetStaticField(0x5D180);
	}
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_106__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_106* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_106*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_106__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_106__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_106*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_106*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_106_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_106_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_106* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_106*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_106_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_106_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_106* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_106*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_106_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_106_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_106_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_106_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_106_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_106* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_106*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_106_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_106_MERGEFROM_1_OFFSET))(this, a1);
	}
};
