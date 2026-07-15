#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_258_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CBE33D0)
#define CLASS_1_5B567C8A01BAEDFE_258_CLONE_OFFSET UNITYSDK_OFFSET(0x1CBE3070)
#define CLASS_1_5B567C8A01BAEDFE_258_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CBE31D0)
#define CLASS_1_5B567C8A01BAEDFE_258_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CBE30E0)
#define CLASS_1_5B567C8A01BAEDFE_258_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CBE3330)
#define CLASS_1_5B567C8A01BAEDFE_258_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CBE3420)
#define CLASS_1_5B567C8A01BAEDFE_258_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CBE33F0)
#define CLASS_1_5B567C8A01BAEDFE_258_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1CBE2FC0)
#define CLASS_1_5B567C8A01BAEDFE_258_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CBE3020)
#define CLASS_1_5B567C8A01BAEDFE_258_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CBE3360)
#define CLASS_1_5B567C8A01BAEDFE_258_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CBE33C0)
#define CLASS_1_5B567C8A01BAEDFE_258__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CBE3470)
#define CLASS_1_5B567C8A01BAEDFE_258__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CBE3040)
#define CLASS_1_5B567C8A01BAEDFE_258__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBE3030)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_258_TypeDefinitionIndex = 30745;

class Class_1_5B567C8A01BAEDFE_258 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_258*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_258*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_258_TypeDefinitionIndex)->GetStaticField(0x25F30);
	}
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_258__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_258* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_258*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_258__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_258__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_258*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_258*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_258_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_258_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_258* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_258*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_258_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_258_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_258* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_258*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_258_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_258_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_258_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_258_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_258_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_258* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_258*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_258_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_258_MERGEFROM_1_OFFSET))(this, a1);
	}
};
