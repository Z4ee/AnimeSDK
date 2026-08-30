#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_63_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4CC1F0)
#define CLASS_1_5B567C8A01BAEDFE_63_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4CBE90)
#define CLASS_1_5B567C8A01BAEDFE_63_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4CBFF0)
#define CLASS_1_5B567C8A01BAEDFE_63_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4CBF00)
#define CLASS_1_5B567C8A01BAEDFE_63_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4CC150)
#define CLASS_1_5B567C8A01BAEDFE_63_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4CC240)
#define CLASS_1_5B567C8A01BAEDFE_63_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4CC210)
#define CLASS_1_5B567C8A01BAEDFE_63_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E4CBDE0)
#define CLASS_1_5B567C8A01BAEDFE_63_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4CBE40)
#define CLASS_1_5B567C8A01BAEDFE_63_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4CC180)
#define CLASS_1_5B567C8A01BAEDFE_63_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4CC1E0)
#define CLASS_1_5B567C8A01BAEDFE_63__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4CC290)
#define CLASS_1_5B567C8A01BAEDFE_63__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4CBE60)
#define CLASS_1_5B567C8A01BAEDFE_63__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4CBE50)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_63_TypeDefinitionIndex = 26682;

class Class_1_5B567C8A01BAEDFE_63 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_63*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_63*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_63_TypeDefinitionIndex)->GetStaticField(0xBA50);
	}
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_63__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_63* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_63*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_63__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_63__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_63*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_63*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_63_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_63_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_63* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_63*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_63_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_63_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_63* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_63*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_63_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_63_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_63_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_63_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_63_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_63* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_63*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_63_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_63_MERGEFROM_1_OFFSET))(this, a1);
	}
};
