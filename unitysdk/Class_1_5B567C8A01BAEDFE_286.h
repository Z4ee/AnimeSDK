#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_286_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E55BDC0)
#define CLASS_1_5B567C8A01BAEDFE_286_CLONE_OFFSET UNITYSDK_OFFSET(0x1E55BAB0)
#define CLASS_1_5B567C8A01BAEDFE_286_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E55BBC0)
#define CLASS_1_5B567C8A01BAEDFE_286_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E55BAF0)
#define CLASS_1_5B567C8A01BAEDFE_286_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E55BD20)
#define CLASS_1_5B567C8A01BAEDFE_286_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E55BE10)
#define CLASS_1_5B567C8A01BAEDFE_286_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E55BDE0)
#define CLASS_1_5B567C8A01BAEDFE_286_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E55BA30)
#define CLASS_1_5B567C8A01BAEDFE_286_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E55BA60)
#define CLASS_1_5B567C8A01BAEDFE_286_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E55BD50)
#define CLASS_1_5B567C8A01BAEDFE_286_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E55BDB0)
#define CLASS_1_5B567C8A01BAEDFE_286__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E55BE60)
#define CLASS_1_5B567C8A01BAEDFE_286__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E55BA80)
#define CLASS_1_5B567C8A01BAEDFE_286__CTOR_OFFSET UNITYSDK_OFFSET(0x1E55BA70)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_286_TypeDefinitionIndex = 32110;

class Class_1_5B567C8A01BAEDFE_286 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_286*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_286*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_286_TypeDefinitionIndex)->GetStaticField(0x25960);
	}
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_286__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_286* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_286*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_286__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_286__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_286*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_286*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_286_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_286_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_286* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_286*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_286_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_286_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_286* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_286*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_286_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_286_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_286_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_286_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_286_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_286* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_286*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_286_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_286_MERGEFROM_1_OFFSET))(this, a1);
	}
};
