#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_ACC7757D49879D15_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17F0EEB0)
#define CLASS_1_ACC7757D49879D15_CLONE_OFFSET UNITYSDK_OFFSET(0x17F0E840)
#define CLASS_1_ACC7757D49879D15_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17F0EAE0)
#define CLASS_1_ACC7757D49879D15_EQUALS_OFFSET UNITYSDK_OFFSET(0x17F0EA10)
#define CLASS_1_ACC7757D49879D15_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17F0EBD0)
#define CLASS_1_ACC7757D49879D15_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17F0F330)
#define CLASS_1_ACC7757D49879D15_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17F0F270)
#define CLASS_1_ACC7757D49879D15_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17F0E950)
#define CLASS_1_ACC7757D49879D15_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17F0E930)
#define CLASS_1_ACC7757D49879D15_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x17F0E970)
#define CLASS_1_ACC7757D49879D15_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x17F0E8B0)
#define CLASS_1_ACC7757D49879D15_METHOD_1_1D3C8F680A3EDA34_1_OFFSET UNITYSDK_OFFSET(0x17F0E980)
#define CLASS_1_ACC7757D49879D15_METHOD_1_1D3C8F680A3EDA34_OFFSET UNITYSDK_OFFSET(0x17F0E8C0)
#define CLASS_1_ACC7757D49879D15_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x17F0EA00)
#define CLASS_1_ACC7757D49879D15_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17F0E960)
#define CLASS_1_ACC7757D49879D15_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17F0E940)
#define CLASS_1_ACC7757D49879D15_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x17F0E9F0)
#define CLASS_1_ACC7757D49879D15_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17F0E7B0)
#define CLASS_1_ACC7757D49879D15_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17F0ED30)
#define CLASS_1_ACC7757D49879D15_WRITETO_OFFSET UNITYSDK_OFFSET(0x17F0ED90)
#define CLASS_1_ACC7757D49879D15__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17F0E7E0)
#define CLASS_1_ACC7757D49879D15__CTOR_OFFSET UNITYSDK_OFFSET(0x17F0E7C0)

inline static constexpr unsigned int Class_1_ACC7757D49879D15_TypeDefinitionIndex = 25653;

class Class_1_ACC7757D49879D15 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x9; // 0x0
	::System::String* Field_1_2; // 0x10
	::System::String* Field_1_8; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::System::UInt64 Field_1_10; // 0x28
	::System::UInt32 Field_1_4; // 0x30
	::System::UInt32 Field_1_6; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACC7757D49879D15__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_ACC7757D49879D15* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ACC7757D49879D15*))((::PBYTE)hIl2Cpp + CLASS_1_ACC7757D49879D15__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACC7757D49879D15_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_ACC7757D49879D15* Clone()
	{
		return ((::Class_1_ACC7757D49879D15*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACC7757D49879D15_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACC7757D49879D15_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_ACC7757D49879D15_METHOD_1_1D3C8F680A3EDA34_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACC7757D49879D15_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_ACC7757D49879D15_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACC7757D49879D15_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_ACC7757D49879D15_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACC7757D49879D15_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_ACC7757D49879D15_METHOD_1_1D3C8F680A3EDA34_1_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACC7757D49879D15_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_ACC7757D49879D15_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_ACC7757D49879D15_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_ACC7757D49879D15* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_ACC7757D49879D15*))((::PBYTE)hIl2Cpp + CLASS_1_ACC7757D49879D15_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACC7757D49879D15_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACC7757D49879D15_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_ACC7757D49879D15_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACC7757D49879D15_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_ACC7757D49879D15* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ACC7757D49879D15*))((::PBYTE)hIl2Cpp + CLASS_1_ACC7757D49879D15_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_ACC7757D49879D15_MERGEFROM_1_OFFSET))(this, a1);
	}
};
