#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_120319518E6F6581_37;
class Class_1_FA4F4A67B1C04320_362;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_B292FE068586E4C9_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17BC5A90)
#define CLASS_1_B292FE068586E4C9_2_CLONE_OFFSET UNITYSDK_OFFSET(0x17BC55F0)
#define CLASS_1_B292FE068586E4C9_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17BC56C0)
#define CLASS_1_B292FE068586E4C9_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x17BC5660)
#define CLASS_1_B292FE068586E4C9_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17BC57A0)
#define CLASS_1_B292FE068586E4C9_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17BC5C60)
#define CLASS_1_B292FE068586E4C9_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17BC5B70)
#define CLASS_1_B292FE068586E4C9_2_METHOD_1_6E1EC2DF63D7020F_1_OFFSET UNITYSDK_OFFSET(0x17BC5650)
#define CLASS_1_B292FE068586E4C9_2_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17BC5640)
#define CLASS_1_B292FE068586E4C9_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17BC5470)
#define CLASS_1_B292FE068586E4C9_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17BC5940)
#define CLASS_1_B292FE068586E4C9_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x17BC59A0)
#define CLASS_1_B292FE068586E4C9_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x17BC5D90)
#define CLASS_1_B292FE068586E4C9_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17BC54F0)
#define CLASS_1_B292FE068586E4C9_2__CTOR_OFFSET UNITYSDK_OFFSET(0x17BC5480)

inline static constexpr unsigned int Class_1_B292FE068586E4C9_2_TypeDefinitionIndex = 24773;

class Class_1_B292FE068586E4C9_2 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_120319518E6F6581_37*>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_120319518E6F6581_37*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B292FE068586E4C9_2_TypeDefinitionIndex)->GetStaticField(0x34E00);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_362*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_362*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B292FE068586E4C9_2_TypeDefinitionIndex)->GetStaticField(0x34E08);
	}
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xE; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_362*>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_37*>* Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_B292FE068586E4C9_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B292FE068586E4C9_2*))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_2__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_B292FE068586E4C9_2* Clone()
	{
		return ((::Class_1_B292FE068586E4C9_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_2_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_362*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_362*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_2_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_37*>* Method_1_6E1EC2DF63D7020F_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_37*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_2_METHOD_1_6E1EC2DF63D7020F_1_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_B292FE068586E4C9_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B292FE068586E4C9_2*))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_B292FE068586E4C9_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B292FE068586E4C9_2*))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B292FE068586E4C9_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
