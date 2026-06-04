#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7FF19F6206AF6DD7_21;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_455008579EB95638_32_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A7B9670)
#define CLASS_1_455008579EB95638_32_CLONE_OFFSET UNITYSDK_OFFSET(0x1A7B91D0)
#define CLASS_1_455008579EB95638_32_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A7B92A0)
#define CLASS_1_455008579EB95638_32_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A7B9240)
#define CLASS_1_455008579EB95638_32_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A7B9380)
#define CLASS_1_455008579EB95638_32_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A7B9800)
#define CLASS_1_455008579EB95638_32_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A7B9750)
#define CLASS_1_455008579EB95638_32_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A7B8FB0)
#define CLASS_1_455008579EB95638_32_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1A7B9230)
#define CLASS_1_455008579EB95638_32_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1A7B9220)
#define CLASS_1_455008579EB95638_32_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A7B9010)
#define CLASS_1_455008579EB95638_32_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A7B9530)
#define CLASS_1_455008579EB95638_32_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A7B9590)
#define CLASS_1_455008579EB95638_32__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A7B9A20)
#define CLASS_1_455008579EB95638_32__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A7B90B0)
#define CLASS_1_455008579EB95638_32__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7B9020)

inline static constexpr unsigned int Class_1_455008579EB95638_32_TypeDefinitionIndex = 26648;

class Class_1_455008579EB95638_32 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455008579EB95638_32_TypeDefinitionIndex)->GetStaticField(0x4A730);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_32*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_32*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455008579EB95638_32_TypeDefinitionIndex)->GetStaticField(0x4A738);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_7FF19F6206AF6DD7_21*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_7FF19F6206AF6DD7_21*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455008579EB95638_32_TypeDefinitionIndex)->GetStaticField(0x4A740);
	}
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x8; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7FF19F6206AF6DD7_21*>* Field_1_5; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_6; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_32__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_455008579EB95638_32* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_32*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_32__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_32__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_32*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_32*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_32_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_32_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_455008579EB95638_32* Clone()
	{
		return ((::Class_1_455008579EB95638_32*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_32_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7FF19F6206AF6DD7_21*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_7FF19F6206AF6DD7_21*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_32_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_32_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_32_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_455008579EB95638_32* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_455008579EB95638_32*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_32_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_32_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_32_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_32_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_32_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_455008579EB95638_32* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_32*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_32_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_32_MERGEFROM_1_OFFSET))(this, a1);
	}
};
