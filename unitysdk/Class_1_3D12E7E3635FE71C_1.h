#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_3D12E7E3635FE71C_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17D721D0)
#define CLASS_1_3D12E7E3635FE71C_1_CLONE_OFFSET UNITYSDK_OFFSET(0x17D71F30)
#define CLASS_1_3D12E7E3635FE71C_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17D72030)
#define CLASS_1_3D12E7E3635FE71C_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x17D71FC0)
#define CLASS_1_3D12E7E3635FE71C_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17D72090)
#define CLASS_1_3D12E7E3635FE71C_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17D723D0)
#define CLASS_1_3D12E7E3635FE71C_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17D72390)
#define CLASS_1_3D12E7E3635FE71C_1_METHOD_1_4C4B9DFE092840D4_1_OFFSET UNITYSDK_OFFSET(0x17D71FB0)
#define CLASS_1_3D12E7E3635FE71C_1_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x17D71F90)
#define CLASS_1_3D12E7E3635FE71C_1_METHOD_1_7ADD5F1F5E247E3B_1_OFFSET UNITYSDK_OFFSET(0x17D71FA0)
#define CLASS_1_3D12E7E3635FE71C_1_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x17D71F80)
#define CLASS_1_3D12E7E3635FE71C_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17D71EE0)
#define CLASS_1_3D12E7E3635FE71C_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17D720F0)
#define CLASS_1_3D12E7E3635FE71C_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x17D72150)
#define CLASS_1_3D12E7E3635FE71C_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17D71F00)
#define CLASS_1_3D12E7E3635FE71C_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17D71EF0)

inline static constexpr unsigned int Class_1_3D12E7E3635FE71C_1_TypeDefinitionIndex = 25970;

class Class_1_3D12E7E3635FE71C_1 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::Int64 Field_1_4; // 0x18
	::System::Int64 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D12E7E3635FE71C_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_3D12E7E3635FE71C_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3D12E7E3635FE71C_1*))((::PBYTE)hIl2Cpp + CLASS_1_3D12E7E3635FE71C_1__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D12E7E3635FE71C_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_3D12E7E3635FE71C_1* Clone()
	{
		return ((::Class_1_3D12E7E3635FE71C_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D12E7E3635FE71C_1_CLONE_OFFSET))(this);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D12E7E3635FE71C_1_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_3D12E7E3635FE71C_1_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B_1()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D12E7E3635FE71C_1_METHOD_1_7ADD5F1F5E247E3B_1_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4_1(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_3D12E7E3635FE71C_1_METHOD_1_4C4B9DFE092840D4_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3D12E7E3635FE71C_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_3D12E7E3635FE71C_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3D12E7E3635FE71C_1*))((::PBYTE)hIl2Cpp + CLASS_1_3D12E7E3635FE71C_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D12E7E3635FE71C_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D12E7E3635FE71C_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3D12E7E3635FE71C_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D12E7E3635FE71C_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_3D12E7E3635FE71C_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3D12E7E3635FE71C_1*))((::PBYTE)hIl2Cpp + CLASS_1_3D12E7E3635FE71C_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3D12E7E3635FE71C_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
