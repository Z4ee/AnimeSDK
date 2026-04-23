#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_38;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_355A2207C3B7A99D_50_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19BC32D0)
#define CLASS_1_355A2207C3B7A99D_50_CLONE_OFFSET UNITYSDK_OFFSET(0x19BC2F30)
#define CLASS_1_355A2207C3B7A99D_50_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19BC3100)
#define CLASS_1_355A2207C3B7A99D_50_EQUALS_OFFSET UNITYSDK_OFFSET(0x19BC3030)
#define CLASS_1_355A2207C3B7A99D_50_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19BC31A0)
#define CLASS_1_355A2207C3B7A99D_50_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19BC3400)
#define CLASS_1_355A2207C3B7A99D_50_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19BC3330)
#define CLASS_1_355A2207C3B7A99D_50_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x19BC3010)
#define CLASS_1_355A2207C3B7A99D_50_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19BC2E20)
#define CLASS_1_355A2207C3B7A99D_50_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x19BC3020)
#define CLASS_1_355A2207C3B7A99D_50_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19BC2E80)
#define CLASS_1_355A2207C3B7A99D_50_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19BC3210)
#define CLASS_1_355A2207C3B7A99D_50_WRITETO_OFFSET UNITYSDK_OFFSET(0x19BC3270)
#define CLASS_1_355A2207C3B7A99D_50__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BC34B0)
#define CLASS_1_355A2207C3B7A99D_50__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19BC2EA0)
#define CLASS_1_355A2207C3B7A99D_50__CTOR_OFFSET UNITYSDK_OFFSET(0x19BC2E90)

inline static constexpr unsigned int Class_1_355A2207C3B7A99D_50_TypeDefinitionIndex = 29013;

class Class_1_355A2207C3B7A99D_50 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_50*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_50*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_355A2207C3B7A99D_50_TypeDefinitionIndex)->GetStaticField(0x50200);
	}
	// static const ::System::Int32 Field_1_2 = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Class_1_1CBA230307F9C289_38* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_50__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_355A2207C3B7A99D_50* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_50*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_50__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_50__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_50*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_50*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_50_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_50_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_355A2207C3B7A99D_50* Clone()
	{
		return ((::Class_1_355A2207C3B7A99D_50*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_50_CLONE_OFFSET))(this);
	}

	::Class_1_1CBA230307F9C289_38* Method_1_24748FC20F375725()
	{
		return ((::Class_1_1CBA230307F9C289_38*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_50_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_1CBA230307F9C289_38* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_38*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_50_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_50_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_355A2207C3B7A99D_50* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_355A2207C3B7A99D_50*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_50_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_50_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_50_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_50_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_50_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_355A2207C3B7A99D_50* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_50*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_50_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_50_MERGEFROM_1_OFFSET))(this, a1);
	}
};
