#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_44_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1952C060)
#define CLASS_1_5B567C8A01BAEDFE_44_CLONE_OFFSET UNITYSDK_OFFSET(0x1952BE70)
#define CLASS_1_5B567C8A01BAEDFE_44_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1952BF70)
#define CLASS_1_5B567C8A01BAEDFE_44_EQUALS_OFFSET UNITYSDK_OFFSET(0x1952BEE0)
#define CLASS_1_5B567C8A01BAEDFE_44_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1952BFC0)
#define CLASS_1_5B567C8A01BAEDFE_44_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1952C0B0)
#define CLASS_1_5B567C8A01BAEDFE_44_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1952C080)
#define CLASS_1_5B567C8A01BAEDFE_44_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1952BDC0)
#define CLASS_1_5B567C8A01BAEDFE_44_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1952BE20)
#define CLASS_1_5B567C8A01BAEDFE_44_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1952BFF0)
#define CLASS_1_5B567C8A01BAEDFE_44_WRITETO_OFFSET UNITYSDK_OFFSET(0x1952C050)
#define CLASS_1_5B567C8A01BAEDFE_44__CCTOR_OFFSET UNITYSDK_OFFSET(0x1952C100)
#define CLASS_1_5B567C8A01BAEDFE_44__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1952BE40)
#define CLASS_1_5B567C8A01BAEDFE_44__CTOR_OFFSET UNITYSDK_OFFSET(0x1952BE30)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_44_TypeDefinitionIndex = 25362;

class Class_1_5B567C8A01BAEDFE_44 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_44*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_44*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_44_TypeDefinitionIndex)->GetStaticField(0x46E40);
	}
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_44__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_44* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_44*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_44__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_44__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_44*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_44*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_44_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_44_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_44* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_44*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_44_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_44_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_44* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_44*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_44_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_44_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_44_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_44_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_44_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_44* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_44*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_44_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_44_MERGEFROM_1_OFFSET))(this, a1);
	}
};
