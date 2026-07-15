#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_F91AD0C5A85E4AFA_20_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C8DF870)
#define CLASS_1_F91AD0C5A85E4AFA_20_CLONE_OFFSET UNITYSDK_OFFSET(0x1C8DF2F0)
#define CLASS_1_F91AD0C5A85E4AFA_20_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C8DF500)
#define CLASS_1_F91AD0C5A85E4AFA_20_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C8DF3F0)
#define CLASS_1_F91AD0C5A85E4AFA_20_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C8DF610)
#define CLASS_1_F91AD0C5A85E4AFA_20_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C8DFA20)
#define CLASS_1_F91AD0C5A85E4AFA_20_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C8DF9C0)
#define CLASS_1_F91AD0C5A85E4AFA_20_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1C8DF370)
#define CLASS_1_F91AD0C5A85E4AFA_20_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C8DF350)
#define CLASS_1_F91AD0C5A85E4AFA_20_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1C8DF3A0)
#define CLASS_1_F91AD0C5A85E4AFA_20_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1C8DF390)
#define CLASS_1_F91AD0C5A85E4AFA_20_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C8DF250)
#define CLASS_1_F91AD0C5A85E4AFA_20_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1C8DF380)
#define CLASS_1_F91AD0C5A85E4AFA_20_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C8DF360)
#define CLASS_1_F91AD0C5A85E4AFA_20_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C8DF280)
#define CLASS_1_F91AD0C5A85E4AFA_20_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C8DF6C0)
#define CLASS_1_F91AD0C5A85E4AFA_20_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C8DF720)
#define CLASS_1_F91AD0C5A85E4AFA_20__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8DFBF0)
#define CLASS_1_F91AD0C5A85E4AFA_20__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C8DF2A0)
#define CLASS_1_F91AD0C5A85E4AFA_20__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8DF290)

inline static constexpr unsigned int Class_1_F91AD0C5A85E4AFA_20_TypeDefinitionIndex = 30097;

class Class_1_F91AD0C5A85E4AFA_20 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_F91AD0C5A85E4AFA_20*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_F91AD0C5A85E4AFA_20*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F91AD0C5A85E4AFA_20_TypeDefinitionIndex)->GetStaticField(0x2E5B0);
	}
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x6; // 0x0
	::System::String* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x18
	::System::UInt32 Field_1_6; // 0x20
	::System::UInt32 Field_1_7; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_20__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_F91AD0C5A85E4AFA_20* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F91AD0C5A85E4AFA_20*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_20__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_20__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_F91AD0C5A85E4AFA_20*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_F91AD0C5A85E4AFA_20*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_20_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_20_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_F91AD0C5A85E4AFA_20* Clone()
	{
		return ((::Class_1_F91AD0C5A85E4AFA_20*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_20_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_20_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_20_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_20_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_20_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_20_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_20_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_20_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_F91AD0C5A85E4AFA_20* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F91AD0C5A85E4AFA_20*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_20_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_20_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_20_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_20_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_20_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_F91AD0C5A85E4AFA_20* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F91AD0C5A85E4AFA_20*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_20_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_20_MERGEFROM_1_OFFSET))(this, a1);
	}
};
