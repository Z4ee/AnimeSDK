#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8DF8C14EDEA396CD;
class Class_1_EA5A5E4D07C4CF2B_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21DCD4640D389503_42_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CF22B80)
#define CLASS_1_21DCD4640D389503_42_CLONE_OFFSET UNITYSDK_OFFSET(0x1CF22420)
#define CLASS_1_21DCD4640D389503_42_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CF225C0)
#define CLASS_1_21DCD4640D389503_42_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CF22560)
#define CLASS_1_21DCD4640D389503_42_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CF22750)
#define CLASS_1_21DCD4640D389503_42_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CF22EE0)
#define CLASS_1_21DCD4640D389503_42_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CF22D80)
#define CLASS_1_21DCD4640D389503_42_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1CF22490)
#define CLASS_1_21DCD4640D389503_42_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CF22470)
#define CLASS_1_21DCD4640D389503_42_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1CF224C0)
#define CLASS_1_21DCD4640D389503_42_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1CF224B0)
#define CLASS_1_21DCD4640D389503_42_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1CF22520)
#define CLASS_1_21DCD4640D389503_42_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1CF22210)
#define CLASS_1_21DCD4640D389503_42_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1CF22510)
#define CLASS_1_21DCD4640D389503_42_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1CF224A0)
#define CLASS_1_21DCD4640D389503_42_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CF22480)
#define CLASS_1_21DCD4640D389503_42_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1CF22530)
#define CLASS_1_21DCD4640D389503_42_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1CF22550)
#define CLASS_1_21DCD4640D389503_42_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1CF22540)
#define CLASS_1_21DCD4640D389503_42_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CF22270)
#define CLASS_1_21DCD4640D389503_42_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CF22860)
#define CLASS_1_21DCD4640D389503_42_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CF228C0)
#define CLASS_1_21DCD4640D389503_42__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF230D0)
#define CLASS_1_21DCD4640D389503_42__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CF222E0)
#define CLASS_1_21DCD4640D389503_42__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF22280)

inline static constexpr unsigned int Class_1_21DCD4640D389503_42_TypeDefinitionIndex = 33667;

class Class_1_21DCD4640D389503_42 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_42*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_42*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_42_TypeDefinitionIndex)->GetStaticField(0xAAC0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_EA5A5E4D07C4CF2B_1*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_EA5A5E4D07C4CF2B_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_42_TypeDefinitionIndex)->GetStaticField(0xAAC8);
	}
	// static const ::System::Int32 Field_1_2 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_8; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_EA5A5E4D07C4CF2B_1*>* Field_1_9; // 0x18
	::Class_1_8DF8C14EDEA396CD* Field_1_10; // 0x20
	::System::String* Field_1_11; // 0x28
	::System::UInt32 Field_1_12; // 0x30
	::System::Boolean Field_1_13; // 0x34
	::System::UInt32 Field_1_14; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_42__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21DCD4640D389503_42* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_42*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_42__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_42__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_42*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_42*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_42_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_42_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21DCD4640D389503_42* Clone()
	{
		return ((::Class_1_21DCD4640D389503_42*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_42_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_42_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_42_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_42_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_42_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_42_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_42_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_EA5A5E4D07C4CF2B_1*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_EA5A5E4D07C4CF2B_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_42_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Class_1_8DF8C14EDEA396CD* Method_1_24748FC20F375725()
	{
		return ((::Class_1_8DF8C14EDEA396CD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_42_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_8DF8C14EDEA396CD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8DF8C14EDEA396CD*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_42_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_42_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_42_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_42_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21DCD4640D389503_42* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21DCD4640D389503_42*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_42_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_42_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_42_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_42_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_42_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21DCD4640D389503_42* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_42*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_42_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_42_MERGEFROM_1_OFFSET))(this, a1);
	}
};
