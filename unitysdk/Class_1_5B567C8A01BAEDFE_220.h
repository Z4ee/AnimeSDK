#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B567C8A01BAEDFE_220_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E208B70)
#define CLASS_1_5B567C8A01BAEDFE_220_CLONE_OFFSET UNITYSDK_OFFSET(0x1E208860)
#define CLASS_1_5B567C8A01BAEDFE_220_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E208970)
#define CLASS_1_5B567C8A01BAEDFE_220_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2088A0)
#define CLASS_1_5B567C8A01BAEDFE_220_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E208AD0)
#define CLASS_1_5B567C8A01BAEDFE_220_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E208BC0)
#define CLASS_1_5B567C8A01BAEDFE_220_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E208B90)
#define CLASS_1_5B567C8A01BAEDFE_220_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E2087E0)
#define CLASS_1_5B567C8A01BAEDFE_220_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E208810)
#define CLASS_1_5B567C8A01BAEDFE_220_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E208B00)
#define CLASS_1_5B567C8A01BAEDFE_220_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E208B60)
#define CLASS_1_5B567C8A01BAEDFE_220__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E208C10)
#define CLASS_1_5B567C8A01BAEDFE_220__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E208830)
#define CLASS_1_5B567C8A01BAEDFE_220__CTOR_OFFSET UNITYSDK_OFFSET(0x1E208820)

inline static constexpr unsigned int Class_1_5B567C8A01BAEDFE_220_TypeDefinitionIndex = 30615;

class Class_1_5B567C8A01BAEDFE_220 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_220*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_220*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B567C8A01BAEDFE_220_TypeDefinitionIndex)->GetStaticField(0x38DE0);
	}
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_220__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B567C8A01BAEDFE_220* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_220*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_220__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_220__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_220*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B567C8A01BAEDFE_220*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_220_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_220_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B567C8A01BAEDFE_220* Clone()
	{
		return ((::Class_1_5B567C8A01BAEDFE_220*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_220_CLONE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_220_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B567C8A01BAEDFE_220* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_220*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_220_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_220_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_220_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_220_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_220_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B567C8A01BAEDFE_220* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B567C8A01BAEDFE_220*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_220_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B567C8A01BAEDFE_220_MERGEFROM_1_OFFSET))(this, a1);
	}
};
