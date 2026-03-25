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

#define CLASS_1_775A9BF8FA587BB6_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18112DB0)
#define CLASS_1_775A9BF8FA587BB6_CLONE_OFFSET UNITYSDK_OFFSET(0x181128B0)
#define CLASS_1_775A9BF8FA587BB6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18112970)
#define CLASS_1_775A9BF8FA587BB6_EQUALS_OFFSET UNITYSDK_OFFSET(0x18112940)
#define CLASS_1_775A9BF8FA587BB6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18112A30)
#define CLASS_1_775A9BF8FA587BB6_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18112FF0)
#define CLASS_1_775A9BF8FA587BB6_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18112F80)
#define CLASS_1_775A9BF8FA587BB6_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x18112900)
#define CLASS_1_775A9BF8FA587BB6_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x181128F0)
#define CLASS_1_775A9BF8FA587BB6_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x18112930)
#define CLASS_1_775A9BF8FA587BB6_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x18112920)
#define CLASS_1_775A9BF8FA587BB6_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x18112910)
#define CLASS_1_775A9BF8FA587BB6_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x181128E0)
#define CLASS_1_775A9BF8FA587BB6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18112720)
#define CLASS_1_775A9BF8FA587BB6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18112C30)
#define CLASS_1_775A9BF8FA587BB6_WRITETO_OFFSET UNITYSDK_OFFSET(0x18112C90)
#define CLASS_1_775A9BF8FA587BB6__CCTOR_OFFSET UNITYSDK_OFFSET(0x18113120)
#define CLASS_1_775A9BF8FA587BB6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x181127C0)
#define CLASS_1_775A9BF8FA587BB6__CTOR_OFFSET UNITYSDK_OFFSET(0x18112730)

inline static constexpr unsigned int Class_1_775A9BF8FA587BB6_TypeDefinitionIndex = 25472;

class Class_1_775A9BF8FA587BB6 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_9()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_775A9BF8FA587BB6_TypeDefinitionIndex)->GetStaticField(0x37560);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_775A9BF8FA587BB6_TypeDefinitionIndex)->GetStaticField(0x37568);
	}
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_8 = 0xF; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_7; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_10; // 0x20
	::System::UInt32 Field_1_4; // 0x28
	::System::Int64 Field_1_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_775A9BF8FA587BB6__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_775A9BF8FA587BB6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_775A9BF8FA587BB6*))((::PBYTE)hIl2Cpp + CLASS_1_775A9BF8FA587BB6__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_775A9BF8FA587BB6__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_775A9BF8FA587BB6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_775A9BF8FA587BB6* Clone()
	{
		return ((::Class_1_775A9BF8FA587BB6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_775A9BF8FA587BB6_CLONE_OFFSET))(this);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_775A9BF8FA587BB6_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_775A9BF8FA587BB6_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_775A9BF8FA587BB6_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_775A9BF8FA587BB6_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_775A9BF8FA587BB6_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_775A9BF8FA587BB6_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_775A9BF8FA587BB6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_775A9BF8FA587BB6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_775A9BF8FA587BB6*))((::PBYTE)hIl2Cpp + CLASS_1_775A9BF8FA587BB6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_775A9BF8FA587BB6_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_775A9BF8FA587BB6_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_775A9BF8FA587BB6_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_775A9BF8FA587BB6_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_775A9BF8FA587BB6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_775A9BF8FA587BB6*))((::PBYTE)hIl2Cpp + CLASS_1_775A9BF8FA587BB6_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_775A9BF8FA587BB6_MERGEFROM_1_OFFSET))(this, a1);
	}
};
