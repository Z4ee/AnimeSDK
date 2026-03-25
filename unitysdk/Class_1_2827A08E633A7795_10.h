#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_2827A08E633A7795_10_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18121560)
#define CLASS_1_2827A08E633A7795_10_CLONE_OFFSET UNITYSDK_OFFSET(0x18121130)
#define CLASS_1_2827A08E633A7795_10_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18121300)
#define CLASS_1_2827A08E633A7795_10_EQUALS_OFFSET UNITYSDK_OFFSET(0x18121250)
#define CLASS_1_2827A08E633A7795_10_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x181213A0)
#define CLASS_1_2827A08E633A7795_10_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x181217E0)
#define CLASS_1_2827A08E633A7795_10_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18121760)
#define CLASS_1_2827A08E633A7795_10_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x181211B0)
#define CLASS_1_2827A08E633A7795_10_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x18121190)
#define CLASS_1_2827A08E633A7795_10_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x181211D0)
#define CLASS_1_2827A08E633A7795_10_METHOD_1_1D3C8F680A3EDA34_OFFSET UNITYSDK_OFFSET(0x181211E0)
#define CLASS_1_2827A08E633A7795_10_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x181211C0)
#define CLASS_1_2827A08E633A7795_10_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x181211A0)
#define CLASS_1_2827A08E633A7795_10_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x181210C0)
#define CLASS_1_2827A08E633A7795_10_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18121450)
#define CLASS_1_2827A08E633A7795_10_WRITETO_OFFSET UNITYSDK_OFFSET(0x181214B0)
#define CLASS_1_2827A08E633A7795_10__CTOR_1_OFFSET UNITYSDK_OFFSET(0x181210E0)
#define CLASS_1_2827A08E633A7795_10__CTOR_OFFSET UNITYSDK_OFFSET(0x181210D0)

inline static constexpr unsigned int Class_1_2827A08E633A7795_10_TypeDefinitionIndex = 25241;

class Class_1_2827A08E633A7795_10 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::String* Field_1_6; // 0x18
	::System::UInt32 Field_1_2; // 0x20
	::System::UInt32 Field_1_4; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_10__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_2827A08E633A7795_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2827A08E633A7795_10*))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_10__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_10_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_2827A08E633A7795_10* Clone()
	{
		return ((::Class_1_2827A08E633A7795_10*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_10_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_10_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_10_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_10_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_10_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_10_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_10_METHOD_1_1D3C8F680A3EDA34_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_10_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_2827A08E633A7795_10* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2827A08E633A7795_10*))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_10_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_10_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_10_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_10_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_10_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_2827A08E633A7795_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2827A08E633A7795_10*))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_10_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_10_MERGEFROM_1_OFFSET))(this, a1);
	}
};
