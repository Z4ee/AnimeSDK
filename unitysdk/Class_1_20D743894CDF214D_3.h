#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4AA6AAA49C7B466C;
class Class_1_FF03248024BAA97A_3;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_20D743894CDF214D_3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1947D440)
#define CLASS_1_20D743894CDF214D_3_CLONE_OFFSET UNITYSDK_OFFSET(0x1947CFF0)
#define CLASS_1_20D743894CDF214D_3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1947D1D0)
#define CLASS_1_20D743894CDF214D_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x1947D0E0)
#define CLASS_1_20D743894CDF214D_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1947D2B0)
#define CLASS_1_20D743894CDF214D_3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1947D570)
#define CLASS_1_20D743894CDF214D_3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1947D4D0)
#define CLASS_1_20D743894CDF214D_3_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1947D0C0)
#define CLASS_1_20D743894CDF214D_3_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1947D0A0)
#define CLASS_1_20D743894CDF214D_3_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1947CF00)
#define CLASS_1_20D743894CDF214D_3_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1947D0D0)
#define CLASS_1_20D743894CDF214D_3_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1947D0B0)
#define CLASS_1_20D743894CDF214D_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1947CF30)
#define CLASS_1_20D743894CDF214D_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1947D360)
#define CLASS_1_20D743894CDF214D_3_WRITETO_OFFSET UNITYSDK_OFFSET(0x1947D3C0)
#define CLASS_1_20D743894CDF214D_3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1947D630)
#define CLASS_1_20D743894CDF214D_3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1947CF50)
#define CLASS_1_20D743894CDF214D_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1947CF40)

inline static constexpr unsigned int Class_1_20D743894CDF214D_3_TypeDefinitionIndex = 31928;

class Class_1_20D743894CDF214D_3 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_20D743894CDF214D_3*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_20D743894CDF214D_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_20D743894CDF214D_3_TypeDefinitionIndex)->GetStaticField(0x4B960);
	}
	// static const ::System::Int32 Field_1_2 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Class_1_4AA6AAA49C7B466C* Field_1_5; // 0x18
	::Class_1_FF03248024BAA97A_3* Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_20D743894CDF214D_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_20D743894CDF214D_3*))((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_3__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_3__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_20D743894CDF214D_3*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_20D743894CDF214D_3*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_3_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_20D743894CDF214D_3* Clone()
	{
		return ((::Class_1_20D743894CDF214D_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_3_CLONE_OFFSET))(this);
	}

	::Class_1_FF03248024BAA97A_3* Method_1_24748FC20F375725()
	{
		return ((::Class_1_FF03248024BAA97A_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_3_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_FF03248024BAA97A_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FF03248024BAA97A_3*))((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_3_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_4AA6AAA49C7B466C* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_4AA6AAA49C7B466C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_3_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_4AA6AAA49C7B466C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4AA6AAA49C7B466C*))((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_3_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_20D743894CDF214D_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_20D743894CDF214D_3*))((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_20D743894CDF214D_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_20D743894CDF214D_3*))((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
