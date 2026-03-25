#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4CF8088A158DCE25_105_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17D09320)
#define CLASS_1_4CF8088A158DCE25_105_CLONE_OFFSET UNITYSDK_OFFSET(0x17D08F80)
#define CLASS_1_4CF8088A158DCE25_105_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17D09140)
#define CLASS_1_4CF8088A158DCE25_105_EQUALS_OFFSET UNITYSDK_OFFSET(0x17D09080)
#define CLASS_1_4CF8088A158DCE25_105_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17D091C0)
#define CLASS_1_4CF8088A158DCE25_105_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17D09510)
#define CLASS_1_4CF8088A158DCE25_105_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17D094C0)
#define CLASS_1_4CF8088A158DCE25_105_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17D09040)
#define CLASS_1_4CF8088A158DCE25_105_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x17D09060)
#define CLASS_1_4CF8088A158DCE25_105_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17D09020)
#define CLASS_1_4CF8088A158DCE25_105_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17D09050)
#define CLASS_1_4CF8088A158DCE25_105_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x17D09070)
#define CLASS_1_4CF8088A158DCE25_105_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17D09030)
#define CLASS_1_4CF8088A158DCE25_105_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17D09010)
#define CLASS_1_4CF8088A158DCE25_105_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17D09000)
#define CLASS_1_4CF8088A158DCE25_105_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17D08F20)
#define CLASS_1_4CF8088A158DCE25_105_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17D091F0)
#define CLASS_1_4CF8088A158DCE25_105_WRITETO_OFFSET UNITYSDK_OFFSET(0x17D09250)
#define CLASS_1_4CF8088A158DCE25_105__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17D08F40)
#define CLASS_1_4CF8088A158DCE25_105__CTOR_OFFSET UNITYSDK_OFFSET(0x17D08F30)

inline static constexpr unsigned int Class_1_4CF8088A158DCE25_105_TypeDefinitionIndex = 27449;

class Class_1_4CF8088A158DCE25_105 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_4; // 0x18
	::System::Boolean Field_1_2; // 0x1C
	::System::UInt32 Field_1_6; // 0x20
	::System::UInt32 Field_1_8; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_105__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4CF8088A158DCE25_105* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4CF8088A158DCE25_105*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_105__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_105_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4CF8088A158DCE25_105* Clone()
	{
		return ((::Class_1_4CF8088A158DCE25_105*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_105_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_105_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_105_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_105_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_105_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_105_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_105_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_105_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_105_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_105_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4CF8088A158DCE25_105* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4CF8088A158DCE25_105*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_105_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_105_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_105_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_105_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_105_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4CF8088A158DCE25_105* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4CF8088A158DCE25_105*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_105_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_105_MERGEFROM_1_OFFSET))(this, a1);
	}
};
