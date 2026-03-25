#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_E9FAC3539FD8861A_14_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17DED700)
#define CLASS_1_E9FAC3539FD8861A_14_CLONE_OFFSET UNITYSDK_OFFSET(0x17DED410)
#define CLASS_1_E9FAC3539FD8861A_14_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17DED550)
#define CLASS_1_E9FAC3539FD8861A_14_EQUALS_OFFSET UNITYSDK_OFFSET(0x17DED4C0)
#define CLASS_1_E9FAC3539FD8861A_14_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17DED5D0)
#define CLASS_1_E9FAC3539FD8861A_14_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17DED800)
#define CLASS_1_E9FAC3539FD8861A_14_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17DED7B0)
#define CLASS_1_E9FAC3539FD8861A_14_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17DED4A0)
#define CLASS_1_E9FAC3539FD8861A_14_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17DED4B0)
#define CLASS_1_E9FAC3539FD8861A_14_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x17DED490)
#define CLASS_1_E9FAC3539FD8861A_14_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17DED470)
#define CLASS_1_E9FAC3539FD8861A_14_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x17DED480)
#define CLASS_1_E9FAC3539FD8861A_14_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17DED460)
#define CLASS_1_E9FAC3539FD8861A_14_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17DED3B0)
#define CLASS_1_E9FAC3539FD8861A_14_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17DED600)
#define CLASS_1_E9FAC3539FD8861A_14_WRITETO_OFFSET UNITYSDK_OFFSET(0x17DED660)
#define CLASS_1_E9FAC3539FD8861A_14__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17DED3D0)
#define CLASS_1_E9FAC3539FD8861A_14__CTOR_OFFSET UNITYSDK_OFFSET(0x17DED3C0)

inline static constexpr unsigned int Class_1_E9FAC3539FD8861A_14_TypeDefinitionIndex = 25963;

class Class_1_E9FAC3539FD8861A_14 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_6; // 0x18
	::System::Boolean Field_1_2; // 0x1C
	::System::Boolean Field_1_4; // 0x1D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E9FAC3539FD8861A_14__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_E9FAC3539FD8861A_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E9FAC3539FD8861A_14*))((::PBYTE)hIl2Cpp + CLASS_1_E9FAC3539FD8861A_14__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E9FAC3539FD8861A_14_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_E9FAC3539FD8861A_14* Clone()
	{
		return ((::Class_1_E9FAC3539FD8861A_14*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E9FAC3539FD8861A_14_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E9FAC3539FD8861A_14_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E9FAC3539FD8861A_14_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E9FAC3539FD8861A_14_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E9FAC3539FD8861A_14_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E9FAC3539FD8861A_14_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E9FAC3539FD8861A_14_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E9FAC3539FD8861A_14_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E9FAC3539FD8861A_14* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E9FAC3539FD8861A_14*))((::PBYTE)hIl2Cpp + CLASS_1_E9FAC3539FD8861A_14_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E9FAC3539FD8861A_14_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E9FAC3539FD8861A_14_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E9FAC3539FD8861A_14_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E9FAC3539FD8861A_14_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_E9FAC3539FD8861A_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E9FAC3539FD8861A_14*))((::PBYTE)hIl2Cpp + CLASS_1_E9FAC3539FD8861A_14_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E9FAC3539FD8861A_14_MERGEFROM_1_OFFSET))(this, a1);
	}
};
