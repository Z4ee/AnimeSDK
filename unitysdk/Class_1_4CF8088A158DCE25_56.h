#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4CF8088A158DCE25_56_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17BF6350)
#define CLASS_1_4CF8088A158DCE25_56_CLONE_OFFSET UNITYSDK_OFFSET(0x17BF60C0)
#define CLASS_1_4CF8088A158DCE25_56_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17BF61D0)
#define CLASS_1_4CF8088A158DCE25_56_EQUALS_OFFSET UNITYSDK_OFFSET(0x17BF6150)
#define CLASS_1_4CF8088A158DCE25_56_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17BF6240)
#define CLASS_1_4CF8088A158DCE25_56_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17BF6430)
#define CLASS_1_4CF8088A158DCE25_56_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17BF63F0)
#define CLASS_1_4CF8088A158DCE25_56_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17BF6130)
#define CLASS_1_4CF8088A158DCE25_56_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17BF6140)
#define CLASS_1_4CF8088A158DCE25_56_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17BF6120)
#define CLASS_1_4CF8088A158DCE25_56_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17BF6110)
#define CLASS_1_4CF8088A158DCE25_56_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17BF6060)
#define CLASS_1_4CF8088A158DCE25_56_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17BF6270)
#define CLASS_1_4CF8088A158DCE25_56_WRITETO_OFFSET UNITYSDK_OFFSET(0x17BF62D0)
#define CLASS_1_4CF8088A158DCE25_56__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17BF6080)
#define CLASS_1_4CF8088A158DCE25_56__CTOR_OFFSET UNITYSDK_OFFSET(0x17BF6070)

inline static constexpr unsigned int Class_1_4CF8088A158DCE25_56_TypeDefinitionIndex = 25384;

class Class_1_4CF8088A158DCE25_56 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_4; // 0x18
	::System::Boolean Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_56__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4CF8088A158DCE25_56* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4CF8088A158DCE25_56*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_56__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_56_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4CF8088A158DCE25_56* Clone()
	{
		return ((::Class_1_4CF8088A158DCE25_56*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_56_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_56_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_56_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_56_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_56_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_56_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4CF8088A158DCE25_56* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4CF8088A158DCE25_56*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_56_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_56_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_56_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_56_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_56_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4CF8088A158DCE25_56* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4CF8088A158DCE25_56*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_56_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_56_MERGEFROM_1_OFFSET))(this, a1);
	}
};
