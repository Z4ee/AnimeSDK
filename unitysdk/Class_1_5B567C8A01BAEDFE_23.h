#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_23_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19FD89B0)
#define CLASS_1_5B567C8A01BAEDFE_23_CLONE_OFFSET UNITYSDK_OFFSET(0x19FD87C0)
#define CLASS_1_5B567C8A01BAEDFE_23_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19FD88C0)
#define CLASS_1_5B567C8A01BAEDFE_23_EQUALS_OFFSET UNITYSDK_OFFSET(0x19FD8830)
#define CLASS_1_5B567C8A01BAEDFE_23_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19FD8910)
#define CLASS_1_5B567C8A01BAEDFE_23_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19FD8A00)
#define CLASS_1_5B567C8A01BAEDFE_23_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19FD89D0)
#define CLASS_1_5B567C8A01BAEDFE_23_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19FD8710)
#define CLASS_1_5B567C8A01BAEDFE_23_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19FD8770)
#define CLASS_1_5B567C8A01BAEDFE_23_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19FD8940)
#define CLASS_1_5B567C8A01BAEDFE_23_WRITETO_OFFSET UNITYSDK_OFFSET(0x19FD89A0)
#define CLASS_1_5B567C8A01BAEDFE_23__CCTOR_OFFSET UNITYSDK_OFFSET(0x19FD8A50)
#define CLASS_1_5B567C8A01BAEDFE_23__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19FD8790)
#define CLASS_1_5B567C8A01BAEDFE_23__CTOR_OFFSET UNITYSDK_OFFSET(0x19FD8780)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_23_TypeDefinitionIndex = 24818;

class Class_1_5B567C8A01BAEDFE_23 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_23*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_23*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_23_TypeDefinitionIndex)->GetStaticField(0x26120);
	}
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_23__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_23* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_23*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_23__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_23__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_23*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_23*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_23_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_23_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_23* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_23*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_23_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_23_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_23* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_23*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_23_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_23_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_23_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_23_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_23_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_23* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_23*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_23_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_23_MERGEFROM_1_OFFSET))(this, a1);
	}
};
