#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_14.h"
#include "unitysdk/System/Object.h"

class Class_1_0306FBB84513F0B2_3;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_99D87B66FA19BA63_8_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A4F5E30)
#define CLASS_1_99D87B66FA19BA63_8_CLONE_OFFSET UNITYSDK_OFFSET(0x1A4F5A70)
#define CLASS_1_99D87B66FA19BA63_8_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A4F5C50)
#define CLASS_1_99D87B66FA19BA63_8_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A4F5B70)
#define CLASS_1_99D87B66FA19BA63_8_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A4F5D00)
#define CLASS_1_99D87B66FA19BA63_8_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A4F5FD0)
#define CLASS_1_99D87B66FA19BA63_8_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A4F5F40)
#define CLASS_1_99D87B66FA19BA63_8_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1A4F5B50)
#define CLASS_1_99D87B66FA19BA63_8_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A4F5970)
#define CLASS_1_99D87B66FA19BA63_8_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1A4F5B40)
#define CLASS_1_99D87B66FA19BA63_8_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A4F5B60)
#define CLASS_1_99D87B66FA19BA63_8_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1A4F5B30)
#define CLASS_1_99D87B66FA19BA63_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A4F59D0)
#define CLASS_1_99D87B66FA19BA63_8_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A4F5D40)
#define CLASS_1_99D87B66FA19BA63_8_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A4F5DA0)
#define CLASS_1_99D87B66FA19BA63_8__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4F6180)
#define CLASS_1_99D87B66FA19BA63_8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A4F59F0)
#define CLASS_1_99D87B66FA19BA63_8__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4F59E0)

inline static constexpr unsigned int Class_1_99D87B66FA19BA63_8_TypeDefinitionIndex = 32583;

class Class_1_99D87B66FA19BA63_8 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_99D87B66FA19BA63_8*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_99D87B66FA19BA63_8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_99D87B66FA19BA63_8_TypeDefinitionIndex)->GetStaticField(0x9DE0);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::Class_1_0306FBB84513F0B2_3* Field_1_4; // 0x18
	::Enum_3_F80BFD5B986D5503_14 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_8__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_99D87B66FA19BA63_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_99D87B66FA19BA63_8*))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_8__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_8__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_99D87B66FA19BA63_8*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_99D87B66FA19BA63_8*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_8_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_99D87B66FA19BA63_8* Clone()
	{
		return ((::Class_1_99D87B66FA19BA63_8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_8_CLONE_OFFSET))(this);
	}

	::Enum_3_F80BFD5B986D5503_14 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_F80BFD5B986D5503_14(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_8_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_F80BFD5B986D5503_14 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_F80BFD5B986D5503_14))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_8_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Class_1_0306FBB84513F0B2_3* Method_1_24748FC20F375725()
	{
		return ((::Class_1_0306FBB84513F0B2_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_8_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_0306FBB84513F0B2_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0306FBB84513F0B2_3*))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_8_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_8_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_99D87B66FA19BA63_8* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_99D87B66FA19BA63_8*))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_8_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_8_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_8_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_8_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_8_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_99D87B66FA19BA63_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_99D87B66FA19BA63_8*))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_8_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_8_MERGEFROM_1_OFFSET))(this, a1);
	}
};
