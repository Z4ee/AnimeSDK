#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_167_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x196129B0)
#define CLASS_1_5B567C8A01BAEDFE_167_CLONE_OFFSET UNITYSDK_OFFSET(0x196127C0)
#define CLASS_1_5B567C8A01BAEDFE_167_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x196128C0)
#define CLASS_1_5B567C8A01BAEDFE_167_EQUALS_OFFSET UNITYSDK_OFFSET(0x19612830)
#define CLASS_1_5B567C8A01BAEDFE_167_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19612910)
#define CLASS_1_5B567C8A01BAEDFE_167_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19612A00)
#define CLASS_1_5B567C8A01BAEDFE_167_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x196129D0)
#define CLASS_1_5B567C8A01BAEDFE_167_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19612710)
#define CLASS_1_5B567C8A01BAEDFE_167_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19612770)
#define CLASS_1_5B567C8A01BAEDFE_167_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19612940)
#define CLASS_1_5B567C8A01BAEDFE_167_WRITETO_OFFSET UNITYSDK_OFFSET(0x196129A0)
#define CLASS_1_5B567C8A01BAEDFE_167__CCTOR_OFFSET UNITYSDK_OFFSET(0x19612A50)
#define CLASS_1_5B567C8A01BAEDFE_167__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19612790)
#define CLASS_1_5B567C8A01BAEDFE_167__CTOR_OFFSET UNITYSDK_OFFSET(0x19612780)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_167_TypeDefinitionIndex = 28227;

class Class_1_5B567C8A01BAEDFE_167 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_167*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_167*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_167_TypeDefinitionIndex)->GetStaticField(0x5CA50);
	}
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_167__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_167* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_167*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_167__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_167__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_167*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_167*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_167_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_167_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_167* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_167*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_167_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_167_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_167* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_167*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_167_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_167_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_167_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_167_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_167_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_167* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_167*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_167_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_167_MERGEFROM_1_OFFSET))(this, a1);
	}
};
