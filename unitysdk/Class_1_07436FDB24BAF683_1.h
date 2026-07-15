#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63D176C405CC7947_1.h"
#include "unitysdk/System/Object.h"

class Class_1_07436FDB24BAF683_2;
class Class_1_501A85DCC8C1EA91;
class Class_1_C9DFE5EE7107C629_10;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_07436FDB24BAF683_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C559ED0)
#define CLASS_1_07436FDB24BAF683_1_CLONE_OFFSET UNITYSDK_OFFSET(0x1C5591E0)
#define CLASS_1_07436FDB24BAF683_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C5593E0)
#define CLASS_1_07436FDB24BAF683_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C559380)
#define CLASS_1_07436FDB24BAF683_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C5596D0)
#define CLASS_1_07436FDB24BAF683_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C55A500)
#define CLASS_1_07436FDB24BAF683_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C55A2C0)
#define CLASS_1_07436FDB24BAF683_1_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1C559340)
#define CLASS_1_07436FDB24BAF683_1_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1C559360)
#define CLASS_1_07436FDB24BAF683_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C5592C0)
#define CLASS_1_07436FDB24BAF683_1_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1C559270)
#define CLASS_1_07436FDB24BAF683_1_METHOD_1_24748FC20F375725_2_OFFSET UNITYSDK_OFFSET(0x1C559320)
#define CLASS_1_07436FDB24BAF683_1_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C559250)
#define CLASS_1_07436FDB24BAF683_1_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C558EC0)
#define CLASS_1_07436FDB24BAF683_1_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1C5592A0)
#define CLASS_1_07436FDB24BAF683_1_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x1C5592E0)
#define CLASS_1_07436FDB24BAF683_1_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1C559310)
#define CLASS_1_07436FDB24BAF683_1_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x1C559300)
#define CLASS_1_07436FDB24BAF683_1_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1C5592B0)
#define CLASS_1_07436FDB24BAF683_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1C559350)
#define CLASS_1_07436FDB24BAF683_1_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1C559370)
#define CLASS_1_07436FDB24BAF683_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C5592D0)
#define CLASS_1_07436FDB24BAF683_1_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1C559280)
#define CLASS_1_07436FDB24BAF683_1_METHOD_1_8C8625211DA811AE_2_OFFSET UNITYSDK_OFFSET(0x1C559330)
#define CLASS_1_07436FDB24BAF683_1_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C559260)
#define CLASS_1_07436FDB24BAF683_1_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1C559290)
#define CLASS_1_07436FDB24BAF683_1_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1C559240)
#define CLASS_1_07436FDB24BAF683_1_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x1C5592F0)
#define CLASS_1_07436FDB24BAF683_1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1C559230)
#define CLASS_1_07436FDB24BAF683_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C558F20)
#define CLASS_1_07436FDB24BAF683_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C559970)
#define CLASS_1_07436FDB24BAF683_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C5599D0)
#define CLASS_1_07436FDB24BAF683_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C55A7D0)
#define CLASS_1_07436FDB24BAF683_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C558FF0)
#define CLASS_1_07436FDB24BAF683_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C558F30)

inline static constexpr unsigned int Class_1_07436FDB24BAF683_1_TypeDefinitionIndex = 27488;

