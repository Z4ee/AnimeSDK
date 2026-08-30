#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_76_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1D879F00)
#define CLASS_1_5B567C8A01BAEDFE_76_CLONE_OFFSET UNITYSDK_OFFSET(0x1D879BF0)
#define CLASS_1_5B567C8A01BAEDFE_76_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D879D00)
#define CLASS_1_5B567C8A01BAEDFE_76_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D879C30)
#define CLASS_1_5B567C8A01BAEDFE_76_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D879E60)
#define CLASS_1_5B567C8A01BAEDFE_76_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1D879F50)
#define CLASS_1_5B567C8A01BAEDFE_76_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1D879F20)
#define CLASS_1_5B567C8A01BAEDFE_76_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1D879B70)
#define CLASS_1_5B567C8A01BAEDFE_76_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1D879BA0)
#define CLASS_1_5B567C8A01BAEDFE_76_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D879E90)
#define CLASS_1_5B567C8A01BAEDFE_76_WRITETO_OFFSET UNITYSDK_OFFSET(0x1D879EF0)
#define CLASS_1_5B567C8A01BAEDFE_76__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D879FA0)
#define CLASS_1_5B567C8A01BAEDFE_76__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D879BC0)
#define CLASS_1_5B567C8A01BAEDFE_76__CTOR_OFFSET UNITYSDK_OFFSET(0x1D879BB0)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_76_TypeDefinitionIndex = 26955;

class Class_1_5B567C8A01BAEDFE_76 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_76*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_76*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_76_TypeDefinitionIndex)->GetStaticField(0x3C370);
	}
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_76__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_76* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_76*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_76__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_76__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_76*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_76*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_76_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_76_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_76* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_76*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_76_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_76_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_76* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_76*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_76_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_76_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_76_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_76_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_76_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_76* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_76*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_76_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_76_MERGEFROM_1_OFFSET))(this, a1);
	}
};
