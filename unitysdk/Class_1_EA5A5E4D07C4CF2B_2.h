#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_EA5A5E4D07C4CF2B_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A05CB90)
#define CLASS_1_EA5A5E4D07C4CF2B_2_CLONE_OFFSET UNITYSDK_OFFSET(0x1A05C8A0)
#define CLASS_1_EA5A5E4D07C4CF2B_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A05C9F0)
#define CLASS_1_EA5A5E4D07C4CF2B_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A05C950)
#define CLASS_1_EA5A5E4D07C4CF2B_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A05CA50)
#define CLASS_1_EA5A5E4D07C4CF2B_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A05CD20)
#define CLASS_1_EA5A5E4D07C4CF2B_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A05CCE0)
#define CLASS_1_EA5A5E4D07C4CF2B_2_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A05C7F0)
#define CLASS_1_EA5A5E4D07C4CF2B_2_METHOD_1_C114A1F8E08B6F92_1_OFFSET UNITYSDK_OFFSET(0x1A05C940)
#define CLASS_1_EA5A5E4D07C4CF2B_2_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x1A05C920)
#define CLASS_1_EA5A5E4D07C4CF2B_2_METHOD_1_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x1A05C930)
#define CLASS_1_EA5A5E4D07C4CF2B_2_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1A05C910)
#define CLASS_1_EA5A5E4D07C4CF2B_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A05C850)
#define CLASS_1_EA5A5E4D07C4CF2B_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A05CA80)
#define CLASS_1_EA5A5E4D07C4CF2B_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A05CAE0)
#define CLASS_1_EA5A5E4D07C4CF2B_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A05CEA0)
#define CLASS_1_EA5A5E4D07C4CF2B_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A05C870)
#define CLASS_1_EA5A5E4D07C4CF2B_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1A05C860)

inline static constexpr unsigned int Class_1_EA5A5E4D07C4CF2B_2_TypeDefinitionIndex = 25411;

class Class_1_EA5A5E4D07C4CF2B_2 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_EA5A5E4D07C4CF2B_2*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_EA5A5E4D07C4CF2B_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EA5A5E4D07C4CF2B_2_TypeDefinitionIndex)->GetStaticField(0x2F8D0);
	}
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xF; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::System::Int32 Field_1_4; // 0x18
	::System::Int32 Field_1_5; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_EA5A5E4D07C4CF2B_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EA5A5E4D07C4CF2B_2*))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_2__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_EA5A5E4D07C4CF2B_2*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_EA5A5E4D07C4CF2B_2*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_2_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_EA5A5E4D07C4CF2B_2* Clone()
	{
		return ((::Class_1_EA5A5E4D07C4CF2B_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_2_CLONE_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_2_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_2_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_2_METHOD_1_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_2_METHOD_1_C114A1F8E08B6F92_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_EA5A5E4D07C4CF2B_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EA5A5E4D07C4CF2B_2*))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_EA5A5E4D07C4CF2B_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EA5A5E4D07C4CF2B_2*))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
