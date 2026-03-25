#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_14E02E1F6D70E487_1;
class Class_1_14E02E1F6D70E487_2;
class Class_1_3AD2528CD53B1639_3;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_B7BB3B4A811B445B_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17F93DF0)
#define CLASS_1_B7BB3B4A811B445B_CLONE_OFFSET UNITYSDK_OFFSET(0x17F93930)
#define CLASS_1_B7BB3B4A811B445B_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17F93B20)
#define CLASS_1_B7BB3B4A811B445B_EQUALS_OFFSET UNITYSDK_OFFSET(0x17F939E0)
#define CLASS_1_B7BB3B4A811B445B_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17F93C50)
#define CLASS_1_B7BB3B4A811B445B_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17F940A0)
#define CLASS_1_B7BB3B4A811B445B_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17F93F30)
#define CLASS_1_B7BB3B4A811B445B_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17F939C0)
#define CLASS_1_B7BB3B4A811B445B_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x17F93980)
#define CLASS_1_B7BB3B4A811B445B_METHOD_1_24748FC20F375725_2_OFFSET UNITYSDK_OFFSET(0x17F939A0)
#define CLASS_1_B7BB3B4A811B445B_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17F93960)
#define CLASS_1_B7BB3B4A811B445B_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17F939D0)
#define CLASS_1_B7BB3B4A811B445B_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x17F93990)
#define CLASS_1_B7BB3B4A811B445B_METHOD_1_8C8625211DA811AE_2_OFFSET UNITYSDK_OFFSET(0x17F939B0)
#define CLASS_1_B7BB3B4A811B445B_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17F93970)
#define CLASS_1_B7BB3B4A811B445B_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17F93810)
#define CLASS_1_B7BB3B4A811B445B_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17F93CC0)
#define CLASS_1_B7BB3B4A811B445B_WRITETO_OFFSET UNITYSDK_OFFSET(0x17F93D20)
#define CLASS_1_B7BB3B4A811B445B__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17F93830)
#define CLASS_1_B7BB3B4A811B445B__CTOR_OFFSET UNITYSDK_OFFSET(0x17F93820)

inline static constexpr unsigned int Class_1_B7BB3B4A811B445B_TypeDefinitionIndex = 23600;

class Class_1_B7BB3B4A811B445B : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_14E02E1F6D70E487_2* Field_1_4; // 0x18
	::Class_1_14E02E1F6D70E487_1* Field_1_2; // 0x20
	::Class_1_3AD2528CD53B1639_3* Field_1_6; // 0x28
	::System::UInt32 Field_1_8; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7BB3B4A811B445B__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_B7BB3B4A811B445B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7BB3B4A811B445B*))((::PBYTE)hIl2Cpp + CLASS_1_B7BB3B4A811B445B__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7BB3B4A811B445B_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_B7BB3B4A811B445B* Clone()
	{
		return ((::Class_1_B7BB3B4A811B445B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7BB3B4A811B445B_CLONE_OFFSET))(this);
	}

	::Class_1_14E02E1F6D70E487_1* Method_1_24748FC20F375725()
	{
		return ((::Class_1_14E02E1F6D70E487_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7BB3B4A811B445B_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_14E02E1F6D70E487_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_1*))((::PBYTE)hIl2Cpp + CLASS_1_B7BB3B4A811B445B_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_14E02E1F6D70E487_2* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_14E02E1F6D70E487_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7BB3B4A811B445B_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_14E02E1F6D70E487_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_2*))((::PBYTE)hIl2Cpp + CLASS_1_B7BB3B4A811B445B_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Class_1_3AD2528CD53B1639_3* Method_1_24748FC20F375725_2()
	{
		return ((::Class_1_3AD2528CD53B1639_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7BB3B4A811B445B_METHOD_1_24748FC20F375725_2_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_2(::Class_1_3AD2528CD53B1639_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_3*))((::PBYTE)hIl2Cpp + CLASS_1_B7BB3B4A811B445B_METHOD_1_8C8625211DA811AE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7BB3B4A811B445B_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B7BB3B4A811B445B_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B7BB3B4A811B445B_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_B7BB3B4A811B445B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B7BB3B4A811B445B*))((::PBYTE)hIl2Cpp + CLASS_1_B7BB3B4A811B445B_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7BB3B4A811B445B_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7BB3B4A811B445B_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B7BB3B4A811B445B_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7BB3B4A811B445B_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_B7BB3B4A811B445B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7BB3B4A811B445B*))((::PBYTE)hIl2Cpp + CLASS_1_B7BB3B4A811B445B_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B7BB3B4A811B445B_MERGEFROM_1_OFFSET))(this, a1);
	}
};
