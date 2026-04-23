#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_732;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_355A2207C3B7A99D_68_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19316730)
#define CLASS_1_355A2207C3B7A99D_68_CLONE_OFFSET UNITYSDK_OFFSET(0x19316410)
#define CLASS_1_355A2207C3B7A99D_68_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19316570)
#define CLASS_1_355A2207C3B7A99D_68_EQUALS_OFFSET UNITYSDK_OFFSET(0x193164C0)
#define CLASS_1_355A2207C3B7A99D_68_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19316610)
#define CLASS_1_355A2207C3B7A99D_68_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19316820)
#define CLASS_1_355A2207C3B7A99D_68_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19316790)
#define CLASS_1_355A2207C3B7A99D_68_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x193164A0)
#define CLASS_1_355A2207C3B7A99D_68_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19316340)
#define CLASS_1_355A2207C3B7A99D_68_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x193164B0)
#define CLASS_1_355A2207C3B7A99D_68_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19316370)
#define CLASS_1_355A2207C3B7A99D_68_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19316670)
#define CLASS_1_355A2207C3B7A99D_68_WRITETO_OFFSET UNITYSDK_OFFSET(0x193166D0)
#define CLASS_1_355A2207C3B7A99D_68__CCTOR_OFFSET UNITYSDK_OFFSET(0x193168B0)
#define CLASS_1_355A2207C3B7A99D_68__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19316390)
#define CLASS_1_355A2207C3B7A99D_68__CTOR_OFFSET UNITYSDK_OFFSET(0x19316380)

inline static constexpr unsigned int Class_1_355A2207C3B7A99D_68_TypeDefinitionIndex = 30372;

class Class_1_355A2207C3B7A99D_68 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_68*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_68*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_355A2207C3B7A99D_68_TypeDefinitionIndex)->GetStaticField(0x60AF0);
	}
	// static const ::System::Int32 Field_1_2 = 0xF; // 0x0
	::Class_1_D17272E82AE804C2_732* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_68__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_355A2207C3B7A99D_68* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_68*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_68__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_68__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_68*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_355A2207C3B7A99D_68*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_68_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_68_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_355A2207C3B7A99D_68* Clone()
	{
		return ((::Class_1_355A2207C3B7A99D_68*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_68_CLONE_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_732* Method_1_24748FC20F375725()
	{
		return ((::Class_1_D17272E82AE804C2_732*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_68_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D17272E82AE804C2_732* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_732*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_68_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_68_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_355A2207C3B7A99D_68* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_355A2207C3B7A99D_68*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_68_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_68_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_68_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_68_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_68_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_355A2207C3B7A99D_68* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_68*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_68_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_355A2207C3B7A99D_68_MERGEFROM_1_OFFSET))(this, a1);
	}
};
