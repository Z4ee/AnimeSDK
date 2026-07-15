#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_92_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CBB3FD0)
#define CLASS_1_5B567C8A01BAEDFE_92_CLONE_OFFSET UNITYSDK_OFFSET(0x1CBB3CC0)
#define CLASS_1_5B567C8A01BAEDFE_92_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CBB3DD0)
#define CLASS_1_5B567C8A01BAEDFE_92_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CBB3D00)
#define CLASS_1_5B567C8A01BAEDFE_92_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CBB3F30)
#define CLASS_1_5B567C8A01BAEDFE_92_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CBB4020)
#define CLASS_1_5B567C8A01BAEDFE_92_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CBB3FF0)
#define CLASS_1_5B567C8A01BAEDFE_92_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CBB3C40)
#define CLASS_1_5B567C8A01BAEDFE_92_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CBB3C70)
#define CLASS_1_5B567C8A01BAEDFE_92_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CBB3F60)
#define CLASS_1_5B567C8A01BAEDFE_92_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CBB3FC0)
#define CLASS_1_5B567C8A01BAEDFE_92__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CBB4070)
#define CLASS_1_5B567C8A01BAEDFE_92__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CBB3C90)
#define CLASS_1_5B567C8A01BAEDFE_92__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBB3C80)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_92_TypeDefinitionIndex = 26682;

class Class_1_5B567C8A01BAEDFE_92 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_92*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_92*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_92_TypeDefinitionIndex)->GetStaticField(0x5F5F0);
	}
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_92__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_92* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_92*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_92__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_92__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_92*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_92*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_92_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_92_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_92* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_92*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_92_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_92_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_92* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_92*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_92_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_92_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_92_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_92_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_92_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_92* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_92*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_92_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_92_MERGEFROM_1_OFFSET))(this, a1);
	}
};
