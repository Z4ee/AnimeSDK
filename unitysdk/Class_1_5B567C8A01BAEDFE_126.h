#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_126_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19C70780)
#define CLASS_1_5B567C8A01BAEDFE_126_CLONE_OFFSET UNITYSDK_OFFSET(0x19C705F0)
#define CLASS_1_5B567C8A01BAEDFE_126_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19C70690)
#define CLASS_1_5B567C8A01BAEDFE_126_EQUALS_OFFSET UNITYSDK_OFFSET(0x19C70630)
#define CLASS_1_5B567C8A01BAEDFE_126_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19C706E0)
#define CLASS_1_5B567C8A01BAEDFE_126_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19C707D0)
#define CLASS_1_5B567C8A01BAEDFE_126_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19C707A0)
#define CLASS_1_5B567C8A01BAEDFE_126_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19C70570)
#define CLASS_1_5B567C8A01BAEDFE_126_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19C705A0)
#define CLASS_1_5B567C8A01BAEDFE_126_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19C70710)
#define CLASS_1_5B567C8A01BAEDFE_126_WRITETO_OFFSET UNITYSDK_OFFSET(0x19C70770)
#define CLASS_1_5B567C8A01BAEDFE_126__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C70820)
#define CLASS_1_5B567C8A01BAEDFE_126__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19C705C0)
#define CLASS_1_5B567C8A01BAEDFE_126__CTOR_OFFSET UNITYSDK_OFFSET(0x19C705B0)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_126_TypeDefinitionIndex = 27145;

class Class_1_5B567C8A01BAEDFE_126 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_126*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_126*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_126_TypeDefinitionIndex)->GetStaticField(0x60230);
	}
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_126__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_126* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_126*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_126__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_126__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_126*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_126*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_126_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_126_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_126* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_126*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_126_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_126_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_126* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_126*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_126_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_126_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_126_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_126_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_126_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_126* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_126*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_126_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_126_MERGEFROM_1_OFFSET))(this, a1);
	}
};
