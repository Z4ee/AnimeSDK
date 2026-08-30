#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_65_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E07DC70)
#define CLASS_1_5B567C8A01BAEDFE_65_CLONE_OFFSET UNITYSDK_OFFSET(0x1E07D960)
#define CLASS_1_5B567C8A01BAEDFE_65_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E07DA70)
#define CLASS_1_5B567C8A01BAEDFE_65_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E07D9A0)
#define CLASS_1_5B567C8A01BAEDFE_65_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E07DBD0)
#define CLASS_1_5B567C8A01BAEDFE_65_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E07DCC0)
#define CLASS_1_5B567C8A01BAEDFE_65_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E07DC90)
#define CLASS_1_5B567C8A01BAEDFE_65_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E07D8E0)
#define CLASS_1_5B567C8A01BAEDFE_65_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E07D910)
#define CLASS_1_5B567C8A01BAEDFE_65_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E07DC00)
#define CLASS_1_5B567C8A01BAEDFE_65_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E07DC60)
#define CLASS_1_5B567C8A01BAEDFE_65__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E07DD10)
#define CLASS_1_5B567C8A01BAEDFE_65__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E07D930)
#define CLASS_1_5B567C8A01BAEDFE_65__CTOR_OFFSET UNITYSDK_OFFSET(0x1E07D920)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_65_TypeDefinitionIndex = 26716;

class Class_1_5B567C8A01BAEDFE_65 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_65*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_65*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_65_TypeDefinitionIndex)->GetStaticField(0x80A0);
	}
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_65__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_65* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_65*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_65__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_65__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_65*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_65*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_65_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_65_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_65* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_65*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_65_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_65_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_65* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_65*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_65_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_65_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_65_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_65_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_65_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_65* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_65*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_65_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_65_MERGEFROM_1_OFFSET))(this, a1);
	}
};
