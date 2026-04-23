#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_6;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_355A2207C3B7A99D_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19CC2600)
#define CLASS_1_355A2207C3B7A99D_CLONE_OFFSET UNITYSDK_OFFSET(0x19CC22E0)
#define CLASS_1_355A2207C3B7A99D_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19CC2440)
#define CLASS_1_355A2207C3B7A99D_EQUALS_OFFSET UNITYSDK_OFFSET(0x19CC2390)
#define CLASS_1_355A2207C3B7A99D_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19CC24E0)
#define CLASS_1_355A2207C3B7A99D_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19CC26F0)
#define CLASS_1_355A2207C3B7A99D_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19CC2660)
#define CLASS_1_355A2207C3B7A99D_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x19CC2370)
#define CLASS_1_355A2207C3B7A99D_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19CC2210)
#define CLASS_1_355A2207C3B7A99D_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x19CC2380)
#define CLASS_1_355A2207C3B7A99D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19CC2240)
#define CLASS_1_355A2207C3B7A99D_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19CC2540)
#define CLASS_1_355A2207C3B7A99D_WRITETO_OFFSET UNITYSDK_OFFSET(0x19CC25A0)
#define CLASS_1_355A2207C3B7A99D__CCTOR_OFFSET UNITYSDK_OFFSET(0x19CC2780)
#define CLASS_1_355A2207C3B7A99D__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19CC2260)
#define CLASS_1_355A2207C3B7A99D__CTOR_OFFSET UNITYSDK_OFFSET(0x19CC2250)

inline static constexpr unsigned int Class_1_355A2207C3B7A99D_TypeDefinitionIndex = 24203;

class Class_1_355A2207C3B7A99D : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_355A2207C3B7A99D_TypeDefinitionIndex)->GetStaticField(0x65A90);
	}
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	::Class_1_D17272E82AE804C2_6* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_355A2207C3B7A99D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_355A2207C3B7A99D* Clone()
	{
		return ((::Class_1_355A2207C3B7A99D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_CLONE_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_6* Method_1_24748FC20F375725()
	{
		return ((::Class_1_D17272E82AE804C2_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D17272E82AE804C2_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_6*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_355A2207C3B7A99D* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_355A2207C3B7A99D*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_355A2207C3B7A99D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_MERGEFROM_1_OFFSET))(this, a1);
	}
};
