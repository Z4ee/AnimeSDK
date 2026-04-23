#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_149_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19A454E0)
#define CLASS_1_5B567C8A01BAEDFE_149_CLONE_OFFSET UNITYSDK_OFFSET(0x19A452F0)
#define CLASS_1_5B567C8A01BAEDFE_149_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19A453F0)
#define CLASS_1_5B567C8A01BAEDFE_149_EQUALS_OFFSET UNITYSDK_OFFSET(0x19A45360)
#define CLASS_1_5B567C8A01BAEDFE_149_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19A45440)
#define CLASS_1_5B567C8A01BAEDFE_149_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19A45530)
#define CLASS_1_5B567C8A01BAEDFE_149_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19A45500)
#define CLASS_1_5B567C8A01BAEDFE_149_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19A45240)
#define CLASS_1_5B567C8A01BAEDFE_149_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19A452A0)
#define CLASS_1_5B567C8A01BAEDFE_149_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19A45470)
#define CLASS_1_5B567C8A01BAEDFE_149_WRITETO_OFFSET UNITYSDK_OFFSET(0x19A454D0)
#define CLASS_1_5B567C8A01BAEDFE_149__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A45580)
#define CLASS_1_5B567C8A01BAEDFE_149__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19A452C0)
#define CLASS_1_5B567C8A01BAEDFE_149__CTOR_OFFSET UNITYSDK_OFFSET(0x19A452B0)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_149_TypeDefinitionIndex = 27786;

class Class_1_5B567C8A01BAEDFE_149 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_149*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_149*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_149_TypeDefinitionIndex)->GetStaticField(0x4CBD0);
	}
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_149__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_149* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_149*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_149__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_149__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_149*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_149*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_149_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_149_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_149* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_149*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_149_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_149_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_149* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_149*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_149_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_149_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_149_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_149_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_149_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_149* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_149*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_149_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_149_MERGEFROM_1_OFFSET))(this, a1);
	}
};
