#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21DCD4640D389503_34_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C302BE0)
#define CLASS_1_21DCD4640D389503_34_CLONE_OFFSET UNITYSDK_OFFSET(0x1C302320)
#define CLASS_1_21DCD4640D389503_34_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C3025A0)
#define CLASS_1_21DCD4640D389503_34_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C302540)
#define CLASS_1_21DCD4640D389503_34_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C302670)
#define CLASS_1_21DCD4640D389503_34_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C302FD0)
#define CLASS_1_21DCD4640D389503_34_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C302F30)
#define CLASS_1_21DCD4640D389503_34_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1C302480)
#define CLASS_1_21DCD4640D389503_34_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C3023C0)
#define CLASS_1_21DCD4640D389503_34_METHOD_1_050E70FEDB783306_1_OFFSET UNITYSDK_OFFSET(0x1C3024D0)
#define CLASS_1_21DCD4640D389503_34_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1C3023F0)
#define CLASS_1_21DCD4640D389503_34_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x1C3024C0)
#define CLASS_1_21DCD4640D389503_34_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1C3023E0)
#define CLASS_1_21DCD4640D389503_34_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C302220)
#define CLASS_1_21DCD4640D389503_34_METHOD_1_4C4B9DFE092840D4_1_OFFSET UNITYSDK_OFFSET(0x1C3024B0)
#define CLASS_1_21DCD4640D389503_34_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x1C302470)
#define CLASS_1_21DCD4640D389503_34_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1C302490)
#define CLASS_1_21DCD4640D389503_34_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C3023D0)
#define CLASS_1_21DCD4640D389503_34_METHOD_1_7ADD5F1F5E247E3B_1_OFFSET UNITYSDK_OFFSET(0x1C3024A0)
#define CLASS_1_21DCD4640D389503_34_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x1C302460)
#define CLASS_1_21DCD4640D389503_34_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x1C302530)
#define CLASS_1_21DCD4640D389503_34_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1C302450)
#define CLASS_1_21DCD4640D389503_34_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1C302520)
#define CLASS_1_21DCD4640D389503_34_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1C302440)
#define CLASS_1_21DCD4640D389503_34_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C302280)
#define CLASS_1_21DCD4640D389503_34_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C3027F0)
#define CLASS_1_21DCD4640D389503_34_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C302850)
#define CLASS_1_21DCD4640D389503_34__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C303160)
#define CLASS_1_21DCD4640D389503_34__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C3022B0)
#define CLASS_1_21DCD4640D389503_34__CTOR_OFFSET UNITYSDK_OFFSET(0x1C302290)

inline static constexpr unsigned int Class_1_21DCD4640D389503_34_TypeDefinitionIndex = 30687;

class Class_1_21DCD4640D389503_34 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_34*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_34*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_34_TypeDefinitionIndex)->GetStaticField(0x18BF0);
	}
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x6; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_9; // 0x10
	::System::String* Field_1_10; // 0x18
	::System::String* Field_1_11; // 0x20
	::System::Boolean Field_1_12; // 0x28
	::System::Boolean Field_1_13; // 0x29
	::System::UInt32 Field_1_14; // 0x2C
	::System::Int64 Field_1_15; // 0x30
	::System::Int64 Field_1_16; // 0x38
	::System::UInt32 Field_1_17; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_34__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21DCD4640D389503_34* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_34*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_34__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_34__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_34*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_34*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_34_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_34_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21DCD4640D389503_34* Clone()
	{
		return ((::Class_1_21DCD4640D389503_34*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_34_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_34_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_34_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_34_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_34_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_34_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_34_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_34_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_34_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_34_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_34_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B_1()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_34_METHOD_1_7ADD5F1F5E247E3B_1_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4_1(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_34_METHOD_1_4C4B9DFE092840D4_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_34_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_34_METHOD_1_050E70FEDB783306_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_34_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_34_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_34_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21DCD4640D389503_34* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21DCD4640D389503_34*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_34_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_34_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_34_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_34_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_34_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21DCD4640D389503_34* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_34*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_34_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_34_MERGEFROM_1_OFFSET))(this, a1);
	}
};
