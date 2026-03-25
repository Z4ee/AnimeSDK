#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_352A8B3482C80E7D_55;
class Class_1_A6B0B39A319DDDE2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_EF0E638FDA49C9A1_4_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17CE9D50)
#define CLASS_1_EF0E638FDA49C9A1_4_CLONE_OFFSET UNITYSDK_OFFSET(0x17CE98D0)
#define CLASS_1_EF0E638FDA49C9A1_4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17CE99A0)
#define CLASS_1_EF0E638FDA49C9A1_4_EQUALS_OFFSET UNITYSDK_OFFSET(0x17CE9970)
#define CLASS_1_EF0E638FDA49C9A1_4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17CE9AB0)
#define CLASS_1_EF0E638FDA49C9A1_4_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17CEA020)
#define CLASS_1_EF0E638FDA49C9A1_4_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17CE9F10)
#define CLASS_1_EF0E638FDA49C9A1_4_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17CE9950)
#define CLASS_1_EF0E638FDA49C9A1_4_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17CE9900)
#define CLASS_1_EF0E638FDA49C9A1_4_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17CE9930)
#define CLASS_1_EF0E638FDA49C9A1_4_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17CE9920)
#define CLASS_1_EF0E638FDA49C9A1_4_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17CE9960)
#define CLASS_1_EF0E638FDA49C9A1_4_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17CE9910)
#define CLASS_1_EF0E638FDA49C9A1_4_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17CE9940)
#define CLASS_1_EF0E638FDA49C9A1_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17CE97B0)
#define CLASS_1_EF0E638FDA49C9A1_4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17CE9BC0)
#define CLASS_1_EF0E638FDA49C9A1_4_WRITETO_OFFSET UNITYSDK_OFFSET(0x17CE9C20)
#define CLASS_1_EF0E638FDA49C9A1_4__CCTOR_OFFSET UNITYSDK_OFFSET(0x17CEA130)
#define CLASS_1_EF0E638FDA49C9A1_4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17CE9800)
#define CLASS_1_EF0E638FDA49C9A1_4__CTOR_OFFSET UNITYSDK_OFFSET(0x17CE97C0)

inline static constexpr unsigned int Class_1_EF0E638FDA49C9A1_4_TypeDefinitionIndex = 27045;

class Class_1_EF0E638FDA49C9A1_4 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_352A8B3482C80E7D_55*>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_352A8B3482C80E7D_55*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EF0E638FDA49C9A1_4_TypeDefinitionIndex)->GetStaticField(0xE6A0);
	}
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x3; // 0x0
	::Class_1_A6B0B39A319DDDE2* Field_1_7; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_352A8B3482C80E7D_55*>* Field_1_5; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::System::UInt32 Field_1_9; // 0x28
	::System::UInt32 Field_1_2; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_EF0E638FDA49C9A1_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EF0E638FDA49C9A1_4*))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_4__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_4__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_EF0E638FDA49C9A1_4* Clone()
	{
		return ((::Class_1_EF0E638FDA49C9A1_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_4_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_4_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_4_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_352A8B3482C80E7D_55*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_352A8B3482C80E7D_55*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_4_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Class_1_A6B0B39A319DDDE2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_A6B0B39A319DDDE2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_4_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_A6B0B39A319DDDE2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A6B0B39A319DDDE2*))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_4_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_4_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_4_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_EF0E638FDA49C9A1_4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EF0E638FDA49C9A1_4*))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_4_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_4_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_4_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_4_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_EF0E638FDA49C9A1_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EF0E638FDA49C9A1_4*))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_4_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_4_MERGEFROM_1_OFFSET))(this, a1);
	}
};
