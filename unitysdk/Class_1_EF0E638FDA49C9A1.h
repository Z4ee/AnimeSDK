#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5E67EEC526D46438;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_EF0E638FDA49C9A1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17EF4190)
#define CLASS_1_EF0E638FDA49C9A1_CLONE_OFFSET UNITYSDK_OFFSET(0x17EF3CC0)
#define CLASS_1_EF0E638FDA49C9A1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17EF3DE0)
#define CLASS_1_EF0E638FDA49C9A1_EQUALS_OFFSET UNITYSDK_OFFSET(0x17EF3D80)
#define CLASS_1_EF0E638FDA49C9A1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17EF3EF0)
#define CLASS_1_EF0E638FDA49C9A1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17EF4470)
#define CLASS_1_EF0E638FDA49C9A1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17EF4340)
#define CLASS_1_EF0E638FDA49C9A1_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17EF3D30)
#define CLASS_1_EF0E638FDA49C9A1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17EF3D10)
#define CLASS_1_EF0E638FDA49C9A1_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17EF3D50)
#define CLASS_1_EF0E638FDA49C9A1_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x17EF3D70)
#define CLASS_1_EF0E638FDA49C9A1_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17EF3D40)
#define CLASS_1_EF0E638FDA49C9A1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17EF3D20)
#define CLASS_1_EF0E638FDA49C9A1_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17EF3D60)
#define CLASS_1_EF0E638FDA49C9A1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17EF3B20)
#define CLASS_1_EF0E638FDA49C9A1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17EF4000)
#define CLASS_1_EF0E638FDA49C9A1_WRITETO_OFFSET UNITYSDK_OFFSET(0x17EF4060)
#define CLASS_1_EF0E638FDA49C9A1__CCTOR_OFFSET UNITYSDK_OFFSET(0x17EF4590)
#define CLASS_1_EF0E638FDA49C9A1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17EF3B80)
#define CLASS_1_EF0E638FDA49C9A1__CTOR_OFFSET UNITYSDK_OFFSET(0x17EF3B30)

inline static constexpr unsigned int Class_1_EF0E638FDA49C9A1_TypeDefinitionIndex = 22928;

class Class_1_EF0E638FDA49C9A1 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_5E67EEC526D46438*>** StaticGet_Field_1_8()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_5E67EEC526D46438*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EF0E638FDA49C9A1_TypeDefinitionIndex)->GetStaticField(0x2F7C0);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Class_1_5E67EEC526D46438* Field_1_6; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_5E67EEC526D46438*>* Field_1_9; // 0x20
	::System::UInt32 Field_1_2; // 0x28
	::System::UInt32 Field_1_4; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_EF0E638FDA49C9A1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EF0E638FDA49C9A1*))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_EF0E638FDA49C9A1* Clone()
	{
		return ((::Class_1_EF0E638FDA49C9A1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Class_1_5E67EEC526D46438* Method_1_24748FC20F375725()
	{
		return ((::Class_1_5E67EEC526D46438*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_5E67EEC526D46438* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5E67EEC526D46438*))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_5E67EEC526D46438*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_5E67EEC526D46438*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_EF0E638FDA49C9A1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EF0E638FDA49C9A1*))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_EF0E638FDA49C9A1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EF0E638FDA49C9A1*))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EF0E638FDA49C9A1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
