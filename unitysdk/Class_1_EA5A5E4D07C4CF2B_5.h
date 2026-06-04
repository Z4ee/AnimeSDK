#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_EA5A5E4D07C4CF2B_5_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A94F1A0)
#define CLASS_1_EA5A5E4D07C4CF2B_5_CLONE_OFFSET UNITYSDK_OFFSET(0x1A94EF90)
#define CLASS_1_EA5A5E4D07C4CF2B_5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A94F050)
#define CLASS_1_EA5A5E4D07C4CF2B_5_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A94EFF0)
#define CLASS_1_EA5A5E4D07C4CF2B_5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A94F0A0)
#define CLASS_1_EA5A5E4D07C4CF2B_5_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A94F280)
#define CLASS_1_EA5A5E4D07C4CF2B_5_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A94F250)
#define CLASS_1_EA5A5E4D07C4CF2B_5_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A94EF10)
#define CLASS_1_EA5A5E4D07C4CF2B_5_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x1A94EFE0)
#define CLASS_1_EA5A5E4D07C4CF2B_5_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1A94EFD0)
#define CLASS_1_EA5A5E4D07C4CF2B_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A94EF40)
#define CLASS_1_EA5A5E4D07C4CF2B_5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A94F0D0)
#define CLASS_1_EA5A5E4D07C4CF2B_5_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A94F130)
#define CLASS_1_EA5A5E4D07C4CF2B_5__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A94F3E0)
#define CLASS_1_EA5A5E4D07C4CF2B_5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A94EF60)
#define CLASS_1_EA5A5E4D07C4CF2B_5__CTOR_OFFSET UNITYSDK_OFFSET(0x1A94EF50)

inline static constexpr unsigned int Class_1_EA5A5E4D07C4CF2B_5_TypeDefinitionIndex = 25811;

class Class_1_EA5A5E4D07C4CF2B_5 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_EA5A5E4D07C4CF2B_5*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_EA5A5E4D07C4CF2B_5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EA5A5E4D07C4CF2B_5_TypeDefinitionIndex)->GetStaticField(0x234E0);
	}
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_2; // 0x10
	::System::Int32 Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_EA5A5E4D07C4CF2B_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EA5A5E4D07C4CF2B_5*))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_5__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_5__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_EA5A5E4D07C4CF2B_5*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_EA5A5E4D07C4CF2B_5*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_5_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_EA5A5E4D07C4CF2B_5* Clone()
	{
		return ((::Class_1_EA5A5E4D07C4CF2B_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_5_CLONE_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_5_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_5_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_5_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_EA5A5E4D07C4CF2B_5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EA5A5E4D07C4CF2B_5*))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_5_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_5_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_5_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_5_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_5_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_EA5A5E4D07C4CF2B_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EA5A5E4D07C4CF2B_5*))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_5_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_5_MERGEFROM_1_OFFSET))(this, a1);
	}
};
