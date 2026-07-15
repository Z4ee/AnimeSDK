#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_181_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C951820)
#define CLASS_1_5B567C8A01BAEDFE_181_CLONE_OFFSET UNITYSDK_OFFSET(0x1C9514C0)
#define CLASS_1_5B567C8A01BAEDFE_181_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C951620)
#define CLASS_1_5B567C8A01BAEDFE_181_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C951530)
#define CLASS_1_5B567C8A01BAEDFE_181_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C951780)
#define CLASS_1_5B567C8A01BAEDFE_181_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C951870)
#define CLASS_1_5B567C8A01BAEDFE_181_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C951840)
#define CLASS_1_5B567C8A01BAEDFE_181_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C951410)
#define CLASS_1_5B567C8A01BAEDFE_181_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C951470)
#define CLASS_1_5B567C8A01BAEDFE_181_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C9517B0)
#define CLASS_1_5B567C8A01BAEDFE_181_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C951810)
#define CLASS_1_5B567C8A01BAEDFE_181__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C9518C0)
#define CLASS_1_5B567C8A01BAEDFE_181__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C951490)
#define CLASS_1_5B567C8A01BAEDFE_181__CTOR_OFFSET UNITYSDK_OFFSET(0x1C951480)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_181_TypeDefinitionIndex = 29062;

class Class_1_5B567C8A01BAEDFE_181 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_181*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_181*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_181_TypeDefinitionIndex)->GetStaticField(0x4C470);
	}
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_181__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_181* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_181*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_181__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_181__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_181*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_181*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_181_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_181_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_181* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_181*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_181_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_181_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_181* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_181*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_181_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_181_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_181_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_181_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_181_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_181* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_181*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_181_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_181_MERGEFROM_1_OFFSET))(this, a1);
	}
};
