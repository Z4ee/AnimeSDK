#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5FEFAED860528596_36;
class Class_1_E577B5580A99D425_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_99BD961747420BEB_27_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17C65320)
#define CLASS_1_99BD961747420BEB_27_CLONE_OFFSET UNITYSDK_OFFSET(0x17C64EB0)
#define CLASS_1_99BD961747420BEB_27_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17C64FB0)
#define CLASS_1_99BD961747420BEB_27_EQUALS_OFFSET UNITYSDK_OFFSET(0x17C64F50)
#define CLASS_1_99BD961747420BEB_27_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17C650B0)
#define CLASS_1_99BD961747420BEB_27_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17C65580)
#define CLASS_1_99BD961747420BEB_27_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17C65460)
#define CLASS_1_99BD961747420BEB_27_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17C64F00)
#define CLASS_1_99BD961747420BEB_27_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17C64F20)
#define CLASS_1_99BD961747420BEB_27_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17C64F40)
#define CLASS_1_99BD961747420BEB_27_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17C64F10)
#define CLASS_1_99BD961747420BEB_27_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17C64F30)
#define CLASS_1_99BD961747420BEB_27_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17C64D20)
#define CLASS_1_99BD961747420BEB_27_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17C651C0)
#define CLASS_1_99BD961747420BEB_27_WRITETO_OFFSET UNITYSDK_OFFSET(0x17C65220)
#define CLASS_1_99BD961747420BEB_27__CCTOR_OFFSET UNITYSDK_OFFSET(0x17C656E0)
#define CLASS_1_99BD961747420BEB_27__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17C64D80)
#define CLASS_1_99BD961747420BEB_27__CTOR_OFFSET UNITYSDK_OFFSET(0x17C64D30)

inline static constexpr unsigned int Class_1_99BD961747420BEB_27_TypeDefinitionIndex = 24614;

class Class_1_99BD961747420BEB_27 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_5FEFAED860528596_36*>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_5FEFAED860528596_36*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_99BD961747420BEB_27_TypeDefinitionIndex)->GetStaticField(0x40AE0);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xB; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_5FEFAED860528596_36*>* Field_1_7; // 0x10
	::Class_1_E577B5580A99D425_2* Field_1_4; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::System::UInt32 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_27__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_99BD961747420BEB_27* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_27*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_27__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_27__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_27_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_99BD961747420BEB_27* Clone()
	{
		return ((::Class_1_99BD961747420BEB_27*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_27_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_27_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_27_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_E577B5580A99D425_2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_E577B5580A99D425_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_27_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_E577B5580A99D425_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E577B5580A99D425_2*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_27_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_5FEFAED860528596_36*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_5FEFAED860528596_36*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_27_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_27_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_99BD961747420BEB_27* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_99BD961747420BEB_27*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_27_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_27_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_27_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_27_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_27_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_99BD961747420BEB_27* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_27*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_27_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_99BD961747420BEB_27_MERGEFROM_1_OFFSET))(this, a1);
	}
};
