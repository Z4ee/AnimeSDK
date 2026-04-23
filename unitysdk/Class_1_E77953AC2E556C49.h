#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_13.h"
#include "unitysdk/System/Object.h"

class Class_1_C9DFE5EE7107C629_12;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_E77953AC2E556C49_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19BCF5C0)
#define CLASS_1_E77953AC2E556C49_CLONE_OFFSET UNITYSDK_OFFSET(0x19BCF1E0)
#define CLASS_1_E77953AC2E556C49_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19BCF3D0)
#define CLASS_1_E77953AC2E556C49_EQUALS_OFFSET UNITYSDK_OFFSET(0x19BCF2F0)
#define CLASS_1_E77953AC2E556C49_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19BCF480)
#define CLASS_1_E77953AC2E556C49_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19BCF770)
#define CLASS_1_E77953AC2E556C49_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19BCF6D0)
#define CLASS_1_E77953AC2E556C49_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x19BCF2B0)
#define CLASS_1_E77953AC2E556C49_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19BCF0D0)
#define CLASS_1_E77953AC2E556C49_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x19BCF2E0)
#define CLASS_1_E77953AC2E556C49_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x19BCF2C0)
#define CLASS_1_E77953AC2E556C49_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x19BCF2D0)
#define CLASS_1_E77953AC2E556C49_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19BCF130)
#define CLASS_1_E77953AC2E556C49_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19BCF4D0)
#define CLASS_1_E77953AC2E556C49_WRITETO_OFFSET UNITYSDK_OFFSET(0x19BCF530)
#define CLASS_1_E77953AC2E556C49__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BCF830)
#define CLASS_1_E77953AC2E556C49__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19BCF150)
#define CLASS_1_E77953AC2E556C49__CTOR_OFFSET UNITYSDK_OFFSET(0x19BCF140)

inline static constexpr unsigned int Class_1_E77953AC2E556C49_TypeDefinitionIndex = 27043;

class Class_1_E77953AC2E556C49 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_E77953AC2E556C49*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_E77953AC2E556C49*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E77953AC2E556C49_TypeDefinitionIndex)->GetStaticField(0x40290);
	}
	// static const ::System::Int32 Field_1_2 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x4; // 0x0
	::Class_1_C9DFE5EE7107C629_12* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::Enum_3_96F6662CA3713095_13 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E77953AC2E556C49__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_E77953AC2E556C49* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E77953AC2E556C49*))((::PBYTE)hIl2Cpp + CLASS_1_E77953AC2E556C49__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E77953AC2E556C49__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_E77953AC2E556C49*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_E77953AC2E556C49*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E77953AC2E556C49_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E77953AC2E556C49_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_E77953AC2E556C49* Clone()
	{
		return ((::Class_1_E77953AC2E556C49*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E77953AC2E556C49_CLONE_OFFSET))(this);
	}

	::Class_1_C9DFE5EE7107C629_12* Method_1_24748FC20F375725()
	{
		return ((::Class_1_C9DFE5EE7107C629_12*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E77953AC2E556C49_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_C9DFE5EE7107C629_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_12*))((::PBYTE)hIl2Cpp + CLASS_1_E77953AC2E556C49_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Enum_3_96F6662CA3713095_13 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_96F6662CA3713095_13(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E77953AC2E556C49_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_96F6662CA3713095_13 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_96F6662CA3713095_13))((::PBYTE)hIl2Cpp + CLASS_1_E77953AC2E556C49_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E77953AC2E556C49_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E77953AC2E556C49* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E77953AC2E556C49*))((::PBYTE)hIl2Cpp + CLASS_1_E77953AC2E556C49_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E77953AC2E556C49_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E77953AC2E556C49_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E77953AC2E556C49_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E77953AC2E556C49_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_E77953AC2E556C49* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E77953AC2E556C49*))((::PBYTE)hIl2Cpp + CLASS_1_E77953AC2E556C49_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E77953AC2E556C49_MERGEFROM_1_OFFSET))(this, a1);
	}
};
