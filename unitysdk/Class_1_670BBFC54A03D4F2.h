#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_670BBFC54A03D4F2_Enum_3_2E741879C8CDBAFC_10.h"
#include "unitysdk/System/Object.h"

class Class_1_6D16597294F5284D_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_670BBFC54A03D4F2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18181EA0)
#define CLASS_1_670BBFC54A03D4F2_CLONE_OFFSET UNITYSDK_OFFSET(0x18181A90)
#define CLASS_1_670BBFC54A03D4F2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18181B80)
#define CLASS_1_670BBFC54A03D4F2_EQUALS_OFFSET UNITYSDK_OFFSET(0x18181B20)
#define CLASS_1_670BBFC54A03D4F2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18181CE0)
#define CLASS_1_670BBFC54A03D4F2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18182110)
#define CLASS_1_670BBFC54A03D4F2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18181F50)
#define CLASS_1_670BBFC54A03D4F2_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x18181B00)
#define CLASS_1_670BBFC54A03D4F2_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x18181A10)
#define CLASS_1_670BBFC54A03D4F2_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x18181B10)
#define CLASS_1_670BBFC54A03D4F2_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x18181A70)
#define CLASS_1_670BBFC54A03D4F2_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x18181AF0)
#define CLASS_1_670BBFC54A03D4F2_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x18181AE0)
#define CLASS_1_670BBFC54A03D4F2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18181910)
#define CLASS_1_670BBFC54A03D4F2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18181D70)
#define CLASS_1_670BBFC54A03D4F2_WRITETO_OFFSET UNITYSDK_OFFSET(0x18181DD0)
#define CLASS_1_670BBFC54A03D4F2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18181930)
#define CLASS_1_670BBFC54A03D4F2__CTOR_OFFSET UNITYSDK_OFFSET(0x18181920)

inline static constexpr unsigned int Class_1_670BBFC54A03D4F2_TypeDefinitionIndex = 24760;

class Class_1_670BBFC54A03D4F2 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x643; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	::System::Object* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Class_1_670BBFC54A03D4F2_Enum_3_2E741879C8CDBAFC_10 Field_1_5; // 0x20
	::System::Boolean Field_1_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_670BBFC54A03D4F2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_670BBFC54A03D4F2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_670BBFC54A03D4F2*))((::PBYTE)hIl2Cpp + CLASS_1_670BBFC54A03D4F2__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_670BBFC54A03D4F2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_670BBFC54A03D4F2* Clone()
	{
		return ((::Class_1_670BBFC54A03D4F2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_670BBFC54A03D4F2_CLONE_OFFSET))(this);
	}

	::Class_1_6D16597294F5284D_2* Method_1_358A144584A5DBFC()
	{
		return ((::Class_1_6D16597294F5284D_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_670BBFC54A03D4F2_METHOD_1_358A144584A5DBFC_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_6D16597294F5284D_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6D16597294F5284D_2*))((::PBYTE)hIl2Cpp + CLASS_1_670BBFC54A03D4F2_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_670BBFC54A03D4F2_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_670BBFC54A03D4F2_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Class_1_670BBFC54A03D4F2_Enum_3_2E741879C8CDBAFC_10 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_670BBFC54A03D4F2_Enum_3_2E741879C8CDBAFC_10(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_670BBFC54A03D4F2_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_670BBFC54A03D4F2_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_670BBFC54A03D4F2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_670BBFC54A03D4F2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_670BBFC54A03D4F2*))((::PBYTE)hIl2Cpp + CLASS_1_670BBFC54A03D4F2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_670BBFC54A03D4F2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_670BBFC54A03D4F2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_670BBFC54A03D4F2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_670BBFC54A03D4F2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_670BBFC54A03D4F2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_670BBFC54A03D4F2*))((::PBYTE)hIl2Cpp + CLASS_1_670BBFC54A03D4F2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_670BBFC54A03D4F2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
