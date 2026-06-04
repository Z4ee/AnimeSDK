#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_28D410CCE235575F;
class Class_1_355A2207C3B7A99D_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5516F5B2865E1357_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A2DEF40)
#define CLASS_1_5516F5B2865E1357_CLONE_OFFSET UNITYSDK_OFFSET(0x1A2DEAB0)
#define CLASS_1_5516F5B2865E1357_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A2DECF0)
#define CLASS_1_5516F5B2865E1357_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A2DEBE0)
#define CLASS_1_5516F5B2865E1357_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A2DEDD0)
#define CLASS_1_5516F5B2865E1357_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A2DF0E0)
#define CLASS_1_5516F5B2865E1357_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A2DEFD0)
#define CLASS_1_5516F5B2865E1357_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1A2DEBC0)
#define CLASS_1_5516F5B2865E1357_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1A2DEBA0)
#define CLASS_1_5516F5B2865E1357_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A2DE990)
#define CLASS_1_5516F5B2865E1357_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1A2DEBD0)
#define CLASS_1_5516F5B2865E1357_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A2DEBB0)
#define CLASS_1_5516F5B2865E1357_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A2DE9F0)
#define CLASS_1_5516F5B2865E1357_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A2DEE60)
#define CLASS_1_5516F5B2865E1357_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A2DEEC0)
#define CLASS_1_5516F5B2865E1357__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2DF2E0)
#define CLASS_1_5516F5B2865E1357__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A2DEA10)
#define CLASS_1_5516F5B2865E1357__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2DEA00)

inline static constexpr unsigned int Class_1_5516F5B2865E1357_TypeDefinitionIndex = 24167;

class Class_1_5516F5B2865E1357 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5516F5B2865E1357*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5516F5B2865E1357*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5516F5B2865E1357_TypeDefinitionIndex)->GetStaticField(0x4F220);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::Class_1_28D410CCE235575F* Field_1_4; // 0x18
	::Class_1_355A2207C3B7A99D_1* Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5516F5B2865E1357__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5516F5B2865E1357* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5516F5B2865E1357*))((::PBYTE)hIl2Cpp + CLASS_1_5516F5B2865E1357__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5516F5B2865E1357__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5516F5B2865E1357*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5516F5B2865E1357*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5516F5B2865E1357_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5516F5B2865E1357_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5516F5B2865E1357* Clone()
	{
		return ((::Class_1_5516F5B2865E1357*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5516F5B2865E1357_CLONE_OFFSET))(this);
	}

	::Class_1_28D410CCE235575F* Method_1_24748FC20F375725()
	{
		return ((::Class_1_28D410CCE235575F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5516F5B2865E1357_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_28D410CCE235575F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_28D410CCE235575F*))((::PBYTE)hIl2Cpp + CLASS_1_5516F5B2865E1357_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_355A2207C3B7A99D_1* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_355A2207C3B7A99D_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5516F5B2865E1357_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_355A2207C3B7A99D_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_1*))((::PBYTE)hIl2Cpp + CLASS_1_5516F5B2865E1357_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5516F5B2865E1357_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5516F5B2865E1357* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5516F5B2865E1357*))((::PBYTE)hIl2Cpp + CLASS_1_5516F5B2865E1357_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5516F5B2865E1357_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5516F5B2865E1357_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5516F5B2865E1357_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5516F5B2865E1357_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5516F5B2865E1357* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5516F5B2865E1357*))((::PBYTE)hIl2Cpp + CLASS_1_5516F5B2865E1357_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5516F5B2865E1357_MERGEFROM_1_OFFSET))(this, a1);
	}
};
