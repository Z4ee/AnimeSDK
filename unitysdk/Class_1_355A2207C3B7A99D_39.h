#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_668FE281FA72D3E8_11;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_355A2207C3B7A99D_39_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19321690)
#define CLASS_1_355A2207C3B7A99D_39_CLONE_OFFSET UNITYSDK_OFFSET(0x193212F0)
#define CLASS_1_355A2207C3B7A99D_39_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x193214D0)
#define CLASS_1_355A2207C3B7A99D_39_EQUALS_OFFSET UNITYSDK_OFFSET(0x19321400)
#define CLASS_1_355A2207C3B7A99D_39_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19321570)
#define CLASS_1_355A2207C3B7A99D_39_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x193217B0)
#define CLASS_1_355A2207C3B7A99D_39_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x193216F0)
#define CLASS_1_355A2207C3B7A99D_39_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x193213E0)
#define CLASS_1_355A2207C3B7A99D_39_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x193211D0)
#define CLASS_1_355A2207C3B7A99D_39_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x193213F0)
#define CLASS_1_355A2207C3B7A99D_39_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19321230)
#define CLASS_1_355A2207C3B7A99D_39_TOSTRING_OFFSET UNITYSDK_OFFSET(0x193215D0)
#define CLASS_1_355A2207C3B7A99D_39_WRITETO_OFFSET UNITYSDK_OFFSET(0x19321630)
#define CLASS_1_355A2207C3B7A99D_39__CCTOR_OFFSET UNITYSDK_OFFSET(0x19321860)
#define CLASS_1_355A2207C3B7A99D_39__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19321250)
#define CLASS_1_355A2207C3B7A99D_39__CTOR_OFFSET UNITYSDK_OFFSET(0x19321240)

inline static constexpr unsigned int Class_1_355A2207C3B7A99D_39_TypeDefinitionIndex = 28183;

class Class_1_355A2207C3B7A99D_39 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_39*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_39*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_355A2207C3B7A99D_39_TypeDefinitionIndex)->GetStaticField(0x61BC0);
	}
	// static const ::System::Int32 Field_1_2 = 0x7; // 0x0
	::Class_1_668FE281FA72D3E8_11* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_39__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_355A2207C3B7A99D_39* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_39*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_39__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_39__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_39*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_39*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_39_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_39_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_355A2207C3B7A99D_39* Clone()
	{
		return ((::Class_1_355A2207C3B7A99D_39*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_39_CLONE_OFFSET))(this);
	}

	::Class_1_668FE281FA72D3E8_11* Method_1_24748FC20F375725()
	{
		return ((::Class_1_668FE281FA72D3E8_11*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_39_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_668FE281FA72D3E8_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_668FE281FA72D3E8_11*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_39_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_39_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_355A2207C3B7A99D_39* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_355A2207C3B7A99D_39*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_39_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_39_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_39_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_39_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_39_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_355A2207C3B7A99D_39* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_39*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_39_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_39_MERGEFROM_1_OFFSET))(this, a1);
	}
};
