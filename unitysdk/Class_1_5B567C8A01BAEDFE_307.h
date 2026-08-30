#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_307_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDB3590)
#define CLASS_1_5B567C8A01BAEDFE_307_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDB3280)
#define CLASS_1_5B567C8A01BAEDFE_307_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDB3390)
#define CLASS_1_5B567C8A01BAEDFE_307_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDB32C0)
#define CLASS_1_5B567C8A01BAEDFE_307_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDB34F0)
#define CLASS_1_5B567C8A01BAEDFE_307_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDB35E0)
#define CLASS_1_5B567C8A01BAEDFE_307_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDB35B0)
#define CLASS_1_5B567C8A01BAEDFE_307_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1DDB3200)
#define CLASS_1_5B567C8A01BAEDFE_307_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDB3230)
#define CLASS_1_5B567C8A01BAEDFE_307_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDB3520)
#define CLASS_1_5B567C8A01BAEDFE_307_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDB3580)
#define CLASS_1_5B567C8A01BAEDFE_307__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDB3630)
#define CLASS_1_5B567C8A01BAEDFE_307__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDB3250)
#define CLASS_1_5B567C8A01BAEDFE_307__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDB3240)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_307_TypeDefinitionIndex = 32818;

class Class_1_5B567C8A01BAEDFE_307 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_307*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_307*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_307_TypeDefinitionIndex)->GetStaticField(0x1BF10);
	}
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_307__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_307* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_307*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_307__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_307__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_307*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_307*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_307_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_307_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_307* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_307*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_307_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_307_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_307* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_307*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_307_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_307_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_307_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_307_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_307_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_307* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_307*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_307_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_307_MERGEFROM_1_OFFSET))(this, a1);
	}
};
