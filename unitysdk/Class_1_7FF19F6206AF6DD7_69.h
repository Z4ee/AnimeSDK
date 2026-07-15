#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9525FD18F338340F;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_7FF19F6206AF6DD7_69_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CC83990)
#define CLASS_1_7FF19F6206AF6DD7_69_CLONE_OFFSET UNITYSDK_OFFSET(0x1CC834D0)
#define CLASS_1_7FF19F6206AF6DD7_69_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CC83680)
#define CLASS_1_7FF19F6206AF6DD7_69_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CC83530)
#define CLASS_1_7FF19F6206AF6DD7_69_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CC837B0)
#define CLASS_1_7FF19F6206AF6DD7_69_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CC83B40)
#define CLASS_1_7FF19F6206AF6DD7_69_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CC83AA0)
#define CLASS_1_7FF19F6206AF6DD7_69_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CC83500)
#define CLASS_1_7FF19F6206AF6DD7_69_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CC83380)
#define CLASS_1_7FF19F6206AF6DD7_69_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1CC83520)
#define CLASS_1_7FF19F6206AF6DD7_69_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CC83510)
#define CLASS_1_7FF19F6206AF6DD7_69_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CC833B0)
#define CLASS_1_7FF19F6206AF6DD7_69_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CC83820)
#define CLASS_1_7FF19F6206AF6DD7_69_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CC83880)
#define CLASS_1_7FF19F6206AF6DD7_69__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC83D10)
#define CLASS_1_7FF19F6206AF6DD7_69__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CC83410)
#define CLASS_1_7FF19F6206AF6DD7_69__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC833C0)

inline static constexpr unsigned int Class_1_7FF19F6206AF6DD7_69_TypeDefinitionIndex = 31105;

class Class_1_7FF19F6206AF6DD7_69 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_69*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_69*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FF19F6206AF6DD7_69_TypeDefinitionIndex)->GetStaticField(0x1AB90);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_9525FD18F338340F*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_9525FD18F338340F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FF19F6206AF6DD7_69_TypeDefinitionIndex)->GetStaticField(0x1AB98);
	}
	// static const ::System::Int32 Field_1_2 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_9525FD18F338340F*>* Field_1_5; // 0x18
	::System::UInt32 Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_69__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_7FF19F6206AF6DD7_69* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_69*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_69__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_69__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_69*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_69*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_69_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_69_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_7FF19F6206AF6DD7_69* Clone()
	{
		return ((::Class_1_7FF19F6206AF6DD7_69*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_69_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_69_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_69_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_9525FD18F338340F*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_9525FD18F338340F*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_69_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_69_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_7FF19F6206AF6DD7_69* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_69*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_69_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_69_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_69_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_69_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_69_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_7FF19F6206AF6DD7_69* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_69*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_69_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_69_MERGEFROM_1_OFFSET))(this, a1);
	}
};
