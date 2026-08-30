#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_326_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EBECA70)
#define CLASS_1_5B567C8A01BAEDFE_326_CLONE_OFFSET UNITYSDK_OFFSET(0x1EBEC760)
#define CLASS_1_5B567C8A01BAEDFE_326_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EBEC870)
#define CLASS_1_5B567C8A01BAEDFE_326_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EBEC7A0)
#define CLASS_1_5B567C8A01BAEDFE_326_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EBEC9D0)
#define CLASS_1_5B567C8A01BAEDFE_326_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EBECAC0)
#define CLASS_1_5B567C8A01BAEDFE_326_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EBECA90)
#define CLASS_1_5B567C8A01BAEDFE_326_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1EBEC6E0)
#define CLASS_1_5B567C8A01BAEDFE_326_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EBEC710)
#define CLASS_1_5B567C8A01BAEDFE_326_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EBECA00)
#define CLASS_1_5B567C8A01BAEDFE_326_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EBECA60)
#define CLASS_1_5B567C8A01BAEDFE_326__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBECB10)
#define CLASS_1_5B567C8A01BAEDFE_326__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EBEC730)
#define CLASS_1_5B567C8A01BAEDFE_326__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBEC720)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_326_TypeDefinitionIndex = 33182;

class Class_1_5B567C8A01BAEDFE_326 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_326*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_326*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_326_TypeDefinitionIndex)->GetStaticField(0x60A20);
	}
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_326__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_326* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_326*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_326__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_326__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_326*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_326*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_326_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_326_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_326* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_326*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_326_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_326_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_326* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_326*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_326_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_326_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_326_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_326_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_326_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_326* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_326*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_326_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_326_MERGEFROM_1_OFFSET))(this, a1);
	}
};
