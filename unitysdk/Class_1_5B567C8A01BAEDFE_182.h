#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_182_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A0BF710)
#define CLASS_1_5B567C8A01BAEDFE_182_CLONE_OFFSET UNITYSDK_OFFSET(0x1A0BF580)
#define CLASS_1_5B567C8A01BAEDFE_182_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A0BF620)
#define CLASS_1_5B567C8A01BAEDFE_182_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A0BF5C0)
#define CLASS_1_5B567C8A01BAEDFE_182_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A0BF670)
#define CLASS_1_5B567C8A01BAEDFE_182_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A0BF760)
#define CLASS_1_5B567C8A01BAEDFE_182_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A0BF730)
#define CLASS_1_5B567C8A01BAEDFE_182_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A0BF500)
#define CLASS_1_5B567C8A01BAEDFE_182_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A0BF530)
#define CLASS_1_5B567C8A01BAEDFE_182_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A0BF6A0)
#define CLASS_1_5B567C8A01BAEDFE_182_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A0BF700)
#define CLASS_1_5B567C8A01BAEDFE_182__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0BF7B0)
#define CLASS_1_5B567C8A01BAEDFE_182__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A0BF550)
#define CLASS_1_5B567C8A01BAEDFE_182__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0BF540)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_182_TypeDefinitionIndex = 28497;

class Class_1_5B567C8A01BAEDFE_182 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_182*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_182*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_182_TypeDefinitionIndex)->GetStaticField(0x3D2E0);
	}
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_182__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_182* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_182*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_182__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_182__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_182*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_182*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_182_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_182_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_182* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_182*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_182_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_182_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_182* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_182*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_182_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_182_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_182_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_182_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_182_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_182* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_182*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_182_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_182_MERGEFROM_1_OFFSET))(this, a1);
	}
};
