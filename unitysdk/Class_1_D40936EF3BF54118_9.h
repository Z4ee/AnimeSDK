#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D40936EF3BF54118_9_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CBD24D0)
#define CLASS_1_D40936EF3BF54118_9_CLONE_OFFSET UNITYSDK_OFFSET(0x1CBD2050)
#define CLASS_1_D40936EF3BF54118_9_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CBD2230)
#define CLASS_1_D40936EF3BF54118_9_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CBD20B0)
#define CLASS_1_D40936EF3BF54118_9_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CBD2350)
#define CLASS_1_D40936EF3BF54118_9_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CBD2610)
#define CLASS_1_D40936EF3BF54118_9_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CBD2570)
#define CLASS_1_D40936EF3BF54118_9_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1CBD1EE0)
#define CLASS_1_D40936EF3BF54118_9_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1CBD20A0)
#define CLASS_1_D40936EF3BF54118_9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CBD1F40)
#define CLASS_1_D40936EF3BF54118_9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CBD23C0)
#define CLASS_1_D40936EF3BF54118_9_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CBD2420)
#define CLASS_1_D40936EF3BF54118_9__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CBD27D0)
#define CLASS_1_D40936EF3BF54118_9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CBD1FA0)
#define CLASS_1_D40936EF3BF54118_9__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBD1F50)

inline static constexpr unsigned int Class_1_D40936EF3BF54118_9_TypeDefinitionIndex = 25195;

class Class_1_D40936EF3BF54118_9 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_9*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D40936EF3BF54118_9_TypeDefinitionIndex)->GetStaticField(0x55200);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_21C7581DFE99F091_2*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_21C7581DFE99F091_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D40936EF3BF54118_9_TypeDefinitionIndex)->GetStaticField(0x55208);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_2*>* Field_1_4; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_9__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D40936EF3BF54118_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_9*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_9__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_9__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_9*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_9*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_9_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D40936EF3BF54118_9* Clone()
	{
		return ((::Class_1_D40936EF3BF54118_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_9_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_2*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_9_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_9_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D40936EF3BF54118_9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D40936EF3BF54118_9*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_9_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_9_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_9_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_9_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_9_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D40936EF3BF54118_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_9*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_9_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_9_MERGEFROM_1_OFFSET))(this, a1);
	}
};
