#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_2827A08E633A7795_19_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1822F1D0)
#define CLASS_1_2827A08E633A7795_19_CLONE_OFFSET UNITYSDK_OFFSET(0x1822EDA0)
#define CLASS_1_2827A08E633A7795_19_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1822EF80)
#define CLASS_1_2827A08E633A7795_19_EQUALS_OFFSET UNITYSDK_OFFSET(0x1822EEB0)
#define CLASS_1_2827A08E633A7795_19_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1822F010)
#define CLASS_1_2827A08E633A7795_19_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1822F3D0)
#define CLASS_1_2827A08E633A7795_19_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1822F360)
#define CLASS_1_2827A08E633A7795_19_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1822EE90)
#define CLASS_1_2827A08E633A7795_19_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1822EE10)
#define CLASS_1_2827A08E633A7795_19_METHOD_1_1D3C8F680A3EDA34_OFFSET UNITYSDK_OFFSET(0x1822EE20)
#define CLASS_1_2827A08E633A7795_19_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1822EEA0)
#define CLASS_1_2827A08E633A7795_19_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1822ED40)
#define CLASS_1_2827A08E633A7795_19_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1822F0E0)
#define CLASS_1_2827A08E633A7795_19_WRITETO_OFFSET UNITYSDK_OFFSET(0x1822F140)
#define CLASS_1_2827A08E633A7795_19__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1822ED60)
#define CLASS_1_2827A08E633A7795_19__CTOR_OFFSET UNITYSDK_OFFSET(0x1822ED50)

inline static constexpr unsigned int Class_1_2827A08E633A7795_19_TypeDefinitionIndex = 26910;

class Class_1_2827A08E633A7795_19 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::String* Field_1_2; // 0x18
	::System::UInt32 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_19__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_2827A08E633A7795_19* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2827A08E633A7795_19*))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_19__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_19_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_2827A08E633A7795_19* Clone()
	{
		return ((::Class_1_2827A08E633A7795_19*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_19_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_19_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_19_METHOD_1_1D3C8F680A3EDA34_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_19_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_19_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_19_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_2827A08E633A7795_19* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2827A08E633A7795_19*))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_19_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_19_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_19_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_19_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_19_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_2827A08E633A7795_19* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2827A08E633A7795_19*))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_19_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_19_MERGEFROM_1_OFFSET))(this, a1);
	}
};
