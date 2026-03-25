#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class AlleyPlacingShip; }
namespace System { class String; }

#define CLASS_1_89F9D25B431A8CB5_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E9CD60)
#define CLASS_1_89F9D25B431A8CB5_CLONE_OFFSET UNITYSDK_OFFSET(0x17E9C700)
#define CLASS_1_89F9D25B431A8CB5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E9CA20)
#define CLASS_1_89F9D25B431A8CB5_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E9C900)
#define CLASS_1_89F9D25B431A8CB5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E9CB10)
#define CLASS_1_89F9D25B431A8CB5_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E9D2B0)
#define CLASS_1_89F9D25B431A8CB5_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E9D180)
#define CLASS_1_89F9D25B431A8CB5_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17E9C800)
#define CLASS_1_89F9D25B431A8CB5_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x17E9C840)
#define CLASS_1_89F9D25B431A8CB5_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x17E9C860)
#define CLASS_1_89F9D25B431A8CB5_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x17E9C880)
#define CLASS_1_89F9D25B431A8CB5_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x17E9C8A0)
#define CLASS_1_89F9D25B431A8CB5_METHOD_1_02A3D10A9D535169_6_OFFSET UNITYSDK_OFFSET(0x17E9C8C0)
#define CLASS_1_89F9D25B431A8CB5_METHOD_1_02A3D10A9D535169_7_OFFSET UNITYSDK_OFFSET(0x17E9C8E0)
#define CLASS_1_89F9D25B431A8CB5_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17E9C7E0)
#define CLASS_1_89F9D25B431A8CB5_METHOD_1_0710476BE088C0D2_OFFSET UNITYSDK_OFFSET(0x17E9C830)
#define CLASS_1_89F9D25B431A8CB5_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17E9C810)
#define CLASS_1_89F9D25B431A8CB5_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x17E9C850)
#define CLASS_1_89F9D25B431A8CB5_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x17E9C870)
#define CLASS_1_89F9D25B431A8CB5_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x17E9C890)
#define CLASS_1_89F9D25B431A8CB5_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x17E9C8B0)
#define CLASS_1_89F9D25B431A8CB5_METHOD_1_7786DC814C2FC3BE_6_OFFSET UNITYSDK_OFFSET(0x17E9C8D0)
#define CLASS_1_89F9D25B431A8CB5_METHOD_1_7786DC814C2FC3BE_7_OFFSET UNITYSDK_OFFSET(0x17E9C8F0)
#define CLASS_1_89F9D25B431A8CB5_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17E9C7F0)
#define CLASS_1_89F9D25B431A8CB5_METHOD_1_E10592A80FB32071_OFFSET UNITYSDK_OFFSET(0x17E9C820)
#define CLASS_1_89F9D25B431A8CB5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E9C640)
#define CLASS_1_89F9D25B431A8CB5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E9CB60)
#define CLASS_1_89F9D25B431A8CB5_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E9CBC0)
#define CLASS_1_89F9D25B431A8CB5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E9C660)
#define CLASS_1_89F9D25B431A8CB5__CTOR_OFFSET UNITYSDK_OFFSET(0x17E9C650)

inline static constexpr unsigned int Class_1_89F9D25B431A8CB5_TypeDefinitionIndex = 23373;

class Class_1_89F9D25B431A8CB5 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_9 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_11 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_13 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_15 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_17 = 0x8; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Proto::AlleyPlacingShip* Field_1_6; // 0x18
	::System::UInt32 Field_1_18; // 0x20
	::System::UInt32 Field_1_8; // 0x24
	::System::UInt32 Field_1_12; // 0x28
	::System::UInt32 Field_1_10; // 0x2C
	::System::UInt32 Field_1_16; // 0x30
	::System::UInt32 Field_1_4; // 0x34
	::System::UInt32 Field_1_14; // 0x38
	::System::UInt32 Field_1_2; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89F9D25B431A8CB5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_89F9D25B431A8CB5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_89F9D25B431A8CB5*))((::PBYTE)hIl2Cpp + CLASS_1_89F9D25B431A8CB5__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89F9D25B431A8CB5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_89F9D25B431A8CB5* Clone()
	{
		return ((::Class_1_89F9D25B431A8CB5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89F9D25B431A8CB5_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89F9D25B431A8CB5_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_89F9D25B431A8CB5_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89F9D25B431A8CB5_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_89F9D25B431A8CB5_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Proto::AlleyPlacingShip* Method_1_E10592A80FB32071()
	{
		return ((::Proto::AlleyPlacingShip*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89F9D25B431A8CB5_METHOD_1_E10592A80FB32071_OFFSET))(this);
	}

	::System::Void Method_1_0710476BE088C0D2(::Proto::AlleyPlacingShip* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::AlleyPlacingShip*))((::PBYTE)hIl2Cpp + CLASS_1_89F9D25B431A8CB5_METHOD_1_0710476BE088C0D2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89F9D25B431A8CB5_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_89F9D25B431A8CB5_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89F9D25B431A8CB5_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_89F9D25B431A8CB5_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89F9D25B431A8CB5_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_89F9D25B431A8CB5_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89F9D25B431A8CB5_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_89F9D25B431A8CB5_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_6()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89F9D25B431A8CB5_METHOD_1_02A3D10A9D535169_6_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_89F9D25B431A8CB5_METHOD_1_7786DC814C2FC3BE_6_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_7()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89F9D25B431A8CB5_METHOD_1_02A3D10A9D535169_7_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_89F9D25B431A8CB5_METHOD_1_7786DC814C2FC3BE_7_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_89F9D25B431A8CB5_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_89F9D25B431A8CB5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_89F9D25B431A8CB5*))((::PBYTE)hIl2Cpp + CLASS_1_89F9D25B431A8CB5_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89F9D25B431A8CB5_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89F9D25B431A8CB5_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_89F9D25B431A8CB5_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89F9D25B431A8CB5_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_89F9D25B431A8CB5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_89F9D25B431A8CB5*))((::PBYTE)hIl2Cpp + CLASS_1_89F9D25B431A8CB5_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_89F9D25B431A8CB5_MERGEFROM_1_OFFSET))(this, a1);
	}
};
