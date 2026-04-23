#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_569A1536AD9335E7;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_355A2207C3B7A99D_78_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19AD74E0)
#define CLASS_1_355A2207C3B7A99D_78_CLONE_OFFSET UNITYSDK_OFFSET(0x19AD71E0)
#define CLASS_1_355A2207C3B7A99D_78_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19AD7330)
#define CLASS_1_355A2207C3B7A99D_78_EQUALS_OFFSET UNITYSDK_OFFSET(0x19AD7280)
#define CLASS_1_355A2207C3B7A99D_78_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19AD73D0)
#define CLASS_1_355A2207C3B7A99D_78_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19AD7660)
#define CLASS_1_355A2207C3B7A99D_78_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19AD7540)
#define CLASS_1_355A2207C3B7A99D_78_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x19AD7260)
#define CLASS_1_355A2207C3B7A99D_78_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19AD7120)
#define CLASS_1_355A2207C3B7A99D_78_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x19AD7270)
#define CLASS_1_355A2207C3B7A99D_78_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19AD7150)
#define CLASS_1_355A2207C3B7A99D_78_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19AD7420)
#define CLASS_1_355A2207C3B7A99D_78_WRITETO_OFFSET UNITYSDK_OFFSET(0x19AD7480)
#define CLASS_1_355A2207C3B7A99D_78__CCTOR_OFFSET UNITYSDK_OFFSET(0x19AD7760)
#define CLASS_1_355A2207C3B7A99D_78__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19AD7170)
#define CLASS_1_355A2207C3B7A99D_78__CTOR_OFFSET UNITYSDK_OFFSET(0x19AD7160)

inline static constexpr unsigned int Class_1_355A2207C3B7A99D_78_TypeDefinitionIndex = 30800;

class Class_1_355A2207C3B7A99D_78 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_78*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_78*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_355A2207C3B7A99D_78_TypeDefinitionIndex)->GetStaticField(0x5C540);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Class_1_569A1536AD9335E7* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_78__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_355A2207C3B7A99D_78* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_78*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_78__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_78__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_78*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_78*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_78_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_78_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_355A2207C3B7A99D_78* Clone()
	{
		return ((::Class_1_355A2207C3B7A99D_78*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_78_CLONE_OFFSET))(this);
	}

	::Class_1_569A1536AD9335E7* Method_1_24748FC20F375725()
	{
		return ((::Class_1_569A1536AD9335E7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_78_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_569A1536AD9335E7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_569A1536AD9335E7*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_78_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_78_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_355A2207C3B7A99D_78* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_355A2207C3B7A99D_78*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_78_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_78_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_78_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_78_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_78_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_355A2207C3B7A99D_78* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_78*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_78_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_78_MERGEFROM_1_OFFSET))(this, a1);
	}
};
