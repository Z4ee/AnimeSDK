#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_7B8F3A3270D0761E_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17FC4D10)
#define CLASS_1_7B8F3A3270D0761E_CLONE_OFFSET UNITYSDK_OFFSET(0x17FC48E0)
#define CLASS_1_7B8F3A3270D0761E_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17FC4A90)
#define CLASS_1_7B8F3A3270D0761E_EQUALS_OFFSET UNITYSDK_OFFSET(0x17FC4990)
#define CLASS_1_7B8F3A3270D0761E_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17FC4B80)
#define CLASS_1_7B8F3A3270D0761E_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17FC4F90)
#define CLASS_1_7B8F3A3270D0761E_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17FC4EA0)
#define CLASS_1_7B8F3A3270D0761E_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17FC4970)
#define CLASS_1_7B8F3A3270D0761E_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17FC4930)
#define CLASS_1_7B8F3A3270D0761E_METHOD_1_686CBC4FBD0AAA58_1_OFFSET UNITYSDK_OFFSET(0x17FC4960)
#define CLASS_1_7B8F3A3270D0761E_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x17FC4920)
#define CLASS_1_7B8F3A3270D0761E_METHOD_1_6BD2A2909D8CFAD3_1_OFFSET UNITYSDK_OFFSET(0x17FC4950)
#define CLASS_1_7B8F3A3270D0761E_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x17FC4910)
#define CLASS_1_7B8F3A3270D0761E_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17FC4980)
#define CLASS_1_7B8F3A3270D0761E_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17FC4940)
#define CLASS_1_7B8F3A3270D0761E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17FC4810)
#define CLASS_1_7B8F3A3270D0761E_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17FC4BE0)
#define CLASS_1_7B8F3A3270D0761E_WRITETO_OFFSET UNITYSDK_OFFSET(0x17FC4C40)
#define CLASS_1_7B8F3A3270D0761E__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17FC4830)
#define CLASS_1_7B8F3A3270D0761E__CTOR_OFFSET UNITYSDK_OFFSET(0x17FC4820)

inline static constexpr unsigned int Class_1_7B8F3A3270D0761E_TypeDefinitionIndex = 23300;

class Class_1_7B8F3A3270D0761E : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xB; // 0x0
	::Proto::ItemList* Field_1_6; // 0x10
	::Proto::ItemList* Field_1_2; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x20
	::System::UInt32 Field_1_4; // 0x28
	::System::UInt32 Field_1_8; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B8F3A3270D0761E__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_7B8F3A3270D0761E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7B8F3A3270D0761E*))((::PBYTE)hIl2Cpp + CLASS_1_7B8F3A3270D0761E__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B8F3A3270D0761E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_7B8F3A3270D0761E* Clone()
	{
		return ((::Class_1_7B8F3A3270D0761E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B8F3A3270D0761E_CLONE_OFFSET))(this);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B8F3A3270D0761E_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_7B8F3A3270D0761E_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B8F3A3270D0761E_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7B8F3A3270D0761E_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3_1()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B8F3A3270D0761E_METHOD_1_6BD2A2909D8CFAD3_1_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58_1(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_7B8F3A3270D0761E_METHOD_1_686CBC4FBD0AAA58_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B8F3A3270D0761E_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7B8F3A3270D0761E_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7B8F3A3270D0761E_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_7B8F3A3270D0761E* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7B8F3A3270D0761E*))((::PBYTE)hIl2Cpp + CLASS_1_7B8F3A3270D0761E_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B8F3A3270D0761E_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B8F3A3270D0761E_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7B8F3A3270D0761E_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B8F3A3270D0761E_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_7B8F3A3270D0761E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7B8F3A3270D0761E*))((::PBYTE)hIl2Cpp + CLASS_1_7B8F3A3270D0761E_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7B8F3A3270D0761E_MERGEFROM_1_OFFSET))(this, a1);
	}
};
