#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_79A623255817C58C_4;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D40936EF3BF54118_36_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A9EC680)
#define CLASS_1_D40936EF3BF54118_36_CLONE_OFFSET UNITYSDK_OFFSET(0x1A9EC270)
#define CLASS_1_D40936EF3BF54118_36_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A9EC3E0)
#define CLASS_1_D40936EF3BF54118_36_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A9EC2D0)
#define CLASS_1_D40936EF3BF54118_36_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A9EC490)
#define CLASS_1_D40936EF3BF54118_36_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A9EC7C0)
#define CLASS_1_D40936EF3BF54118_36_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A9EC720)
#define CLASS_1_D40936EF3BF54118_36_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A9EC100)
#define CLASS_1_D40936EF3BF54118_36_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1A9EC2C0)
#define CLASS_1_D40936EF3BF54118_36_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A9EC160)
#define CLASS_1_D40936EF3BF54118_36_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A9EC570)
#define CLASS_1_D40936EF3BF54118_36_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A9EC5D0)
#define CLASS_1_D40936EF3BF54118_36__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A9EC980)
#define CLASS_1_D40936EF3BF54118_36__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A9EC1C0)
#define CLASS_1_D40936EF3BF54118_36__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9EC170)

inline static constexpr unsigned int Class_1_D40936EF3BF54118_36_TypeDefinitionIndex = 27311;

class Class_1_D40936EF3BF54118_36 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_79A623255817C58C_4*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_79A623255817C58C_4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D40936EF3BF54118_36_TypeDefinitionIndex)->GetStaticField(0x68010);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_36*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_36*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D40936EF3BF54118_36_TypeDefinitionIndex)->GetStaticField(0x68018);
	}
	// static const ::System::Int32 Field_1_2 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_79A623255817C58C_4*>* Field_1_4; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_36__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D40936EF3BF54118_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_36*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_36__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_36__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_36*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D40936EF3BF54118_36*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_36_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_36_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D40936EF3BF54118_36* Clone()
	{
		return ((::Class_1_D40936EF3BF54118_36*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_36_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_79A623255817C58C_4*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_79A623255817C58C_4*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_36_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_36_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D40936EF3BF54118_36* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D40936EF3BF54118_36*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_36_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_36_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_36_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_36_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_36_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D40936EF3BF54118_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_36*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_36_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D40936EF3BF54118_36_MERGEFROM_1_OFFSET))(this, a1);
	}
};
