#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_8A64642F183CF094_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17B03860)
#define CLASS_1_8A64642F183CF094_CLONE_OFFSET UNITYSDK_OFFSET(0x17B03240)
#define CLASS_1_8A64642F183CF094_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17B034C0)
#define CLASS_1_8A64642F183CF094_EQUALS_OFFSET UNITYSDK_OFFSET(0x17B03410)
#define CLASS_1_8A64642F183CF094_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17B035A0)
#define CLASS_1_8A64642F183CF094_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17B03C90)
#define CLASS_1_8A64642F183CF094_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17B03BD0)
#define CLASS_1_8A64642F183CF094_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17B032D0)
#define CLASS_1_8A64642F183CF094_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x17B032F0)
#define CLASS_1_8A64642F183CF094_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17B032B0)
#define CLASS_1_8A64642F183CF094_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x17B03390)
#define CLASS_1_8A64642F183CF094_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x17B03310)
#define CLASS_1_8A64642F183CF094_METHOD_1_1D3C8F680A3EDA34_1_OFFSET UNITYSDK_OFFSET(0x17B033A0)
#define CLASS_1_8A64642F183CF094_METHOD_1_1D3C8F680A3EDA34_OFFSET UNITYSDK_OFFSET(0x17B03320)
#define CLASS_1_8A64642F183CF094_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17B032E0)
#define CLASS_1_8A64642F183CF094_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x17B03300)
#define CLASS_1_8A64642F183CF094_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17B032C0)
#define CLASS_1_8A64642F183CF094_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17B031B0)
#define CLASS_1_8A64642F183CF094_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17B036F0)
#define CLASS_1_8A64642F183CF094_WRITETO_OFFSET UNITYSDK_OFFSET(0x17B03750)
#define CLASS_1_8A64642F183CF094__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17B031E0)
#define CLASS_1_8A64642F183CF094__CTOR_OFFSET UNITYSDK_OFFSET(0x17B031C0)

inline static constexpr unsigned int Class_1_8A64642F183CF094_TypeDefinitionIndex = 25969;

class Class_1_8A64642F183CF094 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x8; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::String* Field_1_10; // 0x18
	::System::String* Field_1_8; // 0x20
	::System::UInt32 Field_1_2; // 0x28
	::System::UInt32 Field_1_4; // 0x2C
	::System::UInt32 Field_1_6; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A64642F183CF094__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_8A64642F183CF094* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A64642F183CF094*))((::PBYTE)hIl2Cpp + CLASS_1_8A64642F183CF094__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A64642F183CF094_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_8A64642F183CF094* Clone()
	{
		return ((::Class_1_8A64642F183CF094*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A64642F183CF094_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A64642F183CF094_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8A64642F183CF094_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A64642F183CF094_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8A64642F183CF094_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A64642F183CF094_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8A64642F183CF094_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A64642F183CF094_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8A64642F183CF094_METHOD_1_1D3C8F680A3EDA34_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A64642F183CF094_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8A64642F183CF094_METHOD_1_1D3C8F680A3EDA34_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_8A64642F183CF094_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_8A64642F183CF094* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8A64642F183CF094*))((::PBYTE)hIl2Cpp + CLASS_1_8A64642F183CF094_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A64642F183CF094_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A64642F183CF094_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8A64642F183CF094_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A64642F183CF094_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_8A64642F183CF094* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A64642F183CF094*))((::PBYTE)hIl2Cpp + CLASS_1_8A64642F183CF094_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8A64642F183CF094_MERGEFROM_1_OFFSET))(this, a1);
	}
};
