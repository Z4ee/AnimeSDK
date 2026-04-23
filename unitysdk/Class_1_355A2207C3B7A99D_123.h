#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_76FC7D9EAE4C806C;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_355A2207C3B7A99D_123_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19C92E80)
#define CLASS_1_355A2207C3B7A99D_123_CLONE_OFFSET UNITYSDK_OFFSET(0x19C92B10)
#define CLASS_1_355A2207C3B7A99D_123_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19C92CC0)
#define CLASS_1_355A2207C3B7A99D_123_EQUALS_OFFSET UNITYSDK_OFFSET(0x19C92BF0)
#define CLASS_1_355A2207C3B7A99D_123_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19C92D60)
#define CLASS_1_355A2207C3B7A99D_123_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19C92F80)
#define CLASS_1_355A2207C3B7A99D_123_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19C92EE0)
#define CLASS_1_355A2207C3B7A99D_123_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x19C92BD0)
#define CLASS_1_355A2207C3B7A99D_123_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19C92A10)
#define CLASS_1_355A2207C3B7A99D_123_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x19C92BE0)
#define CLASS_1_355A2207C3B7A99D_123_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19C92A70)
#define CLASS_1_355A2207C3B7A99D_123_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19C92DC0)
#define CLASS_1_355A2207C3B7A99D_123_WRITETO_OFFSET UNITYSDK_OFFSET(0x19C92E20)
#define CLASS_1_355A2207C3B7A99D_123__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C93010)
#define CLASS_1_355A2207C3B7A99D_123__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19C92A90)
#define CLASS_1_355A2207C3B7A99D_123__CTOR_OFFSET UNITYSDK_OFFSET(0x19C92A80)

inline static constexpr unsigned int Class_1_355A2207C3B7A99D_123_TypeDefinitionIndex = 33216;

class Class_1_355A2207C3B7A99D_123 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_123*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_123*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_355A2207C3B7A99D_123_TypeDefinitionIndex)->GetStaticField(0x63290);
	}
	// static const ::System::Int32 Field_1_2 = 0xF; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Class_1_76FC7D9EAE4C806C* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_123__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_355A2207C3B7A99D_123* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_123*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_123__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_123__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_123*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_123*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_123_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_123_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_355A2207C3B7A99D_123* Clone()
	{
		return ((::Class_1_355A2207C3B7A99D_123*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_123_CLONE_OFFSET))(this);
	}

	::Class_1_76FC7D9EAE4C806C* Method_1_24748FC20F375725()
	{
		return ((::Class_1_76FC7D9EAE4C806C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_123_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_76FC7D9EAE4C806C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_76FC7D9EAE4C806C*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_123_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_123_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_355A2207C3B7A99D_123* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_355A2207C3B7A99D_123*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_123_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_123_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_123_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_123_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_123_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_355A2207C3B7A99D_123* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_123*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_123_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_123_MERGEFROM_1_OFFSET))(this, a1);
	}
};
