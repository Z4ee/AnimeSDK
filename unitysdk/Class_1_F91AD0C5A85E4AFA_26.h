#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_F91AD0C5A85E4AFA_26_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C51C340)
#define CLASS_1_F91AD0C5A85E4AFA_26_CLONE_OFFSET UNITYSDK_OFFSET(0x1C51BE00)
#define CLASS_1_F91AD0C5A85E4AFA_26_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C51C020)
#define CLASS_1_F91AD0C5A85E4AFA_26_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C51BEF0)
#define CLASS_1_F91AD0C5A85E4AFA_26_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C51C120)
#define CLASS_1_F91AD0C5A85E4AFA_26_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C51C470)
#define CLASS_1_F91AD0C5A85E4AFA_26_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C51C420)
#define CLASS_1_F91AD0C5A85E4AFA_26_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C51BED0)
#define CLASS_1_F91AD0C5A85E4AFA_26_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1C51BE80)
#define CLASS_1_F91AD0C5A85E4AFA_26_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1C51BE70)
#define CLASS_1_F91AD0C5A85E4AFA_26_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C51BD40)
#define CLASS_1_F91AD0C5A85E4AFA_26_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C51BEE0)
#define CLASS_1_F91AD0C5A85E4AFA_26_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C51BDA0)
#define CLASS_1_F91AD0C5A85E4AFA_26_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C51C1F0)
#define CLASS_1_F91AD0C5A85E4AFA_26_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C51C250)
#define CLASS_1_F91AD0C5A85E4AFA_26__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C51C620)
#define CLASS_1_F91AD0C5A85E4AFA_26__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C51BDC0)
#define CLASS_1_F91AD0C5A85E4AFA_26__CTOR_OFFSET UNITYSDK_OFFSET(0x1C51BDB0)

inline static constexpr unsigned int Class_1_F91AD0C5A85E4AFA_26_TypeDefinitionIndex = 32337;

class Class_1_F91AD0C5A85E4AFA_26 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_F91AD0C5A85E4AFA_26*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_F91AD0C5A85E4AFA_26*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F91AD0C5A85E4AFA_26_TypeDefinitionIndex)->GetStaticField(0x65B50);
	}
	// static const ::System::Int32 Field_1_1 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x8; // 0x0
	::System::String* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x18
	::System::UInt32 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_26__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_F91AD0C5A85E4AFA_26* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F91AD0C5A85E4AFA_26*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_26__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_26__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_F91AD0C5A85E4AFA_26*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_F91AD0C5A85E4AFA_26*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_26_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_26_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_F91AD0C5A85E4AFA_26* Clone()
	{
		return ((::Class_1_F91AD0C5A85E4AFA_26*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_26_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_26_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_26_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_26_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_26_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_26_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_F91AD0C5A85E4AFA_26* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F91AD0C5A85E4AFA_26*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_26_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_26_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_26_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_26_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_26_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_F91AD0C5A85E4AFA_26* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F91AD0C5A85E4AFA_26*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_26_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_26_MERGEFROM_1_OFFSET))(this, a1);
	}
};
