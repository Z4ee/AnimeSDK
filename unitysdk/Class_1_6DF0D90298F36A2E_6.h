#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2AF2F5628A9B57FA_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_6DF0D90298F36A2E_6_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x182207B0)
#define CLASS_1_6DF0D90298F36A2E_6_CLONE_OFFSET UNITYSDK_OFFSET(0x182202A0)
#define CLASS_1_6DF0D90298F36A2E_6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18220340)
#define CLASS_1_6DF0D90298F36A2E_6_EQUALS_OFFSET UNITYSDK_OFFSET(0x18220310)
#define CLASS_1_6DF0D90298F36A2E_6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18220430)
#define CLASS_1_6DF0D90298F36A2E_6_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x182209E0)
#define CLASS_1_6DF0D90298F36A2E_6_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18220920)
#define CLASS_1_6DF0D90298F36A2E_6_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x182202E0)
#define CLASS_1_6DF0D90298F36A2E_6_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x18220300)
#define CLASS_1_6DF0D90298F36A2E_6_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x182202D0)
#define CLASS_1_6DF0D90298F36A2E_6_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x182202F0)
#define CLASS_1_6DF0D90298F36A2E_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18220130)
#define CLASS_1_6DF0D90298F36A2E_6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18220610)
#define CLASS_1_6DF0D90298F36A2E_6_WRITETO_OFFSET UNITYSDK_OFFSET(0x18220670)
#define CLASS_1_6DF0D90298F36A2E_6__CCTOR_OFFSET UNITYSDK_OFFSET(0x18220B00)
#define CLASS_1_6DF0D90298F36A2E_6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x182201B0)
#define CLASS_1_6DF0D90298F36A2E_6__CTOR_OFFSET UNITYSDK_OFFSET(0x18220140)

inline static constexpr unsigned int Class_1_6DF0D90298F36A2E_6_TypeDefinitionIndex = 27492;

class Class_1_6DF0D90298F36A2E_6 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_2AF2F5628A9B57FA_1*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_2AF2F5628A9B57FA_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DF0D90298F36A2E_6_TypeDefinitionIndex)->GetStaticField(0x13FA0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_7()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DF0D90298F36A2E_6_TypeDefinitionIndex)->GetStaticField(0x13FA8);
	}
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x2; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_8; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2AF2F5628A9B57FA_1*>* Field_1_3; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::System::UInt32 Field_1_5; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DF0D90298F36A2E_6__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6DF0D90298F36A2E_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6DF0D90298F36A2E_6*))((::PBYTE)hIl2Cpp + CLASS_1_6DF0D90298F36A2E_6__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DF0D90298F36A2E_6__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DF0D90298F36A2E_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6DF0D90298F36A2E_6* Clone()
	{
		return ((::Class_1_6DF0D90298F36A2E_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DF0D90298F36A2E_6_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2AF2F5628A9B57FA_1*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_2AF2F5628A9B57FA_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DF0D90298F36A2E_6_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DF0D90298F36A2E_6_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6DF0D90298F36A2E_6_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DF0D90298F36A2E_6_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6DF0D90298F36A2E_6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6DF0D90298F36A2E_6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6DF0D90298F36A2E_6*))((::PBYTE)hIl2Cpp + CLASS_1_6DF0D90298F36A2E_6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DF0D90298F36A2E_6_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DF0D90298F36A2E_6_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6DF0D90298F36A2E_6_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DF0D90298F36A2E_6_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6DF0D90298F36A2E_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6DF0D90298F36A2E_6*))((::PBYTE)hIl2Cpp + CLASS_1_6DF0D90298F36A2E_6_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6DF0D90298F36A2E_6_MERGEFROM_1_OFFSET))(this, a1);
	}
};
