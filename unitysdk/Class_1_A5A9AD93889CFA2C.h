#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A5A9AD93889CFA2C_Enum_3_060898AA908AAA4E_19.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class SceneEntityInfo; }
namespace System { class String; }

#define CLASS_1_A5A9AD93889CFA2C_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18155040)
#define CLASS_1_A5A9AD93889CFA2C_CLONE_OFFSET UNITYSDK_OFFSET(0x181548E0)
#define CLASS_1_A5A9AD93889CFA2C_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x181549B0)
#define CLASS_1_A5A9AD93889CFA2C_EQUALS_OFFSET UNITYSDK_OFFSET(0x18154950)
#define CLASS_1_A5A9AD93889CFA2C_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18154CF0)
#define CLASS_1_A5A9AD93889CFA2C_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x181554E0)
#define CLASS_1_A5A9AD93889CFA2C_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x181552A0)
#define CLASS_1_A5A9AD93889CFA2C_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x18154930)
#define CLASS_1_A5A9AD93889CFA2C_METHOD_1_6BCB722BBE18B904_1_OFFSET UNITYSDK_OFFSET(0x18154830)
#define CLASS_1_A5A9AD93889CFA2C_METHOD_1_6BCB722BBE18B904_OFFSET UNITYSDK_OFFSET(0x18154780)
#define CLASS_1_A5A9AD93889CFA2C_METHOD_1_7E46B904D08C26AC_OFFSET UNITYSDK_OFFSET(0x18154720)
#define CLASS_1_A5A9AD93889CFA2C_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x18154940)
#define CLASS_1_A5A9AD93889CFA2C_METHOD_1_ECF173E3C678F858_OFFSET UNITYSDK_OFFSET(0x18154760)
#define CLASS_1_A5A9AD93889CFA2C_METHOD_1_F45A6C563F3DF7EB_1_OFFSET UNITYSDK_OFFSET(0x181548B0)
#define CLASS_1_A5A9AD93889CFA2C_METHOD_1_F45A6C563F3DF7EB_OFFSET UNITYSDK_OFFSET(0x18154800)
#define CLASS_1_A5A9AD93889CFA2C_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18154540)
#define CLASS_1_A5A9AD93889CFA2C_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18154E10)
#define CLASS_1_A5A9AD93889CFA2C_WRITETO_OFFSET UNITYSDK_OFFSET(0x18154E70)
#define CLASS_1_A5A9AD93889CFA2C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18154560)
#define CLASS_1_A5A9AD93889CFA2C__CTOR_OFFSET UNITYSDK_OFFSET(0x18154550)

inline static constexpr unsigned int Class_1_A5A9AD93889CFA2C_TypeDefinitionIndex = 27112;

class Class_1_A5A9AD93889CFA2C : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::Object* Field_1_4; // 0x18
	::Class_1_A5A9AD93889CFA2C_Enum_3_060898AA908AAA4E_19 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5A9AD93889CFA2C__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_A5A9AD93889CFA2C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A5A9AD93889CFA2C*))((::PBYTE)hIl2Cpp + CLASS_1_A5A9AD93889CFA2C__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5A9AD93889CFA2C_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_A5A9AD93889CFA2C* Clone()
	{
		return ((::Class_1_A5A9AD93889CFA2C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5A9AD93889CFA2C_CLONE_OFFSET))(this);
	}

	::Proto::SceneEntityInfo* Method_1_7E46B904D08C26AC()
	{
		return ((::Proto::SceneEntityInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5A9AD93889CFA2C_METHOD_1_7E46B904D08C26AC_OFFSET))(this);
	}

	::System::Void Method_1_ECF173E3C678F858(::Proto::SceneEntityInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::SceneEntityInfo*))((::PBYTE)hIl2Cpp + CLASS_1_A5A9AD93889CFA2C_METHOD_1_ECF173E3C678F858_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_6BCB722BBE18B904()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5A9AD93889CFA2C_METHOD_1_6BCB722BBE18B904_OFFSET))(this);
	}

	::System::Void Method_1_F45A6C563F3DF7EB(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A5A9AD93889CFA2C_METHOD_1_F45A6C563F3DF7EB_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_6BCB722BBE18B904_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5A9AD93889CFA2C_METHOD_1_6BCB722BBE18B904_1_OFFSET))(this);
	}

	::System::Void Method_1_F45A6C563F3DF7EB_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A5A9AD93889CFA2C_METHOD_1_F45A6C563F3DF7EB_1_OFFSET))(this, a1);
	}

	::Class_1_A5A9AD93889CFA2C_Enum_3_060898AA908AAA4E_19 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_A5A9AD93889CFA2C_Enum_3_060898AA908AAA4E_19(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5A9AD93889CFA2C_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5A9AD93889CFA2C_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A5A9AD93889CFA2C_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_A5A9AD93889CFA2C* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A5A9AD93889CFA2C*))((::PBYTE)hIl2Cpp + CLASS_1_A5A9AD93889CFA2C_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5A9AD93889CFA2C_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5A9AD93889CFA2C_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A5A9AD93889CFA2C_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5A9AD93889CFA2C_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_A5A9AD93889CFA2C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A5A9AD93889CFA2C*))((::PBYTE)hIl2Cpp + CLASS_1_A5A9AD93889CFA2C_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A5A9AD93889CFA2C_MERGEFROM_1_OFFSET))(this, a1);
	}
};
