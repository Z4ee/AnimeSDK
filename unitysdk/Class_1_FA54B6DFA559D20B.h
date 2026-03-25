#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class SceneEntityInfo; }
namespace System { class String; }

#define CLASS_1_FA54B6DFA559D20B_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17DB26C0)
#define CLASS_1_FA54B6DFA559D20B_CLONE_OFFSET UNITYSDK_OFFSET(0x17DB2250)
#define CLASS_1_FA54B6DFA559D20B_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17DB2310)
#define CLASS_1_FA54B6DFA559D20B_EQUALS_OFFSET UNITYSDK_OFFSET(0x17DB22E0)
#define CLASS_1_FA54B6DFA559D20B_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17DB2410)
#define CLASS_1_FA54B6DFA559D20B_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17DB2950)
#define CLASS_1_FA54B6DFA559D20B_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17DB2880)
#define CLASS_1_FA54B6DFA559D20B_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17DB22A0)
#define CLASS_1_FA54B6DFA559D20B_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17DB2280)
#define CLASS_1_FA54B6DFA559D20B_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17DB22B0)
#define CLASS_1_FA54B6DFA559D20B_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17DB2290)
#define CLASS_1_FA54B6DFA559D20B_METHOD_1_D7B5771D20F18855_OFFSET UNITYSDK_OFFSET(0x17DB22D0)
#define CLASS_1_FA54B6DFA559D20B_METHOD_1_EE26AC512FD8F4BE_OFFSET UNITYSDK_OFFSET(0x17DB22C0)
#define CLASS_1_FA54B6DFA559D20B_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17DB2100)
#define CLASS_1_FA54B6DFA559D20B_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17DB2530)
#define CLASS_1_FA54B6DFA559D20B_WRITETO_OFFSET UNITYSDK_OFFSET(0x17DB2590)
#define CLASS_1_FA54B6DFA559D20B__CCTOR_OFFSET UNITYSDK_OFFSET(0x17DB2A80)
#define CLASS_1_FA54B6DFA559D20B__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17DB2170)
#define CLASS_1_FA54B6DFA559D20B__CTOR_OFFSET UNITYSDK_OFFSET(0x17DB2110)

inline static constexpr unsigned int Class_1_FA54B6DFA559D20B_TypeDefinitionIndex = 27026;

class Class_1_FA54B6DFA559D20B : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::Int32>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FA54B6DFA559D20B_TypeDefinitionIndex)->GetStaticField(0x18F80);
	}
	static ::Google::Protobuf::FieldCodec_1<::Proto::SceneEntityInfo*>** StaticGet_Field_1_9()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::SceneEntityInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FA54B6DFA559D20B_TypeDefinitionIndex)->GetStaticField(0x18F88);
	}
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_8 = 0xD; // 0x0
	::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>* Field_1_7; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::SceneEntityInfo*>* Field_1_10; // 0x20
	::System::UInt32 Field_1_4; // 0x28
	::System::UInt32 Field_1_2; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA54B6DFA559D20B__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FA54B6DFA559D20B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA54B6DFA559D20B*))((::PBYTE)hIl2Cpp + CLASS_1_FA54B6DFA559D20B__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FA54B6DFA559D20B__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA54B6DFA559D20B_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FA54B6DFA559D20B* Clone()
	{
		return ((::Class_1_FA54B6DFA559D20B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA54B6DFA559D20B_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA54B6DFA559D20B_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA54B6DFA559D20B_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA54B6DFA559D20B_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FA54B6DFA559D20B_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>* Method_1_EE26AC512FD8F4BE()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA54B6DFA559D20B_METHOD_1_EE26AC512FD8F4BE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::SceneEntityInfo*>* Method_1_D7B5771D20F18855()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::SceneEntityInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA54B6DFA559D20B_METHOD_1_D7B5771D20F18855_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FA54B6DFA559D20B_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FA54B6DFA559D20B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FA54B6DFA559D20B*))((::PBYTE)hIl2Cpp + CLASS_1_FA54B6DFA559D20B_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA54B6DFA559D20B_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA54B6DFA559D20B_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA54B6DFA559D20B_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA54B6DFA559D20B_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FA54B6DFA559D20B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA54B6DFA559D20B*))((::PBYTE)hIl2Cpp + CLASS_1_FA54B6DFA559D20B_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FA54B6DFA559D20B_MERGEFROM_1_OFFSET))(this, a1);
	}
};
