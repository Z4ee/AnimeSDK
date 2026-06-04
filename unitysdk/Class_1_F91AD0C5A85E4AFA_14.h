#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_F91AD0C5A85E4AFA_14_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A66FFF0)
#define CLASS_1_F91AD0C5A85E4AFA_14_CLONE_OFFSET UNITYSDK_OFFSET(0x1A66FB90)
#define CLASS_1_F91AD0C5A85E4AFA_14_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A66FD80)
#define CLASS_1_F91AD0C5A85E4AFA_14_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A66FCB0)
#define CLASS_1_F91AD0C5A85E4AFA_14_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A66FE20)
#define CLASS_1_F91AD0C5A85E4AFA_14_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A670260)
#define CLASS_1_F91AD0C5A85E4AFA_14_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A670200)
#define CLASS_1_F91AD0C5A85E4AFA_14_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A66FC90)
#define CLASS_1_F91AD0C5A85E4AFA_14_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A66FC70)
#define CLASS_1_F91AD0C5A85E4AFA_14_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1A66FC20)
#define CLASS_1_F91AD0C5A85E4AFA_14_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1A66FC10)
#define CLASS_1_F91AD0C5A85E4AFA_14_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A66FAC0)
#define CLASS_1_F91AD0C5A85E4AFA_14_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A66FCA0)
#define CLASS_1_F91AD0C5A85E4AFA_14_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A66FC80)
#define CLASS_1_F91AD0C5A85E4AFA_14_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A66FB20)
#define CLASS_1_F91AD0C5A85E4AFA_14_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A66FEE0)
#define CLASS_1_F91AD0C5A85E4AFA_14_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A66FF40)
#define CLASS_1_F91AD0C5A85E4AFA_14__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A670430)
#define CLASS_1_F91AD0C5A85E4AFA_14__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A66FB40)
#define CLASS_1_F91AD0C5A85E4AFA_14__CTOR_OFFSET UNITYSDK_OFFSET(0x1A66FB30)

inline static constexpr unsigned int Class_1_F91AD0C5A85E4AFA_14_TypeDefinitionIndex = 28180;

class Class_1_F91AD0C5A85E4AFA_14 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_F91AD0C5A85E4AFA_14*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_F91AD0C5A85E4AFA_14*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F91AD0C5A85E4AFA_14_TypeDefinitionIndex)->GetStaticField(0x2ACD0);
	}
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	::System::String* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x18
	::System::UInt32 Field_1_6; // 0x20
	::System::UInt32 Field_1_7; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_14__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_F91AD0C5A85E4AFA_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F91AD0C5A85E4AFA_14*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_14__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_14__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_F91AD0C5A85E4AFA_14*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_F91AD0C5A85E4AFA_14*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_14_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_14_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_F91AD0C5A85E4AFA_14* Clone()
	{
		return ((::Class_1_F91AD0C5A85E4AFA_14*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_14_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_14_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_14_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_14_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_14_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_14_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_14_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_14_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_F91AD0C5A85E4AFA_14* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F91AD0C5A85E4AFA_14*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_14_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_14_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_14_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_14_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_14_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_F91AD0C5A85E4AFA_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F91AD0C5A85E4AFA_14*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_14_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_14_MERGEFROM_1_OFFSET))(this, a1);
	}
};
