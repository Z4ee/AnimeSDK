#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FA4F4A67B1C04320_207_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x180748E0)
#define CLASS_1_FA4F4A67B1C04320_207_CLONE_OFFSET UNITYSDK_OFFSET(0x18074670)
#define CLASS_1_FA4F4A67B1C04320_207_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18074770)
#define CLASS_1_FA4F4A67B1C04320_207_EQUALS_OFFSET UNITYSDK_OFFSET(0x18074700)
#define CLASS_1_FA4F4A67B1C04320_207_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x180747D0)
#define CLASS_1_FA4F4A67B1C04320_207_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18074A30)
#define CLASS_1_FA4F4A67B1C04320_207_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x180749F0)
#define CLASS_1_FA4F4A67B1C04320_207_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x180746E0)
#define CLASS_1_FA4F4A67B1C04320_207_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x180746C0)
#define CLASS_1_FA4F4A67B1C04320_207_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x180746F0)
#define CLASS_1_FA4F4A67B1C04320_207_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x180746D0)
#define CLASS_1_FA4F4A67B1C04320_207_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18074620)
#define CLASS_1_FA4F4A67B1C04320_207_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18074800)
#define CLASS_1_FA4F4A67B1C04320_207_WRITETO_OFFSET UNITYSDK_OFFSET(0x18074860)
#define CLASS_1_FA4F4A67B1C04320_207__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18074640)
#define CLASS_1_FA4F4A67B1C04320_207__CTOR_OFFSET UNITYSDK_OFFSET(0x18074630)

inline static constexpr unsigned int Class_1_FA4F4A67B1C04320_207_TypeDefinitionIndex = 23950;

class Class_1_FA4F4A67B1C04320_207 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_2; // 0x18
	::System::UInt32 Field_1_4; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_207__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FA4F4A67B1C04320_207* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_207*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_207__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_207_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FA4F4A67B1C04320_207* Clone()
	{
		return ((::Class_1_FA4F4A67B1C04320_207*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_207_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_207_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_207_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_207_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_207_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_207_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FA4F4A67B1C04320_207* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_207*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_207_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_207_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_207_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_207_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_207_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FA4F4A67B1C04320_207* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_207*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_207_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_207_MERGEFROM_1_OFFSET))(this, a1);
	}
};
