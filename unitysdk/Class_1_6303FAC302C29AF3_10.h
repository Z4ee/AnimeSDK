#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43D95BDB5AB51D37_2;
class Class_1_FA4F4A67B1C04320_186;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_6303FAC302C29AF3_10_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18271530)
#define CLASS_1_6303FAC302C29AF3_10_CLONE_OFFSET UNITYSDK_OFFSET(0x18271060)
#define CLASS_1_6303FAC302C29AF3_10_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18271100)
#define CLASS_1_6303FAC302C29AF3_10_EQUALS_OFFSET UNITYSDK_OFFSET(0x182710D0)
#define CLASS_1_6303FAC302C29AF3_10_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x182711F0)
#define CLASS_1_6303FAC302C29AF3_10_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x182717B0)
#define CLASS_1_6303FAC302C29AF3_10_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x182716B0)
#define CLASS_1_6303FAC302C29AF3_10_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x182710A0)
#define CLASS_1_6303FAC302C29AF3_10_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x182710C0)
#define CLASS_1_6303FAC302C29AF3_10_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x18271090)
#define CLASS_1_6303FAC302C29AF3_10_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x182710B0)
#define CLASS_1_6303FAC302C29AF3_10_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18270F10)
#define CLASS_1_6303FAC302C29AF3_10_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18271390)
#define CLASS_1_6303FAC302C29AF3_10_WRITETO_OFFSET UNITYSDK_OFFSET(0x182713F0)
#define CLASS_1_6303FAC302C29AF3_10__CCTOR_OFFSET UNITYSDK_OFFSET(0x182718C0)
#define CLASS_1_6303FAC302C29AF3_10__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18270F80)
#define CLASS_1_6303FAC302C29AF3_10__CTOR_OFFSET UNITYSDK_OFFSET(0x18270F20)

inline static constexpr unsigned int Class_1_6303FAC302C29AF3_10_TypeDefinitionIndex = 26905;

class Class_1_6303FAC302C29AF3_10 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_186*>** StaticGet_Field_1_7()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_186*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6303FAC302C29AF3_10_TypeDefinitionIndex)->GetStaticField(0x19100);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_43D95BDB5AB51D37_2*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_43D95BDB5AB51D37_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6303FAC302C29AF3_10_TypeDefinitionIndex)->GetStaticField(0x19108);
	}
	// static const ::System::Int32 Field_1_1 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xF; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_186*>* Field_1_8; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_43D95BDB5AB51D37_2*>* Field_1_3; // 0x20
	::System::UInt32 Field_1_5; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6303FAC302C29AF3_10__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6303FAC302C29AF3_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6303FAC302C29AF3_10*))((::PBYTE)hIl2Cpp + CLASS_1_6303FAC302C29AF3_10__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6303FAC302C29AF3_10__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6303FAC302C29AF3_10_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6303FAC302C29AF3_10* Clone()
	{
		return ((::Class_1_6303FAC302C29AF3_10*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6303FAC302C29AF3_10_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_43D95BDB5AB51D37_2*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_43D95BDB5AB51D37_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6303FAC302C29AF3_10_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6303FAC302C29AF3_10_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6303FAC302C29AF3_10_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_186*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_186*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6303FAC302C29AF3_10_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6303FAC302C29AF3_10_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6303FAC302C29AF3_10* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6303FAC302C29AF3_10*))((::PBYTE)hIl2Cpp + CLASS_1_6303FAC302C29AF3_10_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6303FAC302C29AF3_10_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6303FAC302C29AF3_10_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6303FAC302C29AF3_10_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6303FAC302C29AF3_10_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6303FAC302C29AF3_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6303FAC302C29AF3_10*))((::PBYTE)hIl2Cpp + CLASS_1_6303FAC302C29AF3_10_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6303FAC302C29AF3_10_MERGEFROM_1_OFFSET))(this, a1);
	}
};
