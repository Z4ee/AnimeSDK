#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EBB10EC01CCC4716_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_B8B7AE2DAD90AA4E_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17F95020)
#define CLASS_1_B8B7AE2DAD90AA4E_CLONE_OFFSET UNITYSDK_OFFSET(0x17F94AD0)
#define CLASS_1_B8B7AE2DAD90AA4E_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17F94D90)
#define CLASS_1_B8B7AE2DAD90AA4E_EQUALS_OFFSET UNITYSDK_OFFSET(0x17F94C90)
#define CLASS_1_B8B7AE2DAD90AA4E_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17F94E60)
#define CLASS_1_B8B7AE2DAD90AA4E_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17F95250)
#define CLASS_1_B8B7AE2DAD90AA4E_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17F95170)
#define CLASS_1_B8B7AE2DAD90AA4E_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x17F94BF0)
#define CLASS_1_B8B7AE2DAD90AA4E_METHOD_1_1D3C8F680A3EDA34_OFFSET UNITYSDK_OFFSET(0x17F94C00)
#define CLASS_1_B8B7AE2DAD90AA4E_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17F94C70)
#define CLASS_1_B8B7AE2DAD90AA4E_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17F94C80)
#define CLASS_1_B8B7AE2DAD90AA4E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17F949C0)
#define CLASS_1_B8B7AE2DAD90AA4E_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17F94F30)
#define CLASS_1_B8B7AE2DAD90AA4E_WRITETO_OFFSET UNITYSDK_OFFSET(0x17F94F90)
#define CLASS_1_B8B7AE2DAD90AA4E__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17F949E0)
#define CLASS_1_B8B7AE2DAD90AA4E__CTOR_OFFSET UNITYSDK_OFFSET(0x17F949D0)

inline static constexpr unsigned int Class_1_B8B7AE2DAD90AA4E_TypeDefinitionIndex = 22993;

class Class_1_B8B7AE2DAD90AA4E : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	::System::String* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Class_1_EBB10EC01CCC4716_1* Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8B7AE2DAD90AA4E__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_B8B7AE2DAD90AA4E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B8B7AE2DAD90AA4E*))((::PBYTE)hIl2Cpp + CLASS_1_B8B7AE2DAD90AA4E__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8B7AE2DAD90AA4E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_B8B7AE2DAD90AA4E* Clone()
	{
		return ((::Class_1_B8B7AE2DAD90AA4E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8B7AE2DAD90AA4E_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8B7AE2DAD90AA4E_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B8B7AE2DAD90AA4E_METHOD_1_1D3C8F680A3EDA34_OFFSET))(this, a1);
	}

	::Class_1_EBB10EC01CCC4716_1* Method_1_24748FC20F375725()
	{
		return ((::Class_1_EBB10EC01CCC4716_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8B7AE2DAD90AA4E_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_EBB10EC01CCC4716_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_1*))((::PBYTE)hIl2Cpp + CLASS_1_B8B7AE2DAD90AA4E_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B8B7AE2DAD90AA4E_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_B8B7AE2DAD90AA4E* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B8B7AE2DAD90AA4E*))((::PBYTE)hIl2Cpp + CLASS_1_B8B7AE2DAD90AA4E_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8B7AE2DAD90AA4E_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8B7AE2DAD90AA4E_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B8B7AE2DAD90AA4E_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8B7AE2DAD90AA4E_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_B8B7AE2DAD90AA4E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B8B7AE2DAD90AA4E*))((::PBYTE)hIl2Cpp + CLASS_1_B8B7AE2DAD90AA4E_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B8B7AE2DAD90AA4E_MERGEFROM_1_OFFSET))(this, a1);
	}
};
