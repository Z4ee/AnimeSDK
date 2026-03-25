#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4CF8088A158DCE25_5_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17BBD020)
#define CLASS_1_4CF8088A158DCE25_5_CLONE_OFFSET UNITYSDK_OFFSET(0x17BBCD30)
#define CLASS_1_4CF8088A158DCE25_5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17BBCEA0)
#define CLASS_1_4CF8088A158DCE25_5_EQUALS_OFFSET UNITYSDK_OFFSET(0x17BBCDF0)
#define CLASS_1_4CF8088A158DCE25_5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17BBCF10)
#define CLASS_1_4CF8088A158DCE25_5_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17BBD100)
#define CLASS_1_4CF8088A158DCE25_5_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17BBD0C0)
#define CLASS_1_4CF8088A158DCE25_5_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17BBCDD0)
#define CLASS_1_4CF8088A158DCE25_5_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17BBCDE0)
#define CLASS_1_4CF8088A158DCE25_5_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17BBCDC0)
#define CLASS_1_4CF8088A158DCE25_5_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17BBCDB0)
#define CLASS_1_4CF8088A158DCE25_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17BBCCD0)
#define CLASS_1_4CF8088A158DCE25_5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17BBCF40)
#define CLASS_1_4CF8088A158DCE25_5_WRITETO_OFFSET UNITYSDK_OFFSET(0x17BBCFA0)
#define CLASS_1_4CF8088A158DCE25_5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17BBCCF0)
#define CLASS_1_4CF8088A158DCE25_5__CTOR_OFFSET UNITYSDK_OFFSET(0x17BBCCE0)

inline static constexpr unsigned int Class_1_4CF8088A158DCE25_5_TypeDefinitionIndex = 23459;

class Class_1_4CF8088A158DCE25_5 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::Boolean Field_1_2; // 0x18
	::System::UInt32 Field_1_4; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4CF8088A158DCE25_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4CF8088A158DCE25_5*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_5__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4CF8088A158DCE25_5* Clone()
	{
		return ((::Class_1_4CF8088A158DCE25_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_5_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_5_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_5_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_5_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_5_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_5_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4CF8088A158DCE25_5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4CF8088A158DCE25_5*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_5_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_5_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_5_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_5_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_5_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4CF8088A158DCE25_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4CF8088A158DCE25_5*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_5_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_5_MERGEFROM_1_OFFSET))(this, a1);
	}
};
