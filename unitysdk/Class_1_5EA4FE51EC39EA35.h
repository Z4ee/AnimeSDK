#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6E708EAB438EC183_9;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5EA4FE51EC39EA35_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17F9E5C0)
#define CLASS_1_5EA4FE51EC39EA35_CLONE_OFFSET UNITYSDK_OFFSET(0x17F9DFA0)
#define CLASS_1_5EA4FE51EC39EA35_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17F9E0D0)
#define CLASS_1_5EA4FE51EC39EA35_EQUALS_OFFSET UNITYSDK_OFFSET(0x17F9E070)
#define CLASS_1_5EA4FE51EC39EA35_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17F9E1D0)
#define CLASS_1_5EA4FE51EC39EA35_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17F9E8F0)
#define CLASS_1_5EA4FE51EC39EA35_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17F9E810)
#define CLASS_1_5EA4FE51EC39EA35_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17F9E010)
#define CLASS_1_5EA4FE51EC39EA35_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x17F9E040)
#define CLASS_1_5EA4FE51EC39EA35_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17F9DFF0)
#define CLASS_1_5EA4FE51EC39EA35_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17F9E060)
#define CLASS_1_5EA4FE51EC39EA35_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17F9E030)
#define CLASS_1_5EA4FE51EC39EA35_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17F9E020)
#define CLASS_1_5EA4FE51EC39EA35_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x17F9E050)
#define CLASS_1_5EA4FE51EC39EA35_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17F9E000)
#define CLASS_1_5EA4FE51EC39EA35_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17F9DE20)
#define CLASS_1_5EA4FE51EC39EA35_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17F9E3D0)
#define CLASS_1_5EA4FE51EC39EA35_WRITETO_OFFSET UNITYSDK_OFFSET(0x17F9E430)
#define CLASS_1_5EA4FE51EC39EA35__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F9EA60)
#define CLASS_1_5EA4FE51EC39EA35__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17F9DEA0)
#define CLASS_1_5EA4FE51EC39EA35__CTOR_OFFSET UNITYSDK_OFFSET(0x17F9DE30)

inline static constexpr unsigned int Class_1_5EA4FE51EC39EA35_TypeDefinitionIndex = 23308;

class Class_1_5EA4FE51EC39EA35 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_6E708EAB438EC183_9*>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_6E708EAB438EC183_9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5EA4FE51EC39EA35_TypeDefinitionIndex)->GetStaticField(0x35750);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_11()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5EA4FE51EC39EA35_TypeDefinitionIndex)->GetStaticField(0x35758);
	}
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_8 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_10 = 0xC; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_6E708EAB438EC183_9*>* Field_1_7; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_12; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::System::UInt32 Field_1_9; // 0x28
	::System::UInt32 Field_1_4; // 0x2C
	::System::UInt32 Field_1_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EA4FE51EC39EA35__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5EA4FE51EC39EA35* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5EA4FE51EC39EA35*))((::PBYTE)hIl2Cpp + CLASS_1_5EA4FE51EC39EA35__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5EA4FE51EC39EA35__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EA4FE51EC39EA35_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5EA4FE51EC39EA35* Clone()
	{
		return ((::Class_1_5EA4FE51EC39EA35*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EA4FE51EC39EA35_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EA4FE51EC39EA35_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5EA4FE51EC39EA35_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EA4FE51EC39EA35_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5EA4FE51EC39EA35_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_6E708EAB438EC183_9*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_6E708EAB438EC183_9*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EA4FE51EC39EA35_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EA4FE51EC39EA35_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5EA4FE51EC39EA35_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EA4FE51EC39EA35_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5EA4FE51EC39EA35_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5EA4FE51EC39EA35* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5EA4FE51EC39EA35*))((::PBYTE)hIl2Cpp + CLASS_1_5EA4FE51EC39EA35_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EA4FE51EC39EA35_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EA4FE51EC39EA35_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5EA4FE51EC39EA35_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EA4FE51EC39EA35_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5EA4FE51EC39EA35* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5EA4FE51EC39EA35*))((::PBYTE)hIl2Cpp + CLASS_1_5EA4FE51EC39EA35_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5EA4FE51EC39EA35_MERGEFROM_1_OFFSET))(this, a1);
	}
};
