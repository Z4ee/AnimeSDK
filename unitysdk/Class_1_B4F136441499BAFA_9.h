#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4F96E8997F9D5BB1_4;
class Class_1_7E8AFD2F9BD838AC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_B4F136441499BAFA_9_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C725420)
#define CLASS_1_B4F136441499BAFA_9_CLONE_OFFSET UNITYSDK_OFFSET(0x1C724CA0)
#define CLASS_1_B4F136441499BAFA_9_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C725000)
#define CLASS_1_B4F136441499BAFA_9_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C724DD0)
#define CLASS_1_B4F136441499BAFA_9_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C725230)
#define CLASS_1_B4F136441499BAFA_9_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C725580)
#define CLASS_1_B4F136441499BAFA_9_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C7254B0)
#define CLASS_1_B4F136441499BAFA_9_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1C724DB0)
#define CLASS_1_B4F136441499BAFA_9_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C724D90)
#define CLASS_1_B4F136441499BAFA_9_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C724B70)
#define CLASS_1_B4F136441499BAFA_9_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1C724DC0)
#define CLASS_1_B4F136441499BAFA_9_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C724DA0)
#define CLASS_1_B4F136441499BAFA_9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C724BA0)
#define CLASS_1_B4F136441499BAFA_9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C7252E0)
#define CLASS_1_B4F136441499BAFA_9_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C725340)
#define CLASS_1_B4F136441499BAFA_9__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C725730)
#define CLASS_1_B4F136441499BAFA_9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C724BC0)
#define CLASS_1_B4F136441499BAFA_9__CTOR_OFFSET UNITYSDK_OFFSET(0x1C724BB0)

inline static constexpr unsigned int Class_1_B4F136441499BAFA_9_TypeDefinitionIndex = 32126;

class Class_1_B4F136441499BAFA_9 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_B4F136441499BAFA_9*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_B4F136441499BAFA_9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4F136441499BAFA_9_TypeDefinitionIndex)->GetStaticField(0x22F10);
	}
	// static const ::System::Int32 Field_1_1 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xF; // 0x0
	::Class_1_4F96E8997F9D5BB1_4* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x18
	::Class_1_7E8AFD2F9BD838AC* Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_9__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_B4F136441499BAFA_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4F136441499BAFA_9*))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_9__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_9__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_B4F136441499BAFA_9*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_B4F136441499BAFA_9*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_9_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_B4F136441499BAFA_9* Clone()
	{
		return ((::Class_1_B4F136441499BAFA_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_9_CLONE_OFFSET))(this);
	}

	::Class_1_4F96E8997F9D5BB1_4* Method_1_24748FC20F375725()
	{
		return ((::Class_1_4F96E8997F9D5BB1_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_9_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_4F96E8997F9D5BB1_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4F96E8997F9D5BB1_4*))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_9_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_7E8AFD2F9BD838AC* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_7E8AFD2F9BD838AC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_9_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_7E8AFD2F9BD838AC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7E8AFD2F9BD838AC*))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_9_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_9_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_B4F136441499BAFA_9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B4F136441499BAFA_9*))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_9_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_9_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_9_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_9_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_9_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_B4F136441499BAFA_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4F136441499BAFA_9*))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_9_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_9_MERGEFROM_1_OFFSET))(this, a1);
	}
};
