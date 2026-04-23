#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_106;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_455008579EB95638_106_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19936CF0)
#define CLASS_1_455008579EB95638_106_CLONE_OFFSET UNITYSDK_OFFSET(0x199368C0)
#define CLASS_1_455008579EB95638_106_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19936A10)
#define CLASS_1_455008579EB95638_106_EQUALS_OFFSET UNITYSDK_OFFSET(0x19936920)
#define CLASS_1_455008579EB95638_106_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19936AC0)
#define CLASS_1_455008579EB95638_106_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19936EC0)
#define CLASS_1_455008579EB95638_106_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19936E20)
#define CLASS_1_455008579EB95638_106_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19936900)
#define CLASS_1_455008579EB95638_106_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x199367B0)
#define CLASS_1_455008579EB95638_106_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x199368F0)
#define CLASS_1_455008579EB95638_106_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19936910)
#define CLASS_1_455008579EB95638_106_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x199367E0)
#define CLASS_1_455008579EB95638_106_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19936BB0)
#define CLASS_1_455008579EB95638_106_WRITETO_OFFSET UNITYSDK_OFFSET(0x19936C10)
#define CLASS_1_455008579EB95638_106__CCTOR_OFFSET UNITYSDK_OFFSET(0x19936F80)
#define CLASS_1_455008579EB95638_106__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19936830)
#define CLASS_1_455008579EB95638_106__CTOR_OFFSET UNITYSDK_OFFSET(0x199367F0)

inline static constexpr unsigned int Class_1_455008579EB95638_106_TypeDefinitionIndex = 32609;

class Class_1_455008579EB95638_106 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_106*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_106*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455008579EB95638_106_TypeDefinitionIndex)->GetStaticField(0x5D600);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_21C7581DFE99F091_106*>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_21C7581DFE99F091_106*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455008579EB95638_106_TypeDefinitionIndex)->GetStaticField(0x5D608);
	}
	// static const ::System::Int32 Field_1_2 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xF; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_106*>* Field_1_4; // 0x18
	::System::UInt32 Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_106__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_455008579EB95638_106* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_106*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_106__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_106__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_106*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_106*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_106_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_106_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_455008579EB95638_106* Clone()
	{
		return ((::Class_1_455008579EB95638_106*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_106_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_106*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21C7581DFE99F091_106*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_106_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_106_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_106_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_106_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_455008579EB95638_106* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_455008579EB95638_106*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_106_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_106_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_106_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_106_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_106_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_455008579EB95638_106* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_106*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_106_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_106_MERGEFROM_1_OFFSET))(this, a1);
	}
};
