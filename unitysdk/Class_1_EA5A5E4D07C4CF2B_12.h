#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_EA5A5E4D07C4CF2B_12_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CA2E020)
#define CLASS_1_EA5A5E4D07C4CF2B_12_CLONE_OFFSET UNITYSDK_OFFSET(0x1CA2DBF0)
#define CLASS_1_EA5A5E4D07C4CF2B_12_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CA2DD80)
#define CLASS_1_EA5A5E4D07C4CF2B_12_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CA2DC80)
#define CLASS_1_EA5A5E4D07C4CF2B_12_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CA2DEF0)
#define CLASS_1_EA5A5E4D07C4CF2B_12_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CA2E100)
#define CLASS_1_EA5A5E4D07C4CF2B_12_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CA2E0D0)
#define CLASS_1_EA5A5E4D07C4CF2B_12_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1CA2DB40)
#define CLASS_1_EA5A5E4D07C4CF2B_12_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x1CA2DC70)
#define CLASS_1_EA5A5E4D07C4CF2B_12_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1CA2DC60)
#define CLASS_1_EA5A5E4D07C4CF2B_12_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CA2DBA0)
#define CLASS_1_EA5A5E4D07C4CF2B_12_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CA2DF20)
#define CLASS_1_EA5A5E4D07C4CF2B_12_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CA2DF80)
#define CLASS_1_EA5A5E4D07C4CF2B_12__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA2E260)
#define CLASS_1_EA5A5E4D07C4CF2B_12__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CA2DBC0)
#define CLASS_1_EA5A5E4D07C4CF2B_12__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA2DBB0)

inline static constexpr unsigned int Class_1_EA5A5E4D07C4CF2B_12_TypeDefinitionIndex = 31874;

class Class_1_EA5A5E4D07C4CF2B_12 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_EA5A5E4D07C4CF2B_12*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_EA5A5E4D07C4CF2B_12*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EA5A5E4D07C4CF2B_12_TypeDefinitionIndex)->GetStaticField(0x33F30);
	}
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_2; // 0x10
	::System::Int32 Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_12__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_EA5A5E4D07C4CF2B_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EA5A5E4D07C4CF2B_12*))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_12__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_12__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_EA5A5E4D07C4CF2B_12*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_EA5A5E4D07C4CF2B_12*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_12_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_12_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_EA5A5E4D07C4CF2B_12* Clone()
	{
		return ((::Class_1_EA5A5E4D07C4CF2B_12*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_12_CLONE_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_12_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_12_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_12_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_EA5A5E4D07C4CF2B_12* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EA5A5E4D07C4CF2B_12*))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_12_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_12_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_12_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_12_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_12_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_EA5A5E4D07C4CF2B_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EA5A5E4D07C4CF2B_12*))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_12_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EA5A5E4D07C4CF2B_12_MERGEFROM_1_OFFSET))(this, a1);
	}
};
