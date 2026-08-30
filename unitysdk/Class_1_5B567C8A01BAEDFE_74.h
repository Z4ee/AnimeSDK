#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_74_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1ECDD250)
#define CLASS_1_5B567C8A01BAEDFE_74_CLONE_OFFSET UNITYSDK_OFFSET(0x1ECDCF40)
#define CLASS_1_5B567C8A01BAEDFE_74_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1ECDD050)
#define CLASS_1_5B567C8A01BAEDFE_74_EQUALS_OFFSET UNITYSDK_OFFSET(0x1ECDCF80)
#define CLASS_1_5B567C8A01BAEDFE_74_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1ECDD1B0)
#define CLASS_1_5B567C8A01BAEDFE_74_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1ECDD2A0)
#define CLASS_1_5B567C8A01BAEDFE_74_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1ECDD270)
#define CLASS_1_5B567C8A01BAEDFE_74_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1ECDCEC0)
#define CLASS_1_5B567C8A01BAEDFE_74_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1ECDCEF0)
#define CLASS_1_5B567C8A01BAEDFE_74_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1ECDD1E0)
#define CLASS_1_5B567C8A01BAEDFE_74_WRITETO_OFFSET UNITYSDK_OFFSET(0x1ECDD240)
#define CLASS_1_5B567C8A01BAEDFE_74__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ECDD2F0)
#define CLASS_1_5B567C8A01BAEDFE_74__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ECDCF10)
#define CLASS_1_5B567C8A01BAEDFE_74__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECDCF00)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_74_TypeDefinitionIndex = 26925;

class Class_1_5B567C8A01BAEDFE_74 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_74*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_74*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_74_TypeDefinitionIndex)->GetStaticField(0x619C0);
	}
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_74__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_74* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_74*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_74__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_74__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_74*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_74*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_74_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_74_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_74* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_74*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_74_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_74_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_74* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_74*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_74_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_74_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_74_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_74_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_74_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_74* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_74*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_74_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_74_MERGEFROM_1_OFFSET))(this, a1);
	}
};
