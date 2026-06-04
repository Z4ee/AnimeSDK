#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_280_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A1561A0)
#define CLASS_1_5B567C8A01BAEDFE_280_CLONE_OFFSET UNITYSDK_OFFSET(0x1A155FB0)
#define CLASS_1_5B567C8A01BAEDFE_280_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A1560B0)
#define CLASS_1_5B567C8A01BAEDFE_280_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A156020)
#define CLASS_1_5B567C8A01BAEDFE_280_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A156100)
#define CLASS_1_5B567C8A01BAEDFE_280_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A1561F0)
#define CLASS_1_5B567C8A01BAEDFE_280_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A1561C0)
#define CLASS_1_5B567C8A01BAEDFE_280_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A155F00)
#define CLASS_1_5B567C8A01BAEDFE_280_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A155F60)
#define CLASS_1_5B567C8A01BAEDFE_280_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A156130)
#define CLASS_1_5B567C8A01BAEDFE_280_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A156190)
#define CLASS_1_5B567C8A01BAEDFE_280__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A156240)
#define CLASS_1_5B567C8A01BAEDFE_280__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A155F80)
#define CLASS_1_5B567C8A01BAEDFE_280__CTOR_OFFSET UNITYSDK_OFFSET(0x1A155F70)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_280_TypeDefinitionIndex = 30821;

class Class_1_5B567C8A01BAEDFE_280 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_280*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_280*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_280_TypeDefinitionIndex)->GetStaticField(0x2AEB0);
	}
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_280__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_280* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_280*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_280__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_280__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_280*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_280*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_280_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_280_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_280* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_280*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_280_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_280_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_280* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_280*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_280_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_280_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_280_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_280_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_280_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_280* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_280*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_280_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_280_MERGEFROM_1_OFFSET))(this, a1);
	}
};
