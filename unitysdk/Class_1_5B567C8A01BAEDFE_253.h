#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_253_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CB16EC0)
#define CLASS_1_5B567C8A01BAEDFE_253_CLONE_OFFSET UNITYSDK_OFFSET(0x1CB16BB0)
#define CLASS_1_5B567C8A01BAEDFE_253_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CB16CC0)
#define CLASS_1_5B567C8A01BAEDFE_253_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CB16BF0)
#define CLASS_1_5B567C8A01BAEDFE_253_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CB16E20)
#define CLASS_1_5B567C8A01BAEDFE_253_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CB16F10)
#define CLASS_1_5B567C8A01BAEDFE_253_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CB16EE0)
#define CLASS_1_5B567C8A01BAEDFE_253_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CB16B30)
#define CLASS_1_5B567C8A01BAEDFE_253_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CB16B60)
#define CLASS_1_5B567C8A01BAEDFE_253_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CB16E50)
#define CLASS_1_5B567C8A01BAEDFE_253_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CB16EB0)
#define CLASS_1_5B567C8A01BAEDFE_253__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB16F60)
#define CLASS_1_5B567C8A01BAEDFE_253__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CB16B80)
#define CLASS_1_5B567C8A01BAEDFE_253__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB16B70)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_253_TypeDefinitionIndex = 30651;

class Class_1_5B567C8A01BAEDFE_253 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_253*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_253*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_253_TypeDefinitionIndex)->GetStaticField(0x41A30);
	}
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_253__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_253* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_253*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_253__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_253__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_253*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_253*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_253_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_253_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_253* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_253*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_253_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_253_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_253* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_253*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_253_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_253_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_253_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_253_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_253_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_253* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_253*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_253_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_253_MERGEFROM_1_OFFSET))(this, a1);
	}
};
