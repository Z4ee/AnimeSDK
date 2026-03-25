#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FA4F4A67B1C04320_338_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17EF6310)
#define CLASS_1_FA4F4A67B1C04320_338_CLONE_OFFSET UNITYSDK_OFFSET(0x17EF60A0)
#define CLASS_1_FA4F4A67B1C04320_338_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17EF61D0)
#define CLASS_1_FA4F4A67B1C04320_338_EQUALS_OFFSET UNITYSDK_OFFSET(0x17EF6130)
#define CLASS_1_FA4F4A67B1C04320_338_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17EF6220)
#define CLASS_1_FA4F4A67B1C04320_338_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17EF63D0)
#define CLASS_1_FA4F4A67B1C04320_338_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17EF63A0)
#define CLASS_1_FA4F4A67B1C04320_338_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17EF6110)
#define CLASS_1_FA4F4A67B1C04320_338_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17EF6120)
#define CLASS_1_FA4F4A67B1C04320_338_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17EF6050)
#define CLASS_1_FA4F4A67B1C04320_338_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17EF6250)
#define CLASS_1_FA4F4A67B1C04320_338_WRITETO_OFFSET UNITYSDK_OFFSET(0x17EF62B0)
#define CLASS_1_FA4F4A67B1C04320_338__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17EF6070)
#define CLASS_1_FA4F4A67B1C04320_338__CTOR_OFFSET UNITYSDK_OFFSET(0x17EF6060)

inline static constexpr unsigned int Class_1_FA4F4A67B1C04320_338_TypeDefinitionIndex = 24640;

class Class_1_FA4F4A67B1C04320_338 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_338__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FA4F4A67B1C04320_338* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_338*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_338__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_338_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FA4F4A67B1C04320_338* Clone()
	{
		return ((::Class_1_FA4F4A67B1C04320_338*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_338_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_338_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_338_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_338_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FA4F4A67B1C04320_338* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_338*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_338_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_338_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_338_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_338_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_338_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FA4F4A67B1C04320_338* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_338*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_338_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA4F4A67B1C04320_338_MERGEFROM_1_OFFSET))(this, a1);
	}
};