class Class_1_07436FDB24BAF683_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_07436FDB24BAF683_2*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_07436FDB24BAF683_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_07436FDB24BAF683_1_TypeDefinitionIndex)->GetStaticField(0x603F0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_07436FDB24BAF683_2*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_07436FDB24BAF683_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_07436FDB24BAF683_1_TypeDefinitionIndex)->GetStaticField(0x603F8);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_07436FDB24BAF683_1_TypeDefinitionIndex)->GetStaticField(0x60400);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_07436FDB24BAF683_1*>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_07436FDB24BAF683_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_07436FDB24BAF683_1_TypeDefinitionIndex)->GetStaticField(0x60408);
	}
	// static const ::System::Int32 Field_1_4 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_11 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_12 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_13 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_14 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_15 = 0x5; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_16; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_07436FDB24BAF683_2*>* Field_1_17; // 0x18
	::Class_1_C9DFE5EE7107C629_10* Field_1_18; // 0x20
	::Class_1_501A85DCC8C1EA91* Field_1_19; // 0x28
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_07436FDB24BAF683_2*>* Field_1_20; // 0x30
	::Google::Protobuf::UnknownFieldSet* Field_1_21; // 0x38
	::Class_1_501A85DCC8C1EA91* Field_1_22; // 0x40
	::System::UInt32 Field_1_23; // 0x48
	::System::UInt32 Field_1_24; // 0x4C
	::System::Single Field_1_25; // 0x50
	::Enum_3_63D176C405CC7947_1 Field_1_26; // 0x54
	::System::UInt32 Field_1_27; // 0x58
	::System::Boolean Field_1_28; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07436FDB24BAF683_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_07436FDB24BAF683_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_07436FDB24BAF683_1*))((::PBYTE)hIl2Cpp + CLASS_1_07436FDB24BAF683_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_07436FDB24BAF683_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_07436FDB24BAF683_1*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_07436FDB24BAF683_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_07436FDB24BAF683_1_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07436FDB24BAF683_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_07436FDB24BAF683_1* Clone()
	{
		return ((::Class_1_07436FDB24BAF683_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07436FDB24BAF683_1_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07436FDB24BAF683_1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_07436FDB24BAF683_1_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Class_1_C9DFE5EE7107C629_10* Method_1_24748FC20F375725()
	{
		return ((::Class_1_C9DFE5EE7107C629_10*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07436FDB24BAF683_1_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_C9DFE5EE7107C629_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_10*))((::PBYTE)hIl2Cpp + CLASS_1_07436FDB24BAF683_1_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_501A85DCC8C1EA91* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_501A85DCC8C1EA91*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07436FDB24BAF683_1_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_501A85DCC8C1EA91* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_501A85DCC8C1EA91*))((::PBYTE)hIl2Cpp + CLASS_1_07436FDB24BAF683_1_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Enum_3_63D176C405CC7947_1 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_63D176C405CC7947_1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07436FDB24BAF683_1_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_63D176C405CC7947_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63D176C405CC7947_1))((::PBYTE)hIl2Cpp + CLASS_1_07436FDB24BAF683_1_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_07436FDB24BAF683_2*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_07436FDB24BAF683_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07436FDB24BAF683_1_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07436FDB24BAF683_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_07436FDB24BAF683_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07436FDB24BAF683_1_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_07436FDB24BAF683_1_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_07436FDB24BAF683_2*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_07436FDB24BAF683_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07436FDB24BAF683_1_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07436FDB24BAF683_1_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Class_1_501A85DCC8C1EA91* Method_1_24748FC20F375725_2()
	{
		return ((::Class_1_501A85DCC8C1EA91*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07436FDB24BAF683_1_METHOD_1_24748FC20F375725_2_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_2(::Class_1_501A85DCC8C1EA91* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_501A85DCC8C1EA91*))((::PBYTE)hIl2Cpp + CLASS_1_07436FDB24BAF683_1_METHOD_1_8C8625211DA811AE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07436FDB24BAF683_1_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_07436FDB24BAF683_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07436FDB24BAF683_1_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_07436FDB24BAF683_1_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_07436FDB24BAF683_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_07436FDB24BAF683_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_07436FDB24BAF683_1*))((::PBYTE)hIl2Cpp + CLASS_1_07436FDB24BAF683_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07436FDB24BAF683_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07436FDB24BAF683_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_07436FDB24BAF683_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07436FDB24BAF683_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_07436FDB24BAF683_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_07436FDB24BAF683_1*))((::PBYTE)hIl2Cpp + CLASS_1_07436FDB24BAF683_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_07436FDB24BAF683_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
