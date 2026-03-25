#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6A016EB9D6190C4D;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_ACA38760E7F8B37E_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18107D70)
#define CLASS_1_ACA38760E7F8B37E_CLONE_OFFSET UNITYSDK_OFFSET(0x18107760)
#define CLASS_1_ACA38760E7F8B37E_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x181078D0)
#define CLASS_1_ACA38760E7F8B37E_EQUALS_OFFSET UNITYSDK_OFFSET(0x18107870)
#define CLASS_1_ACA38760E7F8B37E_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x181079F0)
#define CLASS_1_ACA38760E7F8B37E_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x181081C0)
#define CLASS_1_ACA38760E7F8B37E_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x181080C0)
#define CLASS_1_ACA38760E7F8B37E_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x181077D0)
#define CLASS_1_ACA38760E7F8B37E_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x181077F0)
#define CLASS_1_ACA38760E7F8B37E_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x18107820)
#define CLASS_1_ACA38760E7F8B37E_METHOD_1_02A3D10A9D535169_4_OFFSET UNITYSDK_OFFSET(0x18107850)
#define CLASS_1_ACA38760E7F8B37E_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x181077B0)
#define CLASS_1_ACA38760E7F8B37E_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x18107810)
#define CLASS_1_ACA38760E7F8B37E_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x181077E0)
#define CLASS_1_ACA38760E7F8B37E_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x18107800)
#define CLASS_1_ACA38760E7F8B37E_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x18107830)
#define CLASS_1_ACA38760E7F8B37E_METHOD_1_7786DC814C2FC3BE_4_OFFSET UNITYSDK_OFFSET(0x18107860)
#define CLASS_1_ACA38760E7F8B37E_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x181077C0)
#define CLASS_1_ACA38760E7F8B37E_METHOD_1_EA98AC27B86895E5_OFFSET UNITYSDK_OFFSET(0x18107840)
#define CLASS_1_ACA38760E7F8B37E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x181075D0)
#define CLASS_1_ACA38760E7F8B37E_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18107B40)
#define CLASS_1_ACA38760E7F8B37E_WRITETO_OFFSET UNITYSDK_OFFSET(0x18107BA0)
#define CLASS_1_ACA38760E7F8B37E__CCTOR_OFFSET UNITYSDK_OFFSET(0x18108350)
#define CLASS_1_ACA38760E7F8B37E__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18107650)
#define CLASS_1_ACA38760E7F8B37E__CTOR_OFFSET UNITYSDK_OFFSET(0x181075E0)

inline static constexpr unsigned int Class_1_ACA38760E7F8B37E_TypeDefinitionIndex = 23090;

class Class_1_ACA38760E7F8B37E : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>** StaticGet_Field_1_13()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ACA38760E7F8B37E_TypeDefinitionIndex)->GetStaticField(0x372D0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_6A016EB9D6190C4D*>** StaticGet_Field_1_8()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_6A016EB9D6190C4D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ACA38760E7F8B37E_TypeDefinitionIndex)->GetStaticField(0x372D8);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_12 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_15 = 0xB; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_6A016EB9D6190C4D*>* Field_1_9; // 0x18
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Field_1_14; // 0x20
	::System::UInt32 Field_1_16; // 0x28
	::System::UInt32 Field_1_4; // 0x2C
	::System::UInt32 Field_1_11; // 0x30
	::System::UInt32 Field_1_2; // 0x34
	::System::UInt32 Field_1_6; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACA38760E7F8B37E__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_ACA38760E7F8B37E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ACA38760E7F8B37E*))((::PBYTE)hIl2Cpp + CLASS_1_ACA38760E7F8B37E__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_ACA38760E7F8B37E__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACA38760E7F8B37E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_ACA38760E7F8B37E* Clone()
	{
		return ((::Class_1_ACA38760E7F8B37E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACA38760E7F8B37E_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACA38760E7F8B37E_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_ACA38760E7F8B37E_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACA38760E7F8B37E_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_ACA38760E7F8B37E_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACA38760E7F8B37E_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_ACA38760E7F8B37E_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_6A016EB9D6190C4D*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_6A016EB9D6190C4D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACA38760E7F8B37E_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACA38760E7F8B37E_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_ACA38760E7F8B37E_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Method_1_EA98AC27B86895E5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACA38760E7F8B37E_METHOD_1_EA98AC27B86895E5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACA38760E7F8B37E_METHOD_1_02A3D10A9D535169_4_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_ACA38760E7F8B37E_METHOD_1_7786DC814C2FC3BE_4_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_ACA38760E7F8B37E_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_ACA38760E7F8B37E* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_ACA38760E7F8B37E*))((::PBYTE)hIl2Cpp + CLASS_1_ACA38760E7F8B37E_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACA38760E7F8B37E_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACA38760E7F8B37E_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_ACA38760E7F8B37E_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACA38760E7F8B37E_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_ACA38760E7F8B37E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ACA38760E7F8B37E*))((::PBYTE)hIl2Cpp + CLASS_1_ACA38760E7F8B37E_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_ACA38760E7F8B37E_MERGEFROM_1_OFFSET))(this, a1);
	}
};
