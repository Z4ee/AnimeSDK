#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_F91AD0C5A85E4AFA_15_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C980E10)
#define CLASS_1_F91AD0C5A85E4AFA_15_CLONE_OFFSET UNITYSDK_OFFSET(0x1C9808F0)
#define CLASS_1_F91AD0C5A85E4AFA_15_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C980B10)
#define CLASS_1_F91AD0C5A85E4AFA_15_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C9809E0)
#define CLASS_1_F91AD0C5A85E4AFA_15_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C980C10)
#define CLASS_1_F91AD0C5A85E4AFA_15_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C980F40)
#define CLASS_1_F91AD0C5A85E4AFA_15_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C980EF0)
#define CLASS_1_F91AD0C5A85E4AFA_15_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C980960)
#define CLASS_1_F91AD0C5A85E4AFA_15_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1C980990)
#define CLASS_1_F91AD0C5A85E4AFA_15_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1C980980)
#define CLASS_1_F91AD0C5A85E4AFA_15_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C980830)
#define CLASS_1_F91AD0C5A85E4AFA_15_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C980970)
#define CLASS_1_F91AD0C5A85E4AFA_15_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C980890)
#define CLASS_1_F91AD0C5A85E4AFA_15_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C980CC0)
#define CLASS_1_F91AD0C5A85E4AFA_15_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C980D20)
#define CLASS_1_F91AD0C5A85E4AFA_15__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C9810F0)
#define CLASS_1_F91AD0C5A85E4AFA_15__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C9808B0)
#define CLASS_1_F91AD0C5A85E4AFA_15__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9808A0)

inline static constexpr unsigned int Class_1_F91AD0C5A85E4AFA_15_TypeDefinitionIndex = 29134;

class Class_1_F91AD0C5A85E4AFA_15 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_F91AD0C5A85E4AFA_15*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_F91AD0C5A85E4AFA_15*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F91AD0C5A85E4AFA_15_TypeDefinitionIndex)->GetStaticField(0x25CE0);
	}
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x4; // 0x0
	::System::String* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x18
	::System::UInt32 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_15__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_F91AD0C5A85E4AFA_15* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F91AD0C5A85E4AFA_15*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_15__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_15__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_F91AD0C5A85E4AFA_15*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_F91AD0C5A85E4AFA_15*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_15_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_15_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_F91AD0C5A85E4AFA_15* Clone()
	{
		return ((::Class_1_F91AD0C5A85E4AFA_15*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_15_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_15_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_15_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_15_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_15_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_15_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_F91AD0C5A85E4AFA_15* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F91AD0C5A85E4AFA_15*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_15_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_15_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_15_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_15_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_15_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_F91AD0C5A85E4AFA_15* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F91AD0C5A85E4AFA_15*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_15_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_15_MERGEFROM_1_OFFSET))(this, a1);
	}
};
