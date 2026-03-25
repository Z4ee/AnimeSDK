#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_120319518E6F6581_67_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18012320)
#define CLASS_1_120319518E6F6581_67_CLONE_OFFSET UNITYSDK_OFFSET(0x18012060)
#define CLASS_1_120319518E6F6581_67_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18012180)
#define CLASS_1_120319518E6F6581_67_EQUALS_OFFSET UNITYSDK_OFFSET(0x18012110)
#define CLASS_1_120319518E6F6581_67_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x180121F0)
#define CLASS_1_120319518E6F6581_67_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18012500)
#define CLASS_1_120319518E6F6581_67_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x180124B0)
#define CLASS_1_120319518E6F6581_67_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x180120D0)
#define CLASS_1_120319518E6F6581_67_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x180120F0)
#define CLASS_1_120319518E6F6581_67_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x180120B0)
#define CLASS_1_120319518E6F6581_67_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x180120E0)
#define CLASS_1_120319518E6F6581_67_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x18012100)
#define CLASS_1_120319518E6F6581_67_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x180120C0)
#define CLASS_1_120319518E6F6581_67_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18012000)
#define CLASS_1_120319518E6F6581_67_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18012220)
#define CLASS_1_120319518E6F6581_67_WRITETO_OFFSET UNITYSDK_OFFSET(0x18012280)
#define CLASS_1_120319518E6F6581_67__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18012020)
#define CLASS_1_120319518E6F6581_67__CTOR_OFFSET UNITYSDK_OFFSET(0x18012010)

inline static constexpr unsigned int Class_1_120319518E6F6581_67_TypeDefinitionIndex = 25646;

class Class_1_120319518E6F6581_67 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt32 Field_1_6; // 0x18
	::System::UInt32 Field_1_4; // 0x1C
	::System::UInt32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_67__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_120319518E6F6581_67* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_120319518E6F6581_67*))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_67__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_67_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_120319518E6F6581_67* Clone()
	{
		return ((::Class_1_120319518E6F6581_67*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_67_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_67_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_67_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_67_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_67_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_67_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_67_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_67_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_120319518E6F6581_67* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_120319518E6F6581_67*))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_67_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_67_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_67_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_67_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_67_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_120319518E6F6581_67* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_120319518E6F6581_67*))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_67_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_120319518E6F6581_67_MERGEFROM_1_OFFSET))(this, a1);
	}
};
