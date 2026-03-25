#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_ACC7757D49879D15_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17DFFFD0)
#define CLASS_1_ACC7757D49879D15_2_CLONE_OFFSET UNITYSDK_OFFSET(0x17DFFA50)
#define CLASS_1_ACC7757D49879D15_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17DFFC80)
#define CLASS_1_ACC7757D49879D15_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x17DFFBD0)
#define CLASS_1_ACC7757D49879D15_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17DFFD50)
#define CLASS_1_ACC7757D49879D15_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E00450)
#define CLASS_1_ACC7757D49879D15_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E003B0)
#define CLASS_1_ACC7757D49879D15_2_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17DFFB10)
#define CLASS_1_ACC7757D49879D15_2_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x17DFFBB0)
#define CLASS_1_ACC7757D49879D15_2_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17DFFAD0)
#define CLASS_1_ACC7757D49879D15_2_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x17DFFB30)
#define CLASS_1_ACC7757D49879D15_2_METHOD_1_1D3C8F680A3EDA34_OFFSET UNITYSDK_OFFSET(0x17DFFB40)
#define CLASS_1_ACC7757D49879D15_2_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x17DFFB00)
#define CLASS_1_ACC7757D49879D15_2_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17DFFB20)
#define CLASS_1_ACC7757D49879D15_2_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x17DFFBC0)
#define CLASS_1_ACC7757D49879D15_2_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17DFFAE0)
#define CLASS_1_ACC7757D49879D15_2_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x17DFFAC0)
#define CLASS_1_ACC7757D49879D15_2_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x17DFFAB0)
#define CLASS_1_ACC7757D49879D15_2_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x17DFFAF0)
#define CLASS_1_ACC7757D49879D15_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17DFF9E0)
#define CLASS_1_ACC7757D49879D15_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17DFFE20)
#define CLASS_1_ACC7757D49879D15_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x17DFFE80)
#define CLASS_1_ACC7757D49879D15_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17DFFA00)
#define CLASS_1_ACC7757D49879D15_2__CTOR_OFFSET UNITYSDK_OFFSET(0x17DFF9F0)

inline static constexpr unsigned int Class_1_ACC7757D49879D15_2_TypeDefinitionIndex = 27132;

class Class_1_ACC7757D49879D15_2 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_11 = 0xE; // 0x0
	::System::String* Field_1_10; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::Int32 Field_1_2; // 0x20
	::System::UInt32 Field_1_8; // 0x24
	::System::UInt32 Field_1_4; // 0x28
	::System::UInt32 Field_1_12; // 0x2C
	::System::UInt64 Field_1_6; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACC7757D49879D15_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_ACC7757D49879D15_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ACC7757D49879D15_2*))((::PBYTE)hIl2Cpp + CLASS_1_ACC7757D49879D15_2__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACC7757D49879D15_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_ACC7757D49879D15_2* Clone()
	{
		return ((::Class_1_ACC7757D49879D15_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACC7757D49879D15_2_CLONE_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACC7757D49879D15_2_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ACC7757D49879D15_2_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACC7757D49879D15_2_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_ACC7757D49879D15_2_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACC7757D49879D15_2_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_ACC7757D49879D15_2_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACC7757D49879D15_2_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_ACC7757D49879D15_2_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACC7757D49879D15_2_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_ACC7757D49879D15_2_METHOD_1_1D3C8F680A3EDA34_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACC7757D49879D15_2_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_ACC7757D49879D15_2_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_ACC7757D49879D15_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_ACC7757D49879D15_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_ACC7757D49879D15_2*))((::PBYTE)hIl2Cpp + CLASS_1_ACC7757D49879D15_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACC7757D49879D15_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACC7757D49879D15_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_ACC7757D49879D15_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACC7757D49879D15_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_ACC7757D49879D15_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ACC7757D49879D15_2*))((::PBYTE)hIl2Cpp + CLASS_1_ACC7757D49879D15_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_ACC7757D49879D15_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
