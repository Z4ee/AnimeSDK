#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FDFA365FE186E8F2_13;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_7FF19F6206AF6DD7_20_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CB7B1E0)
#define CLASS_1_7FF19F6206AF6DD7_20_CLONE_OFFSET UNITYSDK_OFFSET(0x1CB7AD40)
#define CLASS_1_7FF19F6206AF6DD7_20_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CB7AEF0)
#define CLASS_1_7FF19F6206AF6DD7_20_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CB7ADA0)
#define CLASS_1_7FF19F6206AF6DD7_20_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CB7B010)
#define CLASS_1_7FF19F6206AF6DD7_20_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CB7B3B0)
#define CLASS_1_7FF19F6206AF6DD7_20_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CB7B310)
#define CLASS_1_7FF19F6206AF6DD7_20_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CB7AD80)
#define CLASS_1_7FF19F6206AF6DD7_20_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CB7ABF0)
#define CLASS_1_7FF19F6206AF6DD7_20_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1CB7AD70)
#define CLASS_1_7FF19F6206AF6DD7_20_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CB7AD90)
#define CLASS_1_7FF19F6206AF6DD7_20_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CB7AC20)
#define CLASS_1_7FF19F6206AF6DD7_20_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CB7B080)
#define CLASS_1_7FF19F6206AF6DD7_20_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CB7B0E0)
#define CLASS_1_7FF19F6206AF6DD7_20__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB7B580)
#define CLASS_1_7FF19F6206AF6DD7_20__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CB7AC80)
#define CLASS_1_7FF19F6206AF6DD7_20__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB7AC30)

inline static constexpr unsigned int Class_1_7FF19F6206AF6DD7_20_TypeDefinitionIndex = 26725;

class Class_1_7FF19F6206AF6DD7_20 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_20*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_20*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FF19F6206AF6DD7_20_TypeDefinitionIndex)->GetStaticField(0x304D0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FDFA365FE186E8F2_13*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FDFA365FE186E8F2_13*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FF19F6206AF6DD7_20_TypeDefinitionIndex)->GetStaticField(0x304D8);
	}
	// static const ::System::Int32 Field_1_2 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FDFA365FE186E8F2_13*>* Field_1_5; // 0x18
	::System::UInt32 Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_20__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_7FF19F6206AF6DD7_20* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_20*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_20__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_20__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_20*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_20*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_20_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_20_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_7FF19F6206AF6DD7_20* Clone()
	{
		return ((::Class_1_7FF19F6206AF6DD7_20*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_20_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FDFA365FE186E8F2_13*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FDFA365FE186E8F2_13*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_20_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_20_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_20_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_20_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_7FF19F6206AF6DD7_20* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_20*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_20_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_20_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_20_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_20_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_20_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_7FF19F6206AF6DD7_20* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_20*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_20_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_20_MERGEFROM_1_OFFSET))(this, a1);
	}
};
