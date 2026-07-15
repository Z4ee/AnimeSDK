#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B4F136441499BAFA_8;
class Class_1_F073B9577558DC97;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_20D743894CDF214D_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C3C9B00)
#define CLASS_1_20D743894CDF214D_2_CLONE_OFFSET UNITYSDK_OFFSET(0x1C3C9470)
#define CLASS_1_20D743894CDF214D_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C3C9790)
#define CLASS_1_20D743894CDF214D_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C3C9560)
#define CLASS_1_20D743894CDF214D_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C3C99C0)
#define CLASS_1_20D743894CDF214D_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C3C9C30)
#define CLASS_1_20D743894CDF214D_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C3C9B90)
#define CLASS_1_20D743894CDF214D_2_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1C3C9540)
#define CLASS_1_20D743894CDF214D_2_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C3C9520)
#define CLASS_1_20D743894CDF214D_2_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C3C9380)
#define CLASS_1_20D743894CDF214D_2_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1C3C9550)
#define CLASS_1_20D743894CDF214D_2_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C3C9530)
#define CLASS_1_20D743894CDF214D_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C3C93B0)
#define CLASS_1_20D743894CDF214D_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C3C9A20)
#define CLASS_1_20D743894CDF214D_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C3C9A80)
#define CLASS_1_20D743894CDF214D_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3C9DD0)
#define CLASS_1_20D743894CDF214D_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C3C93D0)
#define CLASS_1_20D743894CDF214D_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3C93C0)

inline static constexpr unsigned int Class_1_20D743894CDF214D_2_TypeDefinitionIndex = 31263;

class Class_1_20D743894CDF214D_2 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_20D743894CDF214D_2*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_20D743894CDF214D_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_20D743894CDF214D_2_TypeDefinitionIndex)->GetStaticField(0x20EA0);
	}
	// static const ::System::Int32 Field_1_1 = 0x3C0; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x1C0; // 0x0
	::Class_1_F073B9577558DC97* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x18
	::Class_1_B4F136441499BAFA_8* Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_20D743894CDF214D_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_20D743894CDF214D_2*))((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_2__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_20D743894CDF214D_2*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_20D743894CDF214D_2*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_2_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_20D743894CDF214D_2* Clone()
	{
		return ((::Class_1_20D743894CDF214D_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_2_CLONE_OFFSET))(this);
	}

	::Class_1_B4F136441499BAFA_8* Method_1_24748FC20F375725()
	{
		return ((::Class_1_B4F136441499BAFA_8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_2_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_B4F136441499BAFA_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4F136441499BAFA_8*))((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_2_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_F073B9577558DC97* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_F073B9577558DC97*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_2_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_F073B9577558DC97* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F073B9577558DC97*))((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_2_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_20D743894CDF214D_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_20D743894CDF214D_2*))((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_20D743894CDF214D_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_20D743894CDF214D_2*))((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
