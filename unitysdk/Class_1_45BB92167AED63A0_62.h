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

#define CLASS_1_45BB92167AED63A0_62_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CB26EA0)
#define CLASS_1_45BB92167AED63A0_62_CLONE_OFFSET UNITYSDK_OFFSET(0x1CB26970)
#define CLASS_1_45BB92167AED63A0_62_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CB26AD0)
#define CLASS_1_45BB92167AED63A0_62_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CB269C0)
#define CLASS_1_45BB92167AED63A0_62_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CB26BE0)
#define CLASS_1_45BB92167AED63A0_62_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CB26F90)
#define CLASS_1_45BB92167AED63A0_62_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CB26F30)
#define CLASS_1_45BB92167AED63A0_62_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1CB269B0)
#define CLASS_1_45BB92167AED63A0_62_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1CB269A0)
#define CLASS_1_45BB92167AED63A0_62_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CB267B0)
#define CLASS_1_45BB92167AED63A0_62_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CB267E0)
#define CLASS_1_45BB92167AED63A0_62_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CB26DA0)
#define CLASS_1_45BB92167AED63A0_62_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CB26E00)
#define CLASS_1_45BB92167AED63A0_62__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB270C0)
#define CLASS_1_45BB92167AED63A0_62__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CB26880)
#define CLASS_1_45BB92167AED63A0_62__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB267F0)

inline static constexpr unsigned int Class_1_45BB92167AED63A0_62_TypeDefinitionIndex = 29641;

class Class_1_45BB92167AED63A0_62 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_62_TypeDefinitionIndex)->GetStaticField(0x61500);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_62*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_62*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_62_TypeDefinitionIndex)->GetStaticField(0x61508);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_62_TypeDefinitionIndex)->GetStaticField(0x61510);
	}
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xD; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_6; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_62__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_45BB92167AED63A0_62* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_62*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_62__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_62__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_62*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_62*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_62_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_62_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_45BB92167AED63A0_62* Clone()
	{
		return ((::Class_1_45BB92167AED63A0_62*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_62_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_62_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_62_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_62_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_45BB92167AED63A0_62* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_45BB92167AED63A0_62*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_62_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_62_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_62_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_62_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_62_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_45BB92167AED63A0_62* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_62*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_62_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_62_MERGEFROM_1_OFFSET))(this, a1);
	}
};
