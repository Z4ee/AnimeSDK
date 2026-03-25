#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FA4F4A67B1C04320_124_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18056BE0)
#define CLASS_1_FA4F4A67B1C04320_124_CLONE_OFFSET UNITYSDK_OFFSET(0x18056860)
#define CLASS_1_FA4F4A67B1C04320_124_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x180569E0)
#define CLASS_1_FA4F4A67B1C04320_124_EQUALS_OFFSET UNITYSDK_OFFSET(0x18056950)
#define CLASS_1_FA4F4A67B1C04320_124_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18056A60)
#define CLASS_1_FA4F4A67B1C04320_124_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18056ED0)
#define CLASS_1_FA4F4A67B1C04320_124_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18056E70)
#define CLASS_1_FA4F4A67B1C04320_124_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x180568D0)
#define CLASS_1_FA4F4A67B1C04320_124_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x180568F0)
#define CLASS_1_FA4F4A67B1C04320_124_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x18056910)
#define CLASS_1_FA4F4A67B1C04320_124_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x18056930)
#define CLASS_1_FA4F4A67B1C04320_124_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x180568B0)
#define CLASS_1_FA4F4A67B1C04320_124_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x180568E0)
#define CLASS_1_FA4F4A67B1C04320_124_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x18056900)
#define CLASS_1_FA4F4A67B1C04320_124_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x18056920)
#define CLASS_1_FA4F4A67B1C04320_124_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x18056940)
#define CLASS_1_FA4F4A67B1C04320_124_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x180568C0)
#define CLASS_1_FA4F4A67B1C04320_124_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18056800)
#define CLASS_1_FA4F4A67B1C04320_124_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18056A90)
#define CLASS_1_FA4F4A67B1C04320_124_WRITETO_OFFSET UNITYSDK_OFFSET(0x18056AF0)
#define CLASS_1_FA4F4A67B1C04320_124__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18056820)
#define CLASS_1_FA4F4A67B1C04320_124__CTOR_OFFSET UNITYSDK_OFFSET(0x18056810)

inline static constexpr unsigned int Class_1_FA4F4A67B1C04320_124_TypeDefinitionIndex = 23534;

class Class_1_FA4F4A67B1C04320_124 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_2; // 0x18
	::System::UInt32 Field_1_10; // 0x1C
	::System::UInt32 Field_1_8; // 0x20
	::System::UInt32 Field_1_4; // 0x24
	::System::UInt32 Field_1_6; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_124__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FA4F4A67B1C04320_124* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_124*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_124__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_124_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FA4F4A67B1C04320_124* Clone()
	{
		return ((::Class_1_FA4F4A67B1C04320_124*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_124_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_124_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_124_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_124_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_124_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_124_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_124_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_124_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_124_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_124_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_124_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_124_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FA4F4A67B1C04320_124* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_124*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_124_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_124_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_124_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_124_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_124_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FA4F4A67B1C04320_124* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_124*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_124_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_124_MERGEFROM_1_OFFSET))(this, a1);
	}
};
