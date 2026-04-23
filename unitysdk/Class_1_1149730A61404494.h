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

#define CLASS_1_1149730A61404494_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x193F3EC0)
#define CLASS_1_1149730A61404494_CLONE_OFFSET UNITYSDK_OFFSET(0x193F3B80)
#define CLASS_1_1149730A61404494_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x193F3CD0)
#define CLASS_1_1149730A61404494_EQUALS_OFFSET UNITYSDK_OFFSET(0x193F3C20)
#define CLASS_1_1149730A61404494_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x193F3D70)
#define CLASS_1_1149730A61404494_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x193F3F90)
#define CLASS_1_1149730A61404494_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x193F3F20)
#define CLASS_1_1149730A61404494_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x193F3AC0)
#define CLASS_1_1149730A61404494_METHOD_1_89019532EF66F500_OFFSET UNITYSDK_OFFSET(0x193F3C00)
#define CLASS_1_1149730A61404494_METHOD_1_F09A446558DACFC3_OFFSET UNITYSDK_OFFSET(0x193F3C10)
#define CLASS_1_1149730A61404494_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x193F3AF0)
#define CLASS_1_1149730A61404494_TOSTRING_OFFSET UNITYSDK_OFFSET(0x193F3E00)
#define CLASS_1_1149730A61404494_WRITETO_OFFSET UNITYSDK_OFFSET(0x193F3E60)
#define CLASS_1_1149730A61404494__CCTOR_OFFSET UNITYSDK_OFFSET(0x193F4020)
#define CLASS_1_1149730A61404494__CTOR_1_OFFSET UNITYSDK_OFFSET(0x193F3B10)
#define CLASS_1_1149730A61404494__CTOR_OFFSET UNITYSDK_OFFSET(0x193F3B00)

inline static constexpr unsigned int Class_1_1149730A61404494_TypeDefinitionIndex = 27312;

class Class_1_1149730A61404494 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_1149730A61404494*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_1149730A61404494*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1149730A61404494_TypeDefinitionIndex)->GetStaticField(0x41000);
	}
	// static const ::System::Int32 Field_1_2 = 0xD; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Proto::PlayerAssistInfo* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1149730A61404494__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_1149730A61404494* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1149730A61404494*))((::PBYTE)hIl2Cpp + CLASS_1_1149730A61404494__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1149730A61404494__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_1149730A61404494*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_1149730A61404494*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1149730A61404494_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1149730A61404494_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_1149730A61404494* Clone()
	{
		return ((::Class_1_1149730A61404494*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1149730A61404494_CLONE_OFFSET))(this);
	}

	::Proto::PlayerAssistInfo* Method_1_89019532EF66F500()
	{
		return ((::Proto::PlayerAssistInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1149730A61404494_METHOD_1_89019532EF66F500_OFFSET))(this);
	}

	::System::Void Method_1_F09A446558DACFC3(::Proto::PlayerAssistInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::PlayerAssistInfo*))((::PBYTE)hIl2Cpp + CLASS_1_1149730A61404494_METHOD_1_F09A446558DACFC3_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1149730A61404494_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1149730A61404494* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1149730A61404494*))((::PBYTE)hIl2Cpp + CLASS_1_1149730A61404494_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1149730A61404494_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1149730A61404494_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1149730A61404494_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1149730A61404494_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_1149730A61404494* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1149730A61404494*))((::PBYTE)hIl2Cpp + CLASS_1_1149730A61404494_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1149730A61404494_MERGEFROM_1_OFFSET))(this, a1);
	}
};
