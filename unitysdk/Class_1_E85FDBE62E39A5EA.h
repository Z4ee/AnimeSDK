#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DCE302F7FD05DE84;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_E85FDBE62E39A5EA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x180E9BE0)
#define CLASS_1_E85FDBE62E39A5EA_CLONE_OFFSET UNITYSDK_OFFSET(0x180E9810)
#define CLASS_1_E85FDBE62E39A5EA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x180E9930)
#define CLASS_1_E85FDBE62E39A5EA_EQUALS_OFFSET UNITYSDK_OFFSET(0x180E9850)
#define CLASS_1_E85FDBE62E39A5EA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x180E99E0)
#define CLASS_1_E85FDBE62E39A5EA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x180E9D20)
#define CLASS_1_E85FDBE62E39A5EA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x180E9C80)
#define CLASS_1_E85FDBE62E39A5EA_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x180E9840)
#define CLASS_1_E85FDBE62E39A5EA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x180E9730)
#define CLASS_1_E85FDBE62E39A5EA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x180E9AD0)
#define CLASS_1_E85FDBE62E39A5EA_WRITETO_OFFSET UNITYSDK_OFFSET(0x180E9B30)
#define CLASS_1_E85FDBE62E39A5EA__CCTOR_OFFSET UNITYSDK_OFFSET(0x180E9DD0)
#define CLASS_1_E85FDBE62E39A5EA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x180E9780)
#define CLASS_1_E85FDBE62E39A5EA__CTOR_OFFSET UNITYSDK_OFFSET(0x180E9740)

inline static constexpr unsigned int Class_1_E85FDBE62E39A5EA_TypeDefinitionIndex = 23386;

class Class_1_E85FDBE62E39A5EA : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_DCE302F7FD05DE84*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_DCE302F7FD05DE84*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E85FDBE62E39A5EA_TypeDefinitionIndex)->GetStaticField(0x36800);
	}
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_DCE302F7FD05DE84*>* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_E85FDBE62E39A5EA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E85FDBE62E39A5EA*))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_E85FDBE62E39A5EA* Clone()
	{
		return ((::Class_1_E85FDBE62E39A5EA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_DCE302F7FD05DE84*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_DCE302F7FD05DE84*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E85FDBE62E39A5EA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E85FDBE62E39A5EA*))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_E85FDBE62E39A5EA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E85FDBE62E39A5EA*))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E85FDBE62E39A5EA_MERGEFROM_1_OFFSET))(this, a1);
	}
};
