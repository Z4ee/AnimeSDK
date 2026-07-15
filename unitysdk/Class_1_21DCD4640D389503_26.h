#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_70;
class Class_1_A6B0B39A319DDDE2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21DCD4640D389503_26_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C886130)
#define CLASS_1_21DCD4640D389503_26_CLONE_OFFSET UNITYSDK_OFFSET(0x1C885A40)
#define CLASS_1_21DCD4640D389503_26_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C885C10)
#define CLASS_1_21DCD4640D389503_26_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C885BB0)
#define CLASS_1_21DCD4640D389503_26_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C885CD0)
#define CLASS_1_21DCD4640D389503_26_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C886510)
#define CLASS_1_21DCD4640D389503_26_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C8863C0)
#define CLASS_1_21DCD4640D389503_26_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1C885AD0)
#define CLASS_1_21DCD4640D389503_26_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C885A90)
#define CLASS_1_21DCD4640D389503_26_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1C885B00)
#define CLASS_1_21DCD4640D389503_26_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1C885AF0)
#define CLASS_1_21DCD4640D389503_26_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1C885B90)
#define CLASS_1_21DCD4640D389503_26_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C885B70)
#define CLASS_1_21DCD4640D389503_26_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C8858A0)
#define CLASS_1_21DCD4640D389503_26_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x1C885B60)
#define CLASS_1_21DCD4640D389503_26_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1C885AE0)
#define CLASS_1_21DCD4640D389503_26_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C885AA0)
#define CLASS_1_21DCD4640D389503_26_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x1C885B50)
#define CLASS_1_21DCD4640D389503_26_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1C885BA0)
#define CLASS_1_21DCD4640D389503_26_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C885B80)
#define CLASS_1_21DCD4640D389503_26_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1C885AC0)
#define CLASS_1_21DCD4640D389503_26_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1C885AB0)
#define CLASS_1_21DCD4640D389503_26_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C885900)
#define CLASS_1_21DCD4640D389503_26_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C885DE0)
#define CLASS_1_21DCD4640D389503_26_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C885E40)
#define CLASS_1_21DCD4640D389503_26__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8866B0)
#define CLASS_1_21DCD4640D389503_26__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C885920)
#define CLASS_1_21DCD4640D389503_26__CTOR_OFFSET UNITYSDK_OFFSET(0x1C885910)

inline static constexpr unsigned int Class_1_21DCD4640D389503_26_TypeDefinitionIndex = 28968;

class Class_1_21DCD4640D389503_26 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_26*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_26*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_26_TypeDefinitionIndex)->GetStaticField(0x426A0);
	}
	// static const ::System::Int32 Field_1_1 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_8; // 0x10
	::Class_1_21C7581DFE99F091_70* Field_1_9; // 0x18
	::Class_1_A6B0B39A319DDDE2* Field_1_10; // 0x20
	::System::String* Field_1_11; // 0x28
	::System::UInt32 Field_1_12; // 0x30
	::System::UInt32 Field_1_13; // 0x34
	::System::Boolean Field_1_14; // 0x38
	::System::Int64 Field_1_15; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_26__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21DCD4640D389503_26* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_26*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_26__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_26__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_26*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_26*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_26_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_26_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21DCD4640D389503_26* Clone()
	{
		return ((::Class_1_21DCD4640D389503_26*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_26_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_26_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_26_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_26_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_26_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_26_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_26_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_26_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_26_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_26_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_26_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::Class_1_21C7581DFE99F091_70* Method_1_24748FC20F375725()
	{
		return ((::Class_1_21C7581DFE99F091_70*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_26_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_21C7581DFE99F091_70* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_70*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_26_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_A6B0B39A319DDDE2* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_A6B0B39A319DDDE2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_26_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_A6B0B39A319DDDE2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A6B0B39A319DDDE2*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_26_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_26_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21DCD4640D389503_26* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21DCD4640D389503_26*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_26_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_26_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_26_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_26_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_26_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21DCD4640D389503_26* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_26*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_26_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_26_MERGEFROM_1_OFFSET))(this, a1);
	}
};
