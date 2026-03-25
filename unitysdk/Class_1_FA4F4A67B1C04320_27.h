#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FA4F4A67B1C04320_27_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18066390)
#define CLASS_1_FA4F4A67B1C04320_27_CLONE_OFFSET UNITYSDK_OFFSET(0x18066010)
#define CLASS_1_FA4F4A67B1C04320_27_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x180661B0)
#define CLASS_1_FA4F4A67B1C04320_27_EQUALS_OFFSET UNITYSDK_OFFSET(0x18066100)
#define CLASS_1_FA4F4A67B1C04320_27_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18066220)
#define CLASS_1_FA4F4A67B1C04320_27_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x180665F0)
#define CLASS_1_FA4F4A67B1C04320_27_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x180665A0)
#define CLASS_1_FA4F4A67B1C04320_27_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x180660A0)
#define CLASS_1_FA4F4A67B1C04320_27_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x180660C0)
#define CLASS_1_FA4F4A67B1C04320_27_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x180660E0)
#define CLASS_1_FA4F4A67B1C04320_27_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x18066080)
#define CLASS_1_FA4F4A67B1C04320_27_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x180660B0)
#define CLASS_1_FA4F4A67B1C04320_27_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x180660D0)
#define CLASS_1_FA4F4A67B1C04320_27_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x180660F0)
#define CLASS_1_FA4F4A67B1C04320_27_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x18066090)
#define CLASS_1_FA4F4A67B1C04320_27_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18065FC0)
#define CLASS_1_FA4F4A67B1C04320_27_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18066260)
#define CLASS_1_FA4F4A67B1C04320_27_WRITETO_OFFSET UNITYSDK_OFFSET(0x180662C0)
#define CLASS_1_FA4F4A67B1C04320_27__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18065FE0)
#define CLASS_1_FA4F4A67B1C04320_27__CTOR_OFFSET UNITYSDK_OFFSET(0x18065FD0)

inline static constexpr unsigned int Class_1_FA4F4A67B1C04320_27_TypeDefinitionIndex = 23120;

class Class_1_FA4F4A67B1C04320_27 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_8; // 0x18
	::System::UInt32 Field_1_6; // 0x1C
	::System::UInt32 Field_1_4; // 0x20
	::System::UInt32 Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_27__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FA4F4A67B1C04320_27* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_27*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_27__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_27_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FA4F4A67B1C04320_27* Clone()
	{
		return ((::Class_1_FA4F4A67B1C04320_27*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_27_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_27_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_27_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_27_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_27_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_27_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_27_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_27_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_27_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_27_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FA4F4A67B1C04320_27* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_27*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_27_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_27_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_27_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_27_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_27_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FA4F4A67B1C04320_27* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_27*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_27_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_27_MERGEFROM_1_OFFSET))(this, a1);
	}
};
