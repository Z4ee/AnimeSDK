#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9F9C2AEAEFFE3610_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D40936EF3BF54118_15_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1AB241B0)
#define CLASS_1_D40936EF3BF54118_15_CLONE_OFFSET UNITYSDK_OFFSET(0x1AB23DA0)
#define CLASS_1_D40936EF3BF54118_15_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1AB23F10)
#define CLASS_1_D40936EF3BF54118_15_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AB23E00)
#define CLASS_1_D40936EF3BF54118_15_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AB23FC0)
#define CLASS_1_D40936EF3BF54118_15_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1AB242F0)
#define CLASS_1_D40936EF3BF54118_15_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1AB24250)
#define CLASS_1_D40936EF3BF54118_15_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1AB23C30)
#define CLASS_1_D40936EF3BF54118_15_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1AB23DF0)
#define CLASS_1_D40936EF3BF54118_15_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1AB23C90)
#define CLASS_1_D40936EF3BF54118_15_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AB240A0)
#define CLASS_1_D40936EF3BF54118_15_WRITETO_OFFSET UNITYSDK_OFFSET(0x1AB24100)
#define CLASS_1_D40936EF3BF54118_15__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AB244B0)
#define CLASS_1_D40936EF3BF54118_15__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AB23CF0)
#define CLASS_1_D40936EF3BF54118_15__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB23CA0)

inline static constexpr unsigned int Class_1_D40936EF3BF54118_15_TypeDefinitionIndex = 26093;

class Class_1_D40936EF3BF54118_15 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_9F9C2AEAEFFE3610_2*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_9F9C2AEAEFFE3610_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D40936EF3BF54118_15_TypeDefinitionIndex)->GetStaticField(0x173C0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_15*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_15*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D40936EF3BF54118_15_TypeDefinitionIndex)->GetStaticField(0x173C8);
	}
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_9F9C2AEAEFFE3610_2*>* Field_1_4; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_15__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D40936EF3BF54118_15* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_15*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_15__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_15__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_15*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_15*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_15_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_15_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D40936EF3BF54118_15* Clone()
	{
		return ((::Class_1_D40936EF3BF54118_15*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_15_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_9F9C2AEAEFFE3610_2*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_9F9C2AEAEFFE3610_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_15_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_15_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D40936EF3BF54118_15* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D40936EF3BF54118_15*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_15_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_15_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_15_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_15_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_15_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D40936EF3BF54118_15* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_15*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_15_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_15_MERGEFROM_1_OFFSET))(this, a1);
	}
};
