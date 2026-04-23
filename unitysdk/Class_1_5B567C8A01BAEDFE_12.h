#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_12_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19A5E880)
#define CLASS_1_5B567C8A01BAEDFE_12_CLONE_OFFSET UNITYSDK_OFFSET(0x19A5E690)
#define CLASS_1_5B567C8A01BAEDFE_12_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19A5E790)
#define CLASS_1_5B567C8A01BAEDFE_12_EQUALS_OFFSET UNITYSDK_OFFSET(0x19A5E700)
#define CLASS_1_5B567C8A01BAEDFE_12_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19A5E7E0)
#define CLASS_1_5B567C8A01BAEDFE_12_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19A5E8D0)
#define CLASS_1_5B567C8A01BAEDFE_12_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19A5E8A0)
#define CLASS_1_5B567C8A01BAEDFE_12_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19A5E5E0)
#define CLASS_1_5B567C8A01BAEDFE_12_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19A5E640)
#define CLASS_1_5B567C8A01BAEDFE_12_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19A5E810)
#define CLASS_1_5B567C8A01BAEDFE_12_WRITETO_OFFSET UNITYSDK_OFFSET(0x19A5E870)
#define CLASS_1_5B567C8A01BAEDFE_12__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A5E920)
#define CLASS_1_5B567C8A01BAEDFE_12__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19A5E660)
#define CLASS_1_5B567C8A01BAEDFE_12__CTOR_OFFSET UNITYSDK_OFFSET(0x19A5E650)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_12_TypeDefinitionIndex = 24731;

class Class_1_5B567C8A01BAEDFE_12 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_12*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_12*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_12_TypeDefinitionIndex)->GetStaticField(0x4F180);
	}
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_12__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_12*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_12__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_12__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_12*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_12*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_12_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_12_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_12* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_12*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_12_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_12_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_12* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_12*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_12_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_12_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_12_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_12_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_12_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_12*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_12_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_12_MERGEFROM_1_OFFSET))(this, a1);
	}
};
