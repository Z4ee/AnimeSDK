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
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_092355F7336672B8_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A0BCB50)
#define CLASS_1_092355F7336672B8_CLONE_OFFSET UNITYSDK_OFFSET(0x1A0BC650)
#define CLASS_1_092355F7336672B8_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A0BC710)
#define CLASS_1_092355F7336672B8_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A0BC6E0)
#define CLASS_1_092355F7336672B8_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A0BC810)
#define CLASS_1_092355F7336672B8_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A0BCD80)
#define CLASS_1_092355F7336672B8_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A0BCCC0)
#define CLASS_1_092355F7336672B8_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A0BC6C0)
#define CLASS_1_092355F7336672B8_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1A0BC6B0)
#define CLASS_1_092355F7336672B8_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1A0BC6A0)
#define CLASS_1_092355F7336672B8_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A0BC450)
#define CLASS_1_092355F7336672B8_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x1A0BC690)
#define CLASS_1_092355F7336672B8_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x1A0BC680)
#define CLASS_1_092355F7336672B8_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A0BC6D0)
#define CLASS_1_092355F7336672B8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A0BC480)
#define CLASS_1_092355F7336672B8_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A0BC9F0)
#define CLASS_1_092355F7336672B8_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A0BCA50)
#define CLASS_1_092355F7336672B8__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0BCF10)
#define CLASS_1_092355F7336672B8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A0BC520)
#define CLASS_1_092355F7336672B8__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0BC490)

inline static constexpr unsigned int Class_1_092355F7336672B8_TypeDefinitionIndex = 26757;

class Class_1_092355F7336672B8 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_092355F7336672B8*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_092355F7336672B8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_092355F7336672B8_TypeDefinitionIndex)->GetStaticField(0x3D020);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_092355F7336672B8_TypeDefinitionIndex)->GetStaticField(0x3D028);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_092355F7336672B8_TypeDefinitionIndex)->GetStaticField(0x3D030);
	}
	// static const ::System::Int32 Field_1_3 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xB; // 0x0
	::Proto::ItemList* Field_1_7; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_8; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_9; // 0x20
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_10; // 0x28
	::System::UInt32 Field_1_11; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_092355F7336672B8__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_092355F7336672B8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_092355F7336672B8*))((::PBYTE)hIl2Cpp + CLASS_1_092355F7336672B8__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_092355F7336672B8__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_092355F7336672B8*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_092355F7336672B8*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_092355F7336672B8_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_092355F7336672B8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_092355F7336672B8* Clone()
	{
		return ((::Class_1_092355F7336672B8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_092355F7336672B8_CLONE_OFFSET))(this);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_092355F7336672B8_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_092355F7336672B8_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_092355F7336672B8_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_092355F7336672B8_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_092355F7336672B8_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_092355F7336672B8_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_092355F7336672B8_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_092355F7336672B8* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_092355F7336672B8*))((::PBYTE)hIl2Cpp + CLASS_1_092355F7336672B8_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_092355F7336672B8_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_092355F7336672B8_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_092355F7336672B8_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_092355F7336672B8_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_092355F7336672B8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_092355F7336672B8*))((::PBYTE)hIl2Cpp + CLASS_1_092355F7336672B8_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_092355F7336672B8_MERGEFROM_1_OFFSET))(this, a1);
	}
};
