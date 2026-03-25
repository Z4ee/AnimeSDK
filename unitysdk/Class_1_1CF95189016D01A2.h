#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0F1B992870941C13_1.h"
#include "unitysdk/System/Object.h"

class Class_1_A4E2764947F50E01_5;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class PlayerSimpleInfo; }
namespace System { class String; }

#define CLASS_1_1CF95189016D01A2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1806B400)
#define CLASS_1_1CF95189016D01A2_CLONE_OFFSET UNITYSDK_OFFSET(0x1806ADA0)
#define CLASS_1_1CF95189016D01A2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1806B030)
#define CLASS_1_1CF95189016D01A2_EQUALS_OFFSET UNITYSDK_OFFSET(0x1806AFD0)
#define CLASS_1_1CF95189016D01A2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1806B150)
#define CLASS_1_1CF95189016D01A2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1806B8A0)
#define CLASS_1_1CF95189016D01A2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1806B700)
#define CLASS_1_1CF95189016D01A2_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1806AF50)
#define CLASS_1_1CF95189016D01A2_METHOD_1_1D3C8F680A3EDA34_OFFSET UNITYSDK_OFFSET(0x1806AF60)
#define CLASS_1_1CF95189016D01A2_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1806AF30)
#define CLASS_1_1CF95189016D01A2_METHOD_1_2FF5CA20D3582DA7_OFFSET UNITYSDK_OFFSET(0x1806AF10)
#define CLASS_1_1CF95189016D01A2_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1806AEE0)
#define CLASS_1_1CF95189016D01A2_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x1806AF00)
#define CLASS_1_1CF95189016D01A2_METHOD_1_76682DC918AEFE3C_OFFSET UNITYSDK_OFFSET(0x1806AF20)
#define CLASS_1_1CF95189016D01A2_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x1806AEF0)
#define CLASS_1_1CF95189016D01A2_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1806AF40)
#define CLASS_1_1CF95189016D01A2_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1806AED0)
#define CLASS_1_1CF95189016D01A2_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1806AEC0)
#define CLASS_1_1CF95189016D01A2_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1806AEB0)
#define CLASS_1_1CF95189016D01A2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1806ACA0)
#define CLASS_1_1CF95189016D01A2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1806B240)
#define CLASS_1_1CF95189016D01A2_WRITETO_OFFSET UNITYSDK_OFFSET(0x1806B2A0)
#define CLASS_1_1CF95189016D01A2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1806ACC0)
#define CLASS_1_1CF95189016D01A2__CTOR_OFFSET UNITYSDK_OFFSET(0x1806ACB0)

inline static constexpr unsigned int Class_1_1CF95189016D01A2_TypeDefinitionIndex = 24598;

class Class_1_1CF95189016D01A2 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_9 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x4; // 0x0
	::Class_1_A4E2764947F50E01_5* Field_1_10; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::String* Field_1_12; // 0x20
	::Proto::PlayerSimpleInfo* Field_1_8; // 0x28
	::Enum_3_0F1B992870941C13_1 Field_1_4; // 0x30
	::System::Boolean Field_1_2; // 0x34
	::System::Int64 Field_1_6; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CF95189016D01A2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_1CF95189016D01A2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CF95189016D01A2*))((::PBYTE)hIl2Cpp + CLASS_1_1CF95189016D01A2__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CF95189016D01A2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_1CF95189016D01A2* Clone()
	{
		return ((::Class_1_1CF95189016D01A2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CF95189016D01A2_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CF95189016D01A2_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1CF95189016D01A2_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Enum_3_0F1B992870941C13_1 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0F1B992870941C13_1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CF95189016D01A2_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0F1B992870941C13_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0F1B992870941C13_1))((::PBYTE)hIl2Cpp + CLASS_1_1CF95189016D01A2_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CF95189016D01A2_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_1CF95189016D01A2_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::Proto::PlayerSimpleInfo* Method_1_2FF5CA20D3582DA7()
	{
		return ((::Proto::PlayerSimpleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CF95189016D01A2_METHOD_1_2FF5CA20D3582DA7_OFFSET))(this);
	}

	::System::Void Method_1_76682DC918AEFE3C(::Proto::PlayerSimpleInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::PlayerSimpleInfo*))((::PBYTE)hIl2Cpp + CLASS_1_1CF95189016D01A2_METHOD_1_76682DC918AEFE3C_OFFSET))(this, a1);
	}

	::Class_1_A4E2764947F50E01_5* Method_1_24748FC20F375725()
	{
		return ((::Class_1_A4E2764947F50E01_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CF95189016D01A2_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_A4E2764947F50E01_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A4E2764947F50E01_5*))((::PBYTE)hIl2Cpp + CLASS_1_1CF95189016D01A2_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CF95189016D01A2_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1CF95189016D01A2_METHOD_1_1D3C8F680A3EDA34_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1CF95189016D01A2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1CF95189016D01A2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1CF95189016D01A2*))((::PBYTE)hIl2Cpp + CLASS_1_1CF95189016D01A2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CF95189016D01A2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CF95189016D01A2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1CF95189016D01A2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CF95189016D01A2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_1CF95189016D01A2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CF95189016D01A2*))((::PBYTE)hIl2Cpp + CLASS_1_1CF95189016D01A2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1CF95189016D01A2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
