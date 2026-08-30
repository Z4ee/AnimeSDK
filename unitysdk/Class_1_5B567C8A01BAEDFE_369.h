#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_369_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E60CEA0)
#define CLASS_1_5B567C8A01BAEDFE_369_CLONE_OFFSET UNITYSDK_OFFSET(0x1E60CB90)
#define CLASS_1_5B567C8A01BAEDFE_369_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E60CCA0)
#define CLASS_1_5B567C8A01BAEDFE_369_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E60CBD0)
#define CLASS_1_5B567C8A01BAEDFE_369_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E60CE00)
#define CLASS_1_5B567C8A01BAEDFE_369_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E60CEF0)
#define CLASS_1_5B567C8A01BAEDFE_369_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E60CEC0)
#define CLASS_1_5B567C8A01BAEDFE_369_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E60CB10)
#define CLASS_1_5B567C8A01BAEDFE_369_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E60CB40)
#define CLASS_1_5B567C8A01BAEDFE_369_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E60CE30)
#define CLASS_1_5B567C8A01BAEDFE_369_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E60CE90)
#define CLASS_1_5B567C8A01BAEDFE_369__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E60CF40)
#define CLASS_1_5B567C8A01BAEDFE_369__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E60CB60)
#define CLASS_1_5B567C8A01BAEDFE_369__CTOR_OFFSET UNITYSDK_OFFSET(0x1E60CB50)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_369_TypeDefinitionIndex = 34274;

class Class_1_5B567C8A01BAEDFE_369 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_369*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_369*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_369_TypeDefinitionIndex)->GetStaticField(0x317D0);
	}
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_369__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_369* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_369*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_369__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_369__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_369*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_369*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_369_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_369_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_369* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_369*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_369_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_369_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_369* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_369*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_369_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_369_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_369_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_369_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_369_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_369* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_369*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_369_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_369_MERGEFROM_1_OFFSET))(this, a1);
	}
};
