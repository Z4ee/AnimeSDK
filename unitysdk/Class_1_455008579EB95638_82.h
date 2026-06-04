#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FBC46254F725B4C1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_455008579EB95638_82_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19FB03C0)
#define CLASS_1_455008579EB95638_82_CLONE_OFFSET UNITYSDK_OFFSET(0x19FAFF90)
#define CLASS_1_455008579EB95638_82_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19FB00E0)
#define CLASS_1_455008579EB95638_82_EQUALS_OFFSET UNITYSDK_OFFSET(0x19FAFFF0)
#define CLASS_1_455008579EB95638_82_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19FB0190)
#define CLASS_1_455008579EB95638_82_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19FB0570)
#define CLASS_1_455008579EB95638_82_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19FB04D0)
#define CLASS_1_455008579EB95638_82_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19FAFFC0)
#define CLASS_1_455008579EB95638_82_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19FAFE40)
#define CLASS_1_455008579EB95638_82_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x19FAFFE0)
#define CLASS_1_455008579EB95638_82_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19FAFFD0)
#define CLASS_1_455008579EB95638_82_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19FAFE70)
#define CLASS_1_455008579EB95638_82_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19FB0280)
#define CLASS_1_455008579EB95638_82_WRITETO_OFFSET UNITYSDK_OFFSET(0x19FB02E0)
#define CLASS_1_455008579EB95638_82__CCTOR_OFFSET UNITYSDK_OFFSET(0x19FB0740)
#define CLASS_1_455008579EB95638_82__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19FAFED0)
#define CLASS_1_455008579EB95638_82__CTOR_OFFSET UNITYSDK_OFFSET(0x19FAFE80)

inline static constexpr unsigned int Class_1_455008579EB95638_82_TypeDefinitionIndex = 30579;

class Class_1_455008579EB95638_82 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FBC46254F725B4C1*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FBC46254F725B4C1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455008579EB95638_82_TypeDefinitionIndex)->GetStaticField(0xD310);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_82*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_82*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455008579EB95638_82_TypeDefinitionIndex)->GetStaticField(0xD318);
	}
	// static const ::System::Int32 Field_1_2 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FBC46254F725B4C1*>* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x18
	::System::UInt32 Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_82__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_455008579EB95638_82* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_82*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_82__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_82__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_82*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_82*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_82_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_82_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_455008579EB95638_82* Clone()
	{
		return ((::Class_1_455008579EB95638_82*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_82_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_82_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_82_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FBC46254F725B4C1*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FBC46254F725B4C1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_82_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_82_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_455008579EB95638_82* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_455008579EB95638_82*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_82_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_82_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_82_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_82_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_82_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_455008579EB95638_82* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_82*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_82_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_82_MERGEFROM_1_OFFSET))(this, a1);
	}
};
