#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_E8F97FD00858F980_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19979550)
#define CLASS_1_E8F97FD00858F980_2_CLONE_OFFSET UNITYSDK_OFFSET(0x19979210)
#define CLASS_1_E8F97FD00858F980_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x199793A0)
#define CLASS_1_E8F97FD00858F980_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x199792F0)
#define CLASS_1_E8F97FD00858F980_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19979410)
#define CLASS_1_E8F97FD00858F980_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19979780)
#define CLASS_1_E8F97FD00858F980_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19979730)
#define CLASS_1_E8F97FD00858F980_2_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x199792B0)
#define CLASS_1_E8F97FD00858F980_2_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19979290)
#define CLASS_1_E8F97FD00858F980_2_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19979150)
#define CLASS_1_E8F97FD00858F980_2_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x199792E0)
#define CLASS_1_E8F97FD00858F980_2_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x199792C0)
#define CLASS_1_E8F97FD00858F980_2_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x199792A0)
#define CLASS_1_E8F97FD00858F980_2_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x199792D0)
#define CLASS_1_E8F97FD00858F980_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x199791B0)
#define CLASS_1_E8F97FD00858F980_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19979450)
#define CLASS_1_E8F97FD00858F980_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x199794B0)
#define CLASS_1_E8F97FD00858F980_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x19979810)
#define CLASS_1_E8F97FD00858F980_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x199791D0)
#define CLASS_1_E8F97FD00858F980_2__CTOR_OFFSET UNITYSDK_OFFSET(0x199791C0)

inline static constexpr unsigned int Class_1_E8F97FD00858F980_2_TypeDefinitionIndex = 27530;

class Class_1_E8F97FD00858F980_2 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_E8F97FD00858F980_2*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_E8F97FD00858F980_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E8F97FD00858F980_2_TypeDefinitionIndex)->GetStaticField(0x62E10);
	}
	// static const ::System::Int32 Field_1_2 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xA; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::Int64 Field_1_7; // 0x18
	::System::UInt32 Field_1_5; // 0x20
	::System::UInt32 Field_1_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E8F97FD00858F980_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_E8F97FD00858F980_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E8F97FD00858F980_2*))((::PBYTE)hIl2Cpp + CLASS_1_E8F97FD00858F980_2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E8F97FD00858F980_2__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_E8F97FD00858F980_2*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_E8F97FD00858F980_2*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E8F97FD00858F980_2_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E8F97FD00858F980_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_E8F97FD00858F980_2* Clone()
	{
		return ((::Class_1_E8F97FD00858F980_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E8F97FD00858F980_2_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E8F97FD00858F980_2_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E8F97FD00858F980_2_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E8F97FD00858F980_2_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E8F97FD00858F980_2_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E8F97FD00858F980_2_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_E8F97FD00858F980_2_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E8F97FD00858F980_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_E8F97FD00858F980_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E8F97FD00858F980_2*))((::PBYTE)hIl2Cpp + CLASS_1_E8F97FD00858F980_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E8F97FD00858F980_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E8F97FD00858F980_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E8F97FD00858F980_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E8F97FD00858F980_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_E8F97FD00858F980_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E8F97FD00858F980_2*))((::PBYTE)hIl2Cpp + CLASS_1_E8F97FD00858F980_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_E8F97FD00858F980_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
