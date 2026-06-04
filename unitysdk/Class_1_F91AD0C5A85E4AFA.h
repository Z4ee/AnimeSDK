#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45BB92167AED63A0;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_F91AD0C5A85E4AFA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A080C50)
#define CLASS_1_F91AD0C5A85E4AFA_CLONE_OFFSET UNITYSDK_OFFSET(0x1A0806B0)
#define CLASS_1_F91AD0C5A85E4AFA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A080950)
#define CLASS_1_F91AD0C5A85E4AFA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A080830)
#define CLASS_1_F91AD0C5A85E4AFA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A080A40)
#define CLASS_1_F91AD0C5A85E4AFA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A081020)
#define CLASS_1_F91AD0C5A85E4AFA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A080E90)
#define CLASS_1_F91AD0C5A85E4AFA_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1A0807F0)
#define CLASS_1_F91AD0C5A85E4AFA_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1A0807D0)
#define CLASS_1_F91AD0C5A85E4AFA_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1A080780)
#define CLASS_1_F91AD0C5A85E4AFA_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1A080770)
#define CLASS_1_F91AD0C5A85E4AFA_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1A080810)
#define CLASS_1_F91AD0C5A85E4AFA_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A080590)
#define CLASS_1_F91AD0C5A85E4AFA_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1A080800)
#define CLASS_1_F91AD0C5A85E4AFA_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1A0807E0)
#define CLASS_1_F91AD0C5A85E4AFA_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A080820)
#define CLASS_1_F91AD0C5A85E4AFA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A0805F0)
#define CLASS_1_F91AD0C5A85E4AFA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A080B10)
#define CLASS_1_F91AD0C5A85E4AFA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A080B70)
#define CLASS_1_F91AD0C5A85E4AFA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0811C0)
#define CLASS_1_F91AD0C5A85E4AFA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A080610)
#define CLASS_1_F91AD0C5A85E4AFA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A080600)

inline static constexpr unsigned int Class_1_F91AD0C5A85E4AFA_TypeDefinitionIndex = 23715;

class Class_1_F91AD0C5A85E4AFA : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_F91AD0C5A85E4AFA*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_F91AD0C5A85E4AFA*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F91AD0C5A85E4AFA_TypeDefinitionIndex)->GetStaticField(0x33F00);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x4; // 0x0
	::System::String* Field_1_5; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_6; // 0x18
	::Class_1_45BB92167AED63A0* Field_1_7; // 0x20
	::System::UInt32 Field_1_8; // 0x28
	::System::UInt32 Field_1_9; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_F91AD0C5A85E4AFA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F91AD0C5A85E4AFA*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_F91AD0C5A85E4AFA*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_F91AD0C5A85E4AFA*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_F91AD0C5A85E4AFA* Clone()
	{
		return ((::Class_1_F91AD0C5A85E4AFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Class_1_45BB92167AED63A0* Method_1_24748FC20F375725()
	{
		return ((::Class_1_45BB92167AED63A0*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_45BB92167AED63A0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_F91AD0C5A85E4AFA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F91AD0C5A85E4AFA*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_F91AD0C5A85E4AFA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F91AD0C5A85E4AFA*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_MERGEFROM_1_OFFSET))(this, a1);
	}
};
