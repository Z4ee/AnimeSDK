#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_316_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x196088C0)
#define CLASS_1_5B567C8A01BAEDFE_316_CLONE_OFFSET UNITYSDK_OFFSET(0x196086D0)
#define CLASS_1_5B567C8A01BAEDFE_316_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x196087D0)
#define CLASS_1_5B567C8A01BAEDFE_316_EQUALS_OFFSET UNITYSDK_OFFSET(0x19608740)
#define CLASS_1_5B567C8A01BAEDFE_316_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19608820)
#define CLASS_1_5B567C8A01BAEDFE_316_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19608910)
#define CLASS_1_5B567C8A01BAEDFE_316_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x196088E0)
#define CLASS_1_5B567C8A01BAEDFE_316_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19608620)
#define CLASS_1_5B567C8A01BAEDFE_316_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19608680)
#define CLASS_1_5B567C8A01BAEDFE_316_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19608850)
#define CLASS_1_5B567C8A01BAEDFE_316_WRITETO_OFFSET UNITYSDK_OFFSET(0x196088B0)
#define CLASS_1_5B567C8A01BAEDFE_316__CCTOR_OFFSET UNITYSDK_OFFSET(0x19608960)
#define CLASS_1_5B567C8A01BAEDFE_316__CTOR_1_OFFSET UNITYSDK_OFFSET(0x196086A0)
#define CLASS_1_5B567C8A01BAEDFE_316__CTOR_OFFSET UNITYSDK_OFFSET(0x19608690)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_316_TypeDefinitionIndex = 31607;

class Class_1_5B567C8A01BAEDFE_316 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_316*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_316*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_316_TypeDefinitionIndex)->GetStaticField(0x5BFF0);
	}
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_316__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_316* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_316*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_316__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_316__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_316*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_316*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_316_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_316_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_316* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_316*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_316_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_316_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_316* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_316*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_316_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_316_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_316_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_316_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_316_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_316* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_316*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_316_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_316_MERGEFROM_1_OFFSET))(this, a1);
	}
};
