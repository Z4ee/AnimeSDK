#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0F1B992870941C13_1.h"
#include "unitysdk/System/Object.h"

class Class_1_99D87B66FA19BA63_5;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class PlayerSimpleInfo; }
namespace System { class String; }

#define CLASS_1_10568D63349FDCA4_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A816750)
#define CLASS_1_10568D63349FDCA4_CLONE_OFFSET UNITYSDK_OFFSET(0x1A816100)
#define CLASS_1_10568D63349FDCA4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A816370)
#define CLASS_1_10568D63349FDCA4_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A816310)
#define CLASS_1_10568D63349FDCA4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A8164B0)
#define CLASS_1_10568D63349FDCA4_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A816BD0)
#define CLASS_1_10568D63349FDCA4_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A816A50)
#define CLASS_1_10568D63349FDCA4_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1A816280)
#define CLASS_1_10568D63349FDCA4_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1A816270)
#define CLASS_1_10568D63349FDCA4_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1A8162F0)
#define CLASS_1_10568D63349FDCA4_METHOD_1_2FF5CA20D3582DA7_OFFSET UNITYSDK_OFFSET(0x1A816250)
#define CLASS_1_10568D63349FDCA4_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A815FB0)
#define CLASS_1_10568D63349FDCA4_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1A816220)
#define CLASS_1_10568D63349FDCA4_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x1A8162E0)
#define CLASS_1_10568D63349FDCA4_METHOD_1_76682DC918AEFE3C_OFFSET UNITYSDK_OFFSET(0x1A816260)
#define CLASS_1_10568D63349FDCA4_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x1A8162D0)
#define CLASS_1_10568D63349FDCA4_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A816300)
#define CLASS_1_10568D63349FDCA4_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1A816210)
#define CLASS_1_10568D63349FDCA4_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1A816240)
#define CLASS_1_10568D63349FDCA4_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A816230)
#define CLASS_1_10568D63349FDCA4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A816010)
#define CLASS_1_10568D63349FDCA4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A8165A0)
#define CLASS_1_10568D63349FDCA4_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A816600)
#define CLASS_1_10568D63349FDCA4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A816DB0)
#define CLASS_1_10568D63349FDCA4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A816030)
#define CLASS_1_10568D63349FDCA4__CTOR_OFFSET UNITYSDK_OFFSET(0x1A816020)

inline static constexpr unsigned int Class_1_10568D63349FDCA4_TypeDefinitionIndex = 27157;

class Class_1_10568D63349FDCA4 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_10568D63349FDCA4*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_10568D63349FDCA4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_10568D63349FDCA4_TypeDefinitionIndex)->GetStaticField(0x1A390);
	}
	// static const ::System::Int32 Field_1_1 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x8; // 0x0
	::Proto::PlayerSimpleInfo* Field_1_7; // 0x10
	::System::String* Field_1_8; // 0x18
	::Class_1_99D87B66FA19BA63_5* Field_1_9; // 0x20
	::Google::Protobuf::UnknownFieldSet* Field_1_10; // 0x28
	::System::Int64 Field_1_11; // 0x30
	::System::Boolean Field_1_12; // 0x38
	::Enum_3_0F1B992870941C13_1 Field_1_13; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10568D63349FDCA4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_10568D63349FDCA4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_10568D63349FDCA4*))((::PBYTE)hIl2Cpp + CLASS_1_10568D63349FDCA4__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_10568D63349FDCA4__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_10568D63349FDCA4*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_10568D63349FDCA4*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_10568D63349FDCA4_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10568D63349FDCA4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_10568D63349FDCA4* Clone()
	{
		return ((::Class_1_10568D63349FDCA4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10568D63349FDCA4_CLONE_OFFSET))(this);
	}

	::Enum_3_0F1B992870941C13_1 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0F1B992870941C13_1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10568D63349FDCA4_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0F1B992870941C13_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0F1B992870941C13_1))((::PBYTE)hIl2Cpp + CLASS_1_10568D63349FDCA4_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10568D63349FDCA4_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_10568D63349FDCA4_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Proto::PlayerSimpleInfo* Method_1_2FF5CA20D3582DA7()
	{
		return ((::Proto::PlayerSimpleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10568D63349FDCA4_METHOD_1_2FF5CA20D3582DA7_OFFSET))(this);
	}

	::System::Void Method_1_76682DC918AEFE3C(::Proto::PlayerSimpleInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::PlayerSimpleInfo*))((::PBYTE)hIl2Cpp + CLASS_1_10568D63349FDCA4_METHOD_1_76682DC918AEFE3C_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10568D63349FDCA4_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_10568D63349FDCA4_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10568D63349FDCA4_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_10568D63349FDCA4_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::Class_1_99D87B66FA19BA63_5* Method_1_24748FC20F375725()
	{
		return ((::Class_1_99D87B66FA19BA63_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10568D63349FDCA4_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_99D87B66FA19BA63_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_99D87B66FA19BA63_5*))((::PBYTE)hIl2Cpp + CLASS_1_10568D63349FDCA4_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_10568D63349FDCA4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_10568D63349FDCA4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_10568D63349FDCA4*))((::PBYTE)hIl2Cpp + CLASS_1_10568D63349FDCA4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10568D63349FDCA4_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10568D63349FDCA4_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_10568D63349FDCA4_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10568D63349FDCA4_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_10568D63349FDCA4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_10568D63349FDCA4*))((::PBYTE)hIl2Cpp + CLASS_1_10568D63349FDCA4_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_10568D63349FDCA4_MERGEFROM_1_OFFSET))(this, a1);
	}
};
