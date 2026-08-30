#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_125_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1ED1E2E0)
#define CLASS_1_5B567C8A01BAEDFE_125_CLONE_OFFSET UNITYSDK_OFFSET(0x1ED1DFD0)
#define CLASS_1_5B567C8A01BAEDFE_125_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1ED1E0E0)
#define CLASS_1_5B567C8A01BAEDFE_125_EQUALS_OFFSET UNITYSDK_OFFSET(0x1ED1E010)
#define CLASS_1_5B567C8A01BAEDFE_125_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1ED1E240)
#define CLASS_1_5B567C8A01BAEDFE_125_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1ED1E330)
#define CLASS_1_5B567C8A01BAEDFE_125_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1ED1E300)
#define CLASS_1_5B567C8A01BAEDFE_125_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1ED1DF50)
#define CLASS_1_5B567C8A01BAEDFE_125_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1ED1DF80)
#define CLASS_1_5B567C8A01BAEDFE_125_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1ED1E270)
#define CLASS_1_5B567C8A01BAEDFE_125_WRITETO_OFFSET UNITYSDK_OFFSET(0x1ED1E2D0)
#define CLASS_1_5B567C8A01BAEDFE_125__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ED1E380)
#define CLASS_1_5B567C8A01BAEDFE_125__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ED1DFA0)
#define CLASS_1_5B567C8A01BAEDFE_125__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED1DF90)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_125_TypeDefinitionIndex = 28147;

class Class_1_5B567C8A01BAEDFE_125 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_125*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_125*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_125_TypeDefinitionIndex)->GetStaticField(0x1FED0);
	}
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_125__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_125* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_125*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_125__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_125__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_125*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_125*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_125_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_125_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_125* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_125*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_125_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_125_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_125* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_125*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_125_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_125_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_125_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_125_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_125_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_125* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_125*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_125_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_125_MERGEFROM_1_OFFSET))(this, a1);
	}
};
