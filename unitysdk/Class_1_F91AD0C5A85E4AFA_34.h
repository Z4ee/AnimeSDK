#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_F91AD0C5A85E4AFA_34_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A708870)
#define CLASS_1_F91AD0C5A85E4AFA_34_CLONE_OFFSET UNITYSDK_OFFSET(0x1A708270)
#define CLASS_1_F91AD0C5A85E4AFA_34_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A7084C0)
#define CLASS_1_F91AD0C5A85E4AFA_34_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A708400)
#define CLASS_1_F91AD0C5A85E4AFA_34_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A7085B0)
#define CLASS_1_F91AD0C5A85E4AFA_34_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A708C60)
#define CLASS_1_F91AD0C5A85E4AFA_34_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A708BE0)
#define CLASS_1_F91AD0C5A85E4AFA_34_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A708300)
#define CLASS_1_F91AD0C5A85E4AFA_34_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1A708380)
#define CLASS_1_F91AD0C5A85E4AFA_34_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A7082E0)
#define CLASS_1_F91AD0C5A85E4AFA_34_METHOD_1_050E70FEDB783306_1_OFFSET UNITYSDK_OFFSET(0x1A7083B0)
#define CLASS_1_F91AD0C5A85E4AFA_34_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1A708330)
#define CLASS_1_F91AD0C5A85E4AFA_34_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x1A7083A0)
#define CLASS_1_F91AD0C5A85E4AFA_34_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1A708320)
#define CLASS_1_F91AD0C5A85E4AFA_34_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1A7081B0)
#define CLASS_1_F91AD0C5A85E4AFA_34_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A708310)
#define CLASS_1_F91AD0C5A85E4AFA_34_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1A708390)
#define CLASS_1_F91AD0C5A85E4AFA_34_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A7082F0)
#define CLASS_1_F91AD0C5A85E4AFA_34_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A7081E0)
#define CLASS_1_F91AD0C5A85E4AFA_34_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A7086F0)
#define CLASS_1_F91AD0C5A85E4AFA_34_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A708750)
#define CLASS_1_F91AD0C5A85E4AFA_34__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A708D80)
#define CLASS_1_F91AD0C5A85E4AFA_34__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A708210)
#define CLASS_1_F91AD0C5A85E4AFA_34__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7081F0)

inline static constexpr unsigned int Class_1_F91AD0C5A85E4AFA_34_TypeDefinitionIndex = 32783;

class Class_1_F91AD0C5A85E4AFA_34 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_F91AD0C5A85E4AFA_34*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_F91AD0C5A85E4AFA_34*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F91AD0C5A85E4AFA_34_TypeDefinitionIndex)->GetStaticField(0x59E0);
	}
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x8; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_6; // 0x10
	::System::String* Field_1_7; // 0x18
	::System::String* Field_1_8; // 0x20
	::System::UInt32 Field_1_9; // 0x28
	::System::UInt32 Field_1_10; // 0x2C
	::System::UInt32 Field_1_11; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_34__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_F91AD0C5A85E4AFA_34* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F91AD0C5A85E4AFA_34*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_34__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_34__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_F91AD0C5A85E4AFA_34*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_F91AD0C5A85E4AFA_34*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_34_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_34_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_F91AD0C5A85E4AFA_34* Clone()
	{
		return ((::Class_1_F91AD0C5A85E4AFA_34*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_34_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_34_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_34_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_34_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_34_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_34_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_34_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_34_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_34_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_34_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_34_METHOD_1_050E70FEDB783306_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_34_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_F91AD0C5A85E4AFA_34* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F91AD0C5A85E4AFA_34*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_34_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_34_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_34_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_34_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_34_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_F91AD0C5A85E4AFA_34* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F91AD0C5A85E4AFA_34*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_34_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_34_MERGEFROM_1_OFFSET))(this, a1);
	}
};
