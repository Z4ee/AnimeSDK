#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_140_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x196BF1D0)
#define CLASS_1_5B567C8A01BAEDFE_140_CLONE_OFFSET UNITYSDK_OFFSET(0x196BEFE0)
#define CLASS_1_5B567C8A01BAEDFE_140_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x196BF0E0)
#define CLASS_1_5B567C8A01BAEDFE_140_EQUALS_OFFSET UNITYSDK_OFFSET(0x196BF050)
#define CLASS_1_5B567C8A01BAEDFE_140_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x196BF130)
#define CLASS_1_5B567C8A01BAEDFE_140_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x196BF220)
#define CLASS_1_5B567C8A01BAEDFE_140_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x196BF1F0)
#define CLASS_1_5B567C8A01BAEDFE_140_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x196BEF30)
#define CLASS_1_5B567C8A01BAEDFE_140_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x196BEF90)
#define CLASS_1_5B567C8A01BAEDFE_140_TOSTRING_OFFSET UNITYSDK_OFFSET(0x196BF160)
#define CLASS_1_5B567C8A01BAEDFE_140_WRITETO_OFFSET UNITYSDK_OFFSET(0x196BF1C0)
#define CLASS_1_5B567C8A01BAEDFE_140__CCTOR_OFFSET UNITYSDK_OFFSET(0x196BF270)
#define CLASS_1_5B567C8A01BAEDFE_140__CTOR_1_OFFSET UNITYSDK_OFFSET(0x196BEFB0)
#define CLASS_1_5B567C8A01BAEDFE_140__CTOR_OFFSET UNITYSDK_OFFSET(0x196BEFA0)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_140_TypeDefinitionIndex = 27697;

class Class_1_5B567C8A01BAEDFE_140 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_140*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_140*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_140_TypeDefinitionIndex)->GetStaticField(0x48F80);
	}
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_140__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_140* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_140*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_140__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_140__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_140*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_140*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_140_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_140_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_140* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_140*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_140_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_140_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_140* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_140*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_140_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_140_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_140_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_140_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_140_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_140* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_140*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_140_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_140_MERGEFROM_1_OFFSET))(this, a1);
	}
};
