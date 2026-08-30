#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_227_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFB6ED0)
#define CLASS_1_5B567C8A01BAEDFE_227_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFB6BC0)
#define CLASS_1_5B567C8A01BAEDFE_227_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFB6CD0)
#define CLASS_1_5B567C8A01BAEDFE_227_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFB6C00)
#define CLASS_1_5B567C8A01BAEDFE_227_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFB6E30)
#define CLASS_1_5B567C8A01BAEDFE_227_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFB6F20)
#define CLASS_1_5B567C8A01BAEDFE_227_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFB6EF0)
#define CLASS_1_5B567C8A01BAEDFE_227_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1DFB6B40)
#define CLASS_1_5B567C8A01BAEDFE_227_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFB6B70)
#define CLASS_1_5B567C8A01BAEDFE_227_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFB6E60)
#define CLASS_1_5B567C8A01BAEDFE_227_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFB6EC0)
#define CLASS_1_5B567C8A01BAEDFE_227__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFB6F70)
#define CLASS_1_5B567C8A01BAEDFE_227__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFB6B90)
#define CLASS_1_5B567C8A01BAEDFE_227__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFB6B80)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_227_TypeDefinitionIndex = 30678;

class Class_1_5B567C8A01BAEDFE_227 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_227*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_227*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_227_TypeDefinitionIndex)->GetStaticField(0x5AA00);
	}
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_227__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_227* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_227*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_227__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_227__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_227*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_227*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_227_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_227_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_227* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_227*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_227_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_227_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_227* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_227*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_227_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_227_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_227_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_227_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_227_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_227* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_227*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_227_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_227_MERGEFROM_1_OFFSET))(this, a1);
	}
};
