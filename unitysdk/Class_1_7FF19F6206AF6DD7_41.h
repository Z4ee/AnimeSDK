#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_668FE281FA72D3E8_4;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_7FF19F6206AF6DD7_41_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A182710)
#define CLASS_1_7FF19F6206AF6DD7_41_CLONE_OFFSET UNITYSDK_OFFSET(0x1A1822A0)
#define CLASS_1_7FF19F6206AF6DD7_41_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A182440)
#define CLASS_1_7FF19F6206AF6DD7_41_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A182320)
#define CLASS_1_7FF19F6206AF6DD7_41_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A1824F0)
#define CLASS_1_7FF19F6206AF6DD7_41_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A1828C0)
#define CLASS_1_7FF19F6206AF6DD7_41_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A182820)
#define CLASS_1_7FF19F6206AF6DD7_41_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A1822F0)
#define CLASS_1_7FF19F6206AF6DD7_41_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A182160)
#define CLASS_1_7FF19F6206AF6DD7_41_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1A182310)
#define CLASS_1_7FF19F6206AF6DD7_41_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A182300)
#define CLASS_1_7FF19F6206AF6DD7_41_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A1821C0)
#define CLASS_1_7FF19F6206AF6DD7_41_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A1825E0)
#define CLASS_1_7FF19F6206AF6DD7_41_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A182640)
#define CLASS_1_7FF19F6206AF6DD7_41__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A182A90)
#define CLASS_1_7FF19F6206AF6DD7_41__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A182210)
#define CLASS_1_7FF19F6206AF6DD7_41__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1821D0)

inline static constexpr unsigned int Class_1_7FF19F6206AF6DD7_41_TypeDefinitionIndex = 30346;

class Class_1_7FF19F6206AF6DD7_41 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_41*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_41*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FF19F6206AF6DD7_41_TypeDefinitionIndex)->GetStaticField(0x2DC90);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_668FE281FA72D3E8_4*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_668FE281FA72D3E8_4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FF19F6206AF6DD7_41_TypeDefinitionIndex)->GetStaticField(0x2DC98);
	}
	// static const ::System::Int32 Field_1_2 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xB; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_668FE281FA72D3E8_4*>* Field_1_5; // 0x18
	::System::UInt32 Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_41__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_7FF19F6206AF6DD7_41* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_41*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_41__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_41__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_41*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_41*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_41_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_41_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_7FF19F6206AF6DD7_41* Clone()
	{
		return ((::Class_1_7FF19F6206AF6DD7_41*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_41_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_41_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_41_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_668FE281FA72D3E8_4*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_668FE281FA72D3E8_4*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_41_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_41_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_7FF19F6206AF6DD7_41* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_41*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_41_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_41_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_41_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_41_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_41_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_7FF19F6206AF6DD7_41* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_41*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_41_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_41_MERGEFROM_1_OFFSET))(this, a1);
	}
};
