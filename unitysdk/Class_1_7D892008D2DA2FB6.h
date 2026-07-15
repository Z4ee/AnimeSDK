#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_7D892008D2DA2FB6_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C3A03D0)
#define CLASS_1_7D892008D2DA2FB6_CLONE_OFFSET UNITYSDK_OFFSET(0x1C39FD80)
#define CLASS_1_7D892008D2DA2FB6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C39FE80)
#define CLASS_1_7D892008D2DA2FB6_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C39FE50)
#define CLASS_1_7D892008D2DA2FB6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C39FF30)
#define CLASS_1_7D892008D2DA2FB6_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C3A0670)
#define CLASS_1_7D892008D2DA2FB6_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C3A05F0)
#define CLASS_1_7D892008D2DA2FB6_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1C39FE10)
#define CLASS_1_7D892008D2DA2FB6_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1C39FE30)
#define CLASS_1_7D892008D2DA2FB6_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C39FDB0)
#define CLASS_1_7D892008D2DA2FB6_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1C39FE00)
#define CLASS_1_7D892008D2DA2FB6_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1C39FDF0)
#define CLASS_1_7D892008D2DA2FB6_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C39FBB0)
#define CLASS_1_7D892008D2DA2FB6_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1C39FE20)
#define CLASS_1_7D892008D2DA2FB6_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1C39FE40)
#define CLASS_1_7D892008D2DA2FB6_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C39FDC0)
#define CLASS_1_7D892008D2DA2FB6_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1C39FDE0)
#define CLASS_1_7D892008D2DA2FB6_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1C39FDD0)
#define CLASS_1_7D892008D2DA2FB6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C39FBE0)
#define CLASS_1_7D892008D2DA2FB6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C3A0100)
#define CLASS_1_7D892008D2DA2FB6_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C3A0160)
#define CLASS_1_7D892008D2DA2FB6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3A0800)
#define CLASS_1_7D892008D2DA2FB6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C39FC80)
#define CLASS_1_7D892008D2DA2FB6__CTOR_OFFSET UNITYSDK_OFFSET(0x1C39FBF0)

inline static constexpr unsigned int Class_1_7D892008D2DA2FB6_TypeDefinitionIndex = 32783;

class Class_1_7D892008D2DA2FB6 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7D892008D2DA2FB6_TypeDefinitionIndex)->GetStaticField(0x3A4E0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7D892008D2DA2FB6_TypeDefinitionIndex)->GetStaticField(0x3A4E8);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_7D892008D2DA2FB6*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_7D892008D2DA2FB6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7D892008D2DA2FB6_TypeDefinitionIndex)->GetStaticField(0x3A4F0);
	}
	// static const ::System::Int32 Field_1_3 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x6; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_9; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_10; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_11; // 0x20
	::System::UInt32 Field_1_12; // 0x28
	::System::Boolean Field_1_13; // 0x2C
	::System::UInt32 Field_1_14; // 0x30
	::System::UInt32 Field_1_15; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D892008D2DA2FB6__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_7D892008D2DA2FB6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7D892008D2DA2FB6*))((::PBYTE)hIl2Cpp + CLASS_1_7D892008D2DA2FB6__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7D892008D2DA2FB6__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_7D892008D2DA2FB6*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_7D892008D2DA2FB6*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7D892008D2DA2FB6_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D892008D2DA2FB6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_7D892008D2DA2FB6* Clone()
	{
		return ((::Class_1_7D892008D2DA2FB6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D892008D2DA2FB6_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D892008D2DA2FB6_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7D892008D2DA2FB6_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D892008D2DA2FB6_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7D892008D2DA2FB6_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D892008D2DA2FB6_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D892008D2DA2FB6_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D892008D2DA2FB6_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7D892008D2DA2FB6_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D892008D2DA2FB6_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7D892008D2DA2FB6_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7D892008D2DA2FB6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_7D892008D2DA2FB6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7D892008D2DA2FB6*))((::PBYTE)hIl2Cpp + CLASS_1_7D892008D2DA2FB6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D892008D2DA2FB6_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D892008D2DA2FB6_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7D892008D2DA2FB6_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D892008D2DA2FB6_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_7D892008D2DA2FB6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7D892008D2DA2FB6*))((::PBYTE)hIl2Cpp + CLASS_1_7D892008D2DA2FB6_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7D892008D2DA2FB6_MERGEFROM_1_OFFSET))(this, a1);
	}
};
