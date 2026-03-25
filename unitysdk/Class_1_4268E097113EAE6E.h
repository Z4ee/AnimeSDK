#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4268E097113EAE6E_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18009CD0)
#define CLASS_1_4268E097113EAE6E_CLONE_OFFSET UNITYSDK_OFFSET(0x18009700)
#define CLASS_1_4268E097113EAE6E_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18009980)
#define CLASS_1_4268E097113EAE6E_EQUALS_OFFSET UNITYSDK_OFFSET(0x18009890)
#define CLASS_1_4268E097113EAE6E_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18009A70)
#define CLASS_1_4268E097113EAE6E_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18009FA0)
#define CLASS_1_4268E097113EAE6E_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18009F00)
#define CLASS_1_4268E097113EAE6E_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x18009870)
#define CLASS_1_4268E097113EAE6E_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x180097F0)
#define CLASS_1_4268E097113EAE6E_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x18009770)
#define CLASS_1_4268E097113EAE6E_METHOD_1_1D3C8F680A3EDA34_OFFSET UNITYSDK_OFFSET(0x18009780)
#define CLASS_1_4268E097113EAE6E_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x18009880)
#define CLASS_1_4268E097113EAE6E_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x18009800)
#define CLASS_1_4268E097113EAE6E_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x18009840)
#define CLASS_1_4268E097113EAE6E_METHOD_1_C74E50CBD41F0264_2_OFFSET UNITYSDK_OFFSET(0x18009860)
#define CLASS_1_4268E097113EAE6E_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x18009820)
#define CLASS_1_4268E097113EAE6E_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x18009830)
#define CLASS_1_4268E097113EAE6E_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x18009850)
#define CLASS_1_4268E097113EAE6E_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x18009810)
#define CLASS_1_4268E097113EAE6E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18009680)
#define CLASS_1_4268E097113EAE6E_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18009B40)
#define CLASS_1_4268E097113EAE6E_WRITETO_OFFSET UNITYSDK_OFFSET(0x18009BA0)
#define CLASS_1_4268E097113EAE6E__CTOR_1_OFFSET UNITYSDK_OFFSET(0x180096A0)
#define CLASS_1_4268E097113EAE6E__CTOR_OFFSET UNITYSDK_OFFSET(0x18009690)

inline static constexpr unsigned int Class_1_4268E097113EAE6E_TypeDefinitionIndex = 23351;

class Class_1_4268E097113EAE6E : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_9 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x2; // 0x0
	::System::String* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_12; // 0x20
	::System::Boolean Field_1_8; // 0x24
	::System::Boolean Field_1_6; // 0x25
	::System::Boolean Field_1_10; // 0x26
	::System::UInt32 Field_1_4; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4268E097113EAE6E__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4268E097113EAE6E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4268E097113EAE6E*))((::PBYTE)hIl2Cpp + CLASS_1_4268E097113EAE6E__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4268E097113EAE6E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4268E097113EAE6E* Clone()
	{
		return ((::Class_1_4268E097113EAE6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4268E097113EAE6E_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4268E097113EAE6E_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4268E097113EAE6E_METHOD_1_1D3C8F680A3EDA34_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4268E097113EAE6E_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4268E097113EAE6E_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4268E097113EAE6E_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4268E097113EAE6E_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4268E097113EAE6E_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4268E097113EAE6E_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4268E097113EAE6E_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4268E097113EAE6E_METHOD_1_C74E50CBD41F0264_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4268E097113EAE6E_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4268E097113EAE6E_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4268E097113EAE6E_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4268E097113EAE6E* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4268E097113EAE6E*))((::PBYTE)hIl2Cpp + CLASS_1_4268E097113EAE6E_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4268E097113EAE6E_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4268E097113EAE6E_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4268E097113EAE6E_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4268E097113EAE6E_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4268E097113EAE6E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4268E097113EAE6E*))((::PBYTE)hIl2Cpp + CLASS_1_4268E097113EAE6E_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4268E097113EAE6E_MERGEFROM_1_OFFSET))(this, a1);
	}
};
