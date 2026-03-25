#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_BDBF4167CAB0A166_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17C3BE90)
#define CLASS_1_BDBF4167CAB0A166_1_CLONE_OFFSET UNITYSDK_OFFSET(0x17C3BA30)
#define CLASS_1_BDBF4167CAB0A166_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17C3BB50)
#define CLASS_1_BDBF4167CAB0A166_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x17C3BB20)
#define CLASS_1_BDBF4167CAB0A166_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17C3BC60)
#define CLASS_1_BDBF4167CAB0A166_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17C3C120)
#define CLASS_1_BDBF4167CAB0A166_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17C3C0B0)
#define CLASS_1_BDBF4167CAB0A166_1_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17C3BAC0)
#define CLASS_1_BDBF4167CAB0A166_1_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x17C3BAE0)
#define CLASS_1_BDBF4167CAB0A166_1_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x17C3BB00)
#define CLASS_1_BDBF4167CAB0A166_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17C3BA80)
#define CLASS_1_BDBF4167CAB0A166_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17C3BAD0)
#define CLASS_1_BDBF4167CAB0A166_1_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x17C3BAF0)
#define CLASS_1_BDBF4167CAB0A166_1_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x17C3BB10)
#define CLASS_1_BDBF4167CAB0A166_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17C3BA90)
#define CLASS_1_BDBF4167CAB0A166_1_METHOD_1_8633AE51B23EBDFD_OFFSET UNITYSDK_OFFSET(0x17C3BAB0)
#define CLASS_1_BDBF4167CAB0A166_1_METHOD_1_C229FF62B898C0B2_OFFSET UNITYSDK_OFFSET(0x17C3BAA0)
#define CLASS_1_BDBF4167CAB0A166_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17C3B9D0)
#define CLASS_1_BDBF4167CAB0A166_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17C3BD10)
#define CLASS_1_BDBF4167CAB0A166_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x17C3BD70)
#define CLASS_1_BDBF4167CAB0A166_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17C3B9F0)
#define CLASS_1_BDBF4167CAB0A166_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17C3B9E0)

inline static constexpr unsigned int Class_1_BDBF4167CAB0A166_1_TypeDefinitionIndex = 23107;

class Class_1_BDBF4167CAB0A166_1 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_9 = 0xD; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_2; // 0x18
	::System::UInt32 Field_1_10; // 0x1C
	::System::UInt32 Field_1_6; // 0x20
	::System::UInt32 Field_1_8; // 0x24
	::System::Double Field_1_4; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDBF4167CAB0A166_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_BDBF4167CAB0A166_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BDBF4167CAB0A166_1*))((::PBYTE)hIl2Cpp + CLASS_1_BDBF4167CAB0A166_1__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDBF4167CAB0A166_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_BDBF4167CAB0A166_1* Clone()
	{
		return ((::Class_1_BDBF4167CAB0A166_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDBF4167CAB0A166_1_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDBF4167CAB0A166_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BDBF4167CAB0A166_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Double Method_1_C229FF62B898C0B2()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDBF4167CAB0A166_1_METHOD_1_C229FF62B898C0B2_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_BDBF4167CAB0A166_1_METHOD_1_8633AE51B23EBDFD_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDBF4167CAB0A166_1_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BDBF4167CAB0A166_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDBF4167CAB0A166_1_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BDBF4167CAB0A166_1_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDBF4167CAB0A166_1_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BDBF4167CAB0A166_1_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_BDBF4167CAB0A166_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_BDBF4167CAB0A166_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_BDBF4167CAB0A166_1*))((::PBYTE)hIl2Cpp + CLASS_1_BDBF4167CAB0A166_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDBF4167CAB0A166_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDBF4167CAB0A166_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_BDBF4167CAB0A166_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDBF4167CAB0A166_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_BDBF4167CAB0A166_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BDBF4167CAB0A166_1*))((::PBYTE)hIl2Cpp + CLASS_1_BDBF4167CAB0A166_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_BDBF4167CAB0A166_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
