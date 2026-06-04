#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_766E1CF11E204F43_12;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_B5C07D9ED46C9111_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1AADF020)
#define CLASS_1_B5C07D9ED46C9111_CLONE_OFFSET UNITYSDK_OFFSET(0x1AADEBE0)
#define CLASS_1_B5C07D9ED46C9111_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1AADED60)
#define CLASS_1_B5C07D9ED46C9111_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AADECA0)
#define CLASS_1_B5C07D9ED46C9111_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AADEE10)
#define CLASS_1_B5C07D9ED46C9111_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1AADF190)
#define CLASS_1_B5C07D9ED46C9111_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1AADF080)
#define CLASS_1_B5C07D9ED46C9111_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1AADEC60)
#define CLASS_1_B5C07D9ED46C9111_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1AADEB10)
#define CLASS_1_B5C07D9ED46C9111_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1AADEC70)
#define CLASS_1_B5C07D9ED46C9111_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1AADEC90)
#define CLASS_1_B5C07D9ED46C9111_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1AADEC80)
#define CLASS_1_B5C07D9ED46C9111_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1AADEB40)
#define CLASS_1_B5C07D9ED46C9111_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AADEF40)
#define CLASS_1_B5C07D9ED46C9111_WRITETO_OFFSET UNITYSDK_OFFSET(0x1AADEFA0)
#define CLASS_1_B5C07D9ED46C9111__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AADF360)
#define CLASS_1_B5C07D9ED46C9111__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AADEB60)
#define CLASS_1_B5C07D9ED46C9111__CTOR_OFFSET UNITYSDK_OFFSET(0x1AADEB50)

inline static constexpr unsigned int Class_1_B5C07D9ED46C9111_TypeDefinitionIndex = 31193;

class Class_1_B5C07D9ED46C9111 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_B5C07D9ED46C9111*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_B5C07D9ED46C9111*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B5C07D9ED46C9111_TypeDefinitionIndex)->GetStaticField(0x11BC0);
	}
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::Class_1_766E1CF11E204F43_12* Field_1_4; // 0x18
	::System::Boolean Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5C07D9ED46C9111__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_B5C07D9ED46C9111* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B5C07D9ED46C9111*))((::PBYTE)hIl2Cpp + CLASS_1_B5C07D9ED46C9111__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B5C07D9ED46C9111__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_B5C07D9ED46C9111*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_B5C07D9ED46C9111*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B5C07D9ED46C9111_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5C07D9ED46C9111_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_B5C07D9ED46C9111* Clone()
	{
		return ((::Class_1_B5C07D9ED46C9111*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5C07D9ED46C9111_CLONE_OFFSET))(this);
	}

	::Class_1_766E1CF11E204F43_12* Method_1_24748FC20F375725()
	{
		return ((::Class_1_766E1CF11E204F43_12*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5C07D9ED46C9111_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_766E1CF11E204F43_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_766E1CF11E204F43_12*))((::PBYTE)hIl2Cpp + CLASS_1_B5C07D9ED46C9111_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5C07D9ED46C9111_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B5C07D9ED46C9111_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B5C07D9ED46C9111_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_B5C07D9ED46C9111* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B5C07D9ED46C9111*))((::PBYTE)hIl2Cpp + CLASS_1_B5C07D9ED46C9111_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5C07D9ED46C9111_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5C07D9ED46C9111_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B5C07D9ED46C9111_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5C07D9ED46C9111_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_B5C07D9ED46C9111* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B5C07D9ED46C9111*))((::PBYTE)hIl2Cpp + CLASS_1_B5C07D9ED46C9111_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B5C07D9ED46C9111_MERGEFROM_1_OFFSET))(this, a1);
	}
};
