#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0AADEC629A5E48C7_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_455CA3FD2409BEB7_19_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19A505E0)
#define CLASS_1_455CA3FD2409BEB7_19_CLONE_OFFSET UNITYSDK_OFFSET(0x19A50220)
#define CLASS_1_455CA3FD2409BEB7_19_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19A503B0)
#define CLASS_1_455CA3FD2409BEB7_19_EQUALS_OFFSET UNITYSDK_OFFSET(0x19A50300)
#define CLASS_1_455CA3FD2409BEB7_19_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19A50460)
#define CLASS_1_455CA3FD2409BEB7_19_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19A50740)
#define CLASS_1_455CA3FD2409BEB7_19_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19A506B0)
#define CLASS_1_455CA3FD2409BEB7_19_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19A502E0)
#define CLASS_1_455CA3FD2409BEB7_19_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x19A502C0)
#define CLASS_1_455CA3FD2409BEB7_19_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19A50140)
#define CLASS_1_455CA3FD2409BEB7_19_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19A502F0)
#define CLASS_1_455CA3FD2409BEB7_19_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x19A502D0)
#define CLASS_1_455CA3FD2409BEB7_19_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19A50170)
#define CLASS_1_455CA3FD2409BEB7_19_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19A50500)
#define CLASS_1_455CA3FD2409BEB7_19_WRITETO_OFFSET UNITYSDK_OFFSET(0x19A50560)
#define CLASS_1_455CA3FD2409BEB7_19__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A507F0)
#define CLASS_1_455CA3FD2409BEB7_19__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19A50190)
#define CLASS_1_455CA3FD2409BEB7_19__CTOR_OFFSET UNITYSDK_OFFSET(0x19A50180)

inline static constexpr unsigned int Class_1_455CA3FD2409BEB7_19_TypeDefinitionIndex = 30266;

class Class_1_455CA3FD2409BEB7_19 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_455CA3FD2409BEB7_19*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_455CA3FD2409BEB7_19*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_455CA3FD2409BEB7_19_TypeDefinitionIndex)->GetStaticField(0x4DA50);
	}
	// static const ::System::Int32 Field_1_2 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xD; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Class_1_0AADEC629A5E48C7_2* Field_1_3; // 0x18
	::System::UInt32 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455CA3FD2409BEB7_19__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_455CA3FD2409BEB7_19* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455CA3FD2409BEB7_19*))((::PBYTE)hIl2Cpp + CLASS_1_455CA3FD2409BEB7_19__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_455CA3FD2409BEB7_19__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_455CA3FD2409BEB7_19*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_455CA3FD2409BEB7_19*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_455CA3FD2409BEB7_19_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455CA3FD2409BEB7_19_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_455CA3FD2409BEB7_19* Clone()
	{
		return ((::Class_1_455CA3FD2409BEB7_19*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455CA3FD2409BEB7_19_CLONE_OFFSET))(this);
	}

	::Class_1_0AADEC629A5E48C7_2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_0AADEC629A5E48C7_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455CA3FD2409BEB7_19_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_0AADEC629A5E48C7_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AADEC629A5E48C7_2*))((::PBYTE)hIl2Cpp + CLASS_1_455CA3FD2409BEB7_19_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455CA3FD2409BEB7_19_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_455CA3FD2409BEB7_19_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_455CA3FD2409BEB7_19_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_455CA3FD2409BEB7_19* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_455CA3FD2409BEB7_19*))((::PBYTE)hIl2Cpp + CLASS_1_455CA3FD2409BEB7_19_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455CA3FD2409BEB7_19_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455CA3FD2409BEB7_19_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_455CA3FD2409BEB7_19_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_455CA3FD2409BEB7_19_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_455CA3FD2409BEB7_19* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455CA3FD2409BEB7_19*))((::PBYTE)hIl2Cpp + CLASS_1_455CA3FD2409BEB7_19_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_455CA3FD2409BEB7_19_MERGEFROM_1_OFFSET))(this, a1);
	}
};
