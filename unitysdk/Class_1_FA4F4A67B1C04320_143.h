#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FA4F4A67B1C04320_143_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17DD3D80)
#define CLASS_1_FA4F4A67B1C04320_143_CLONE_OFFSET UNITYSDK_OFFSET(0x17DD39A0)
#define CLASS_1_FA4F4A67B1C04320_143_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17DD3B80)
#define CLASS_1_FA4F4A67B1C04320_143_EQUALS_OFFSET UNITYSDK_OFFSET(0x17DD3AC0)
#define CLASS_1_FA4F4A67B1C04320_143_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17DD3C00)
#define CLASS_1_FA4F4A67B1C04320_143_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17DD4070)
#define CLASS_1_FA4F4A67B1C04320_143_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17DD4010)
#define CLASS_1_FA4F4A67B1C04320_143_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17DD3A40)
#define CLASS_1_FA4F4A67B1C04320_143_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x17DD3A60)
#define CLASS_1_FA4F4A67B1C04320_143_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x17DD3A80)
#define CLASS_1_FA4F4A67B1C04320_143_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x17DD3AA0)
#define CLASS_1_FA4F4A67B1C04320_143_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17DD3A20)
#define CLASS_1_FA4F4A67B1C04320_143_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17DD3A50)
#define CLASS_1_FA4F4A67B1C04320_143_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x17DD3A70)
#define CLASS_1_FA4F4A67B1C04320_143_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x17DD3A90)
#define CLASS_1_FA4F4A67B1C04320_143_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x17DD3AB0)
#define CLASS_1_FA4F4A67B1C04320_143_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17DD3A30)
#define CLASS_1_FA4F4A67B1C04320_143_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17DD3940)
#define CLASS_1_FA4F4A67B1C04320_143_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17DD3C30)
#define CLASS_1_FA4F4A67B1C04320_143_WRITETO_OFFSET UNITYSDK_OFFSET(0x17DD3C90)
#define CLASS_1_FA4F4A67B1C04320_143__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17DD3960)
#define CLASS_1_FA4F4A67B1C04320_143__CTOR_OFFSET UNITYSDK_OFFSET(0x17DD3950)

inline static constexpr unsigned int Class_1_FA4F4A67B1C04320_143_TypeDefinitionIndex = 23628;

class Class_1_FA4F4A67B1C04320_143 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x6; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_6; // 0x18
	::System::UInt32 Field_1_4; // 0x1C
	::System::UInt32 Field_1_8; // 0x20
	::System::UInt32 Field_1_10; // 0x24
	::System::UInt32 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_143__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FA4F4A67B1C04320_143* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_143*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_143__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_143_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FA4F4A67B1C04320_143* Clone()
	{
		return ((::Class_1_FA4F4A67B1C04320_143*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_143_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_143_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_143_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_143_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_143_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_143_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_143_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_143_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_143_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_143_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_143_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_143_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FA4F4A67B1C04320_143* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_143*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_143_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_143_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_143_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_143_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_143_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FA4F4A67B1C04320_143* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_143*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_143_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_143_MERGEFROM_1_OFFSET))(this, a1);
	}
};
