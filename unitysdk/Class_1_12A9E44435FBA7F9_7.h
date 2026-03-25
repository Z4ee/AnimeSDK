#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EF2D3B79941AF6F8_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_12A9E44435FBA7F9_7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18205910)
#define CLASS_1_12A9E44435FBA7F9_7_CLONE_OFFSET UNITYSDK_OFFSET(0x18205610)
#define CLASS_1_12A9E44435FBA7F9_7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18205760)
#define CLASS_1_12A9E44435FBA7F9_7_EQUALS_OFFSET UNITYSDK_OFFSET(0x182056B0)
#define CLASS_1_12A9E44435FBA7F9_7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18205800)
#define CLASS_1_12A9E44435FBA7F9_7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x182059E0)
#define CLASS_1_12A9E44435FBA7F9_7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18205970)
#define CLASS_1_12A9E44435FBA7F9_7_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x18205690)
#define CLASS_1_12A9E44435FBA7F9_7_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x182056A0)
#define CLASS_1_12A9E44435FBA7F9_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18205580)
#define CLASS_1_12A9E44435FBA7F9_7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18205850)
#define CLASS_1_12A9E44435FBA7F9_7_WRITETO_OFFSET UNITYSDK_OFFSET(0x182058B0)
#define CLASS_1_12A9E44435FBA7F9_7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x182055A0)
#define CLASS_1_12A9E44435FBA7F9_7__CTOR_OFFSET UNITYSDK_OFFSET(0x18205590)

inline static constexpr unsigned int Class_1_12A9E44435FBA7F9_7_TypeDefinitionIndex = 26581;

class Class_1_12A9E44435FBA7F9_7 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x5; // 0x0
	::Class_1_EF2D3B79941AF6F8_2* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_12A9E44435FBA7F9_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_12A9E44435FBA7F9_7*))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_7__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_12A9E44435FBA7F9_7* Clone()
	{
		return ((::Class_1_12A9E44435FBA7F9_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_7_CLONE_OFFSET))(this);
	}

	::Class_1_EF2D3B79941AF6F8_2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_EF2D3B79941AF6F8_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_7_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_EF2D3B79941AF6F8_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EF2D3B79941AF6F8_2*))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_7_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_12A9E44435FBA7F9_7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_12A9E44435FBA7F9_7*))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_12A9E44435FBA7F9_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_12A9E44435FBA7F9_7*))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_12A9E44435FBA7F9_7_MERGEFROM_1_OFFSET))(this, a1);
	}
};
