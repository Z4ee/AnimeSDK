#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_67;
class Class_1_D5163FD2F1F43324;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_B4F136441499BAFA_5_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19BDB320)
#define CLASS_1_B4F136441499BAFA_5_CLONE_OFFSET UNITYSDK_OFFSET(0x19BDAEC0)
#define CLASS_1_B4F136441499BAFA_5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19BDB0F0)
#define CLASS_1_B4F136441499BAFA_5_EQUALS_OFFSET UNITYSDK_OFFSET(0x19BDB000)
#define CLASS_1_B4F136441499BAFA_5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19BDB1D0)
#define CLASS_1_B4F136441499BAFA_5_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19BDB4B0)
#define CLASS_1_B4F136441499BAFA_5_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19BDB3B0)
#define CLASS_1_B4F136441499BAFA_5_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x19BDAFE0)
#define CLASS_1_B4F136441499BAFA_5_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x19BDAFC0)
#define CLASS_1_B4F136441499BAFA_5_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19BDAD80)
#define CLASS_1_B4F136441499BAFA_5_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x19BDAFF0)
#define CLASS_1_B4F136441499BAFA_5_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x19BDAFD0)
#define CLASS_1_B4F136441499BAFA_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19BDADB0)
#define CLASS_1_B4F136441499BAFA_5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19BDB240)
#define CLASS_1_B4F136441499BAFA_5_WRITETO_OFFSET UNITYSDK_OFFSET(0x19BDB2A0)
#define CLASS_1_B4F136441499BAFA_5__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BDB570)
#define CLASS_1_B4F136441499BAFA_5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19BDADD0)
#define CLASS_1_B4F136441499BAFA_5__CTOR_OFFSET UNITYSDK_OFFSET(0x19BDADC0)

inline static constexpr unsigned int Class_1_B4F136441499BAFA_5_TypeDefinitionIndex = 29291;

class Class_1_B4F136441499BAFA_5 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_B4F136441499BAFA_5*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_B4F136441499BAFA_5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4F136441499BAFA_5_TypeDefinitionIndex)->GetStaticField(0x528B0);
	}
	// static const ::System::Int32 Field_1_2 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x8; // 0x0
	::Class_1_21C7581DFE99F091_67* Field_1_3; // 0x10
	::Class_1_D5163FD2F1F43324* Field_1_5; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_B4F136441499BAFA_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4F136441499BAFA_5*))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_5__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_5__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_B4F136441499BAFA_5*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_B4F136441499BAFA_5*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_5_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_B4F136441499BAFA_5* Clone()
	{
		return ((::Class_1_B4F136441499BAFA_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_5_CLONE_OFFSET))(this);
	}

	::Class_1_21C7581DFE99F091_67* Method_1_24748FC20F375725()
	{
		return ((::Class_1_21C7581DFE99F091_67*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_5_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_21C7581DFE99F091_67* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_67*))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_5_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_D5163FD2F1F43324* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_D5163FD2F1F43324*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_5_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_D5163FD2F1F43324* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D5163FD2F1F43324*))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_5_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_5_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_B4F136441499BAFA_5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B4F136441499BAFA_5*))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_5_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_5_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_5_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_5_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_5_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_B4F136441499BAFA_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4F136441499BAFA_5*))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_5_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B4F136441499BAFA_5_MERGEFROM_1_OFFSET))(this, a1);
	}
};
