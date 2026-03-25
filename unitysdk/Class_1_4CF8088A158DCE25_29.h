#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4CF8088A158DCE25_29_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17C73D40)
#define CLASS_1_4CF8088A158DCE25_29_CLONE_OFFSET UNITYSDK_OFFSET(0x17C739A0)
#define CLASS_1_4CF8088A158DCE25_29_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17C73B60)
#define CLASS_1_4CF8088A158DCE25_29_EQUALS_OFFSET UNITYSDK_OFFSET(0x17C73AA0)
#define CLASS_1_4CF8088A158DCE25_29_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17C73BE0)
#define CLASS_1_4CF8088A158DCE25_29_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17C73F30)
#define CLASS_1_4CF8088A158DCE25_29_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17C73EE0)
#define CLASS_1_4CF8088A158DCE25_29_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17C73A40)
#define CLASS_1_4CF8088A158DCE25_29_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x17C73A80)
#define CLASS_1_4CF8088A158DCE25_29_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17C73A20)
#define CLASS_1_4CF8088A158DCE25_29_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17C73A50)
#define CLASS_1_4CF8088A158DCE25_29_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x17C73A90)
#define CLASS_1_4CF8088A158DCE25_29_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17C73A30)
#define CLASS_1_4CF8088A158DCE25_29_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17C73A70)
#define CLASS_1_4CF8088A158DCE25_29_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17C73A60)
#define CLASS_1_4CF8088A158DCE25_29_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17C73940)
#define CLASS_1_4CF8088A158DCE25_29_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17C73C10)
#define CLASS_1_4CF8088A158DCE25_29_WRITETO_OFFSET UNITYSDK_OFFSET(0x17C73C70)
#define CLASS_1_4CF8088A158DCE25_29__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17C73960)
#define CLASS_1_4CF8088A158DCE25_29__CTOR_OFFSET UNITYSDK_OFFSET(0x17C73950)

inline static constexpr unsigned int Class_1_4CF8088A158DCE25_29_TypeDefinitionIndex = 24302;

class Class_1_4CF8088A158DCE25_29 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::Boolean Field_1_6; // 0x18
	::System::UInt32 Field_1_8; // 0x1C
	::System::UInt32 Field_1_4; // 0x20
	::System::UInt32 Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_29__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4CF8088A158DCE25_29* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4CF8088A158DCE25_29*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_29__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_29_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4CF8088A158DCE25_29* Clone()
	{
		return ((::Class_1_4CF8088A158DCE25_29*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_29_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_29_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_29_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_29_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_29_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_29_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_29_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_29_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_29_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_29_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4CF8088A158DCE25_29* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4CF8088A158DCE25_29*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_29_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_29_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_29_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_29_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_29_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4CF8088A158DCE25_29* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4CF8088A158DCE25_29*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_29_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_29_MERGEFROM_1_OFFSET))(this, a1);
	}
};
