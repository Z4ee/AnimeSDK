#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class DiceCombatAvatar; }
namespace System { class String; }

#define CLASS_1_B6EEC4C8FD1EB2AA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17FAED70)
#define CLASS_1_B6EEC4C8FD1EB2AA_CLONE_OFFSET UNITYSDK_OFFSET(0x17FAEA20)
#define CLASS_1_B6EEC4C8FD1EB2AA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17FAEB90)
#define CLASS_1_B6EEC4C8FD1EB2AA_EQUALS_OFFSET UNITYSDK_OFFSET(0x17FAEAE0)
#define CLASS_1_B6EEC4C8FD1EB2AA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17FAEC40)
#define CLASS_1_B6EEC4C8FD1EB2AA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17FAEF40)
#define CLASS_1_B6EEC4C8FD1EB2AA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17FAEE40)
#define CLASS_1_B6EEC4C8FD1EB2AA_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17FAEAC0)
#define CLASS_1_B6EEC4C8FD1EB2AA_METHOD_1_5B639E2F3BC3679C_OFFSET UNITYSDK_OFFSET(0x17FAEAA0)
#define CLASS_1_B6EEC4C8FD1EB2AA_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17FAEAD0)
#define CLASS_1_B6EEC4C8FD1EB2AA_METHOD_1_E31A6982643BF6CF_OFFSET UNITYSDK_OFFSET(0x17FAEAB0)
#define CLASS_1_B6EEC4C8FD1EB2AA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17FAE990)
#define CLASS_1_B6EEC4C8FD1EB2AA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17FAEC90)
#define CLASS_1_B6EEC4C8FD1EB2AA_WRITETO_OFFSET UNITYSDK_OFFSET(0x17FAECF0)
#define CLASS_1_B6EEC4C8FD1EB2AA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17FAE9B0)
#define CLASS_1_B6EEC4C8FD1EB2AA__CTOR_OFFSET UNITYSDK_OFFSET(0x17FAE9A0)

inline static constexpr unsigned int Class_1_B6EEC4C8FD1EB2AA_TypeDefinitionIndex = 24130;

class Class_1_B6EEC4C8FD1EB2AA : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xE; // 0x0
	::Proto::DiceCombatAvatar* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6EEC4C8FD1EB2AA__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_B6EEC4C8FD1EB2AA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B6EEC4C8FD1EB2AA*))((::PBYTE)hIl2Cpp + CLASS_1_B6EEC4C8FD1EB2AA__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6EEC4C8FD1EB2AA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_B6EEC4C8FD1EB2AA* Clone()
	{
		return ((::Class_1_B6EEC4C8FD1EB2AA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6EEC4C8FD1EB2AA_CLONE_OFFSET))(this);
	}

	::Proto::DiceCombatAvatar* Method_1_5B639E2F3BC3679C()
	{
		return ((::Proto::DiceCombatAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6EEC4C8FD1EB2AA_METHOD_1_5B639E2F3BC3679C_OFFSET))(this);
	}

	::System::Void Method_1_E31A6982643BF6CF(::Proto::DiceCombatAvatar* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::DiceCombatAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_B6EEC4C8FD1EB2AA_METHOD_1_E31A6982643BF6CF_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6EEC4C8FD1EB2AA_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B6EEC4C8FD1EB2AA_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B6EEC4C8FD1EB2AA_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_B6EEC4C8FD1EB2AA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B6EEC4C8FD1EB2AA*))((::PBYTE)hIl2Cpp + CLASS_1_B6EEC4C8FD1EB2AA_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6EEC4C8FD1EB2AA_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6EEC4C8FD1EB2AA_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B6EEC4C8FD1EB2AA_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6EEC4C8FD1EB2AA_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_B6EEC4C8FD1EB2AA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B6EEC4C8FD1EB2AA*))((::PBYTE)hIl2Cpp + CLASS_1_B6EEC4C8FD1EB2AA_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_B6EEC4C8FD1EB2AA_MERGEFROM_1_OFFSET))(this, a1);
	}
};
