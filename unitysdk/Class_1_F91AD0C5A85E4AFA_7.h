#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_F91AD0C5A85E4AFA_7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1AA598F0)
#define CLASS_1_F91AD0C5A85E4AFA_7_CLONE_OFFSET UNITYSDK_OFFSET(0x1AA59330)
#define CLASS_1_F91AD0C5A85E4AFA_7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1AA595A0)
#define CLASS_1_F91AD0C5A85E4AFA_7_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AA594A0)
#define CLASS_1_F91AD0C5A85E4AFA_7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AA59670)
#define CLASS_1_F91AD0C5A85E4AFA_7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1AA59BD0)
#define CLASS_1_F91AD0C5A85E4AFA_7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1AA59B70)
#define CLASS_1_F91AD0C5A85E4AFA_7_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1AA59420)
#define CLASS_1_F91AD0C5A85E4AFA_7_METHOD_1_050E70FEDB783306_1_OFFSET UNITYSDK_OFFSET(0x1AA59450)
#define CLASS_1_F91AD0C5A85E4AFA_7_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1AA593D0)
#define CLASS_1_F91AD0C5A85E4AFA_7_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x1AA59440)
#define CLASS_1_F91AD0C5A85E4AFA_7_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1AA593C0)
#define CLASS_1_F91AD0C5A85E4AFA_7_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1AA59240)
#define CLASS_1_F91AD0C5A85E4AFA_7_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1AA59430)
#define CLASS_1_F91AD0C5A85E4AFA_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1AA592A0)
#define CLASS_1_F91AD0C5A85E4AFA_7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AA597C0)
#define CLASS_1_F91AD0C5A85E4AFA_7_WRITETO_OFFSET UNITYSDK_OFFSET(0x1AA59820)
#define CLASS_1_F91AD0C5A85E4AFA_7__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AA59DD0)
#define CLASS_1_F91AD0C5A85E4AFA_7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AA592D0)
#define CLASS_1_F91AD0C5A85E4AFA_7__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA592B0)

inline static constexpr unsigned int Class_1_F91AD0C5A85E4AFA_7_TypeDefinitionIndex = 24999;

class Class_1_F91AD0C5A85E4AFA_7 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_F91AD0C5A85E4AFA_7*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_F91AD0C5A85E4AFA_7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F91AD0C5A85E4AFA_7_TypeDefinitionIndex)->GetStaticField(0x82D0);
	}
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	::System::String* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x18
	::System::String* Field_1_6; // 0x20
	::System::UInt32 Field_1_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_F91AD0C5A85E4AFA_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F91AD0C5A85E4AFA_7*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_7__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_7__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_F91AD0C5A85E4AFA_7*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_F91AD0C5A85E4AFA_7*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_7_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_F91AD0C5A85E4AFA_7* Clone()
	{
		return ((::Class_1_F91AD0C5A85E4AFA_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_7_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_7_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_7_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_7_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_7_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_7_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_7_METHOD_1_050E70FEDB783306_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_F91AD0C5A85E4AFA_7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F91AD0C5A85E4AFA_7*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_F91AD0C5A85E4AFA_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F91AD0C5A85E4AFA_7*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_7_MERGEFROM_1_OFFSET))(this, a1);
	}
};
