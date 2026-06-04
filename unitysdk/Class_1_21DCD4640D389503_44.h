#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_76FC7D9EAE4C806C;
class Class_1_E30585F0EAEFDF1E_13;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21DCD4640D389503_44_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A4DD7F0)
#define CLASS_1_21DCD4640D389503_44_CLONE_OFFSET UNITYSDK_OFFSET(0x1A4DD150)
#define CLASS_1_21DCD4640D389503_44_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A4DD2F0)
#define CLASS_1_21DCD4640D389503_44_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A4DD290)
#define CLASS_1_21DCD4640D389503_44_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A4DD450)
#define CLASS_1_21DCD4640D389503_44_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A4DDC20)
#define CLASS_1_21DCD4640D389503_44_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A4DDAC0)
#define CLASS_1_21DCD4640D389503_44_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A4DD270)
#define CLASS_1_21DCD4640D389503_44_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A4DD230)
#define CLASS_1_21DCD4640D389503_44_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1A4DD1C0)
#define CLASS_1_21DCD4640D389503_44_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1A4DD1B0)
#define CLASS_1_21DCD4640D389503_44_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1A4DD250)
#define CLASS_1_21DCD4640D389503_44_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A4DCF40)
#define CLASS_1_21DCD4640D389503_44_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1A4DD1A0)
#define CLASS_1_21DCD4640D389503_44_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A4DD280)
#define CLASS_1_21DCD4640D389503_44_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A4DD240)
#define CLASS_1_21DCD4640D389503_44_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A4DD260)
#define CLASS_1_21DCD4640D389503_44_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1A4DD220)
#define CLASS_1_21DCD4640D389503_44_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A4DD210)
#define CLASS_1_21DCD4640D389503_44_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A4DCFA0)
#define CLASS_1_21DCD4640D389503_44_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A4DD5F0)
#define CLASS_1_21DCD4640D389503_44_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A4DD650)
#define CLASS_1_21DCD4640D389503_44__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4DDDF0)
#define CLASS_1_21DCD4640D389503_44__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A4DD010)
#define CLASS_1_21DCD4640D389503_44__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4DCFB0)

inline static constexpr unsigned int Class_1_21DCD4640D389503_44_TypeDefinitionIndex = 33297;

class Class_1_21DCD4640D389503_44 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_44*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_44*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_44_TypeDefinitionIndex)->GetStaticField(0x7E30);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_76FC7D9EAE4C806C*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_76FC7D9EAE4C806C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_44_TypeDefinitionIndex)->GetStaticField(0x7E38);
	}
	// static const ::System::Int32 Field_1_2 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x2; // 0x0
	::System::String* Field_1_8; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_9; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_76FC7D9EAE4C806C*>* Field_1_10; // 0x20
	::Class_1_E30585F0EAEFDF1E_13* Field_1_11; // 0x28
	::System::Boolean Field_1_12; // 0x30
	::System::UInt32 Field_1_13; // 0x34
	::System::UInt32 Field_1_14; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_44__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21DCD4640D389503_44* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_44*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_44__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_44__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_44*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_44*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_44_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_44_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21DCD4640D389503_44* Clone()
	{
		return ((::Class_1_21DCD4640D389503_44*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_44_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_76FC7D9EAE4C806C*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_76FC7D9EAE4C806C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_44_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_44_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_44_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_44_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_44_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_44_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_44_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_E30585F0EAEFDF1E_13* Method_1_24748FC20F375725()
	{
		return ((::Class_1_E30585F0EAEFDF1E_13*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_44_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_E30585F0EAEFDF1E_13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E30585F0EAEFDF1E_13*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_44_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_44_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_44_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_44_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21DCD4640D389503_44* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21DCD4640D389503_44*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_44_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_44_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_44_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_44_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_44_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21DCD4640D389503_44* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_44*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_44_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_44_MERGEFROM_1_OFFSET))(this, a1);
	}
};
