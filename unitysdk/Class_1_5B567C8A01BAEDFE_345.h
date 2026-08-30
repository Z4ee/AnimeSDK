#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_345_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFA0020)
#define CLASS_1_5B567C8A01BAEDFE_345_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF9FCC0)
#define CLASS_1_5B567C8A01BAEDFE_345_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF9FE20)
#define CLASS_1_5B567C8A01BAEDFE_345_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF9FD30)
#define CLASS_1_5B567C8A01BAEDFE_345_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF9FF80)
#define CLASS_1_5B567C8A01BAEDFE_345_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFA0070)
#define CLASS_1_5B567C8A01BAEDFE_345_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFA0040)
#define CLASS_1_5B567C8A01BAEDFE_345_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1DF9FC10)
#define CLASS_1_5B567C8A01BAEDFE_345_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF9FC70)
#define CLASS_1_5B567C8A01BAEDFE_345_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF9FFB0)
#define CLASS_1_5B567C8A01BAEDFE_345_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFA0010)
#define CLASS_1_5B567C8A01BAEDFE_345__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFA00C0)
#define CLASS_1_5B567C8A01BAEDFE_345__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF9FC90)
#define CLASS_1_5B567C8A01BAEDFE_345__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF9FC80)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_345_TypeDefinitionIndex = 33708;

class Class_1_5B567C8A01BAEDFE_345 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_345*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_345*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_345_TypeDefinitionIndex)->GetStaticField(0x589C0);
	}
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_345__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_345* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_345*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_345__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_345__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_345*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_345*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_345_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_345_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_345* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_345*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_345_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_345_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_345* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_345*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_345_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_345_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_345_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_345_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_345_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_345* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_345*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_345_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_345_MERGEFROM_1_OFFSET))(this, a1);
	}
};
