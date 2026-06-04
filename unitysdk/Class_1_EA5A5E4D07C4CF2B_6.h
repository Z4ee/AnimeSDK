#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_EA5A5E4D07C4CF2B_6_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A0A6E80)
#define CLASS_1_EA5A5E4D07C4CF2B_6_CLONE_OFFSET UNITYSDK_OFFSET(0x1A0A6C00)
#define CLASS_1_EA5A5E4D07C4CF2B_6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A0A6D30)
#define CLASS_1_EA5A5E4D07C4CF2B_6_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A0A6C90)
#define CLASS_1_EA5A5E4D07C4CF2B_6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A0A6D80)
#define CLASS_1_EA5A5E4D07C4CF2B_6_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A0A6F60)
#define CLASS_1_EA5A5E4D07C4CF2B_6_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A0A6F30)
#define CLASS_1_EA5A5E4D07C4CF2B_6_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A0A6B50)
#define CLASS_1_EA5A5E4D07C4CF2B_6_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x1A0A6C80)
#define CLASS_1_EA5A5E4D07C4CF2B_6_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1A0A6C70)
#define CLASS_1_EA5A5E4D07C4CF2B_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A0A6BB0)
#define CLASS_1_EA5A5E4D07C4CF2B_6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A0A6DB0)
#define CLASS_1_EA5A5E4D07C4CF2B_6_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A0A6E10)
#define CLASS_1_EA5A5E4D07C4CF2B_6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0A70C0)
#define CLASS_1_EA5A5E4D07C4CF2B_6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A0A6BD0)
#define CLASS_1_EA5A5E4D07C4CF2B_6__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0A6BC0)

inline static constexpr unsigned int Class_1_EA5A5E4D07C4CF2B_6_TypeDefinitionIndex = 27016;

class Class_1_EA5A5E4D07C4CF2B_6 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_EA5A5E4D07C4CF2B_6*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_EA5A5E4D07C4CF2B_6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EA5A5E4D07C4CF2B_6_TypeDefinitionIndex)->GetStaticField(0x37110);
	}
	// static const ::System::Int32 Field_1_1 = 0xD; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_2; // 0x10
	::System::Int32 Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_6__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_EA5A5E4D07C4CF2B_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EA5A5E4D07C4CF2B_6*))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_6__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_6__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_EA5A5E4D07C4CF2B_6*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_EA5A5E4D07C4CF2B_6*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_6_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_EA5A5E4D07C4CF2B_6* Clone()
	{
		return ((::Class_1_EA5A5E4D07C4CF2B_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_6_CLONE_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_6_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_6_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_EA5A5E4D07C4CF2B_6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EA5A5E4D07C4CF2B_6*))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_6_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_6_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_6_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_6_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_EA5A5E4D07C4CF2B_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EA5A5E4D07C4CF2B_6*))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_6_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_6_MERGEFROM_1_OFFSET))(this, a1);
	}
};
