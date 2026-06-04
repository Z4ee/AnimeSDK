#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_196_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A110A20)
#define CLASS_1_5B567C8A01BAEDFE_196_CLONE_OFFSET UNITYSDK_OFFSET(0x1A110890)
#define CLASS_1_5B567C8A01BAEDFE_196_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A110930)
#define CLASS_1_5B567C8A01BAEDFE_196_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A1108D0)
#define CLASS_1_5B567C8A01BAEDFE_196_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A110980)
#define CLASS_1_5B567C8A01BAEDFE_196_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A110A70)
#define CLASS_1_5B567C8A01BAEDFE_196_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A110A40)
#define CLASS_1_5B567C8A01BAEDFE_196_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A110810)
#define CLASS_1_5B567C8A01BAEDFE_196_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A110840)
#define CLASS_1_5B567C8A01BAEDFE_196_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A1109B0)
#define CLASS_1_5B567C8A01BAEDFE_196_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A110A10)
#define CLASS_1_5B567C8A01BAEDFE_196__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A110AC0)
#define CLASS_1_5B567C8A01BAEDFE_196__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A110860)
#define CLASS_1_5B567C8A01BAEDFE_196__CTOR_OFFSET UNITYSDK_OFFSET(0x1A110850)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_196_TypeDefinitionIndex = 28785;

class Class_1_5B567C8A01BAEDFE_196 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_196*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_196*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_196_TypeDefinitionIndex)->GetStaticField(0x27DE0);
	}
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_196__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_196* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_196*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_196__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_196__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_196*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_196*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_196_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_196_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_196* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_196*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_196_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_196_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_196* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_196*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_196_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_196_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_196_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_196_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_196_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_196* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_196*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_196_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_196_MERGEFROM_1_OFFSET))(this, a1);
	}
};
