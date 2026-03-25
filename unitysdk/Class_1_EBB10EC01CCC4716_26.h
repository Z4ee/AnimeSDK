#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_EBB10EC01CCC4716_26_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17BE0900)
#define CLASS_1_EBB10EC01CCC4716_26_CLONE_OFFSET UNITYSDK_OFFSET(0x17BE0410)
#define CLASS_1_EBB10EC01CCC4716_26_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17BE0660)
#define CLASS_1_EBB10EC01CCC4716_26_EQUALS_OFFSET UNITYSDK_OFFSET(0x17BE0580)
#define CLASS_1_EBB10EC01CCC4716_26_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17BE0710)
#define CLASS_1_EBB10EC01CCC4716_26_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17BE0C00)
#define CLASS_1_EBB10EC01CCC4716_26_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17BE0B90)
#define CLASS_1_EBB10EC01CCC4716_26_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17BE04E0)
#define CLASS_1_EBB10EC01CCC4716_26_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x17BE0500)
#define CLASS_1_EBB10EC01CCC4716_26_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x17BE0540)
#define CLASS_1_EBB10EC01CCC4716_26_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x17BE0560)
#define CLASS_1_EBB10EC01CCC4716_26_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17BE04A0)
#define CLASS_1_EBB10EC01CCC4716_26_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17BE04F0)
#define CLASS_1_EBB10EC01CCC4716_26_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x17BE0510)
#define CLASS_1_EBB10EC01CCC4716_26_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x17BE0550)
#define CLASS_1_EBB10EC01CCC4716_26_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x17BE0570)
#define CLASS_1_EBB10EC01CCC4716_26_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17BE04B0)
#define CLASS_1_EBB10EC01CCC4716_26_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x17BE0530)
#define CLASS_1_EBB10EC01CCC4716_26_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17BE04D0)
#define CLASS_1_EBB10EC01CCC4716_26_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x17BE0520)
#define CLASS_1_EBB10EC01CCC4716_26_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17BE04C0)
#define CLASS_1_EBB10EC01CCC4716_26_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17BE03A0)
#define CLASS_1_EBB10EC01CCC4716_26_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17BE0750)
#define CLASS_1_EBB10EC01CCC4716_26_WRITETO_OFFSET UNITYSDK_OFFSET(0x17BE07B0)
#define CLASS_1_EBB10EC01CCC4716_26__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17BE03C0)
#define CLASS_1_EBB10EC01CCC4716_26__CTOR_OFFSET UNITYSDK_OFFSET(0x17BE03B0)

inline static constexpr unsigned int Class_1_EBB10EC01CCC4716_26_TypeDefinitionIndex = 27536;

class Class_1_EBB10EC01CCC4716_26 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_9 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_13 = 0xD; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_12; // 0x18
	::System::UInt32 Field_1_2; // 0x1C
	::System::Boolean Field_1_10; // 0x20
	::System::Boolean Field_1_4; // 0x21
	::System::UInt32 Field_1_6; // 0x24
	::System::UInt32 Field_1_8; // 0x28
	::System::UInt32 Field_1_14; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_26__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_EBB10EC01CCC4716_26* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_26*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_26__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_26_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_EBB10EC01CCC4716_26* Clone()
	{
		return ((::Class_1_EBB10EC01CCC4716_26*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_26_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_26_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_26_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_26_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_26_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_26_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_26_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_26_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_26_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_26_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_26_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_26_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_26_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_26_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_26_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_26_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_EBB10EC01CCC4716_26* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_26*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_26_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_26_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_26_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_26_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_26_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_EBB10EC01CCC4716_26* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_26*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_26_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EBB10EC01CCC4716_26_MERGEFROM_1_OFFSET))(this, a1);
	}
};
