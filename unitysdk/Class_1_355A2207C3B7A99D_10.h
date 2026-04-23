#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_00BAB2C33D444F88_8;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_355A2207C3B7A99D_10_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x199FCAD0)
#define CLASS_1_355A2207C3B7A99D_10_CLONE_OFFSET UNITYSDK_OFFSET(0x199FC7D0)
#define CLASS_1_355A2207C3B7A99D_10_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x199FC920)
#define CLASS_1_355A2207C3B7A99D_10_EQUALS_OFFSET UNITYSDK_OFFSET(0x199FC870)
#define CLASS_1_355A2207C3B7A99D_10_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x199FC9C0)
#define CLASS_1_355A2207C3B7A99D_10_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x199FCBC0)
#define CLASS_1_355A2207C3B7A99D_10_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x199FCB30)
#define CLASS_1_355A2207C3B7A99D_10_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x199FC850)
#define CLASS_1_355A2207C3B7A99D_10_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x199FC710)
#define CLASS_1_355A2207C3B7A99D_10_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x199FC860)
#define CLASS_1_355A2207C3B7A99D_10_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x199FC740)
#define CLASS_1_355A2207C3B7A99D_10_TOSTRING_OFFSET UNITYSDK_OFFSET(0x199FCA10)
#define CLASS_1_355A2207C3B7A99D_10_WRITETO_OFFSET UNITYSDK_OFFSET(0x199FCA70)
#define CLASS_1_355A2207C3B7A99D_10__CCTOR_OFFSET UNITYSDK_OFFSET(0x199FCCA0)
#define CLASS_1_355A2207C3B7A99D_10__CTOR_1_OFFSET UNITYSDK_OFFSET(0x199FC760)
#define CLASS_1_355A2207C3B7A99D_10__CTOR_OFFSET UNITYSDK_OFFSET(0x199FC750)

inline static constexpr unsigned int Class_1_355A2207C3B7A99D_10_TypeDefinitionIndex = 30954;

class Class_1_355A2207C3B7A99D_10 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_10*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_10*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_355A2207C3B7A99D_10_TypeDefinitionIndex)->GetStaticField(0x68E50);
	}
	// static const ::System::Int32 Field_1_2 = 0xD; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Class_1_00BAB2C33D444F88_8* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_10__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_355A2207C3B7A99D_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_10*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_10__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_10__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_10*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_10*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_10_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_10_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_355A2207C3B7A99D_10* Clone()
	{
		return ((::Class_1_355A2207C3B7A99D_10*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_10_CLONE_OFFSET))(this);
	}

	::Class_1_00BAB2C33D444F88_8* Method_1_24748FC20F375725()
	{
		return ((::Class_1_00BAB2C33D444F88_8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_10_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_00BAB2C33D444F88_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_00BAB2C33D444F88_8*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_10_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_10_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_355A2207C3B7A99D_10* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_355A2207C3B7A99D_10*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_10_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_10_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_10_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_10_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_10_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_355A2207C3B7A99D_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_10*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_10_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_10_MERGEFROM_1_OFFSET))(this, a1);
	}
};
