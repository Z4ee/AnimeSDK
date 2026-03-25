#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1A263F5BDD91B9DA_2_Enum_3_FCBB2C507E9B21A3_27.h"
#include "unitysdk/System/Object.h"

class Class_1_17E47FA34B8BD544;
class Class_1_488D31B1CD89BDB4;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_1A263F5BDD91B9DA_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17DDB680)
#define CLASS_1_1A263F5BDD91B9DA_2_CLONE_OFFSET UNITYSDK_OFFSET(0x17DDB0E0)
#define CLASS_1_1A263F5BDD91B9DA_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17DDB1B0)
#define CLASS_1_1A263F5BDD91B9DA_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x17DDB150)
#define CLASS_1_1A263F5BDD91B9DA_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17DDB3E0)
#define CLASS_1_1A263F5BDD91B9DA_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17DDBAA0)
#define CLASS_1_1A263F5BDD91B9DA_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17DDB7E0)
#define CLASS_1_1A263F5BDD91B9DA_2_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x17DDB130)
#define CLASS_1_1A263F5BDD91B9DA_2_METHOD_1_358A144584A5DBFC_1_OFFSET UNITYSDK_OFFSET(0x17DDB060)
#define CLASS_1_1A263F5BDD91B9DA_2_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x17DDAFE0)
#define CLASS_1_1A263F5BDD91B9DA_2_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x17DDB140)
#define CLASS_1_1A263F5BDD91B9DA_2_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x17DDB0C0)
#define CLASS_1_1A263F5BDD91B9DA_2_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17DDB040)
#define CLASS_1_1A263F5BDD91B9DA_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17DDAE70)
#define CLASS_1_1A263F5BDD91B9DA_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17DDB500)
#define CLASS_1_1A263F5BDD91B9DA_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x17DDB560)
#define CLASS_1_1A263F5BDD91B9DA_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17DDAE90)
#define CLASS_1_1A263F5BDD91B9DA_2__CTOR_OFFSET UNITYSDK_OFFSET(0x17DDAE80)

inline static constexpr unsigned int Class_1_1A263F5BDD91B9DA_2_TypeDefinitionIndex = 26029;

class Class_1_1A263F5BDD91B9DA_2 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x368; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x373; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::Object* Field_1_3; // 0x18
	::Class_1_1A263F5BDD91B9DA_2_Enum_3_FCBB2C507E9B21A3_27 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A263F5BDD91B9DA_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_1A263F5BDD91B9DA_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1A263F5BDD91B9DA_2*))((::PBYTE)hIl2Cpp + CLASS_1_1A263F5BDD91B9DA_2__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A263F5BDD91B9DA_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_1A263F5BDD91B9DA_2* Clone()
	{
		return ((::Class_1_1A263F5BDD91B9DA_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A263F5BDD91B9DA_2_CLONE_OFFSET))(this);
	}

	::Class_1_488D31B1CD89BDB4* Method_1_358A144584A5DBFC()
	{
		return ((::Class_1_488D31B1CD89BDB4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A263F5BDD91B9DA_2_METHOD_1_358A144584A5DBFC_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_488D31B1CD89BDB4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_488D31B1CD89BDB4*))((::PBYTE)hIl2Cpp + CLASS_1_1A263F5BDD91B9DA_2_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_17E47FA34B8BD544* Method_1_358A144584A5DBFC_1()
	{
		return ((::Class_1_17E47FA34B8BD544*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A263F5BDD91B9DA_2_METHOD_1_358A144584A5DBFC_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_17E47FA34B8BD544* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_17E47FA34B8BD544*))((::PBYTE)hIl2Cpp + CLASS_1_1A263F5BDD91B9DA_2_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Class_1_1A263F5BDD91B9DA_2_Enum_3_FCBB2C507E9B21A3_27 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_1A263F5BDD91B9DA_2_Enum_3_FCBB2C507E9B21A3_27(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A263F5BDD91B9DA_2_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A263F5BDD91B9DA_2_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1A263F5BDD91B9DA_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1A263F5BDD91B9DA_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1A263F5BDD91B9DA_2*))((::PBYTE)hIl2Cpp + CLASS_1_1A263F5BDD91B9DA_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A263F5BDD91B9DA_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A263F5BDD91B9DA_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1A263F5BDD91B9DA_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A263F5BDD91B9DA_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_1A263F5BDD91B9DA_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1A263F5BDD91B9DA_2*))((::PBYTE)hIl2Cpp + CLASS_1_1A263F5BDD91B9DA_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1A263F5BDD91B9DA_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
