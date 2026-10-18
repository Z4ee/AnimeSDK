#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_378_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8A4360)
#define CLASS_1_5B567C8A01BAEDFE_378_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8A4050)
#define CLASS_1_5B567C8A01BAEDFE_378_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8A4160)
#define CLASS_1_5B567C8A01BAEDFE_378_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8A4090)
#define CLASS_1_5B567C8A01BAEDFE_378_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8A42C0)
#define CLASS_1_5B567C8A01BAEDFE_378_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8A43B0)
#define CLASS_1_5B567C8A01BAEDFE_378_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8A4380)
#define CLASS_1_5B567C8A01BAEDFE_378_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E8A3FD0)
#define CLASS_1_5B567C8A01BAEDFE_378_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8A4000)
#define CLASS_1_5B567C8A01BAEDFE_378_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8A42F0)
#define CLASS_1_5B567C8A01BAEDFE_378_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8A4350)
#define CLASS_1_5B567C8A01BAEDFE_378__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8A4400)
#define CLASS_1_5B567C8A01BAEDFE_378__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8A4020)
#define CLASS_1_5B567C8A01BAEDFE_378__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8A4010)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_378_TypeDefinitionIndex = 34678;

class Class_1_5B567C8A01BAEDFE_378 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_378*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_378*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_378_TypeDefinitionIndex)->GetStaticField(0x244E0);
	}
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_378__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_378* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_378*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_378__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_378__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_378*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_378*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_378_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_378_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_378* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_378*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_378_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_378_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_378* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_378*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_378_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_378_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_378_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_378_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_378_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_378* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_378*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_378_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_378_MERGEFROM_1_OFFSET))(this, a1);
	}
};
