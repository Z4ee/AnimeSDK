#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_34.h"
#include "unitysdk/System/Object.h"

class Class_1_14E02E1F6D70E487_1;
class Class_1_14E02E1F6D70E487_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_07B3EC25533ABB66_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17D467A0)
#define CLASS_1_07B3EC25533ABB66_CLONE_OFFSET UNITYSDK_OFFSET(0x17D46340)
#define CLASS_1_07B3EC25533ABB66_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17D46540)
#define CLASS_1_07B3EC25533ABB66_EQUALS_OFFSET UNITYSDK_OFFSET(0x17D46450)
#define CLASS_1_07B3EC25533ABB66_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17D46630)
#define CLASS_1_07B3EC25533ABB66_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17D46990)
#define CLASS_1_07B3EC25533ABB66_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17D468D0)
#define CLASS_1_07B3EC25533ABB66_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x17D46430)
#define CLASS_1_07B3EC25533ABB66_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17D46410)
#define CLASS_1_07B3EC25533ABB66_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17D46400)
#define CLASS_1_07B3EC25533ABB66_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x17D46440)
#define CLASS_1_07B3EC25533ABB66_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17D46420)
#define CLASS_1_07B3EC25533ABB66_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x17D463F0)
#define CLASS_1_07B3EC25533ABB66_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17D46280)
#define CLASS_1_07B3EC25533ABB66_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17D46680)
#define CLASS_1_07B3EC25533ABB66_WRITETO_OFFSET UNITYSDK_OFFSET(0x17D466E0)
#define CLASS_1_07B3EC25533ABB66__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17D462A0)
#define CLASS_1_07B3EC25533ABB66__CTOR_OFFSET UNITYSDK_OFFSET(0x17D46290)

inline static constexpr unsigned int Class_1_07B3EC25533ABB66_TypeDefinitionIndex = 27093;

class Class_1_07B3EC25533ABB66 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x8; // 0x0
	::Class_1_14E02E1F6D70E487_2* Field_1_4; // 0x10
	::Class_1_14E02E1F6D70E487_1* Field_1_6; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::Enum_3_4608E37A1B3D374A_34 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07B3EC25533ABB66__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_07B3EC25533ABB66* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_07B3EC25533ABB66*))((::PBYTE)hIl2Cpp + CLASS_1_07B3EC25533ABB66__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07B3EC25533ABB66_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_07B3EC25533ABB66* Clone()
	{
		return ((::Class_1_07B3EC25533ABB66*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07B3EC25533ABB66_CLONE_OFFSET))(this);
	}

	::Enum_3_4608E37A1B3D374A_34 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_4608E37A1B3D374A_34(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07B3EC25533ABB66_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_4608E37A1B3D374A_34 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_34))((::PBYTE)hIl2Cpp + CLASS_1_07B3EC25533ABB66_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Class_1_14E02E1F6D70E487_2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_14E02E1F6D70E487_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07B3EC25533ABB66_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_14E02E1F6D70E487_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_2*))((::PBYTE)hIl2Cpp + CLASS_1_07B3EC25533ABB66_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_14E02E1F6D70E487_1* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_14E02E1F6D70E487_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07B3EC25533ABB66_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_14E02E1F6D70E487_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_1*))((::PBYTE)hIl2Cpp + CLASS_1_07B3EC25533ABB66_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_07B3EC25533ABB66_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_07B3EC25533ABB66* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_07B3EC25533ABB66*))((::PBYTE)hIl2Cpp + CLASS_1_07B3EC25533ABB66_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07B3EC25533ABB66_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07B3EC25533ABB66_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_07B3EC25533ABB66_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07B3EC25533ABB66_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_07B3EC25533ABB66* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_07B3EC25533ABB66*))((::PBYTE)hIl2Cpp + CLASS_1_07B3EC25533ABB66_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_07B3EC25533ABB66_MERGEFROM_1_OFFSET))(this, a1);
	}
};
