#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4CF8088A158DCE25_80_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17BB1A80)
#define CLASS_1_4CF8088A158DCE25_80_CLONE_OFFSET UNITYSDK_OFFSET(0x17BB1790)
#define CLASS_1_4CF8088A158DCE25_80_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17BB1900)
#define CLASS_1_4CF8088A158DCE25_80_EQUALS_OFFSET UNITYSDK_OFFSET(0x17BB1850)
#define CLASS_1_4CF8088A158DCE25_80_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17BB1970)
#define CLASS_1_4CF8088A158DCE25_80_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17BB1B60)
#define CLASS_1_4CF8088A158DCE25_80_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17BB1B20)
#define CLASS_1_4CF8088A158DCE25_80_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17BB1810)
#define CLASS_1_4CF8088A158DCE25_80_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17BB1820)
#define CLASS_1_4CF8088A158DCE25_80_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17BB1840)
#define CLASS_1_4CF8088A158DCE25_80_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17BB1830)
#define CLASS_1_4CF8088A158DCE25_80_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17BB1730)
#define CLASS_1_4CF8088A158DCE25_80_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17BB19A0)
#define CLASS_1_4CF8088A158DCE25_80_WRITETO_OFFSET UNITYSDK_OFFSET(0x17BB1A00)
#define CLASS_1_4CF8088A158DCE25_80__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17BB1750)
#define CLASS_1_4CF8088A158DCE25_80__CTOR_OFFSET UNITYSDK_OFFSET(0x17BB1740)

inline static constexpr unsigned int Class_1_4CF8088A158DCE25_80_TypeDefinitionIndex = 26804;

class Class_1_4CF8088A158DCE25_80 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::Boolean Field_1_4; // 0x18
	::System::UInt32 Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_80__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4CF8088A158DCE25_80* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4CF8088A158DCE25_80*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_80__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_80_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4CF8088A158DCE25_80* Clone()
	{
		return ((::Class_1_4CF8088A158DCE25_80*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_80_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_80_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_80_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_80_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_80_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_80_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4CF8088A158DCE25_80* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4CF8088A158DCE25_80*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_80_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_80_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_80_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_80_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_80_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4CF8088A158DCE25_80* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4CF8088A158DCE25_80*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_80_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_80_MERGEFROM_1_OFFSET))(this, a1);
	}
};
