#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FA4F4A67B1C04320_348_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17ACD0A0)
#define CLASS_1_FA4F4A67B1C04320_348_CLONE_OFFSET UNITYSDK_OFFSET(0x17ACCD20)
#define CLASS_1_FA4F4A67B1C04320_348_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17ACCEC0)
#define CLASS_1_FA4F4A67B1C04320_348_EQUALS_OFFSET UNITYSDK_OFFSET(0x17ACCE10)
#define CLASS_1_FA4F4A67B1C04320_348_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17ACCF30)
#define CLASS_1_FA4F4A67B1C04320_348_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17ACD300)
#define CLASS_1_FA4F4A67B1C04320_348_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17ACD2B0)
#define CLASS_1_FA4F4A67B1C04320_348_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17ACCDB0)
#define CLASS_1_FA4F4A67B1C04320_348_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x17ACCDD0)
#define CLASS_1_FA4F4A67B1C04320_348_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x17ACCDF0)
#define CLASS_1_FA4F4A67B1C04320_348_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17ACCD90)
#define CLASS_1_FA4F4A67B1C04320_348_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17ACCDC0)
#define CLASS_1_FA4F4A67B1C04320_348_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x17ACCDE0)
#define CLASS_1_FA4F4A67B1C04320_348_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x17ACCE00)
#define CLASS_1_FA4F4A67B1C04320_348_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17ACCDA0)
#define CLASS_1_FA4F4A67B1C04320_348_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17ACCCD0)
#define CLASS_1_FA4F4A67B1C04320_348_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17ACCF70)
#define CLASS_1_FA4F4A67B1C04320_348_WRITETO_OFFSET UNITYSDK_OFFSET(0x17ACCFD0)
#define CLASS_1_FA4F4A67B1C04320_348__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17ACCCF0)
#define CLASS_1_FA4F4A67B1C04320_348__CTOR_OFFSET UNITYSDK_OFFSET(0x17ACCCE0)

inline static constexpr unsigned int Class_1_FA4F4A67B1C04320_348_TypeDefinitionIndex = 24696;

class Class_1_FA4F4A67B1C04320_348 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xF; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_8; // 0x18
	::System::UInt32 Field_1_6; // 0x1C
	::System::UInt32 Field_1_2; // 0x20
	::System::UInt32 Field_1_4; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_348__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FA4F4A67B1C04320_348* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_348*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_348__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_348_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FA4F4A67B1C04320_348* Clone()
	{
		return ((::Class_1_FA4F4A67B1C04320_348*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_348_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_348_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_348_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_348_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_348_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_348_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_348_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_348_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_348_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_348_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FA4F4A67B1C04320_348* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_348*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_348_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_348_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_348_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_348_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_348_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FA4F4A67B1C04320_348* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_348*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_348_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_348_MERGEFROM_1_OFFSET))(this, a1);
	}
};
