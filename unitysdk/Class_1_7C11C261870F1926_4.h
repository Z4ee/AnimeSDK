#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E7C4009BCC22497A_3;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class PlayerSimpleInfo; }
namespace System { class String; }

#define CLASS_1_7C11C261870F1926_4_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x180922E0)
#define CLASS_1_7C11C261870F1926_4_CLONE_OFFSET UNITYSDK_OFFSET(0x18091BE0)
#define CLASS_1_7C11C261870F1926_4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18091DC0)
#define CLASS_1_7C11C261870F1926_4_EQUALS_OFFSET UNITYSDK_OFFSET(0x18091D60)
#define CLASS_1_7C11C261870F1926_4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18091F20)
#define CLASS_1_7C11C261870F1926_4_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18092850)
#define CLASS_1_7C11C261870F1926_4_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18092690)
#define CLASS_1_7C11C261870F1926_4_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x18091CD0)
#define CLASS_1_7C11C261870F1926_4_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x18091CF0)
#define CLASS_1_7C11C261870F1926_4_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x18091D20)
#define CLASS_1_7C11C261870F1926_4_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x18091CB0)
#define CLASS_1_7C11C261870F1926_4_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x18091C30)
#define CLASS_1_7C11C261870F1926_4_METHOD_1_1D3C8F680A3EDA34_OFFSET UNITYSDK_OFFSET(0x18091C40)
#define CLASS_1_7C11C261870F1926_4_METHOD_1_2FF5CA20D3582DA7_OFFSET UNITYSDK_OFFSET(0x18091D40)
#define CLASS_1_7C11C261870F1926_4_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x18091D10)
#define CLASS_1_7C11C261870F1926_4_METHOD_1_76682DC918AEFE3C_OFFSET UNITYSDK_OFFSET(0x18091D50)
#define CLASS_1_7C11C261870F1926_4_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x18091CE0)
#define CLASS_1_7C11C261870F1926_4_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x18091D00)
#define CLASS_1_7C11C261870F1926_4_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x18091D30)
#define CLASS_1_7C11C261870F1926_4_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x18091CC0)
#define CLASS_1_7C11C261870F1926_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18091A50)
#define CLASS_1_7C11C261870F1926_4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x180920C0)
#define CLASS_1_7C11C261870F1926_4_WRITETO_OFFSET UNITYSDK_OFFSET(0x18092120)
#define CLASS_1_7C11C261870F1926_4__CCTOR_OFFSET UNITYSDK_OFFSET(0x18092AB0)
#define CLASS_1_7C11C261870F1926_4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18091AC0)
#define CLASS_1_7C11C261870F1926_4__CTOR_OFFSET UNITYSDK_OFFSET(0x18091A60)

inline static constexpr unsigned int Class_1_7C11C261870F1926_4_TypeDefinitionIndex = 24603;

class Class_1_7C11C261870F1926_4 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_E7C4009BCC22497A_3*>** StaticGet_Field_1_10()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_E7C4009BCC22497A_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7C11C261870F1926_4_TypeDefinitionIndex)->GetStaticField(0x2AFD0);
	}
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_9 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_12 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_14 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E7C4009BCC22497A_3*>* Field_1_11; // 0x18
	::Proto::PlayerSimpleInfo* Field_1_15; // 0x20
	::System::String* Field_1_2; // 0x28
	::System::UInt32 Field_1_6; // 0x30
	::System::UInt32 Field_1_4; // 0x34
	::System::UInt32 Field_1_13; // 0x38
	::System::UInt32 Field_1_8; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_7C11C261870F1926_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7C11C261870F1926_4*))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_4__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_4__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_7C11C261870F1926_4* Clone()
	{
		return ((::Class_1_7C11C261870F1926_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_4_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_4_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_1D3C8F680A3EDA34(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_4_METHOD_1_1D3C8F680A3EDA34_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_4_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_4_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_4_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_4_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_4_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_4_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E7C4009BCC22497A_3*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E7C4009BCC22497A_3*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_4_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_4_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_4_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::Proto::PlayerSimpleInfo* Method_1_2FF5CA20D3582DA7()
	{
		return ((::Proto::PlayerSimpleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_4_METHOD_1_2FF5CA20D3582DA7_OFFSET))(this);
	}

	::System::Void Method_1_76682DC918AEFE3C(::Proto::PlayerSimpleInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::PlayerSimpleInfo*))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_4_METHOD_1_76682DC918AEFE3C_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_7C11C261870F1926_4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7C11C261870F1926_4*))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_4_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_4_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_4_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_4_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_7C11C261870F1926_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7C11C261870F1926_4*))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_4_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7C11C261870F1926_4_MERGEFROM_1_OFFSET))(this, a1);
	}
};
