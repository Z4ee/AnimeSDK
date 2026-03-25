#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4CF8088A158DCE25_93_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x181BDCA0)
#define CLASS_1_4CF8088A158DCE25_93_CLONE_OFFSET UNITYSDK_OFFSET(0x181BD8D0)
#define CLASS_1_4CF8088A158DCE25_93_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x181BDA70)
#define CLASS_1_4CF8088A158DCE25_93_EQUALS_OFFSET UNITYSDK_OFFSET(0x181BD9D0)
#define CLASS_1_4CF8088A158DCE25_93_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x181BDB10)
#define CLASS_1_4CF8088A158DCE25_93_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x181BDEA0)
#define CLASS_1_4CF8088A158DCE25_93_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x181BDE40)
#define CLASS_1_4CF8088A158DCE25_93_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x181BD990)
#define CLASS_1_4CF8088A158DCE25_93_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x181BD9B0)
#define CLASS_1_4CF8088A158DCE25_93_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x181BD950)
#define CLASS_1_4CF8088A158DCE25_93_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x181BD9A0)
#define CLASS_1_4CF8088A158DCE25_93_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x181BD9C0)
#define CLASS_1_4CF8088A158DCE25_93_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x181BD960)
#define CLASS_1_4CF8088A158DCE25_93_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x181BD980)
#define CLASS_1_4CF8088A158DCE25_93_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x181BD940)
#define CLASS_1_4CF8088A158DCE25_93_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x181BD970)
#define CLASS_1_4CF8088A158DCE25_93_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x181BD930)
#define CLASS_1_4CF8088A158DCE25_93_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x181BD860)
#define CLASS_1_4CF8088A158DCE25_93_TOSTRING_OFFSET UNITYSDK_OFFSET(0x181BDB50)
#define CLASS_1_4CF8088A158DCE25_93_WRITETO_OFFSET UNITYSDK_OFFSET(0x181BDBB0)
#define CLASS_1_4CF8088A158DCE25_93__CTOR_1_OFFSET UNITYSDK_OFFSET(0x181BD880)
#define CLASS_1_4CF8088A158DCE25_93__CTOR_OFFSET UNITYSDK_OFFSET(0x181BD870)

inline static constexpr unsigned int Class_1_4CF8088A158DCE25_93_TypeDefinitionIndex = 27092;

class Class_1_4CF8088A158DCE25_93 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::Boolean Field_1_6; // 0x18
	::System::Boolean Field_1_2; // 0x19
	::System::UInt32 Field_1_10; // 0x1C
	::System::UInt32 Field_1_4; // 0x20
	::System::UInt32 Field_1_8; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_93__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4CF8088A158DCE25_93* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4CF8088A158DCE25_93*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_93__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_93_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4CF8088A158DCE25_93* Clone()
	{
		return ((::Class_1_4CF8088A158DCE25_93*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_93_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_93_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_93_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_93_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_93_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_93_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_93_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_93_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_93_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_93_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_93_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_93_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4CF8088A158DCE25_93* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4CF8088A158DCE25_93*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_93_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_93_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_93_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_93_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_93_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4CF8088A158DCE25_93* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4CF8088A158DCE25_93*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_93_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4CF8088A158DCE25_93_MERGEFROM_1_OFFSET))(this, a1);
	}
};
