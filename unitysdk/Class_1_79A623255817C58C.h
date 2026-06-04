#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_12;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_79A623255817C58C_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A09D5C0)
#define CLASS_1_79A623255817C58C_CLONE_OFFSET UNITYSDK_OFFSET(0x1A09D0B0)
#define CLASS_1_79A623255817C58C_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A09D1A0)
#define CLASS_1_79A623255817C58C_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A09D140)
#define CLASS_1_79A623255817C58C_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A09D290)
#define CLASS_1_79A623255817C58C_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A09D7F0)
#define CLASS_1_79A623255817C58C_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A09D730)
#define CLASS_1_79A623255817C58C_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A09D110)
#define CLASS_1_79A623255817C58C_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A09CE80)
#define CLASS_1_79A623255817C58C_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1A09D130)
#define CLASS_1_79A623255817C58C_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1A09D100)
#define CLASS_1_79A623255817C58C_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A09D120)
#define CLASS_1_79A623255817C58C_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A09CEE0)
#define CLASS_1_79A623255817C58C_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A09D450)
#define CLASS_1_79A623255817C58C_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A09D4B0)
#define CLASS_1_79A623255817C58C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A09D940)
#define CLASS_1_79A623255817C58C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A09CF80)
#define CLASS_1_79A623255817C58C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A09CEF0)

inline static constexpr unsigned int Class_1_79A623255817C58C_TypeDefinitionIndex = 25049;

class Class_1_79A623255817C58C : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_79A623255817C58C_TypeDefinitionIndex)->GetStaticField(0x366C0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_79A623255817C58C*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_79A623255817C58C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_79A623255817C58C_TypeDefinitionIndex)->GetStaticField(0x366C8);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_1CBA230307F9C289_12*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_1CBA230307F9C289_12*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_79A623255817C58C_TypeDefinitionIndex)->GetStaticField(0x366D0);
	}
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x8; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_6; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_12*>* Field_1_7; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_8; // 0x20
	::System::UInt32 Field_1_9; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79A623255817C58C__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_79A623255817C58C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_79A623255817C58C*))((::PBYTE)hIl2Cpp + CLASS_1_79A623255817C58C__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_79A623255817C58C__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_79A623255817C58C*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_79A623255817C58C*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_79A623255817C58C_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79A623255817C58C_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_79A623255817C58C* Clone()
	{
		return ((::Class_1_79A623255817C58C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79A623255817C58C_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_12*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_12*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79A623255817C58C_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79A623255817C58C_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_79A623255817C58C_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79A623255817C58C_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_79A623255817C58C_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_79A623255817C58C* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_79A623255817C58C*))((::PBYTE)hIl2Cpp + CLASS_1_79A623255817C58C_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79A623255817C58C_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79A623255817C58C_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_79A623255817C58C_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79A623255817C58C_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_79A623255817C58C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_79A623255817C58C*))((::PBYTE)hIl2Cpp + CLASS_1_79A623255817C58C_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_79A623255817C58C_MERGEFROM_1_OFFSET))(this, a1);
	}
};
