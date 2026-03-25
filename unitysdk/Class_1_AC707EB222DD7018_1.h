#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_598;
class Class_1_FA4F4A67B1C04320_599;
class Class_1_FA4F4A67B1C04320_600;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_AC707EB222DD7018_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17C38A70)
#define CLASS_1_AC707EB222DD7018_1_CLONE_OFFSET UNITYSDK_OFFSET(0x17C384F0)
#define CLASS_1_AC707EB222DD7018_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17C38580)
#define CLASS_1_AC707EB222DD7018_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x17C38550)
#define CLASS_1_AC707EB222DD7018_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17C38690)
#define CLASS_1_AC707EB222DD7018_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17C38CD0)
#define CLASS_1_AC707EB222DD7018_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17C38B80)
#define CLASS_1_AC707EB222DD7018_1_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x17C38530)
#define CLASS_1_AC707EB222DD7018_1_METHOD_1_6E1EC2DF63D7020F_2_OFFSET UNITYSDK_OFFSET(0x17C38540)
#define CLASS_1_AC707EB222DD7018_1_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17C38520)
#define CLASS_1_AC707EB222DD7018_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17C38380)
#define CLASS_1_AC707EB222DD7018_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17C388F0)
#define CLASS_1_AC707EB222DD7018_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x17C38950)
#define CLASS_1_AC707EB222DD7018_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x17C38E60)
#define CLASS_1_AC707EB222DD7018_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17C38430)
#define CLASS_1_AC707EB222DD7018_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17C38390)

inline static constexpr unsigned int Class_1_AC707EB222DD7018_1_TypeDefinitionIndex = 25686;

class Class_1_AC707EB222DD7018_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_598*>** StaticGet_Field_1_8()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_598*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AC707EB222DD7018_1_TypeDefinitionIndex)->GetStaticField(0x375A0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_599*>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_599*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AC707EB222DD7018_1_TypeDefinitionIndex)->GetStaticField(0x375A8);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_600*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_600*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AC707EB222DD7018_1_TypeDefinitionIndex)->GetStaticField(0x375B0);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xA; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_598*>* Field_1_9; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_599*>* Field_1_6; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_600*>* Field_1_3; // 0x20
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC707EB222DD7018_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_AC707EB222DD7018_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AC707EB222DD7018_1*))((::PBYTE)hIl2Cpp + CLASS_1_AC707EB222DD7018_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AC707EB222DD7018_1__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC707EB222DD7018_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_AC707EB222DD7018_1* Clone()
	{
		return ((::Class_1_AC707EB222DD7018_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC707EB222DD7018_1_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_600*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_600*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC707EB222DD7018_1_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_599*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_599*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC707EB222DD7018_1_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_598*>* Method_1_6E1EC2DF63D7020F_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_598*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC707EB222DD7018_1_METHOD_1_6E1EC2DF63D7020F_2_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AC707EB222DD7018_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_AC707EB222DD7018_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_AC707EB222DD7018_1*))((::PBYTE)hIl2Cpp + CLASS_1_AC707EB222DD7018_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC707EB222DD7018_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC707EB222DD7018_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_AC707EB222DD7018_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC707EB222DD7018_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_AC707EB222DD7018_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AC707EB222DD7018_1*))((::PBYTE)hIl2Cpp + CLASS_1_AC707EB222DD7018_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_AC707EB222DD7018_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
