#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45BB92167AED63A0_8;
class Class_1_4BC858D7C27E10ED_5;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_409DDE73E6219FD7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A24D980)
#define CLASS_1_409DDE73E6219FD7_CLONE_OFFSET UNITYSDK_OFFSET(0x1A24D430)
#define CLASS_1_409DDE73E6219FD7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A24D510)
#define CLASS_1_409DDE73E6219FD7_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A24D4E0)
#define CLASS_1_409DDE73E6219FD7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A24D620)
#define CLASS_1_409DDE73E6219FD7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A24DCA0)
#define CLASS_1_409DDE73E6219FD7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A24DB80)
#define CLASS_1_409DDE73E6219FD7_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A24D4C0)
#define CLASS_1_409DDE73E6219FD7_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A24D470)
#define CLASS_1_409DDE73E6219FD7_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A24D260)
#define CLASS_1_409DDE73E6219FD7_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x1A24D490)
#define CLASS_1_409DDE73E6219FD7_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1A24D460)
#define CLASS_1_409DDE73E6219FD7_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A24D4D0)
#define CLASS_1_409DDE73E6219FD7_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A24D480)
#define CLASS_1_409DDE73E6219FD7_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1A24D4B0)
#define CLASS_1_409DDE73E6219FD7_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A24D4A0)
#define CLASS_1_409DDE73E6219FD7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A24D290)
#define CLASS_1_409DDE73E6219FD7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A24D7A0)
#define CLASS_1_409DDE73E6219FD7_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A24D800)
#define CLASS_1_409DDE73E6219FD7__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A24DE00)
#define CLASS_1_409DDE73E6219FD7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A24D310)
#define CLASS_1_409DDE73E6219FD7__CTOR_OFFSET UNITYSDK_OFFSET(0x1A24D2A0)

inline static constexpr unsigned int Class_1_409DDE73E6219FD7_TypeDefinitionIndex = 26282;

class Class_1_409DDE73E6219FD7 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_409DDE73E6219FD7*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_409DDE73E6219FD7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_409DDE73E6219FD7_TypeDefinitionIndex)->GetStaticField(0x43830);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_45BB92167AED63A0_8*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_45BB92167AED63A0_8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_409DDE73E6219FD7_TypeDefinitionIndex)->GetStaticField(0x43838);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_4BC858D7C27E10ED_5*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_4BC858D7C27E10ED_5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_409DDE73E6219FD7_TypeDefinitionIndex)->GetStaticField(0x43840);
	}
	// static const ::System::Int32 Field_1_3 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x6; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_45BB92167AED63A0_8*>* Field_1_8; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_9; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4BC858D7C27E10ED_5*>* Field_1_10; // 0x20
	::System::UInt32 Field_1_11; // 0x28
	::System::Boolean Field_1_12; // 0x2C
	::System::UInt32 Field_1_13; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_409DDE73E6219FD7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_409DDE73E6219FD7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_409DDE73E6219FD7*))((::PBYTE)hIl2Cpp + CLASS_1_409DDE73E6219FD7__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_409DDE73E6219FD7__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_409DDE73E6219FD7*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_409DDE73E6219FD7*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_409DDE73E6219FD7_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_409DDE73E6219FD7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_409DDE73E6219FD7* Clone()
	{
		return ((::Class_1_409DDE73E6219FD7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_409DDE73E6219FD7_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4BC858D7C27E10ED_5*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4BC858D7C27E10ED_5*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_409DDE73E6219FD7_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_409DDE73E6219FD7_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_409DDE73E6219FD7_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_45BB92167AED63A0_8*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_45BB92167AED63A0_8*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_409DDE73E6219FD7_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_409DDE73E6219FD7_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_409DDE73E6219FD7_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_409DDE73E6219FD7_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_409DDE73E6219FD7_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_409DDE73E6219FD7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_409DDE73E6219FD7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_409DDE73E6219FD7*))((::PBYTE)hIl2Cpp + CLASS_1_409DDE73E6219FD7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_409DDE73E6219FD7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_409DDE73E6219FD7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_409DDE73E6219FD7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_409DDE73E6219FD7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_409DDE73E6219FD7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_409DDE73E6219FD7*))((::PBYTE)hIl2Cpp + CLASS_1_409DDE73E6219FD7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_409DDE73E6219FD7_MERGEFROM_1_OFFSET))(this, a1);
	}
};
