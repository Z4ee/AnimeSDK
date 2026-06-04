#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45BB92167AED63A0_101;
class Class_1_963E317C37FB5E9A_83;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_22B4C7CF09D1BAC1_9_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A5F1620)
#define CLASS_1_22B4C7CF09D1BAC1_9_CLONE_OFFSET UNITYSDK_OFFSET(0x1A5F1150)
#define CLASS_1_22B4C7CF09D1BAC1_9_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A5F1240)
#define CLASS_1_22B4C7CF09D1BAC1_9_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A5F11E0)
#define CLASS_1_22B4C7CF09D1BAC1_9_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A5F1330)
#define CLASS_1_22B4C7CF09D1BAC1_9_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A5F1860)
#define CLASS_1_22B4C7CF09D1BAC1_9_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A5F1760)
#define CLASS_1_22B4C7CF09D1BAC1_9_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A5F11A0)
#define CLASS_1_22B4C7CF09D1BAC1_9_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A5F0F60)
#define CLASS_1_22B4C7CF09D1BAC1_9_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x1A5F11D0)
#define CLASS_1_22B4C7CF09D1BAC1_9_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1A5F11C0)
#define CLASS_1_22B4C7CF09D1BAC1_9_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A5F11B0)
#define CLASS_1_22B4C7CF09D1BAC1_9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A5F0FC0)
#define CLASS_1_22B4C7CF09D1BAC1_9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A5F14B0)
#define CLASS_1_22B4C7CF09D1BAC1_9_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A5F1510)
#define CLASS_1_22B4C7CF09D1BAC1_9__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A5F1A80)
#define CLASS_1_22B4C7CF09D1BAC1_9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A5F1040)
#define CLASS_1_22B4C7CF09D1BAC1_9__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5F0FD0)

inline static constexpr unsigned int Class_1_22B4C7CF09D1BAC1_9_TypeDefinitionIndex = 32947;

class Class_1_22B4C7CF09D1BAC1_9 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_45BB92167AED63A0_101*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_45BB92167AED63A0_101*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_22B4C7CF09D1BAC1_9_TypeDefinitionIndex)->GetStaticField(0x1B290);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_963E317C37FB5E9A_83*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_963E317C37FB5E9A_83*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_22B4C7CF09D1BAC1_9_TypeDefinitionIndex)->GetStaticField(0x1B298);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_22B4C7CF09D1BAC1_9*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_22B4C7CF09D1BAC1_9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_22B4C7CF09D1BAC1_9_TypeDefinitionIndex)->GetStaticField(0x1B2A0);
	}
	// static const ::System::Int32 Field_1_3 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x2; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_963E317C37FB5E9A_83*>* Field_1_6; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_45BB92167AED63A0_101*>* Field_1_7; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_8; // 0x20
	::System::UInt32 Field_1_9; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22B4C7CF09D1BAC1_9__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_22B4C7CF09D1BAC1_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_22B4C7CF09D1BAC1_9*))((::PBYTE)hIl2Cpp + CLASS_1_22B4C7CF09D1BAC1_9__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_22B4C7CF09D1BAC1_9__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_22B4C7CF09D1BAC1_9*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_22B4C7CF09D1BAC1_9*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_22B4C7CF09D1BAC1_9_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22B4C7CF09D1BAC1_9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_22B4C7CF09D1BAC1_9* Clone()
	{
		return ((::Class_1_22B4C7CF09D1BAC1_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22B4C7CF09D1BAC1_9_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22B4C7CF09D1BAC1_9_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_22B4C7CF09D1BAC1_9_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_45BB92167AED63A0_101*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_45BB92167AED63A0_101*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22B4C7CF09D1BAC1_9_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_963E317C37FB5E9A_83*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_963E317C37FB5E9A_83*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22B4C7CF09D1BAC1_9_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_22B4C7CF09D1BAC1_9_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_22B4C7CF09D1BAC1_9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_22B4C7CF09D1BAC1_9*))((::PBYTE)hIl2Cpp + CLASS_1_22B4C7CF09D1BAC1_9_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22B4C7CF09D1BAC1_9_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22B4C7CF09D1BAC1_9_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_22B4C7CF09D1BAC1_9_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22B4C7CF09D1BAC1_9_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_22B4C7CF09D1BAC1_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_22B4C7CF09D1BAC1_9*))((::PBYTE)hIl2Cpp + CLASS_1_22B4C7CF09D1BAC1_9_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_22B4C7CF09D1BAC1_9_MERGEFROM_1_OFFSET))(this, a1);
	}
};
