#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_EBB10EC01CCC4716_15_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17B07520)
#define CLASS_1_EBB10EC01CCC4716_15_CLONE_OFFSET UNITYSDK_OFFSET(0x17B06EB0)
#define CLASS_1_EBB10EC01CCC4716_15_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17B070D0)
#define CLASS_1_EBB10EC01CCC4716_15_EQUALS_OFFSET UNITYSDK_OFFSET(0x17B07070)
#define CLASS_1_EBB10EC01CCC4716_15_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17B07220)
#define CLASS_1_EBB10EC01CCC4716_15_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17B078E0)
#define CLASS_1_EBB10EC01CCC4716_15_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17B07840)
#define CLASS_1_EBB10EC01CCC4716_15_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17B06F70)
#define CLASS_1_EBB10EC01CCC4716_15_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x17B06FB0)
#define CLASS_1_EBB10EC01CCC4716_15_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x17B06FF0)
#define CLASS_1_EBB10EC01CCC4716_15_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x17B07010)
#define CLASS_1_EBB10EC01CCC4716_15_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x17B07030)
#define CLASS_1_EBB10EC01CCC4716_15_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17B06F50)
#define CLASS_1_EBB10EC01CCC4716_15_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17B06F80)
#define CLASS_1_EBB10EC01CCC4716_15_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x17B06FC0)
#define CLASS_1_EBB10EC01CCC4716_15_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x17B07000)
#define CLASS_1_EBB10EC01CCC4716_15_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x17B07020)
#define CLASS_1_EBB10EC01CCC4716_15_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x17B07040)
#define CLASS_1_EBB10EC01CCC4716_15_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17B06F60)
#define CLASS_1_EBB10EC01CCC4716_15_METHOD_1_8633AE51B23EBDFD_OFFSET UNITYSDK_OFFSET(0x17B06FE0)
#define CLASS_1_EBB10EC01CCC4716_15_METHOD_1_C229FF62B898C0B2_OFFSET UNITYSDK_OFFSET(0x17B06FD0)
#define CLASS_1_EBB10EC01CCC4716_15_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x17B07060)
#define CLASS_1_EBB10EC01CCC4716_15_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17B06FA0)
#define CLASS_1_EBB10EC01CCC4716_15_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x17B07050)
#define CLASS_1_EBB10EC01CCC4716_15_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17B06F90)
#define CLASS_1_EBB10EC01CCC4716_15_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17B06E30)
#define CLASS_1_EBB10EC01CCC4716_15_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17B072E0)
#define CLASS_1_EBB10EC01CCC4716_15_WRITETO_OFFSET UNITYSDK_OFFSET(0x17B07340)
#define CLASS_1_EBB10EC01CCC4716_15__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17B06E50)
#define CLASS_1_EBB10EC01CCC4716_15__CTOR_OFFSET UNITYSDK_OFFSET(0x17B06E40)

inline static constexpr unsigned int Class_1_EBB10EC01CCC4716_15_TypeDefinitionIndex = 24332;

class Class_1_EBB10EC01CCC4716_15 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_13 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_15 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_17 = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_8; // 0x18
	::System::Boolean Field_1_18; // 0x1C
	::System::Boolean Field_1_6; // 0x1D
	::System::UInt32 Field_1_14; // 0x20
	::System::UInt32 Field_1_16; // 0x24
	::System::UInt32 Field_1_2; // 0x28
	::System::Double Field_1_10; // 0x30
	::System::UInt32 Field_1_12; // 0x38
	::System::UInt32 Field_1_4; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_15__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_EBB10EC01CCC4716_15* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_15*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_15__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_15_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_EBB10EC01CCC4716_15* Clone()
	{
		return ((::Class_1_EBB10EC01CCC4716_15*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_15_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_15_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_15_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_15_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_15_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_15_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_15_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_15_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_15_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_15_METHOD_1_C229FF62B898C0B2_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_15_METHOD_1_8633AE51B23EBDFD_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_15_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_15_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_15_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_15_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_15_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_15_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_15_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_15_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_15_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_EBB10EC01CCC4716_15* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_15*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_15_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_15_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_15_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_15_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_15_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_EBB10EC01CCC4716_15* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_15*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_15_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_15_MERGEFROM_1_OFFSET))(this, a1);
	}
};
