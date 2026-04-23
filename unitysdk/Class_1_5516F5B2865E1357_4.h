#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_64E52A323C80D766_2;
class Class_1_D17272E82AE804C2_669;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5516F5B2865E1357_4_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19476560)
#define CLASS_1_5516F5B2865E1357_4_CLONE_OFFSET UNITYSDK_OFFSET(0x194760C0)
#define CLASS_1_5516F5B2865E1357_4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19476300)
#define CLASS_1_5516F5B2865E1357_4_EQUALS_OFFSET UNITYSDK_OFFSET(0x194761F0)
#define CLASS_1_5516F5B2865E1357_4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x194763E0)
#define CLASS_1_5516F5B2865E1357_4_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x194766F0)
#define CLASS_1_5516F5B2865E1357_4_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x194765F0)
#define CLASS_1_5516F5B2865E1357_4_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x194761D0)
#define CLASS_1_5516F5B2865E1357_4_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x194761B0)
#define CLASS_1_5516F5B2865E1357_4_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19475F90)
#define CLASS_1_5516F5B2865E1357_4_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x194761E0)
#define CLASS_1_5516F5B2865E1357_4_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x194761C0)
#define CLASS_1_5516F5B2865E1357_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19475FF0)
#define CLASS_1_5516F5B2865E1357_4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19476480)
#define CLASS_1_5516F5B2865E1357_4_WRITETO_OFFSET UNITYSDK_OFFSET(0x194764E0)
#define CLASS_1_5516F5B2865E1357_4__CCTOR_OFFSET UNITYSDK_OFFSET(0x194767B0)
#define CLASS_1_5516F5B2865E1357_4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19476010)
#define CLASS_1_5516F5B2865E1357_4__CTOR_OFFSET UNITYSDK_OFFSET(0x19476000)

inline static constexpr unsigned int Class_1_5516F5B2865E1357_4_TypeDefinitionIndex = 29799;

class Class_1_5516F5B2865E1357_4 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_5516F5B2865E1357_4*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5516F5B2865E1357_4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5516F5B2865E1357_4_TypeDefinitionIndex)->GetStaticField(0x4AFA0);
	}
	// static const ::System::Int32 Field_1_2 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Class_1_D17272E82AE804C2_669* Field_1_5; // 0x18
	::Class_1_64E52A323C80D766_2* Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5516F5B2865E1357_4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5516F5B2865E1357_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5516F5B2865E1357_4*))((::PBYTE)hIl2Cpp + CLASS_1_5516F5B2865E1357_4__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5516F5B2865E1357_4__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5516F5B2865E1357_4*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5516F5B2865E1357_4*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5516F5B2865E1357_4_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5516F5B2865E1357_4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5516F5B2865E1357_4* Clone()
	{
		return ((::Class_1_5516F5B2865E1357_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5516F5B2865E1357_4_CLONE_OFFSET))(this);
	}

	::Class_1_64E52A323C80D766_2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_64E52A323C80D766_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5516F5B2865E1357_4_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_64E52A323C80D766_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64E52A323C80D766_2*))((::PBYTE)hIl2Cpp + CLASS_1_5516F5B2865E1357_4_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_D17272E82AE804C2_669* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_D17272E82AE804C2_669*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5516F5B2865E1357_4_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_D17272E82AE804C2_669* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_669*))((::PBYTE)hIl2Cpp + CLASS_1_5516F5B2865E1357_4_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5516F5B2865E1357_4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5516F5B2865E1357_4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5516F5B2865E1357_4*))((::PBYTE)hIl2Cpp + CLASS_1_5516F5B2865E1357_4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5516F5B2865E1357_4_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5516F5B2865E1357_4_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5516F5B2865E1357_4_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5516F5B2865E1357_4_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5516F5B2865E1357_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5516F5B2865E1357_4*))((::PBYTE)hIl2Cpp + CLASS_1_5516F5B2865E1357_4_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5516F5B2865E1357_4_MERGEFROM_1_OFFSET))(this, a1);
	}
};
