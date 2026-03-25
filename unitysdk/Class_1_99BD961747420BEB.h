#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6A016EB9D6190C4D;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_99BD961747420BEB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x181D3C90)
#define CLASS_1_99BD961747420BEB_CLONE_OFFSET UNITYSDK_OFFSET(0x181D3810)
#define CLASS_1_99BD961747420BEB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x181D3930)
#define CLASS_1_99BD961747420BEB_EQUALS_OFFSET UNITYSDK_OFFSET(0x181D38D0)
#define CLASS_1_99BD961747420BEB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x181D3A00)
#define CLASS_1_99BD961747420BEB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x181D3F50)
#define CLASS_1_99BD961747420BEB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x181D3E90)
#define CLASS_1_99BD961747420BEB_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x181D3880)
#define CLASS_1_99BD961747420BEB_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x181D38A0)
#define CLASS_1_99BD961747420BEB_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x181D3860)
#define CLASS_1_99BD961747420BEB_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x181D38C0)
#define CLASS_1_99BD961747420BEB_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x181D3890)
#define CLASS_1_99BD961747420BEB_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x181D38B0)
#define CLASS_1_99BD961747420BEB_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x181D3870)
#define CLASS_1_99BD961747420BEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x181D36F0)
#define CLASS_1_99BD961747420BEB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x181D3B10)
#define CLASS_1_99BD961747420BEB_WRITETO_OFFSET UNITYSDK_OFFSET(0x181D3B70)
#define CLASS_1_99BD961747420BEB__CCTOR_OFFSET UNITYSDK_OFFSET(0x181D4050)
#define CLASS_1_99BD961747420BEB__CTOR_1_OFFSET UNITYSDK_OFFSET(0x181D3750)
#define CLASS_1_99BD961747420BEB__CTOR_OFFSET UNITYSDK_OFFSET(0x181D3700)

inline static constexpr unsigned int Class_1_99BD961747420BEB_TypeDefinitionIndex = 23091;

class Class_1_99BD961747420BEB : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_6A016EB9D6190C4D*>** StaticGet_Field_1_8()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_6A016EB9D6190C4D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_99BD961747420BEB_TypeDefinitionIndex)->GetStaticField(0xFFC0);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_6A016EB9D6190C4D*>* Field_1_9; // 0x18
	::System::UInt32 Field_1_2; // 0x20
	::System::UInt32 Field_1_6; // 0x24
	::System::UInt32 Field_1_4; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_99BD961747420BEB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_99BD961747420BEB* Clone()
	{
		return ((::Class_1_99BD961747420BEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_6A016EB9D6190C4D*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_6A016EB9D6190C4D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_99BD961747420BEB* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_99BD961747420BEB*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_99BD961747420BEB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_MERGEFROM_1_OFFSET))(this, a1);
	}
};
