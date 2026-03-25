#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4CF8088A158DCE25_83_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17F49D30)
#define CLASS_1_4CF8088A158DCE25_83_CLONE_OFFSET UNITYSDK_OFFSET(0x17F499F0)
#define CLASS_1_4CF8088A158DCE25_83_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17F49B50)
#define CLASS_1_4CF8088A158DCE25_83_EQUALS_OFFSET UNITYSDK_OFFSET(0x17F49AC0)
#define CLASS_1_4CF8088A158DCE25_83_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17F49BD0)
#define CLASS_1_4CF8088A158DCE25_83_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17F49F20)
#define CLASS_1_4CF8088A158DCE25_83_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17F49ED0)
#define CLASS_1_4CF8088A158DCE25_83_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17F49A60)
#define CLASS_1_4CF8088A158DCE25_83_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x17F49AA0)
#define CLASS_1_4CF8088A158DCE25_83_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17F49A40)
#define CLASS_1_4CF8088A158DCE25_83_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17F49A70)
#define CLASS_1_4CF8088A158DCE25_83_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x17F49AB0)
#define CLASS_1_4CF8088A158DCE25_83_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17F49A50)
#define CLASS_1_4CF8088A158DCE25_83_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17F49A90)
#define CLASS_1_4CF8088A158DCE25_83_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17F49A80)
#define CLASS_1_4CF8088A158DCE25_83_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17F49990)
#define CLASS_1_4CF8088A158DCE25_83_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17F49C00)
#define CLASS_1_4CF8088A158DCE25_83_WRITETO_OFFSET UNITYSDK_OFFSET(0x17F49C60)
#define CLASS_1_4CF8088A158DCE25_83__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17F499B0)
#define CLASS_1_4CF8088A158DCE25_83__CTOR_OFFSET UNITYSDK_OFFSET(0x17F499A0)

inline static constexpr unsigned int Class_1_4CF8088A158DCE25_83_TypeDefinitionIndex = 26853;

class Class_1_4CF8088A158DCE25_83 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_2; // 0x18
	::System::UInt32 Field_1_4; // 0x1C
	::System::Boolean Field_1_6; // 0x20
	::System::UInt32 Field_1_8; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_83__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4CF8088A158DCE25_83* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4CF8088A158DCE25_83*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_83__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_83_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4CF8088A158DCE25_83* Clone()
	{
		return ((::Class_1_4CF8088A158DCE25_83*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_83_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_83_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_83_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_83_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_83_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_83_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_83_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_83_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_83_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_83_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4CF8088A158DCE25_83* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4CF8088A158DCE25_83*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_83_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_83_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_83_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_83_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_83_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4CF8088A158DCE25_83* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4CF8088A158DCE25_83*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_83_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_83_MERGEFROM_1_OFFSET))(this, a1);
	}
};
