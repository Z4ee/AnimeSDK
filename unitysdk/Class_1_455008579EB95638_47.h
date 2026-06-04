#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9F9C2AEAEFFE3610_6;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_455008579EB95638_47_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A733320)
#define CLASS_1_455008579EB95638_47_CLONE_OFFSET UNITYSDK_OFFSET(0x1A732F00)
#define CLASS_1_455008579EB95638_47_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A733050)
#define CLASS_1_455008579EB95638_47_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A732F60)
#define CLASS_1_455008579EB95638_47_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A733100)
#define CLASS_1_455008579EB95638_47_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A7334F0)
#define CLASS_1_455008579EB95638_47_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A733450)
#define CLASS_1_455008579EB95638_47_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A732F40)
#define CLASS_1_455008579EB95638_47_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A732DF0)
#define CLASS_1_455008579EB95638_47_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1A732F30)
#define CLASS_1_455008579EB95638_47_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A732F50)
#define CLASS_1_455008579EB95638_47_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A732E20)
#define CLASS_1_455008579EB95638_47_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A7331F0)
#define CLASS_1_455008579EB95638_47_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A733250)
#define CLASS_1_455008579EB95638_47__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A7336B0)
#define CLASS_1_455008579EB95638_47__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A732E70)
#define CLASS_1_455008579EB95638_47__CTOR_OFFSET UNITYSDK_OFFSET(0x1A732E30)

inline static constexpr unsigned int Class_1_455008579EB95638_47_TypeDefinitionIndex = 28398;

class Class_1_455008579EB95638_47 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_47*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_47*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455008579EB95638_47_TypeDefinitionIndex)->GetStaticField(0x3E3D0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_9F9C2AEAEFFE3610_6*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_9F9C2AEAEFFE3610_6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455008579EB95638_47_TypeDefinitionIndex)->GetStaticField(0x3E3D8);
	}
	// static const ::System::Int32 Field_1_2 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_9F9C2AEAEFFE3610_6*>* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x18
	::System::UInt32 Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_47__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_455008579EB95638_47* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_47*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_47__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_47__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_47*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_455008579EB95638_47*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_47_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_47_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_455008579EB95638_47* Clone()
	{
		return ((::Class_1_455008579EB95638_47*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_47_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_9F9C2AEAEFFE3610_6*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_9F9C2AEAEFFE3610_6*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_47_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_47_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_47_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_47_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_455008579EB95638_47* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_455008579EB95638_47*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_47_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_47_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_47_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_47_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_47_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_455008579EB95638_47* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_47*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_47_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_455008579EB95638_47_MERGEFROM_1_OFFSET))(this, a1);
	}
};
