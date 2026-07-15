#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_49213828B4BC8F63;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D40936EF3BF54118_27_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CC86EA0)
#define CLASS_1_D40936EF3BF54118_27_CLONE_OFFSET UNITYSDK_OFFSET(0x1CC86A20)
#define CLASS_1_D40936EF3BF54118_27_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CC86C00)
#define CLASS_1_D40936EF3BF54118_27_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CC86A80)
#define CLASS_1_D40936EF3BF54118_27_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CC86D20)
#define CLASS_1_D40936EF3BF54118_27_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CC86FE0)
#define CLASS_1_D40936EF3BF54118_27_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CC86F40)
#define CLASS_1_D40936EF3BF54118_27_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1CC868B0)
#define CLASS_1_D40936EF3BF54118_27_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1CC86A70)
#define CLASS_1_D40936EF3BF54118_27_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CC86910)
#define CLASS_1_D40936EF3BF54118_27_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CC86D90)
#define CLASS_1_D40936EF3BF54118_27_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CC86DF0)
#define CLASS_1_D40936EF3BF54118_27__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC871A0)
#define CLASS_1_D40936EF3BF54118_27__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CC86970)
#define CLASS_1_D40936EF3BF54118_27__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC86920)

inline static constexpr unsigned int Class_1_D40936EF3BF54118_27_TypeDefinitionIndex = 27382;

class Class_1_D40936EF3BF54118_27 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_49213828B4BC8F63*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_49213828B4BC8F63*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D40936EF3BF54118_27_TypeDefinitionIndex)->GetStaticField(0x5DFB0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_27*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_27*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D40936EF3BF54118_27_TypeDefinitionIndex)->GetStaticField(0x5DFB8);
	}
	// static const ::System::Int32 Field_1_2 = 0x6; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_49213828B4BC8F63*>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_27__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D40936EF3BF54118_27* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_27*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_27__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_27__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_27*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_27*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_27_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_27_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D40936EF3BF54118_27* Clone()
	{
		return ((::Class_1_D40936EF3BF54118_27*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_27_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_49213828B4BC8F63*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_49213828B4BC8F63*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_27_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_27_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D40936EF3BF54118_27* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D40936EF3BF54118_27*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_27_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_27_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_27_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_27_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_27_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D40936EF3BF54118_27* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_27*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_27_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_27_MERGEFROM_1_OFFSET))(this, a1);
	}
};
