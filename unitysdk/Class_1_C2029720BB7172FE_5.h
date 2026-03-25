#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_13890FD29641C8E9;
class Class_1_98A08031F550F4C1_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C2029720BB7172FE_5_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18048130)
#define CLASS_1_C2029720BB7172FE_5_CLONE_OFFSET UNITYSDK_OFFSET(0x18047C50)
#define CLASS_1_C2029720BB7172FE_5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18047EC0)
#define CLASS_1_C2029720BB7172FE_5_EQUALS_OFFSET UNITYSDK_OFFSET(0x18047DC0)
#define CLASS_1_C2029720BB7172FE_5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18047FB0)
#define CLASS_1_C2029720BB7172FE_5_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x180483F0)
#define CLASS_1_C2029720BB7172FE_5_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x180482B0)
#define CLASS_1_C2029720BB7172FE_5_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x18047DA0)
#define CLASS_1_C2029720BB7172FE_5_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x18047D40)
#define CLASS_1_C2029720BB7172FE_5_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x18047D80)
#define CLASS_1_C2029720BB7172FE_5_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x18047D60)
#define CLASS_1_C2029720BB7172FE_5_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x18047DB0)
#define CLASS_1_C2029720BB7172FE_5_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x18047D50)
#define CLASS_1_C2029720BB7172FE_5_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x18047D90)
#define CLASS_1_C2029720BB7172FE_5_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x18047D70)
#define CLASS_1_C2029720BB7172FE_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18047B50)
#define CLASS_1_C2029720BB7172FE_5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18048000)
#define CLASS_1_C2029720BB7172FE_5_WRITETO_OFFSET UNITYSDK_OFFSET(0x18048060)
#define CLASS_1_C2029720BB7172FE_5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18047B70)
#define CLASS_1_C2029720BB7172FE_5__CTOR_OFFSET UNITYSDK_OFFSET(0x18047B60)

inline static constexpr unsigned int Class_1_C2029720BB7172FE_5_TypeDefinitionIndex = 25894;

class Class_1_C2029720BB7172FE_5 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x2; // 0x0
	::Class_1_98A08031F550F4C1_2* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Class_1_13890FD29641C8E9* Field_1_6; // 0x20
	::System::UInt32 Field_1_2; // 0x28
	::System::UInt32 Field_1_8; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2029720BB7172FE_5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C2029720BB7172FE_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C2029720BB7172FE_5*))((::PBYTE)hIl2Cpp + CLASS_1_C2029720BB7172FE_5__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2029720BB7172FE_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C2029720BB7172FE_5* Clone()
	{
		return ((::Class_1_C2029720BB7172FE_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2029720BB7172FE_5_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2029720BB7172FE_5_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C2029720BB7172FE_5_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_98A08031F550F4C1_2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_98A08031F550F4C1_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2029720BB7172FE_5_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_98A08031F550F4C1_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_98A08031F550F4C1_2*))((::PBYTE)hIl2Cpp + CLASS_1_C2029720BB7172FE_5_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_13890FD29641C8E9* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_13890FD29641C8E9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2029720BB7172FE_5_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_13890FD29641C8E9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_13890FD29641C8E9*))((::PBYTE)hIl2Cpp + CLASS_1_C2029720BB7172FE_5_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2029720BB7172FE_5_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C2029720BB7172FE_5_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C2029720BB7172FE_5_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C2029720BB7172FE_5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C2029720BB7172FE_5*))((::PBYTE)hIl2Cpp + CLASS_1_C2029720BB7172FE_5_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2029720BB7172FE_5_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2029720BB7172FE_5_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C2029720BB7172FE_5_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2029720BB7172FE_5_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C2029720BB7172FE_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C2029720BB7172FE_5*))((::PBYTE)hIl2Cpp + CLASS_1_C2029720BB7172FE_5_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C2029720BB7172FE_5_MERGEFROM_1_OFFSET))(this, a1);
	}
};
