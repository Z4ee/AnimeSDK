#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_60_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF1B820)
#define CLASS_1_5B567C8A01BAEDFE_60_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF1B510)
#define CLASS_1_5B567C8A01BAEDFE_60_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF1B620)
#define CLASS_1_5B567C8A01BAEDFE_60_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF1B550)
#define CLASS_1_5B567C8A01BAEDFE_60_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF1B780)
#define CLASS_1_5B567C8A01BAEDFE_60_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF1B870)
#define CLASS_1_5B567C8A01BAEDFE_60_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF1B840)
#define CLASS_1_5B567C8A01BAEDFE_60_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1DF1B490)
#define CLASS_1_5B567C8A01BAEDFE_60_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF1B4C0)
#define CLASS_1_5B567C8A01BAEDFE_60_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF1B7B0)
#define CLASS_1_5B567C8A01BAEDFE_60_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF1B810)
#define CLASS_1_5B567C8A01BAEDFE_60__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF1B8C0)
#define CLASS_1_5B567C8A01BAEDFE_60__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF1B4E0)
#define CLASS_1_5B567C8A01BAEDFE_60__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF1B4D0)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_60_TypeDefinitionIndex = 26624;

class Class_1_5B567C8A01BAEDFE_60 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_60*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_60*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_60_TypeDefinitionIndex)->GetStaticField(0x40210);
	}
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_60__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_60* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_60*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_60__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_60__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_60*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_60*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_60_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_60_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_60* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_60*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_60_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_60_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_60* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_60*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_60_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_60_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_60_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_60_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_60_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_60* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_60*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_60_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_60_MERGEFROM_1_OFFSET))(this, a1);
	}
};
