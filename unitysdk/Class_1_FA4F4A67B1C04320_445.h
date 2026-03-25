#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FA4F4A67B1C04320_445_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17CF7430)
#define CLASS_1_FA4F4A67B1C04320_445_CLONE_OFFSET UNITYSDK_OFFSET(0x17CF71C0)
#define CLASS_1_FA4F4A67B1C04320_445_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17CF72C0)
#define CLASS_1_FA4F4A67B1C04320_445_EQUALS_OFFSET UNITYSDK_OFFSET(0x17CF7250)
#define CLASS_1_FA4F4A67B1C04320_445_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17CF7320)
#define CLASS_1_FA4F4A67B1C04320_445_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17CF7580)
#define CLASS_1_FA4F4A67B1C04320_445_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17CF7540)
#define CLASS_1_FA4F4A67B1C04320_445_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17CF7230)
#define CLASS_1_FA4F4A67B1C04320_445_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17CF7210)
#define CLASS_1_FA4F4A67B1C04320_445_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17CF7240)
#define CLASS_1_FA4F4A67B1C04320_445_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17CF7220)
#define CLASS_1_FA4F4A67B1C04320_445_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17CF7170)
#define CLASS_1_FA4F4A67B1C04320_445_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17CF7350)
#define CLASS_1_FA4F4A67B1C04320_445_WRITETO_OFFSET UNITYSDK_OFFSET(0x17CF73B0)
#define CLASS_1_FA4F4A67B1C04320_445__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17CF7190)
#define CLASS_1_FA4F4A67B1C04320_445__CTOR_OFFSET UNITYSDK_OFFSET(0x17CF7180)

inline static constexpr unsigned int Class_1_FA4F4A67B1C04320_445_TypeDefinitionIndex = 25035;

class Class_1_FA4F4A67B1C04320_445 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_4; // 0x18
	::System::UInt32 Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_445__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FA4F4A67B1C04320_445* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_445*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_445__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_445_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FA4F4A67B1C04320_445* Clone()
	{
		return ((::Class_1_FA4F4A67B1C04320_445*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_445_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_445_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_445_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_445_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_445_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_445_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FA4F4A67B1C04320_445* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_445*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_445_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_445_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_445_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_445_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_445_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FA4F4A67B1C04320_445* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_445*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_445_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_445_MERGEFROM_1_OFFSET))(this, a1);
	}
};
