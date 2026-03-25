#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_2827A08E633A7795_8_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17B47D20)
#define CLASS_1_2827A08E633A7795_8_CLONE_OFFSET UNITYSDK_OFFSET(0x17B47790)
#define CLASS_1_2827A08E633A7795_8_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17B479E0)
#define CLASS_1_2827A08E633A7795_8_EQUALS_OFFSET UNITYSDK_OFFSET(0x17B47910)
#define CLASS_1_2827A08E633A7795_8_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17B47AB0)
#define CLASS_1_2827A08E633A7795_8_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17B48040)
#define CLASS_1_2827A08E633A7795_8_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17B47FA0)
#define CLASS_1_2827A08E633A7795_8_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17B478F0)
#define CLASS_1_2827A08E633A7795_8_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x17B47870)
#define CLASS_1_2827A08E633A7795_8_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x17B477F0)
#define CLASS_1_2827A08E633A7795_8_METHOD_1_1D3C8F680A3EDA34_1_OFFSET UNITYSDK_OFFSET(0x17B47880)
#define CLASS_1_2827A08E633A7795_8_METHOD_1_1D3C8F680A3EDA34_OFFSET UNITYSDK_OFFSET(0x17B47800)
#define CLASS_1_2827A08E633A7795_8_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17B47900)
#define CLASS_1_2827A08E633A7795_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17B47710)
#define CLASS_1_2827A08E633A7795_8_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17B47BF0)
#define CLASS_1_2827A08E633A7795_8_WRITETO_OFFSET UNITYSDK_OFFSET(0x17B47C50)
#define CLASS_1_2827A08E633A7795_8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17B47740)
#define CLASS_1_2827A08E633A7795_8__CTOR_OFFSET UNITYSDK_OFFSET(0x17B47720)

inline static constexpr unsigned int Class_1_2827A08E633A7795_8_TypeDefinitionIndex = 24992;

class Class_1_2827A08E633A7795_8 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x5; // 0x0
	::System::String* Field_1_4; // 0x10
	::System::String* Field_1_2; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::System::UInt32 Field_1_6; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_8__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_2827A08E633A7795_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2827A08E633A7795_8*))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_8__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_2827A08E633A7795_8* Clone()
	{
		return ((::Class_1_2827A08E633A7795_8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_8_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_8_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_8_METHOD_1_1D3C8F680A3EDA34_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_8_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_8_METHOD_1_1D3C8F680A3EDA34_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_8_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_8_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_8_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_2827A08E633A7795_8* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2827A08E633A7795_8*))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_8_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_8_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_8_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_8_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_8_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_2827A08E633A7795_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2827A08E633A7795_8*))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_8_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2827A08E633A7795_8_MERGEFROM_1_OFFSET))(this, a1);
	}
};
