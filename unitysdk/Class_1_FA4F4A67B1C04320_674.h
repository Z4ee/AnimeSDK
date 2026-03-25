#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FA4F4A67B1C04320_674_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17D38A00)
#define CLASS_1_FA4F4A67B1C04320_674_CLONE_OFFSET UNITYSDK_OFFSET(0x17D38680)
#define CLASS_1_FA4F4A67B1C04320_674_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17D38820)
#define CLASS_1_FA4F4A67B1C04320_674_EQUALS_OFFSET UNITYSDK_OFFSET(0x17D38770)
#define CLASS_1_FA4F4A67B1C04320_674_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17D38890)
#define CLASS_1_FA4F4A67B1C04320_674_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17D38C60)
#define CLASS_1_FA4F4A67B1C04320_674_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17D38C10)
#define CLASS_1_FA4F4A67B1C04320_674_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17D38710)
#define CLASS_1_FA4F4A67B1C04320_674_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x17D38730)
#define CLASS_1_FA4F4A67B1C04320_674_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x17D38750)
#define CLASS_1_FA4F4A67B1C04320_674_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17D386F0)
#define CLASS_1_FA4F4A67B1C04320_674_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17D38720)
#define CLASS_1_FA4F4A67B1C04320_674_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x17D38740)
#define CLASS_1_FA4F4A67B1C04320_674_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x17D38760)
#define CLASS_1_FA4F4A67B1C04320_674_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17D38700)
#define CLASS_1_FA4F4A67B1C04320_674_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17D38630)
#define CLASS_1_FA4F4A67B1C04320_674_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17D388D0)
#define CLASS_1_FA4F4A67B1C04320_674_WRITETO_OFFSET UNITYSDK_OFFSET(0x17D38930)
#define CLASS_1_FA4F4A67B1C04320_674__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17D38650)
#define CLASS_1_FA4F4A67B1C04320_674__CTOR_OFFSET UNITYSDK_OFFSET(0x17D38640)

inline static constexpr unsigned int Class_1_FA4F4A67B1C04320_674_TypeDefinitionIndex = 26014;

class Class_1_FA4F4A67B1C04320_674 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_4; // 0x18
	::System::UInt32 Field_1_2; // 0x1C
	::System::UInt32 Field_1_8; // 0x20
	::System::UInt32 Field_1_6; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_674__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FA4F4A67B1C04320_674* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_674*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_674__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_674_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FA4F4A67B1C04320_674* Clone()
	{
		return ((::Class_1_FA4F4A67B1C04320_674*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_674_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_674_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_674_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_674_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_674_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_674_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_674_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_674_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_674_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_674_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FA4F4A67B1C04320_674* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_674*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_674_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_674_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_674_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_674_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_674_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FA4F4A67B1C04320_674* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_674*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_674_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_674_MERGEFROM_1_OFFSET))(this, a1);
	}
};
