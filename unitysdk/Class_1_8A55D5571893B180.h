#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_99BD961747420BEB_9;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_8A55D5571893B180_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1825CE60)
#define CLASS_1_8A55D5571893B180_CLONE_OFFSET UNITYSDK_OFFSET(0x1825C900)
#define CLASS_1_8A55D5571893B180_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1825C9E0)
#define CLASS_1_8A55D5571893B180_EQUALS_OFFSET UNITYSDK_OFFSET(0x1825C9B0)
#define CLASS_1_8A55D5571893B180_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1825CAF0)
#define CLASS_1_8A55D5571893B180_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1825D1A0)
#define CLASS_1_8A55D5571893B180_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1825D040)
#define CLASS_1_8A55D5571893B180_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1825C960)
#define CLASS_1_8A55D5571893B180_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1825C940)
#define CLASS_1_8A55D5571893B180_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1825C990)
#define CLASS_1_8A55D5571893B180_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1825C980)
#define CLASS_1_8A55D5571893B180_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1825C930)
#define CLASS_1_8A55D5571893B180_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1825C970)
#define CLASS_1_8A55D5571893B180_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1825C950)
#define CLASS_1_8A55D5571893B180_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1825C9A0)
#define CLASS_1_8A55D5571893B180_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1825C710)
#define CLASS_1_8A55D5571893B180_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1825CCE0)
#define CLASS_1_8A55D5571893B180_WRITETO_OFFSET UNITYSDK_OFFSET(0x1825CD40)
#define CLASS_1_8A55D5571893B180__CCTOR_OFFSET UNITYSDK_OFFSET(0x1825D3C0)
#define CLASS_1_8A55D5571893B180__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1825C7B0)
#define CLASS_1_8A55D5571893B180__CTOR_OFFSET UNITYSDK_OFFSET(0x1825C720)

inline static constexpr unsigned int Class_1_8A55D5571893B180_TypeDefinitionIndex = 23713;

class Class_1_8A55D5571893B180 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A55D5571893B180_TypeDefinitionIndex)->GetStaticField(0x17CB0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_9()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A55D5571893B180_TypeDefinitionIndex)->GetStaticField(0x17CB8);
	}
	// static const ::System::Int32 Field_1_1 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_11 = 0x3; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x10
	::Class_1_99BD961747420BEB_9* Field_1_12; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_10; // 0x28
	::System::UInt32 Field_1_5; // 0x30
	::System::UInt32 Field_1_7; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A55D5571893B180__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_8A55D5571893B180* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A55D5571893B180*))((::PBYTE)hIl2Cpp + CLASS_1_8A55D5571893B180__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A55D5571893B180__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A55D5571893B180_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_8A55D5571893B180* Clone()
	{
		return ((::Class_1_8A55D5571893B180*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A55D5571893B180_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A55D5571893B180_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A55D5571893B180_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8A55D5571893B180_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A55D5571893B180_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8A55D5571893B180_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A55D5571893B180_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::Class_1_99BD961747420BEB_9* Method_1_24748FC20F375725()
	{
		return ((::Class_1_99BD961747420BEB_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A55D5571893B180_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_99BD961747420BEB_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_9*))((::PBYTE)hIl2Cpp + CLASS_1_8A55D5571893B180_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_8A55D5571893B180_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_8A55D5571893B180* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8A55D5571893B180*))((::PBYTE)hIl2Cpp + CLASS_1_8A55D5571893B180_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A55D5571893B180_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A55D5571893B180_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8A55D5571893B180_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A55D5571893B180_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_8A55D5571893B180* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A55D5571893B180*))((::PBYTE)hIl2Cpp + CLASS_1_8A55D5571893B180_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8A55D5571893B180_MERGEFROM_1_OFFSET))(this, a1);
	}
};
