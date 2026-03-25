#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C6D3D4CAB2F08D39_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17C44F10)
#define CLASS_1_C6D3D4CAB2F08D39_CLONE_OFFSET UNITYSDK_OFFSET(0x17C44870)
#define CLASS_1_C6D3D4CAB2F08D39_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17C44990)
#define CLASS_1_C6D3D4CAB2F08D39_EQUALS_OFFSET UNITYSDK_OFFSET(0x17C44930)
#define CLASS_1_C6D3D4CAB2F08D39_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17C44A80)
#define CLASS_1_C6D3D4CAB2F08D39_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17C451C0)
#define CLASS_1_C6D3D4CAB2F08D39_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17C45130)
#define CLASS_1_C6D3D4CAB2F08D39_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17C44910)
#define CLASS_1_C6D3D4CAB2F08D39_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17C448D0)
#define CLASS_1_C6D3D4CAB2F08D39_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x17C448F0)
#define CLASS_1_C6D3D4CAB2F08D39_METHOD_1_554199E0076172C5_2_OFFSET UNITYSDK_OFFSET(0x17C44900)
#define CLASS_1_C6D3D4CAB2F08D39_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x17C448C0)
#define CLASS_1_C6D3D4CAB2F08D39_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17C44920)
#define CLASS_1_C6D3D4CAB2F08D39_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17C448E0)
#define CLASS_1_C6D3D4CAB2F08D39_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17C44630)
#define CLASS_1_C6D3D4CAB2F08D39_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17C44D40)
#define CLASS_1_C6D3D4CAB2F08D39_WRITETO_OFFSET UNITYSDK_OFFSET(0x17C44DA0)
#define CLASS_1_C6D3D4CAB2F08D39__CCTOR_OFFSET UNITYSDK_OFFSET(0x17C45370)
#define CLASS_1_C6D3D4CAB2F08D39__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17C44710)
#define CLASS_1_C6D3D4CAB2F08D39__CTOR_OFFSET UNITYSDK_OFFSET(0x17C44640)

inline static constexpr unsigned int Class_1_C6D3D4CAB2F08D39_TypeDefinitionIndex = 26319;

class Class_1_C6D3D4CAB2F08D39 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C6D3D4CAB2F08D39_TypeDefinitionIndex)->GetStaticField(0x379C0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_7()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C6D3D4CAB2F08D39_TypeDefinitionIndex)->GetStaticField(0x379C8);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_10()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C6D3D4CAB2F08D39_TypeDefinitionIndex)->GetStaticField(0x379D0);
	}
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_9 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_12 = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_11; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_8; // 0x28
	::System::UInt32 Field_1_5; // 0x30
	::System::UInt32 Field_1_13; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6D3D4CAB2F08D39__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C6D3D4CAB2F08D39* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C6D3D4CAB2F08D39*))((::PBYTE)hIl2Cpp + CLASS_1_C6D3D4CAB2F08D39__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C6D3D4CAB2F08D39__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6D3D4CAB2F08D39_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C6D3D4CAB2F08D39* Clone()
	{
		return ((::Class_1_C6D3D4CAB2F08D39*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6D3D4CAB2F08D39_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6D3D4CAB2F08D39_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6D3D4CAB2F08D39_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C6D3D4CAB2F08D39_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6D3D4CAB2F08D39_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_2()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6D3D4CAB2F08D39_METHOD_1_554199E0076172C5_2_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6D3D4CAB2F08D39_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C6D3D4CAB2F08D39_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C6D3D4CAB2F08D39_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C6D3D4CAB2F08D39* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C6D3D4CAB2F08D39*))((::PBYTE)hIl2Cpp + CLASS_1_C6D3D4CAB2F08D39_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6D3D4CAB2F08D39_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6D3D4CAB2F08D39_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C6D3D4CAB2F08D39_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6D3D4CAB2F08D39_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C6D3D4CAB2F08D39* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C6D3D4CAB2F08D39*))((::PBYTE)hIl2Cpp + CLASS_1_C6D3D4CAB2F08D39_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C6D3D4CAB2F08D39_MERGEFROM_1_OFFSET))(this, a1);
	}
};
