#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4CF8088A158DCE25_12_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x180DCBC0)
#define CLASS_1_4CF8088A158DCE25_12_CLONE_OFFSET UNITYSDK_OFFSET(0x180DC8D0)
#define CLASS_1_4CF8088A158DCE25_12_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x180DCA40)
#define CLASS_1_4CF8088A158DCE25_12_EQUALS_OFFSET UNITYSDK_OFFSET(0x180DC990)
#define CLASS_1_4CF8088A158DCE25_12_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x180DCAB0)
#define CLASS_1_4CF8088A158DCE25_12_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x180DCCA0)
#define CLASS_1_4CF8088A158DCE25_12_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x180DCC60)
#define CLASS_1_4CF8088A158DCE25_12_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x180DC970)
#define CLASS_1_4CF8088A158DCE25_12_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x180DC980)
#define CLASS_1_4CF8088A158DCE25_12_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x180DC960)
#define CLASS_1_4CF8088A158DCE25_12_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x180DC950)
#define CLASS_1_4CF8088A158DCE25_12_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x180DC870)
#define CLASS_1_4CF8088A158DCE25_12_TOSTRING_OFFSET UNITYSDK_OFFSET(0x180DCAE0)
#define CLASS_1_4CF8088A158DCE25_12_WRITETO_OFFSET UNITYSDK_OFFSET(0x180DCB40)
#define CLASS_1_4CF8088A158DCE25_12__CTOR_1_OFFSET UNITYSDK_OFFSET(0x180DC890)
#define CLASS_1_4CF8088A158DCE25_12__CTOR_OFFSET UNITYSDK_OFFSET(0x180DC880)

inline static constexpr unsigned int Class_1_4CF8088A158DCE25_12_TypeDefinitionIndex = 23662;

class Class_1_4CF8088A158DCE25_12 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xD; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::Boolean Field_1_2; // 0x18
	::System::UInt32 Field_1_4; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_12__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4CF8088A158DCE25_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4CF8088A158DCE25_12*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_12__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_12_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4CF8088A158DCE25_12* Clone()
	{
		return ((::Class_1_4CF8088A158DCE25_12*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_12_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_12_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_12_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_12_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_12_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_12_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4CF8088A158DCE25_12* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4CF8088A158DCE25_12*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_12_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_12_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_12_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_12_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_12_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4CF8088A158DCE25_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4CF8088A158DCE25_12*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_12_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_12_MERGEFROM_1_OFFSET))(this, a1);
	}
};
