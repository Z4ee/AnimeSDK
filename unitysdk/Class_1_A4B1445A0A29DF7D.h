#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class PlayerAssistInfo; }
namespace System { class String; }

#define CLASS_1_A4B1445A0A29DF7D_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C942A40)
#define CLASS_1_A4B1445A0A29DF7D_CLONE_OFFSET UNITYSDK_OFFSET(0x1C9423E0)
#define CLASS_1_A4B1445A0A29DF7D_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C9425F0)
#define CLASS_1_A4B1445A0A29DF7D_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C942480)
#define CLASS_1_A4B1445A0A29DF7D_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C9428C0)
#define CLASS_1_A4B1445A0A29DF7D_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C942B10)
#define CLASS_1_A4B1445A0A29DF7D_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C942AA0)
#define CLASS_1_A4B1445A0A29DF7D_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C942320)
#define CLASS_1_A4B1445A0A29DF7D_METHOD_1_89019532EF66F500_OFFSET UNITYSDK_OFFSET(0x1C942460)
#define CLASS_1_A4B1445A0A29DF7D_METHOD_1_F09A446558DACFC3_OFFSET UNITYSDK_OFFSET(0x1C942470)
#define CLASS_1_A4B1445A0A29DF7D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C942350)
#define CLASS_1_A4B1445A0A29DF7D_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C942950)
#define CLASS_1_A4B1445A0A29DF7D_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C9429B0)
#define CLASS_1_A4B1445A0A29DF7D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C942C90)
#define CLASS_1_A4B1445A0A29DF7D__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C942370)
#define CLASS_1_A4B1445A0A29DF7D__CTOR_OFFSET UNITYSDK_OFFSET(0x1C942360)

inline static constexpr unsigned int Class_1_A4B1445A0A29DF7D_TypeDefinitionIndex = 27787;

class Class_1_A4B1445A0A29DF7D : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_A4B1445A0A29DF7D*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_A4B1445A0A29DF7D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A4B1445A0A29DF7D_TypeDefinitionIndex)->GetStaticField(0x4B570);
	}
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	::Proto::PlayerAssistInfo* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4B1445A0A29DF7D__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_A4B1445A0A29DF7D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A4B1445A0A29DF7D*))((::PBYTE)hIl2Cpp + CLASS_1_A4B1445A0A29DF7D__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A4B1445A0A29DF7D__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_A4B1445A0A29DF7D*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_A4B1445A0A29DF7D*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A4B1445A0A29DF7D_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4B1445A0A29DF7D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_A4B1445A0A29DF7D* Clone()
	{
		return ((::Class_1_A4B1445A0A29DF7D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4B1445A0A29DF7D_CLONE_OFFSET))(this);
	}

	::Proto::PlayerAssistInfo* Method_1_89019532EF66F500()
	{
		return ((::Proto::PlayerAssistInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4B1445A0A29DF7D_METHOD_1_89019532EF66F500_OFFSET))(this);
	}

	::System::Void Method_1_F09A446558DACFC3(::Proto::PlayerAssistInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::PlayerAssistInfo*))((::PBYTE)hIl2Cpp + CLASS_1_A4B1445A0A29DF7D_METHOD_1_F09A446558DACFC3_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A4B1445A0A29DF7D_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_A4B1445A0A29DF7D* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A4B1445A0A29DF7D*))((::PBYTE)hIl2Cpp + CLASS_1_A4B1445A0A29DF7D_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4B1445A0A29DF7D_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4B1445A0A29DF7D_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A4B1445A0A29DF7D_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4B1445A0A29DF7D_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_A4B1445A0A29DF7D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A4B1445A0A29DF7D*))((::PBYTE)hIl2Cpp + CLASS_1_A4B1445A0A29DF7D_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A4B1445A0A29DF7D_MERGEFROM_1_OFFSET))(this, a1);
	}
};
