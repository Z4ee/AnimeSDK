#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_405D9D5C58031AA5_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_6389873A9832B520_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17B26280)
#define CLASS_1_6389873A9832B520_CLONE_OFFSET UNITYSDK_OFFSET(0x17B25E20)
#define CLASS_1_6389873A9832B520_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17B25FE0)
#define CLASS_1_6389873A9832B520_EQUALS_OFFSET UNITYSDK_OFFSET(0x17B25EB0)
#define CLASS_1_6389873A9832B520_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17B26100)
#define CLASS_1_6389873A9832B520_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17B26480)
#define CLASS_1_6389873A9832B520_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17B26340)
#define CLASS_1_6389873A9832B520_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x17B25E50)
#define CLASS_1_6389873A9832B520_METHOD_1_686CBC4FBD0AAA58_1_OFFSET UNITYSDK_OFFSET(0x17B25EA0)
#define CLASS_1_6389873A9832B520_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x17B25E80)
#define CLASS_1_6389873A9832B520_METHOD_1_6BD2A2909D8CFAD3_1_OFFSET UNITYSDK_OFFSET(0x17B25E90)
#define CLASS_1_6389873A9832B520_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x17B25E70)
#define CLASS_1_6389873A9832B520_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x17B25E60)
#define CLASS_1_6389873A9832B520_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17B25D10)
#define CLASS_1_6389873A9832B520_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17B26170)
#define CLASS_1_6389873A9832B520_WRITETO_OFFSET UNITYSDK_OFFSET(0x17B261D0)
#define CLASS_1_6389873A9832B520__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17B25D30)
#define CLASS_1_6389873A9832B520__CTOR_OFFSET UNITYSDK_OFFSET(0x17B25D20)

inline static constexpr unsigned int Class_1_6389873A9832B520_TypeDefinitionIndex = 25580;

class Class_1_6389873A9832B520 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xF; // 0x0
	::Proto::ItemList* Field_1_6; // 0x10
	::Proto::ItemList* Field_1_4; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::Class_1_405D9D5C58031AA5_1* Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6389873A9832B520* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6389873A9832B520*))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6389873A9832B520* Clone()
	{
		return ((::Class_1_6389873A9832B520*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_CLONE_OFFSET))(this);
	}

	::Class_1_405D9D5C58031AA5_1* Method_1_24748FC20F375725()
	{
		return ((::Class_1_405D9D5C58031AA5_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_405D9D5C58031AA5_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_405D9D5C58031AA5_1*))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3_1()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_METHOD_1_6BD2A2909D8CFAD3_1_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58_1(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_METHOD_1_686CBC4FBD0AAA58_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6389873A9832B520* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6389873A9832B520*))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6389873A9832B520* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6389873A9832B520*))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_MERGEFROM_1_OFFSET))(this, a1);
	}
};
