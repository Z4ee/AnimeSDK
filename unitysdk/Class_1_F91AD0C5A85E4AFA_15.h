#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_F91AD0C5A85E4AFA_15_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEC5C40)
#define CLASS_1_F91AD0C5A85E4AFA_15_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEC5740)
#define CLASS_1_F91AD0C5A85E4AFA_15_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEC5920)
#define CLASS_1_F91AD0C5A85E4AFA_15_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEC5820)
#define CLASS_1_F91AD0C5A85E4AFA_15_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEC5A20)
#define CLASS_1_F91AD0C5A85E4AFA_15_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEC5D70)
#define CLASS_1_F91AD0C5A85E4AFA_15_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEC5D20)
#define CLASS_1_F91AD0C5A85E4AFA_15_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1DEC5800)
#define CLASS_1_F91AD0C5A85E4AFA_15_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1DEC57B0)
#define CLASS_1_F91AD0C5A85E4AFA_15_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1DEC57A0)
#define CLASS_1_F91AD0C5A85E4AFA_15_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1DEC56B0)
#define CLASS_1_F91AD0C5A85E4AFA_15_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1DEC5810)
#define CLASS_1_F91AD0C5A85E4AFA_15_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEC56E0)
#define CLASS_1_F91AD0C5A85E4AFA_15_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEC5AF0)
#define CLASS_1_F91AD0C5A85E4AFA_15_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEC5B50)
#define CLASS_1_F91AD0C5A85E4AFA_15__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEC5F20)
#define CLASS_1_F91AD0C5A85E4AFA_15__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEC5700)
#define CLASS_1_F91AD0C5A85E4AFA_15__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC56F0)

inline static constexpr unsigned int Class_1_F91AD0C5A85E4AFA_15_TypeDefinitionIndex = 29867;

class Class_1_F91AD0C5A85E4AFA_15 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_F91AD0C5A85E4AFA_15*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_F91AD0C5A85E4AFA_15*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F91AD0C5A85E4AFA_15_TypeDefinitionIndex)->GetStaticField(0x3BB80);
	}
	// static const ::System::Int32 OLMIFJKILJG = 0xF; // 0x0
	// static const ::System::Int32 LKCCGCBCJJM = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::String* IOGCODPGEEA; // 0x18
	::System::UInt32 KCIKBKIBOPB; // 0x20

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

	static ::Google::Protobuf::MessageParser_1<::Class_1_F91AD0C5A85E4AFA_15*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_F91AD0C5A85E4AFA_15*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_15_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_15_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_F91AD0C5A85E4AFA_15* Clone()
	{
		return ((::Class_1_F91AD0C5A85E4AFA_15*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_15_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_15_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_15_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_15_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_15_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
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
