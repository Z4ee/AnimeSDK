#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_643A1F642587B0B3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17B20030)
#define CLASS_1_643A1F642587B0B3_CLONE_OFFSET UNITYSDK_OFFSET(0x17B1FD30)
#define CLASS_1_643A1F642587B0B3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17B1FE80)
#define CLASS_1_643A1F642587B0B3_EQUALS_OFFSET UNITYSDK_OFFSET(0x17B1FDD0)
#define CLASS_1_643A1F642587B0B3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17B1FF20)
#define CLASS_1_643A1F642587B0B3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17B20120)
#define CLASS_1_643A1F642587B0B3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17B20090)
#define CLASS_1_643A1F642587B0B3_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x17B1FDC0)
#define CLASS_1_643A1F642587B0B3_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x17B1FDB0)
#define CLASS_1_643A1F642587B0B3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17B1FCA0)
#define CLASS_1_643A1F642587B0B3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17B1FF70)
#define CLASS_1_643A1F642587B0B3_WRITETO_OFFSET UNITYSDK_OFFSET(0x17B1FFD0)
#define CLASS_1_643A1F642587B0B3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17B1FCC0)
#define CLASS_1_643A1F642587B0B3__CTOR_OFFSET UNITYSDK_OFFSET(0x17B1FCB0)

inline static constexpr unsigned int Class_1_643A1F642587B0B3_TypeDefinitionIndex = 25991;

class Class_1_643A1F642587B0B3 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x6; // 0x0
	::Proto::ItemList* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_643A1F642587B0B3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_643A1F642587B0B3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_643A1F642587B0B3*))((::PBYTE)hIl2Cpp + CLASS_1_643A1F642587B0B3__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_643A1F642587B0B3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_643A1F642587B0B3* Clone()
	{
		return ((::Class_1_643A1F642587B0B3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_643A1F642587B0B3_CLONE_OFFSET))(this);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_643A1F642587B0B3_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_643A1F642587B0B3_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_643A1F642587B0B3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_643A1F642587B0B3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_643A1F642587B0B3*))((::PBYTE)hIl2Cpp + CLASS_1_643A1F642587B0B3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_643A1F642587B0B3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_643A1F642587B0B3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_643A1F642587B0B3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_643A1F642587B0B3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_643A1F642587B0B3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_643A1F642587B0B3*))((::PBYTE)hIl2Cpp + CLASS_1_643A1F642587B0B3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_643A1F642587B0B3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
