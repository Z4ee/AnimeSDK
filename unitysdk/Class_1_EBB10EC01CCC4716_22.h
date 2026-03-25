#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_EBB10EC01CCC4716_22_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18265390)
#define CLASS_1_EBB10EC01CCC4716_22_CLONE_OFFSET UNITYSDK_OFFSET(0x18264B60)
#define CLASS_1_EBB10EC01CCC4716_22_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18264E50)
#define CLASS_1_EBB10EC01CCC4716_22_EQUALS_OFFSET UNITYSDK_OFFSET(0x18264E20)
#define CLASS_1_EBB10EC01CCC4716_22_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18264F70)
#define CLASS_1_EBB10EC01CCC4716_22_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18265A70)
#define CLASS_1_EBB10EC01CCC4716_22_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18265950)
#define CLASS_1_EBB10EC01CCC4716_22_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x18264D00)
#define CLASS_1_EBB10EC01CCC4716_22_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x18264D20)
#define CLASS_1_EBB10EC01CCC4716_22_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x18264D40)
#define CLASS_1_EBB10EC01CCC4716_22_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x18264D60)
#define CLASS_1_EBB10EC01CCC4716_22_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x18264E00)
#define CLASS_1_EBB10EC01CCC4716_22_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x18264C60)
#define CLASS_1_EBB10EC01CCC4716_22_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x18264C80)
#define CLASS_1_EBB10EC01CCC4716_22_METHOD_1_126AB3935214AA22_2_OFFSET UNITYSDK_OFFSET(0x18264D80)
#define CLASS_1_EBB10EC01CCC4716_22_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x18264BE0)
#define CLASS_1_EBB10EC01CCC4716_22_METHOD_1_1D3C8F680A3EDA34_1_OFFSET UNITYSDK_OFFSET(0x18264C90)
#define CLASS_1_EBB10EC01CCC4716_22_METHOD_1_1D3C8F680A3EDA34_2_OFFSET UNITYSDK_OFFSET(0x18264D90)
#define CLASS_1_EBB10EC01CCC4716_22_METHOD_1_1D3C8F680A3EDA34_OFFSET UNITYSDK_OFFSET(0x18264BF0)
#define CLASS_1_EBB10EC01CCC4716_22_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x18264D10)
#define CLASS_1_EBB10EC01CCC4716_22_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x18264D30)
#define CLASS_1_EBB10EC01CCC4716_22_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x18264D50)
#define CLASS_1_EBB10EC01CCC4716_22_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x18264D70)
#define CLASS_1_EBB10EC01CCC4716_22_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x18264E10)
#define CLASS_1_EBB10EC01CCC4716_22_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x18264C70)
#define CLASS_1_EBB10EC01CCC4716_22_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18264AB0)
#define CLASS_1_EBB10EC01CCC4716_22_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18265150)
#define CLASS_1_EBB10EC01CCC4716_22_WRITETO_OFFSET UNITYSDK_OFFSET(0x182651B0)
#define CLASS_1_EBB10EC01CCC4716_22__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18264AF0)
#define CLASS_1_EBB10EC01CCC4716_22__CTOR_OFFSET UNITYSDK_OFFSET(0x18264AC0)

inline static constexpr unsigned int Class_1_EBB10EC01CCC4716_22_TypeDefinitionIndex = 25954;

class Class_1_EBB10EC01CCC4716_22 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_11 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_13 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_15 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_17 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::String* Field_1_2; // 0x18
	::System::String* Field_1_16; // 0x20
	::System::String* Field_1_6; // 0x28
	::System::UInt32 Field_1_4; // 0x30
	::System::UInt32 Field_1_8; // 0x34
	::System::UInt32 Field_1_14; // 0x38
	::System::UInt32 Field_1_18; // 0x3C
	::System::UInt32 Field_1_10; // 0x40
	::System::UInt32 Field_1_12; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_EBB10EC01CCC4716_22* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_22*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_EBB10EC01CCC4716_22* Clone()
	{
		return ((::Class_1_EBB10EC01CCC4716_22*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_METHOD_1_1D3C8F680A3EDA34_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_METHOD_1_1D3C8F680A3EDA34_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_METHOD_1_126AB3935214AA22_2_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34_2(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_METHOD_1_1D3C8F680A3EDA34_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_EBB10EC01CCC4716_22* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_22*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_EBB10EC01CCC4716_22* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_22*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_22_MERGEFROM_1_OFFSET))(this, a1);
	}
};
