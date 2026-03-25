#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_1CA4D93AB7716E0A_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x181CD0A0)
#define CLASS_1_1CA4D93AB7716E0A_1_CLONE_OFFSET UNITYSDK_OFFSET(0x181CCC10)
#define CLASS_1_1CA4D93AB7716E0A_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x181CCE20)
#define CLASS_1_1CA4D93AB7716E0A_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x181CCD50)
#define CLASS_1_1CA4D93AB7716E0A_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x181CCEC0)
#define CLASS_1_1CA4D93AB7716E0A_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x181CD3F0)
#define CLASS_1_1CA4D93AB7716E0A_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x181CD380)
#define CLASS_1_1CA4D93AB7716E0A_1_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x181CCCB0)
#define CLASS_1_1CA4D93AB7716E0A_1_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x181CCCD0)
#define CLASS_1_1CA4D93AB7716E0A_1_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x181CCCF0)
#define CLASS_1_1CA4D93AB7716E0A_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x181CCC90)
#define CLASS_1_1CA4D93AB7716E0A_1_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x181CCD40)
#define CLASS_1_1CA4D93AB7716E0A_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x181CCCC0)
#define CLASS_1_1CA4D93AB7716E0A_1_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x181CCCE0)
#define CLASS_1_1CA4D93AB7716E0A_1_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x181CCD00)
#define CLASS_1_1CA4D93AB7716E0A_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x181CCCA0)
#define CLASS_1_1CA4D93AB7716E0A_1_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x181CCD30)
#define CLASS_1_1CA4D93AB7716E0A_1_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x181CCD20)
#define CLASS_1_1CA4D93AB7716E0A_1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x181CCD10)
#define CLASS_1_1CA4D93AB7716E0A_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x181CCBB0)
#define CLASS_1_1CA4D93AB7716E0A_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x181CCF20)
#define CLASS_1_1CA4D93AB7716E0A_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x181CCF80)
#define CLASS_1_1CA4D93AB7716E0A_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x181CCBD0)
#define CLASS_1_1CA4D93AB7716E0A_1__CTOR_OFFSET UNITYSDK_OFFSET(0x181CCBC0)

inline static constexpr unsigned int Class_1_1CA4D93AB7716E0A_1_TypeDefinitionIndex = 26097;

class Class_1_1CA4D93AB7716E0A_1 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_9 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_8; // 0x18
	::System::UInt32 Field_1_6; // 0x1C
	::System::UInt32 Field_1_4; // 0x20
	::System::UInt32 Field_1_2; // 0x24
	::System::Boolean Field_1_10; // 0x28
	::System::Int64 Field_1_12; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CA4D93AB7716E0A_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_1CA4D93AB7716E0A_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CA4D93AB7716E0A_1*))((::PBYTE)hIl2Cpp + CLASS_1_1CA4D93AB7716E0A_1__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CA4D93AB7716E0A_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_1CA4D93AB7716E0A_1* Clone()
	{
		return ((::Class_1_1CA4D93AB7716E0A_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CA4D93AB7716E0A_1_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CA4D93AB7716E0A_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1CA4D93AB7716E0A_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CA4D93AB7716E0A_1_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1CA4D93AB7716E0A_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CA4D93AB7716E0A_1_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1CA4D93AB7716E0A_1_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CA4D93AB7716E0A_1_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1CA4D93AB7716E0A_1_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CA4D93AB7716E0A_1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1CA4D93AB7716E0A_1_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CA4D93AB7716E0A_1_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_1CA4D93AB7716E0A_1_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1CA4D93AB7716E0A_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1CA4D93AB7716E0A_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1CA4D93AB7716E0A_1*))((::PBYTE)hIl2Cpp + CLASS_1_1CA4D93AB7716E0A_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CA4D93AB7716E0A_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CA4D93AB7716E0A_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1CA4D93AB7716E0A_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CA4D93AB7716E0A_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_1CA4D93AB7716E0A_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CA4D93AB7716E0A_1*))((::PBYTE)hIl2Cpp + CLASS_1_1CA4D93AB7716E0A_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1CA4D93AB7716E0A_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
