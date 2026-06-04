#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_15.h"
#include "unitysdk/System/Object.h"

class Class_1_A16A135FC5A0DDB9_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_99D87B66FA19BA63_3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A8FE880)
#define CLASS_1_99D87B66FA19BA63_3_CLONE_OFFSET UNITYSDK_OFFSET(0x1A8FE520)
#define CLASS_1_99D87B66FA19BA63_3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A8FE6A0)
#define CLASS_1_99D87B66FA19BA63_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A8FE5F0)
#define CLASS_1_99D87B66FA19BA63_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A8FE750)
#define CLASS_1_99D87B66FA19BA63_3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A8FEA70)
#define CLASS_1_99D87B66FA19BA63_3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A8FE990)
#define CLASS_1_99D87B66FA19BA63_3_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1A8FE5D0)
#define CLASS_1_99D87B66FA19BA63_3_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1A8FE5C0)
#define CLASS_1_99D87B66FA19BA63_3_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A8FE450)
#define CLASS_1_99D87B66FA19BA63_3_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A8FE5E0)
#define CLASS_1_99D87B66FA19BA63_3_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1A8FE5B0)
#define CLASS_1_99D87B66FA19BA63_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A8FE480)
#define CLASS_1_99D87B66FA19BA63_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A8FE790)
#define CLASS_1_99D87B66FA19BA63_3_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A8FE7F0)
#define CLASS_1_99D87B66FA19BA63_3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A8FEC60)
#define CLASS_1_99D87B66FA19BA63_3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A8FE4A0)
#define CLASS_1_99D87B66FA19BA63_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8FE490)

inline static constexpr unsigned int Class_1_99D87B66FA19BA63_3_TypeDefinitionIndex = 27062;

class Class_1_99D87B66FA19BA63_3 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_99D87B66FA19BA63_3*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_99D87B66FA19BA63_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_99D87B66FA19BA63_3_TypeDefinitionIndex)->GetStaticField(0x60D90);
	}
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x9; // 0x0
	::Class_1_A16A135FC5A0DDB9_2* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x18
	::Enum_3_96F6662CA3713095_15 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_99D87B66FA19BA63_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_99D87B66FA19BA63_3*))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_3__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_3__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_99D87B66FA19BA63_3*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_99D87B66FA19BA63_3*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_3_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_99D87B66FA19BA63_3* Clone()
	{
		return ((::Class_1_99D87B66FA19BA63_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_3_CLONE_OFFSET))(this);
	}

	::Enum_3_96F6662CA3713095_15 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_96F6662CA3713095_15(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_3_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_96F6662CA3713095_15 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_96F6662CA3713095_15))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_3_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Class_1_A16A135FC5A0DDB9_2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_A16A135FC5A0DDB9_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_3_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_A16A135FC5A0DDB9_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A16A135FC5A0DDB9_2*))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_3_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_99D87B66FA19BA63_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_99D87B66FA19BA63_3*))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_99D87B66FA19BA63_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_99D87B66FA19BA63_3*))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
