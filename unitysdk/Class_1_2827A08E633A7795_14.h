#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_2827A08E633A7795_14_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1817BCB0)
#define CLASS_1_2827A08E633A7795_14_CLONE_OFFSET UNITYSDK_OFFSET(0x1817B880)
#define CLASS_1_2827A08E633A7795_14_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1817BA50)
#define CLASS_1_2827A08E633A7795_14_EQUALS_OFFSET UNITYSDK_OFFSET(0x1817B9A0)
#define CLASS_1_2827A08E633A7795_14_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1817BAF0)
#define CLASS_1_2827A08E633A7795_14_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1817BF30)
#define CLASS_1_2827A08E633A7795_14_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1817BEB0)
#define CLASS_1_2827A08E633A7795_14_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1817B900)
#define CLASS_1_2827A08E633A7795_14_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1817B8E0)
#define CLASS_1_2827A08E633A7795_14_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1817B920)
#define CLASS_1_2827A08E633A7795_14_METHOD_1_1D3C8F680A3EDA34_OFFSET UNITYSDK_OFFSET(0x1817B930)
#define CLASS_1_2827A08E633A7795_14_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1817B910)
#define CLASS_1_2827A08E633A7795_14_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1817B8F0)
#define CLASS_1_2827A08E633A7795_14_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1817B810)
#define CLASS_1_2827A08E633A7795_14_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1817BBA0)
#define CLASS_1_2827A08E633A7795_14_WRITETO_OFFSET UNITYSDK_OFFSET(0x1817BC00)
#define CLASS_1_2827A08E633A7795_14__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1817B830)
#define CLASS_1_2827A08E633A7795_14__CTOR_OFFSET UNITYSDK_OFFSET(0x1817B820)

inline static constexpr unsigned int Class_1_2827A08E633A7795_14_TypeDefinitionIndex = 25735;

class Class_1_2827A08E633A7795_14 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x6; // 0x0
	::System::String* Field_1_6; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_4; // 0x20
	::System::UInt32 Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_14__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_2827A08E633A7795_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2827A08E633A7795_14*))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_14__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_14_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_2827A08E633A7795_14* Clone()
	{
		return ((::Class_1_2827A08E633A7795_14*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_14_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_14_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_14_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_14_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_14_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_14_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_14_METHOD_1_1D3C8F680A3EDA34_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_14_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_2827A08E633A7795_14* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2827A08E633A7795_14*))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_14_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_14_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_14_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_14_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_14_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_2827A08E633A7795_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2827A08E633A7795_14*))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_14_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_14_MERGEFROM_1_OFFSET))(this, a1);
	}
};
