#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_296161B9D78FDA84_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C96F930)
#define CLASS_1_296161B9D78FDA84_CLONE_OFFSET UNITYSDK_OFFSET(0x1C96F430)
#define CLASS_1_296161B9D78FDA84_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C96F600)
#define CLASS_1_296161B9D78FDA84_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C96F560)
#define CLASS_1_296161B9D78FDA84_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C96F660)
#define CLASS_1_296161B9D78FDA84_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C96FC00)
#define CLASS_1_296161B9D78FDA84_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C96FBA0)
#define CLASS_1_296161B9D78FDA84_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1C96F4E0)
#define CLASS_1_296161B9D78FDA84_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1C96F540)
#define CLASS_1_296161B9D78FDA84_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C96F4C0)
#define CLASS_1_296161B9D78FDA84_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C96F360)
#define CLASS_1_296161B9D78FDA84_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x1C96F530)
#define CLASS_1_296161B9D78FDA84_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1C96F4F0)
#define CLASS_1_296161B9D78FDA84_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1C96F550)
#define CLASS_1_296161B9D78FDA84_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C96F4D0)
#define CLASS_1_296161B9D78FDA84_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x1C96F520)
#define CLASS_1_296161B9D78FDA84_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1C96F510)
#define CLASS_1_296161B9D78FDA84_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1C96F500)
#define CLASS_1_296161B9D78FDA84_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C96F3C0)
#define CLASS_1_296161B9D78FDA84_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C96F6B0)
#define CLASS_1_296161B9D78FDA84_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C96F710)
#define CLASS_1_296161B9D78FDA84__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C96FCC0)
#define CLASS_1_296161B9D78FDA84__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C96F3E0)
#define CLASS_1_296161B9D78FDA84__CTOR_OFFSET UNITYSDK_OFFSET(0x1C96F3D0)

inline static constexpr unsigned int Class_1_296161B9D78FDA84_TypeDefinitionIndex = 28026;

class Class_1_296161B9D78FDA84 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_296161B9D78FDA84*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_296161B9D78FDA84*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_296161B9D78FDA84_TypeDefinitionIndex)->GetStaticField(0x2CD50);
	}
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_6; // 0x10
	::System::UInt32 Field_1_7; // 0x18
	::System::Boolean Field_1_8; // 0x1C
	::System::UInt32 Field_1_9; // 0x20
	::System::UInt32 Field_1_10; // 0x24
	::System::Int64 Field_1_11; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_296161B9D78FDA84__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_296161B9D78FDA84* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_296161B9D78FDA84*))((::PBYTE)hIl2Cpp + CLASS_1_296161B9D78FDA84__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_296161B9D78FDA84__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_296161B9D78FDA84*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_296161B9D78FDA84*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_296161B9D78FDA84_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_296161B9D78FDA84_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_296161B9D78FDA84* Clone()
	{
		return ((::Class_1_296161B9D78FDA84*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_296161B9D78FDA84_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_296161B9D78FDA84_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_296161B9D78FDA84_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_296161B9D78FDA84_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_296161B9D78FDA84_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_296161B9D78FDA84_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_296161B9D78FDA84_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_296161B9D78FDA84_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_296161B9D78FDA84_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_296161B9D78FDA84_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_296161B9D78FDA84_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_296161B9D78FDA84_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_296161B9D78FDA84* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_296161B9D78FDA84*))((::PBYTE)hIl2Cpp + CLASS_1_296161B9D78FDA84_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_296161B9D78FDA84_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_296161B9D78FDA84_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_296161B9D78FDA84_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_296161B9D78FDA84_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_296161B9D78FDA84* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_296161B9D78FDA84*))((::PBYTE)hIl2Cpp + CLASS_1_296161B9D78FDA84_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_296161B9D78FDA84_MERGEFROM_1_OFFSET))(this, a1);
	}
};
