#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_69F06BA11FF28429_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_070964BB68D18B9F_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E4EDB0)
#define CLASS_1_070964BB68D18B9F_1_CLONE_OFFSET UNITYSDK_OFFSET(0x17E4E6C0)
#define CLASS_1_070964BB68D18B9F_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E4E7B0)
#define CLASS_1_070964BB68D18B9F_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E4E780)
#define CLASS_1_070964BB68D18B9F_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E4E8E0)
#define CLASS_1_070964BB68D18B9F_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E4F160)
#define CLASS_1_070964BB68D18B9F_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E4F060)
#define CLASS_1_070964BB68D18B9F_1_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17E4E730)
#define CLASS_1_070964BB68D18B9F_1_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x17E4E760)
#define CLASS_1_070964BB68D18B9F_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17E4E6F0)
#define CLASS_1_070964BB68D18B9F_1_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x17E4E750)
#define CLASS_1_070964BB68D18B9F_1_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17E4E720)
#define CLASS_1_070964BB68D18B9F_1_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17E4E710)
#define CLASS_1_070964BB68D18B9F_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17E4E740)
#define CLASS_1_070964BB68D18B9F_1_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x17E4E770)
#define CLASS_1_070964BB68D18B9F_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17E4E700)
#define CLASS_1_070964BB68D18B9F_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E4E490)
#define CLASS_1_070964BB68D18B9F_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E4EBA0)
#define CLASS_1_070964BB68D18B9F_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E4EC00)
#define CLASS_1_070964BB68D18B9F_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E4F320)
#define CLASS_1_070964BB68D18B9F_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E4E550)
#define CLASS_1_070964BB68D18B9F_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17E4E4A0)

inline static constexpr unsigned int Class_1_070964BB68D18B9F_1_TypeDefinitionIndex = 26861;

class Class_1_070964BB68D18B9F_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_7()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_070964BB68D18B9F_1_TypeDefinitionIndex)->GetStaticField(0x23E10);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_69F06BA11FF28429_2*>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_69F06BA11FF28429_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_070964BB68D18B9F_1_TypeDefinitionIndex)->GetStaticField(0x23E18);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_12()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_070964BB68D18B9F_1_TypeDefinitionIndex)->GetStaticField(0x23E20);
	}
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_9 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_14 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_69F06BA11FF28429_2*>* Field_1_5; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_8; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_13; // 0x28
	::System::UInt32 Field_1_10; // 0x30
	::System::UInt32 Field_1_15; // 0x34
	::System::UInt32 Field_1_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_070964BB68D18B9F_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_070964BB68D18B9F_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_070964BB68D18B9F_1*))((::PBYTE)hIl2Cpp + CLASS_1_070964BB68D18B9F_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_070964BB68D18B9F_1__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_070964BB68D18B9F_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_070964BB68D18B9F_1* Clone()
	{
		return ((::Class_1_070964BB68D18B9F_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_070964BB68D18B9F_1_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_070964BB68D18B9F_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_070964BB68D18B9F_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_69F06BA11FF28429_2*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_69F06BA11FF28429_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_070964BB68D18B9F_1_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_070964BB68D18B9F_1_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_070964BB68D18B9F_1_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_070964BB68D18B9F_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_070964BB68D18B9F_1_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_070964BB68D18B9F_1_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_070964BB68D18B9F_1_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_070964BB68D18B9F_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_070964BB68D18B9F_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_070964BB68D18B9F_1*))((::PBYTE)hIl2Cpp + CLASS_1_070964BB68D18B9F_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_070964BB68D18B9F_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_070964BB68D18B9F_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_070964BB68D18B9F_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_070964BB68D18B9F_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_070964BB68D18B9F_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_070964BB68D18B9F_1*))((::PBYTE)hIl2Cpp + CLASS_1_070964BB68D18B9F_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_070964BB68D18B9F_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
