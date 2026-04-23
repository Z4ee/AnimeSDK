#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6FC4D75D938BC053_19;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_9BA36423EA524C40_15_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x197CC440)
#define CLASS_1_9BA36423EA524C40_15_CLONE_OFFSET UNITYSDK_OFFSET(0x197CC0D0)
#define CLASS_1_9BA36423EA524C40_15_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x197CC290)
#define CLASS_1_9BA36423EA524C40_15_EQUALS_OFFSET UNITYSDK_OFFSET(0x197CC1C0)
#define CLASS_1_9BA36423EA524C40_15_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x197CC330)
#define CLASS_1_9BA36423EA524C40_15_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x197CC5A0)
#define CLASS_1_9BA36423EA524C40_15_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x197CC4A0)
#define CLASS_1_9BA36423EA524C40_15_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x197CC1A0)
#define CLASS_1_9BA36423EA524C40_15_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x197CBFC0)
#define CLASS_1_9BA36423EA524C40_15_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x197CC1B0)
#define CLASS_1_9BA36423EA524C40_15_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x197CC020)
#define CLASS_1_9BA36423EA524C40_15_TOSTRING_OFFSET UNITYSDK_OFFSET(0x197CC380)
#define CLASS_1_9BA36423EA524C40_15_WRITETO_OFFSET UNITYSDK_OFFSET(0x197CC3E0)
#define CLASS_1_9BA36423EA524C40_15__CCTOR_OFFSET UNITYSDK_OFFSET(0x197CC6B0)
#define CLASS_1_9BA36423EA524C40_15__CTOR_1_OFFSET UNITYSDK_OFFSET(0x197CC040)
#define CLASS_1_9BA36423EA524C40_15__CTOR_OFFSET UNITYSDK_OFFSET(0x197CC030)

inline static constexpr unsigned int Class_1_9BA36423EA524C40_15_TypeDefinitionIndex = 32878;

class Class_1_9BA36423EA524C40_15 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_9BA36423EA524C40_15*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_9BA36423EA524C40_15*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9BA36423EA524C40_15_TypeDefinitionIndex)->GetStaticField(0x61640);
	}
	// static const ::System::Int32 Field_1_2 = 0x8; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Class_1_6FC4D75D938BC053_19* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_15__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_9BA36423EA524C40_15* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9BA36423EA524C40_15*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_15__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_15__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_9BA36423EA524C40_15*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_9BA36423EA524C40_15*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_15_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_15_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_9BA36423EA524C40_15* Clone()
	{
		return ((::Class_1_9BA36423EA524C40_15*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_15_CLONE_OFFSET))(this);
	}

	::Class_1_6FC4D75D938BC053_19* Method_1_24748FC20F375725()
	{
		return ((::Class_1_6FC4D75D938BC053_19*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_15_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_6FC4D75D938BC053_19* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6FC4D75D938BC053_19*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_15_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_15_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_9BA36423EA524C40_15* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9BA36423EA524C40_15*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_15_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_15_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_15_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_15_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_15_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_9BA36423EA524C40_15* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9BA36423EA524C40_15*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_15_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9BA36423EA524C40_15_MERGEFROM_1_OFFSET))(this, a1);
	}
};
