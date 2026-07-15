#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4F96E8997F9D5BB1_3;
class Class_1_729CE9624CEA7172;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_20D743894CDF214D_3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CF7B530)
#define CLASS_1_20D743894CDF214D_3_CLONE_OFFSET UNITYSDK_OFFSET(0x1CF7AE70)
#define CLASS_1_20D743894CDF214D_3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CF7B110)
#define CLASS_1_20D743894CDF214D_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CF7AEE0)
#define CLASS_1_20D743894CDF214D_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CF7B340)
#define CLASS_1_20D743894CDF214D_3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CF7B670)
#define CLASS_1_20D743894CDF214D_3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CF7B5C0)
#define CLASS_1_20D743894CDF214D_3_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1CF7AEC0)
#define CLASS_1_20D743894CDF214D_3_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1CF7AEA0)
#define CLASS_1_20D743894CDF214D_3_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CF7AD50)
#define CLASS_1_20D743894CDF214D_3_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1CF7AED0)
#define CLASS_1_20D743894CDF214D_3_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1CF7AEB0)
#define CLASS_1_20D743894CDF214D_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CF7AD80)
#define CLASS_1_20D743894CDF214D_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CF7B3F0)
#define CLASS_1_20D743894CDF214D_3_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CF7B450)
#define CLASS_1_20D743894CDF214D_3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF7B810)
#define CLASS_1_20D743894CDF214D_3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CF7ADA0)
#define CLASS_1_20D743894CDF214D_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF7AD90)

inline static constexpr unsigned int Class_1_20D743894CDF214D_3_TypeDefinitionIndex = 32439;

class Class_1_20D743894CDF214D_3 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_20D743894CDF214D_3*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_20D743894CDF214D_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_20D743894CDF214D_3_TypeDefinitionIndex)->GetStaticField(0x3D850);
	}
	// static const ::System::Int32 Field_1_1 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x8; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::Class_1_4F96E8997F9D5BB1_3* Field_1_4; // 0x18
	::Class_1_729CE9624CEA7172* Field_1_5; // 0x20

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

	::Class_1_729CE9624CEA7172* Method_1_24748FC20F375725()
	{
		return ((::Class_1_729CE9624CEA7172*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_3_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_729CE9624CEA7172* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_729CE9624CEA7172*))((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_3_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_4F96E8997F9D5BB1_3* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_4F96E8997F9D5BB1_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_3_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_4F96E8997F9D5BB1_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4F96E8997F9D5BB1_3*))((::PBYTE)hIl2Cpp + CLASS_1_20D743894CDF214D_3_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
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
