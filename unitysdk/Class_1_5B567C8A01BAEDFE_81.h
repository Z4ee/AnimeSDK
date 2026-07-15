#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_81_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CFD62D0)
#define CLASS_1_5B567C8A01BAEDFE_81_CLONE_OFFSET UNITYSDK_OFFSET(0x1CFD5FC0)
#define CLASS_1_5B567C8A01BAEDFE_81_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CFD60D0)
#define CLASS_1_5B567C8A01BAEDFE_81_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CFD6000)
#define CLASS_1_5B567C8A01BAEDFE_81_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CFD6230)
#define CLASS_1_5B567C8A01BAEDFE_81_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CFD6320)
#define CLASS_1_5B567C8A01BAEDFE_81_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CFD62F0)
#define CLASS_1_5B567C8A01BAEDFE_81_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CFD5F40)
#define CLASS_1_5B567C8A01BAEDFE_81_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CFD5F70)
#define CLASS_1_5B567C8A01BAEDFE_81_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CFD6260)
#define CLASS_1_5B567C8A01BAEDFE_81_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CFD62C0)
#define CLASS_1_5B567C8A01BAEDFE_81__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CFD6370)
#define CLASS_1_5B567C8A01BAEDFE_81__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CFD5F90)
#define CLASS_1_5B567C8A01BAEDFE_81__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFD5F80)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_81_TypeDefinitionIndex = 26422;

class Class_1_5B567C8A01BAEDFE_81 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_81*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_81*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_81_TypeDefinitionIndex)->GetStaticField(0x49A90);
	}
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_81__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_81* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_81*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_81__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_81__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_81*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_81*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_81_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_81_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_81* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_81*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_81_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_81_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_81* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_81*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_81_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_81_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_81_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_81_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_81_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_81* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_81*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_81_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_81_MERGEFROM_1_OFFSET))(this, a1);
	}
};
