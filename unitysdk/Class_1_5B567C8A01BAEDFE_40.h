#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_40_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2AD780)
#define CLASS_1_5B567C8A01BAEDFE_40_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2AD470)
#define CLASS_1_5B567C8A01BAEDFE_40_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2AD580)
#define CLASS_1_5B567C8A01BAEDFE_40_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2AD4B0)
#define CLASS_1_5B567C8A01BAEDFE_40_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2AD6E0)
#define CLASS_1_5B567C8A01BAEDFE_40_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2AD7D0)
#define CLASS_1_5B567C8A01BAEDFE_40_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2AD7A0)
#define CLASS_1_5B567C8A01BAEDFE_40_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E2AD3F0)
#define CLASS_1_5B567C8A01BAEDFE_40_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2AD420)
#define CLASS_1_5B567C8A01BAEDFE_40_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2AD710)
#define CLASS_1_5B567C8A01BAEDFE_40_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2AD770)
#define CLASS_1_5B567C8A01BAEDFE_40__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2AD820)
#define CLASS_1_5B567C8A01BAEDFE_40__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2AD440)
#define CLASS_1_5B567C8A01BAEDFE_40__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2AD430)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_40_TypeDefinitionIndex = 26355;

class Class_1_5B567C8A01BAEDFE_40 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_40*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_40*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_40_TypeDefinitionIndex)->GetStaticField(0x3D670);
	}
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_40__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_40* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_40*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_40__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_40__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_40*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_40*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_40_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_40_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_40* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_40*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_40_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_40_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_40* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_40*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_40_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_40_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_40_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_40_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_40_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_40* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_40*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_40_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_40_MERGEFROM_1_OFFSET))(this, a1);
	}
};
