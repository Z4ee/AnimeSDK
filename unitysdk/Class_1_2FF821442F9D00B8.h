#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_419A79D235B9417C_1;
class Class_1_D17272E82AE804C2_81;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_2FF821442F9D00B8_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CBFB750)
#define CLASS_1_2FF821442F9D00B8_CLONE_OFFSET UNITYSDK_OFFSET(0x1CBFAFA0)
#define CLASS_1_2FF821442F9D00B8_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CBFB300)
#define CLASS_1_2FF821442F9D00B8_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CBFB0D0)
#define CLASS_1_2FF821442F9D00B8_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CBFB530)
#define CLASS_1_2FF821442F9D00B8_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CBFB960)
#define CLASS_1_2FF821442F9D00B8_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CBFB860)
#define CLASS_1_2FF821442F9D00B8_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CBFB090)
#define CLASS_1_2FF821442F9D00B8_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1CBFB0B0)
#define CLASS_1_2FF821442F9D00B8_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1CBFB070)
#define CLASS_1_2FF821442F9D00B8_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CBFAEA0)
#define CLASS_1_2FF821442F9D00B8_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CBFB0A0)
#define CLASS_1_2FF821442F9D00B8_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1CBFB0C0)
#define CLASS_1_2FF821442F9D00B8_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1CBFB080)
#define CLASS_1_2FF821442F9D00B8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CBFAED0)
#define CLASS_1_2FF821442F9D00B8_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CBFB5B0)
#define CLASS_1_2FF821442F9D00B8_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CBFB610)
#define CLASS_1_2FF821442F9D00B8__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CBFBB50)
#define CLASS_1_2FF821442F9D00B8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CBFAEF0)
#define CLASS_1_2FF821442F9D00B8__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBFAEE0)

inline static constexpr unsigned int Class_1_2FF821442F9D00B8_TypeDefinitionIndex = 25120;

class Class_1_2FF821442F9D00B8 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_2FF821442F9D00B8*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_2FF821442F9D00B8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2FF821442F9D00B8_TypeDefinitionIndex)->GetStaticField(0x3B580);
	}
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xB; // 0x0
	::Class_1_D17272E82AE804C2_81* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x18
	::Class_1_419A79D235B9417C_1* Field_1_6; // 0x20
	::System::UInt32 Field_1_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FF821442F9D00B8__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_2FF821442F9D00B8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2FF821442F9D00B8*))((::PBYTE)hIl2Cpp + CLASS_1_2FF821442F9D00B8__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2FF821442F9D00B8__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_2FF821442F9D00B8*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_2FF821442F9D00B8*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2FF821442F9D00B8_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FF821442F9D00B8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_2FF821442F9D00B8* Clone()
	{
		return ((::Class_1_2FF821442F9D00B8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FF821442F9D00B8_CLONE_OFFSET))(this);
	}

	::Class_1_419A79D235B9417C_1* Method_1_24748FC20F375725()
	{
		return ((::Class_1_419A79D235B9417C_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FF821442F9D00B8_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_419A79D235B9417C_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_419A79D235B9417C_1*))((::PBYTE)hIl2Cpp + CLASS_1_2FF821442F9D00B8_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FF821442F9D00B8_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2FF821442F9D00B8_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_D17272E82AE804C2_81* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_D17272E82AE804C2_81*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FF821442F9D00B8_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_D17272E82AE804C2_81* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_81*))((::PBYTE)hIl2Cpp + CLASS_1_2FF821442F9D00B8_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2FF821442F9D00B8_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_2FF821442F9D00B8* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2FF821442F9D00B8*))((::PBYTE)hIl2Cpp + CLASS_1_2FF821442F9D00B8_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FF821442F9D00B8_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FF821442F9D00B8_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2FF821442F9D00B8_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FF821442F9D00B8_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_2FF821442F9D00B8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2FF821442F9D00B8*))((::PBYTE)hIl2Cpp + CLASS_1_2FF821442F9D00B8_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2FF821442F9D00B8_MERGEFROM_1_OFFSET))(this, a1);
	}
};
