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

#define CLASS_1_7F6A638FBAAEC90B_20_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CCBE1B0)
#define CLASS_1_7F6A638FBAAEC90B_20_CLONE_OFFSET UNITYSDK_OFFSET(0x1CCBDC10)
#define CLASS_1_7F6A638FBAAEC90B_20_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CCBDCD0)
#define CLASS_1_7F6A638FBAAEC90B_20_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CCBDCA0)
#define CLASS_1_7F6A638FBAAEC90B_20_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CCBDE00)
#define CLASS_1_7F6A638FBAAEC90B_20_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CCBE3B0)
#define CLASS_1_7F6A638FBAAEC90B_20_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CCBE340)
#define CLASS_1_7F6A638FBAAEC90B_20_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1CCBDC80)
#define CLASS_1_7F6A638FBAAEC90B_20_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CCBDC60)
#define CLASS_1_7F6A638FBAAEC90B_20_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1CCBDC50)
#define CLASS_1_7F6A638FBAAEC90B_20_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1CCBDC40)
#define CLASS_1_7F6A638FBAAEC90B_20_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CCBDA50)
#define CLASS_1_7F6A638FBAAEC90B_20_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1CCBDC90)
#define CLASS_1_7F6A638FBAAEC90B_20_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CCBDC70)
#define CLASS_1_7F6A638FBAAEC90B_20_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CCBDA80)
#define CLASS_1_7F6A638FBAAEC90B_20_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CCBDFD0)
#define CLASS_1_7F6A638FBAAEC90B_20_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CCBE030)
#define CLASS_1_7F6A638FBAAEC90B_20__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCBE4E0)
#define CLASS_1_7F6A638FBAAEC90B_20__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CCBDB20)
#define CLASS_1_7F6A638FBAAEC90B_20__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCBDA90)

inline static constexpr unsigned int Class_1_7F6A638FBAAEC90B_20_TypeDefinitionIndex = 30089;

class Class_1_7F6A638FBAAEC90B_20 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_7F6A638FBAAEC90B_20*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_7F6A638FBAAEC90B_20*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7F6A638FBAAEC90B_20_TypeDefinitionIndex)->GetStaticField(0x67C50);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7F6A638FBAAEC90B_20_TypeDefinitionIndex)->GetStaticField(0x67C58);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7F6A638FBAAEC90B_20_TypeDefinitionIndex)->GetStaticField(0x67C60);
	}
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_7; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_8; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_9; // 0x20
	::System::UInt32 Field_1_10; // 0x28
	::System::UInt32 Field_1_11; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_20__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_7F6A638FBAAEC90B_20* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7F6A638FBAAEC90B_20*))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_20__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_20__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_7F6A638FBAAEC90B_20*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_7F6A638FBAAEC90B_20*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_20_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_20_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_7F6A638FBAAEC90B_20* Clone()
	{
		return ((::Class_1_7F6A638FBAAEC90B_20*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_20_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_20_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_20_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_20_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_20_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_20_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_20_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_20_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_7F6A638FBAAEC90B_20* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7F6A638FBAAEC90B_20*))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_20_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_20_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_20_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_20_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_20_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_7F6A638FBAAEC90B_20* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7F6A638FBAAEC90B_20*))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_20_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7F6A638FBAAEC90B_20_MERGEFROM_1_OFFSET))(this, a1);
	}
};
