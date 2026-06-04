#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_86AB4C0412B98D67;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_355A2207C3B7A99D_64_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1AB14860)
#define CLASS_1_355A2207C3B7A99D_64_CLONE_OFFSET UNITYSDK_OFFSET(0x1AB14500)
#define CLASS_1_355A2207C3B7A99D_64_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1AB146B0)
#define CLASS_1_355A2207C3B7A99D_64_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AB14600)
#define CLASS_1_355A2207C3B7A99D_64_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AB14750)
#define CLASS_1_355A2207C3B7A99D_64_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1AB149C0)
#define CLASS_1_355A2207C3B7A99D_64_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1AB148C0)
#define CLASS_1_355A2207C3B7A99D_64_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1AB145E0)
#define CLASS_1_355A2207C3B7A99D_64_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1AB143E0)
#define CLASS_1_355A2207C3B7A99D_64_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1AB145F0)
#define CLASS_1_355A2207C3B7A99D_64_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1AB14410)
#define CLASS_1_355A2207C3B7A99D_64_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AB147A0)
#define CLASS_1_355A2207C3B7A99D_64_WRITETO_OFFSET UNITYSDK_OFFSET(0x1AB14800)
#define CLASS_1_355A2207C3B7A99D_64__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AB14B90)
#define CLASS_1_355A2207C3B7A99D_64__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AB14430)
#define CLASS_1_355A2207C3B7A99D_64__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB14420)

inline static constexpr unsigned int Class_1_355A2207C3B7A99D_64_TypeDefinitionIndex = 30179;

class Class_1_355A2207C3B7A99D_64 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_64*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_64*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_355A2207C3B7A99D_64_TypeDefinitionIndex)->GetStaticField(0x16220);
	}
	// static const ::System::Int32 Field_1_1 = 0xC; // 0x0
	::Class_1_86AB4C0412B98D67* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_64__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_355A2207C3B7A99D_64* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_64*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_64__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_64__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_64*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_64*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_64_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_64_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_355A2207C3B7A99D_64* Clone()
	{
		return ((::Class_1_355A2207C3B7A99D_64*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_64_CLONE_OFFSET))(this);
	}

	::Class_1_86AB4C0412B98D67* Method_1_24748FC20F375725()
	{
		return ((::Class_1_86AB4C0412B98D67*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_64_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_86AB4C0412B98D67* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_86AB4C0412B98D67*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_64_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_64_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_355A2207C3B7A99D_64* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_355A2207C3B7A99D_64*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_64_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_64_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_64_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_64_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_64_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_355A2207C3B7A99D_64* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_64*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_64_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_64_MERGEFROM_1_OFFSET))(this, a1);
	}
};
