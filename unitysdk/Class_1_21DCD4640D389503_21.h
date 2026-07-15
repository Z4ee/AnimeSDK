#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21DCD4640D389503_21_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CC2CE20)
#define CLASS_1_21DCD4640D389503_21_CLONE_OFFSET UNITYSDK_OFFSET(0x1CBD4020)
#define CLASS_1_21DCD4640D389503_21_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CC2C940)
#define CLASS_1_21DCD4640D389503_21_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CC2C880)
#define CLASS_1_21DCD4640D389503_21_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CC2C9D0)
#define CLASS_1_21DCD4640D389503_21_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CC2D2B0)
#define CLASS_1_21DCD4640D389503_21_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CC2D220)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1CBD40D0)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1CC2C780)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1CC2C7C0)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x1CC2C7E0)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_02A3D10A9D535169_5_OFFSET UNITYSDK_OFFSET(0x1CC2C800)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CBD40B0)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1CC2C830)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1CC2C820)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x1CC2C7B0)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1CBD3F40)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1CC2C770)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1CC2C790)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1CC2C7D0)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x1CC2C7F0)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_7786DC814C2FC3BE_5_OFFSET UNITYSDK_OFFSET(0x1CC2C810)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CBD40C0)
#define CLASS_1_21DCD4640D389503_21_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x1CC2C7A0)
#define CLASS_1_21DCD4640D389503_21_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CBD3FA0)
#define CLASS_1_21DCD4640D389503_21_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CC2CAB0)
#define CLASS_1_21DCD4640D389503_21_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CC2CB10)
#define CLASS_1_21DCD4640D389503_21__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC2D400)
#define CLASS_1_21DCD4640D389503_21__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CBD3FC0)
#define CLASS_1_21DCD4640D389503_21__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBD3FB0)

inline static constexpr unsigned int Class_1_21DCD4640D389503_21_TypeDefinitionIndex = 27278;

class Class_1_21DCD4640D389503_21 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_21*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_21*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_21_TypeDefinitionIndex)->GetStaticField(0x553C0);
	}
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x8; // 0x0
	::System::String* Field_1_9; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_10; // 0x18
	::System::UInt32 Field_1_11; // 0x20
	::System::UInt32 Field_1_12; // 0x24
	::System::UInt32 Field_1_13; // 0x28
	::System::UInt32 Field_1_14; // 0x2C
	::System::UInt32 Field_1_15; // 0x30
	::System::UInt32 Field_1_16; // 0x34
	::System::UInt64 Field_1_17; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21DCD4640D389503_21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_21*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_21*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_21*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21DCD4640D389503_21* Clone()
	{
		return ((::Class_1_21DCD4640D389503_21*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_02A3D10A9D535169_5_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_7786DC814C2FC3BE_5_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21DCD4640D389503_21* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21DCD4640D389503_21*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21DCD4640D389503_21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_21*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_21_MERGEFROM_1_OFFSET))(this, a1);
	}
};
