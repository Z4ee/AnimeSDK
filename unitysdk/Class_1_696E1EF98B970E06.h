#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_696E1EF98B970E06_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17D17990)
#define CLASS_1_696E1EF98B970E06_CLONE_OFFSET UNITYSDK_OFFSET(0x17D17530)
#define CLASS_1_696E1EF98B970E06_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17D17740)
#define CLASS_1_696E1EF98B970E06_EQUALS_OFFSET UNITYSDK_OFFSET(0x17D17670)
#define CLASS_1_696E1EF98B970E06_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17D177D0)
#define CLASS_1_696E1EF98B970E06_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17D17CF0)
#define CLASS_1_696E1EF98B970E06_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17D17C90)
#define CLASS_1_696E1EF98B970E06_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17D175D0)
#define CLASS_1_696E1EF98B970E06_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x17D175F0)
#define CLASS_1_696E1EF98B970E06_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x17D17610)
#define CLASS_1_696E1EF98B970E06_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x17D17630)
#define CLASS_1_696E1EF98B970E06_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x17D17650)
#define CLASS_1_696E1EF98B970E06_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17D175B0)
#define CLASS_1_696E1EF98B970E06_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17D175E0)
#define CLASS_1_696E1EF98B970E06_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x17D17600)
#define CLASS_1_696E1EF98B970E06_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x17D17620)
#define CLASS_1_696E1EF98B970E06_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x17D17640)
#define CLASS_1_696E1EF98B970E06_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x17D17660)
#define CLASS_1_696E1EF98B970E06_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17D175C0)
#define CLASS_1_696E1EF98B970E06_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17D174D0)
#define CLASS_1_696E1EF98B970E06_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17D17810)
#define CLASS_1_696E1EF98B970E06_WRITETO_OFFSET UNITYSDK_OFFSET(0x17D17870)
#define CLASS_1_696E1EF98B970E06__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17D174F0)
#define CLASS_1_696E1EF98B970E06__CTOR_OFFSET UNITYSDK_OFFSET(0x17D174E0)

inline static constexpr unsigned int Class_1_696E1EF98B970E06_TypeDefinitionIndex = 23927;

class Class_1_696E1EF98B970E06 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_9 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_11 = 0xF; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_2; // 0x18
	::System::UInt32 Field_1_10; // 0x1C
	::System::UInt32 Field_1_8; // 0x20
	::System::UInt32 Field_1_12; // 0x24
	::System::UInt32 Field_1_4; // 0x28
	::System::UInt32 Field_1_6; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_696E1EF98B970E06__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_696E1EF98B970E06* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_696E1EF98B970E06*))((::PBYTE)hIl2Cpp + CLASS_1_696E1EF98B970E06__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_696E1EF98B970E06_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_696E1EF98B970E06* Clone()
	{
		return ((::Class_1_696E1EF98B970E06*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_696E1EF98B970E06_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_696E1EF98B970E06_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_696E1EF98B970E06_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_696E1EF98B970E06_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_696E1EF98B970E06_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_696E1EF98B970E06_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_696E1EF98B970E06_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_696E1EF98B970E06_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_696E1EF98B970E06_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_696E1EF98B970E06_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_696E1EF98B970E06_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_696E1EF98B970E06_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_696E1EF98B970E06_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_696E1EF98B970E06_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_696E1EF98B970E06* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_696E1EF98B970E06*))((::PBYTE)hIl2Cpp + CLASS_1_696E1EF98B970E06_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_696E1EF98B970E06_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_696E1EF98B970E06_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_696E1EF98B970E06_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_696E1EF98B970E06_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_696E1EF98B970E06* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_696E1EF98B970E06*))((::PBYTE)hIl2Cpp + CLASS_1_696E1EF98B970E06_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_696E1EF98B970E06_MERGEFROM_1_OFFSET))(this, a1);
	}
};
