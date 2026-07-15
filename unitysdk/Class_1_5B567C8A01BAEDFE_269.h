#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_269_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CDD9310)
#define CLASS_1_5B567C8A01BAEDFE_269_CLONE_OFFSET UNITYSDK_OFFSET(0x1CDD9000)
#define CLASS_1_5B567C8A01BAEDFE_269_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CDD9110)
#define CLASS_1_5B567C8A01BAEDFE_269_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CDD9040)
#define CLASS_1_5B567C8A01BAEDFE_269_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CDD9270)
#define CLASS_1_5B567C8A01BAEDFE_269_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CDD9360)
#define CLASS_1_5B567C8A01BAEDFE_269_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CDD9330)
#define CLASS_1_5B567C8A01BAEDFE_269_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CDD8F80)
#define CLASS_1_5B567C8A01BAEDFE_269_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CDD8FB0)
#define CLASS_1_5B567C8A01BAEDFE_269_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CDD92A0)
#define CLASS_1_5B567C8A01BAEDFE_269_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CDD9300)
#define CLASS_1_5B567C8A01BAEDFE_269__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDD93B0)
#define CLASS_1_5B567C8A01BAEDFE_269__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CDD8FD0)
#define CLASS_1_5B567C8A01BAEDFE_269__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDD8FC0)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_269_TypeDefinitionIndex = 30943;

class Class_1_5B567C8A01BAEDFE_269 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_269*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_269*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_269_TypeDefinitionIndex)->GetStaticField(0x56A00);
	}
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_269__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_269* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_269*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_269__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_269__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_269*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_269*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_269_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_269_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_269* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_269*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_269_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_269_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_269* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_269*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_269_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_269_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_269_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_269_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_269_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_269* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_269*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_269_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_269_MERGEFROM_1_OFFSET))(this, a1);
	}
};
