#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_355A2207C3B7A99D;
class Class_1_E0BAE492EF64CE43;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_B10FFA91399295A9_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A978630)
#define CLASS_1_B10FFA91399295A9_CLONE_OFFSET UNITYSDK_OFFSET(0x1A978200)
#define CLASS_1_B10FFA91399295A9_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A9782B0)
#define CLASS_1_B10FFA91399295A9_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A978280)
#define CLASS_1_B10FFA91399295A9_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A9783B0)
#define CLASS_1_B10FFA91399295A9_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A978840)
#define CLASS_1_B10FFA91399295A9_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A978750)
#define CLASS_1_B10FFA91399295A9_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A978230)
#define CLASS_1_B10FFA91399295A9_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1A978250)
#define CLASS_1_B10FFA91399295A9_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A978070)
#define CLASS_1_B10FFA91399295A9_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1A978270)
#define CLASS_1_B10FFA91399295A9_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A978240)
#define CLASS_1_B10FFA91399295A9_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A978260)
#define CLASS_1_B10FFA91399295A9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A9780A0)
#define CLASS_1_B10FFA91399295A9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A978500)
#define CLASS_1_B10FFA91399295A9_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A978560)
#define CLASS_1_B10FFA91399295A9__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A978AA0)
#define CLASS_1_B10FFA91399295A9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A9780F0)
#define CLASS_1_B10FFA91399295A9__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9780B0)

inline static constexpr unsigned int Class_1_B10FFA91399295A9_TypeDefinitionIndex = 24062;

class Class_1_B10FFA91399295A9 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_E0BAE492EF64CE43*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_E0BAE492EF64CE43*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B10FFA91399295A9_TypeDefinitionIndex)->GetStaticField(0x162C0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_B10FFA91399295A9*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_B10FFA91399295A9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B10FFA91399295A9_TypeDefinitionIndex)->GetStaticField(0x162C8);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x3; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E0BAE492EF64CE43*>* Field_1_5; // 0x10
	::Class_1_355A2207C3B7A99D* Field_1_6; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_7; // 0x20
	::System::UInt32 Field_1_8; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B10FFA91399295A9__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_B10FFA91399295A9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B10FFA91399295A9*))((::PBYTE)hIl2Cpp + CLASS_1_B10FFA91399295A9__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B10FFA91399295A9__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_B10FFA91399295A9*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_B10FFA91399295A9*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B10FFA91399295A9_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B10FFA91399295A9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_B10FFA91399295A9* Clone()
	{
		return ((::Class_1_B10FFA91399295A9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B10FFA91399295A9_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B10FFA91399295A9_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B10FFA91399295A9_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_355A2207C3B7A99D* Method_1_24748FC20F375725()
	{
		return ((::Class_1_355A2207C3B7A99D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B10FFA91399295A9_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_355A2207C3B7A99D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D*))((::PBYTE)hIl2Cpp + CLASS_1_B10FFA91399295A9_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E0BAE492EF64CE43*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E0BAE492EF64CE43*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B10FFA91399295A9_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B10FFA91399295A9_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_B10FFA91399295A9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B10FFA91399295A9*))((::PBYTE)hIl2Cpp + CLASS_1_B10FFA91399295A9_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B10FFA91399295A9_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B10FFA91399295A9_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B10FFA91399295A9_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B10FFA91399295A9_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_B10FFA91399295A9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B10FFA91399295A9*))((::PBYTE)hIl2Cpp + CLASS_1_B10FFA91399295A9_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B10FFA91399295A9_MERGEFROM_1_OFFSET))(this, a1);
	}
};
