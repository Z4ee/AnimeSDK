#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9AD828BA811E7C7A_4;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_455008579EB95638_99_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19693660)
#define CLASS_1_455008579EB95638_99_CLONE_OFFSET UNITYSDK_OFFSET(0x19693240)
#define CLASS_1_455008579EB95638_99_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19693390)
#define CLASS_1_455008579EB95638_99_EQUALS_OFFSET UNITYSDK_OFFSET(0x196932A0)
#define CLASS_1_455008579EB95638_99_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19693440)
#define CLASS_1_455008579EB95638_99_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19693830)
#define CLASS_1_455008579EB95638_99_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19693790)
#define CLASS_1_455008579EB95638_99_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19693280)
#define CLASS_1_455008579EB95638_99_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19693130)
#define CLASS_1_455008579EB95638_99_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x19693270)
#define CLASS_1_455008579EB95638_99_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19693290)
#define CLASS_1_455008579EB95638_99_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19693160)
#define CLASS_1_455008579EB95638_99_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19693530)
#define CLASS_1_455008579EB95638_99_WRITETO_OFFSET UNITYSDK_OFFSET(0x19693590)
#define CLASS_1_455008579EB95638_99__CCTOR_OFFSET UNITYSDK_OFFSET(0x196938F0)
#define CLASS_1_455008579EB95638_99__CTOR_1_OFFSET UNITYSDK_OFFSET(0x196931B0)
#define CLASS_1_455008579EB95638_99__CTOR_OFFSET UNITYSDK_OFFSET(0x19693170)

inline static constexpr unsigned int Class_1_455008579EB95638_99_TypeDefinitionIndex = 32268;

class Class_1_455008579EB95638_99 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_99*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_99*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455008579EB95638_99_TypeDefinitionIndex)->GetStaticField(0x1C510);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_9AD828BA811E7C7A_4*>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_9AD828BA811E7C7A_4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455008579EB95638_99_TypeDefinitionIndex)->GetStaticField(0x1C518);
	}
	// static const ::System::Int32 Field_1_2 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_9AD828BA811E7C7A_4*>* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::System::UInt32 Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_99__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_455008579EB95638_99* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_99*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_99__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_99__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_99*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_99*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_99_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_99_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_455008579EB95638_99* Clone()
	{
		return ((::Class_1_455008579EB95638_99*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_99_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_9AD828BA811E7C7A_4*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_9AD828BA811E7C7A_4*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_99_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_99_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_99_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_99_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_455008579EB95638_99* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_455008579EB95638_99*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_99_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_99_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_99_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_99_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_99_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_455008579EB95638_99* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_99*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_99_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_99_MERGEFROM_1_OFFSET))(this, a1);
	}
};
