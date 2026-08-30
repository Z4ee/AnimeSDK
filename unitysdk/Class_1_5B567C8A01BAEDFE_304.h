#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_304_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E123CE0)
#define CLASS_1_5B567C8A01BAEDFE_304_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1239D0)
#define CLASS_1_5B567C8A01BAEDFE_304_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E123AE0)
#define CLASS_1_5B567C8A01BAEDFE_304_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E123A10)
#define CLASS_1_5B567C8A01BAEDFE_304_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E123C40)
#define CLASS_1_5B567C8A01BAEDFE_304_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E123D30)
#define CLASS_1_5B567C8A01BAEDFE_304_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E123D00)
#define CLASS_1_5B567C8A01BAEDFE_304_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E123950)
#define CLASS_1_5B567C8A01BAEDFE_304_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E123980)
#define CLASS_1_5B567C8A01BAEDFE_304_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E123C70)
#define CLASS_1_5B567C8A01BAEDFE_304_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E123CD0)
#define CLASS_1_5B567C8A01BAEDFE_304__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E123D80)
#define CLASS_1_5B567C8A01BAEDFE_304__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1239A0)
#define CLASS_1_5B567C8A01BAEDFE_304__CTOR_OFFSET UNITYSDK_OFFSET(0x1E123990)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_304_TypeDefinitionIndex = 32628;

class Class_1_5B567C8A01BAEDFE_304 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_304*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_304*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_304_TypeDefinitionIndex)->GetStaticField(0x5A190);
	}
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_304__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_304* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_304*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_304__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_304__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_304*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_304*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_304_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_304_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_304* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_304*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_304_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_304_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_304* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_304*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_304_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_304_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_304_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_304_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_304_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_304* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_304*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_304_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_304_MERGEFROM_1_OFFSET))(this, a1);
	}
};
