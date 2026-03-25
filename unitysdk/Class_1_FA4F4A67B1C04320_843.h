#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FA4F4A67B1C04320_843_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18191A40)
#define CLASS_1_FA4F4A67B1C04320_843_CLONE_OFFSET UNITYSDK_OFFSET(0x18191780)
#define CLASS_1_FA4F4A67B1C04320_843_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x181918D0)
#define CLASS_1_FA4F4A67B1C04320_843_EQUALS_OFFSET UNITYSDK_OFFSET(0x18191830)
#define CLASS_1_FA4F4A67B1C04320_843_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18191930)
#define CLASS_1_FA4F4A67B1C04320_843_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18191B90)
#define CLASS_1_FA4F4A67B1C04320_843_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18191B50)
#define CLASS_1_FA4F4A67B1C04320_843_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x18191810)
#define CLASS_1_FA4F4A67B1C04320_843_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x181917F0)
#define CLASS_1_FA4F4A67B1C04320_843_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x18191820)
#define CLASS_1_FA4F4A67B1C04320_843_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x18191800)
#define CLASS_1_FA4F4A67B1C04320_843_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18191730)
#define CLASS_1_FA4F4A67B1C04320_843_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18191960)
#define CLASS_1_FA4F4A67B1C04320_843_WRITETO_OFFSET UNITYSDK_OFFSET(0x181919C0)
#define CLASS_1_FA4F4A67B1C04320_843__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18191750)
#define CLASS_1_FA4F4A67B1C04320_843__CTOR_OFFSET UNITYSDK_OFFSET(0x18191740)

inline static constexpr unsigned int Class_1_FA4F4A67B1C04320_843_TypeDefinitionIndex = 26998;

class Class_1_FA4F4A67B1C04320_843 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_2; // 0x18
	::System::UInt32 Field_1_4; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_843__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FA4F4A67B1C04320_843* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_843*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_843__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_843_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FA4F4A67B1C04320_843* Clone()
	{
		return ((::Class_1_FA4F4A67B1C04320_843*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_843_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_843_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_843_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_843_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_843_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_843_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FA4F4A67B1C04320_843* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_843*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_843_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_843_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_843_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_843_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_843_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FA4F4A67B1C04320_843* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_843*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_843_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_843_MERGEFROM_1_OFFSET))(this, a1);
	}
};
