#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4BC858D7C27E10ED_40;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D40936EF3BF54118_56_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1AA0E190)
#define CLASS_1_D40936EF3BF54118_56_CLONE_OFFSET UNITYSDK_OFFSET(0x1AA0DD80)
#define CLASS_1_D40936EF3BF54118_56_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1AA0DEF0)
#define CLASS_1_D40936EF3BF54118_56_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AA0DDE0)
#define CLASS_1_D40936EF3BF54118_56_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AA0DFA0)
#define CLASS_1_D40936EF3BF54118_56_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1AA0E2D0)
#define CLASS_1_D40936EF3BF54118_56_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1AA0E230)
#define CLASS_1_D40936EF3BF54118_56_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1AA0DC10)
#define CLASS_1_D40936EF3BF54118_56_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1AA0DDD0)
#define CLASS_1_D40936EF3BF54118_56_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1AA0DC70)
#define CLASS_1_D40936EF3BF54118_56_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AA0E080)
#define CLASS_1_D40936EF3BF54118_56_WRITETO_OFFSET UNITYSDK_OFFSET(0x1AA0E0E0)
#define CLASS_1_D40936EF3BF54118_56__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AA0E490)
#define CLASS_1_D40936EF3BF54118_56__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AA0DCD0)
#define CLASS_1_D40936EF3BF54118_56__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA0DC80)

inline static constexpr unsigned int Class_1_D40936EF3BF54118_56_TypeDefinitionIndex = 28974;

class Class_1_D40936EF3BF54118_56 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_56*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_56*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D40936EF3BF54118_56_TypeDefinitionIndex)->GetStaticField(0x30D0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_4BC858D7C27E10ED_40*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_4BC858D7C27E10ED_40*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D40936EF3BF54118_56_TypeDefinitionIndex)->GetStaticField(0x30D8);
	}
	// static const ::System::Int32 Field_1_2 = 0xD; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4BC858D7C27E10ED_40*>* Field_1_4; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_56__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D40936EF3BF54118_56* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_56*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_56__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_56__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_56*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_56*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_56_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_56_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D40936EF3BF54118_56* Clone()
	{
		return ((::Class_1_D40936EF3BF54118_56*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_56_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4BC858D7C27E10ED_40*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4BC858D7C27E10ED_40*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_56_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_56_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D40936EF3BF54118_56* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D40936EF3BF54118_56*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_56_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_56_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_56_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_56_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_56_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D40936EF3BF54118_56* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_56*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_56_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_56_MERGEFROM_1_OFFSET))(this, a1);
	}
};
