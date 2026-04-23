#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_993C91F8E48A9E53;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_455008579EB95638_67_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19443E10)
#define CLASS_1_455008579EB95638_67_CLONE_OFFSET UNITYSDK_OFFSET(0x194439E0)
#define CLASS_1_455008579EB95638_67_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19443B30)
#define CLASS_1_455008579EB95638_67_EQUALS_OFFSET UNITYSDK_OFFSET(0x19443A40)
#define CLASS_1_455008579EB95638_67_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19443BE0)
#define CLASS_1_455008579EB95638_67_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19443FE0)
#define CLASS_1_455008579EB95638_67_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19443F40)
#define CLASS_1_455008579EB95638_67_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19443A20)
#define CLASS_1_455008579EB95638_67_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x194438D0)
#define CLASS_1_455008579EB95638_67_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x19443A10)
#define CLASS_1_455008579EB95638_67_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19443A30)
#define CLASS_1_455008579EB95638_67_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19443900)
#define CLASS_1_455008579EB95638_67_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19443CD0)
#define CLASS_1_455008579EB95638_67_WRITETO_OFFSET UNITYSDK_OFFSET(0x19443D30)
#define CLASS_1_455008579EB95638_67__CCTOR_OFFSET UNITYSDK_OFFSET(0x194440A0)
#define CLASS_1_455008579EB95638_67__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19443950)
#define CLASS_1_455008579EB95638_67__CTOR_OFFSET UNITYSDK_OFFSET(0x19443910)

inline static constexpr unsigned int Class_1_455008579EB95638_67_TypeDefinitionIndex = 29465;

class Class_1_455008579EB95638_67 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_993C91F8E48A9E53*>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_993C91F8E48A9E53*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455008579EB95638_67_TypeDefinitionIndex)->GetStaticField(0x48520);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_67*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_67*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455008579EB95638_67_TypeDefinitionIndex)->GetStaticField(0x48528);
	}
	// static const ::System::Int32 Field_1_2 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xB; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_993C91F8E48A9E53*>* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::System::UInt32 Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_67__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_455008579EB95638_67* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_67*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_67__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_67__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_67*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_67*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_67_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_67_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_455008579EB95638_67* Clone()
	{
		return ((::Class_1_455008579EB95638_67*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_67_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_993C91F8E48A9E53*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_993C91F8E48A9E53*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_67_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_67_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_67_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_67_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_455008579EB95638_67* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_455008579EB95638_67*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_67_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_67_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_67_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_67_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_67_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_455008579EB95638_67* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_67*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_67_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_67_MERGEFROM_1_OFFSET))(this, a1);
	}
};
