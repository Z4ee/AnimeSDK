#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_E9FAC3539FD8861A_13_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x180F4DB0)
#define CLASS_1_E9FAC3539FD8861A_13_CLONE_OFFSET UNITYSDK_OFFSET(0x180F4A70)
#define CLASS_1_E9FAC3539FD8861A_13_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x180F4C10)
#define CLASS_1_E9FAC3539FD8861A_13_EQUALS_OFFSET UNITYSDK_OFFSET(0x180F4B50)
#define CLASS_1_E9FAC3539FD8861A_13_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x180F4C80)
#define CLASS_1_E9FAC3539FD8861A_13_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x180F4F20)
#define CLASS_1_E9FAC3539FD8861A_13_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x180F4ED0)
#define CLASS_1_E9FAC3539FD8861A_13_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x180F4B30)
#define CLASS_1_E9FAC3539FD8861A_13_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x180F4AF0)
#define CLASS_1_E9FAC3539FD8861A_13_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x180F4B40)
#define CLASS_1_E9FAC3539FD8861A_13_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x180F4B00)
#define CLASS_1_E9FAC3539FD8861A_13_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x180F4B20)
#define CLASS_1_E9FAC3539FD8861A_13_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x180F4B10)
#define CLASS_1_E9FAC3539FD8861A_13_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x180F4A10)
#define CLASS_1_E9FAC3539FD8861A_13_TOSTRING_OFFSET UNITYSDK_OFFSET(0x180F4CB0)
#define CLASS_1_E9FAC3539FD8861A_13_WRITETO_OFFSET UNITYSDK_OFFSET(0x180F4D10)
#define CLASS_1_E9FAC3539FD8861A_13__CTOR_1_OFFSET UNITYSDK_OFFSET(0x180F4A30)
#define CLASS_1_E9FAC3539FD8861A_13__CTOR_OFFSET UNITYSDK_OFFSET(0x180F4A20)

inline static constexpr unsigned int Class_1_E9FAC3539FD8861A_13_TypeDefinitionIndex = 25891;

class Class_1_E9FAC3539FD8861A_13 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x8; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::Boolean Field_1_4; // 0x18
	::System::UInt32 Field_1_6; // 0x1C
	::System::UInt32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E9FAC3539FD8861A_13__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_E9FAC3539FD8861A_13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E9FAC3539FD8861A_13*))((::PBYTE)hIl2Cpp + CLASS_1_E9FAC3539FD8861A_13__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E9FAC3539FD8861A_13_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_E9FAC3539FD8861A_13* Clone()
	{
		return ((::Class_1_E9FAC3539FD8861A_13*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E9FAC3539FD8861A_13_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E9FAC3539FD8861A_13_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E9FAC3539FD8861A_13_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E9FAC3539FD8861A_13_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E9FAC3539FD8861A_13_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E9FAC3539FD8861A_13_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E9FAC3539FD8861A_13_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E9FAC3539FD8861A_13_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E9FAC3539FD8861A_13* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E9FAC3539FD8861A_13*))((::PBYTE)hIl2Cpp + CLASS_1_E9FAC3539FD8861A_13_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E9FAC3539FD8861A_13_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E9FAC3539FD8861A_13_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E9FAC3539FD8861A_13_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E9FAC3539FD8861A_13_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_E9FAC3539FD8861A_13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E9FAC3539FD8861A_13*))((::PBYTE)hIl2Cpp + CLASS_1_E9FAC3539FD8861A_13_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E9FAC3539FD8861A_13_MERGEFROM_1_OFFSET))(this, a1);
	}
};
