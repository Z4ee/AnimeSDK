#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_225_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x197615B0)
#define CLASS_1_5B567C8A01BAEDFE_225_CLONE_OFFSET UNITYSDK_OFFSET(0x19761420)
#define CLASS_1_5B567C8A01BAEDFE_225_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x197614C0)
#define CLASS_1_5B567C8A01BAEDFE_225_EQUALS_OFFSET UNITYSDK_OFFSET(0x19761460)
#define CLASS_1_5B567C8A01BAEDFE_225_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19761510)
#define CLASS_1_5B567C8A01BAEDFE_225_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19761600)
#define CLASS_1_5B567C8A01BAEDFE_225_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x197615D0)
#define CLASS_1_5B567C8A01BAEDFE_225_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x197613A0)
#define CLASS_1_5B567C8A01BAEDFE_225_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x197613D0)
#define CLASS_1_5B567C8A01BAEDFE_225_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19761540)
#define CLASS_1_5B567C8A01BAEDFE_225_WRITETO_OFFSET UNITYSDK_OFFSET(0x197615A0)
#define CLASS_1_5B567C8A01BAEDFE_225__CCTOR_OFFSET UNITYSDK_OFFSET(0x19761650)
#define CLASS_1_5B567C8A01BAEDFE_225__CTOR_1_OFFSET UNITYSDK_OFFSET(0x197613F0)
#define CLASS_1_5B567C8A01BAEDFE_225__CTOR_OFFSET UNITYSDK_OFFSET(0x197613E0)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_225_TypeDefinitionIndex = 29600;

class Class_1_5B567C8A01BAEDFE_225 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_225*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_225*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_225_TypeDefinitionIndex)->GetStaticField(0x5AF60);
	}
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_225__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_225* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_225*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_225__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_225__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_225*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_225*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_225_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_225_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_225* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_225*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_225_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_225_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_225* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_225*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_225_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_225_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_225_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_225_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_225_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_225* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_225*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_225_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_225_MERGEFROM_1_OFFSET))(this, a1);
	}
};
