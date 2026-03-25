#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_9F4DE0130D72755A_4_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17B2FF20)
#define CLASS_1_9F4DE0130D72755A_4_CLONE_OFFSET UNITYSDK_OFFSET(0x17B2FC30)
#define CLASS_1_9F4DE0130D72755A_4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17B2FD50)
#define CLASS_1_9F4DE0130D72755A_4_EQUALS_OFFSET UNITYSDK_OFFSET(0x17B2FCE0)
#define CLASS_1_9F4DE0130D72755A_4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17B2FDC0)
#define CLASS_1_9F4DE0130D72755A_4_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17B301A0)
#define CLASS_1_9F4DE0130D72755A_4_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17B30150)
#define CLASS_1_9F4DE0130D72755A_4_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17B2FCA0)
#define CLASS_1_9F4DE0130D72755A_4_METHOD_1_3163C288F3AE2966_1_OFFSET UNITYSDK_OFFSET(0x17B2FCD0)
#define CLASS_1_9F4DE0130D72755A_4_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x17B2FC90)
#define CLASS_1_9F4DE0130D72755A_4_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17B2FCB0)
#define CLASS_1_9F4DE0130D72755A_4_METHOD_1_CE81D059476B1F49_1_OFFSET UNITYSDK_OFFSET(0x17B2FCC0)
#define CLASS_1_9F4DE0130D72755A_4_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x17B2FC80)
#define CLASS_1_9F4DE0130D72755A_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17B2FBD0)
#define CLASS_1_9F4DE0130D72755A_4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17B2FE20)
#define CLASS_1_9F4DE0130D72755A_4_WRITETO_OFFSET UNITYSDK_OFFSET(0x17B2FE80)
#define CLASS_1_9F4DE0130D72755A_4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17B2FBF0)
#define CLASS_1_9F4DE0130D72755A_4__CTOR_OFFSET UNITYSDK_OFFSET(0x17B2FBE0)

inline static constexpr unsigned int Class_1_9F4DE0130D72755A_4_TypeDefinitionIndex = 24394;

class Class_1_9F4DE0130D72755A_4 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt64 Field_1_2; // 0x18
	::System::UInt64 Field_1_6; // 0x20
	::System::UInt32 Field_1_4; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F4DE0130D72755A_4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_9F4DE0130D72755A_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9F4DE0130D72755A_4*))((::PBYTE)hIl2Cpp + CLASS_1_9F4DE0130D72755A_4__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F4DE0130D72755A_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_9F4DE0130D72755A_4* Clone()
	{
		return ((::Class_1_9F4DE0130D72755A_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F4DE0130D72755A_4_CLONE_OFFSET))(this);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F4DE0130D72755A_4_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_9F4DE0130D72755A_4_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F4DE0130D72755A_4_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9F4DE0130D72755A_4_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49_1()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F4DE0130D72755A_4_METHOD_1_CE81D059476B1F49_1_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966_1(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_9F4DE0130D72755A_4_METHOD_1_3163C288F3AE2966_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9F4DE0130D72755A_4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_9F4DE0130D72755A_4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9F4DE0130D72755A_4*))((::PBYTE)hIl2Cpp + CLASS_1_9F4DE0130D72755A_4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F4DE0130D72755A_4_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F4DE0130D72755A_4_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9F4DE0130D72755A_4_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F4DE0130D72755A_4_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_9F4DE0130D72755A_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9F4DE0130D72755A_4*))((::PBYTE)hIl2Cpp + CLASS_1_9F4DE0130D72755A_4_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9F4DE0130D72755A_4_MERGEFROM_1_OFFSET))(this, a1);
	}
};
