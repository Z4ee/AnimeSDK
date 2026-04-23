#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_8FCA304455C313FC_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19CE0850)
#define CLASS_1_8FCA304455C313FC_1_CLONE_OFFSET UNITYSDK_OFFSET(0x19CE0250)
#define CLASS_1_8FCA304455C313FC_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19CE0510)
#define CLASS_1_8FCA304455C313FC_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x19CE0440)
#define CLASS_1_8FCA304455C313FC_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19CE05E0)
#define CLASS_1_8FCA304455C313FC_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19CE0BC0)
#define CLASS_1_8FCA304455C313FC_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19CE0AD0)
#define CLASS_1_8FCA304455C313FC_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19CE0420)
#define CLASS_1_8FCA304455C313FC_1_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x19CE0370)
#define CLASS_1_8FCA304455C313FC_1_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x19CE02C0)
#define CLASS_1_8FCA304455C313FC_1_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19CE0190)
#define CLASS_1_8FCA304455C313FC_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19CE0430)
#define CLASS_1_8FCA304455C313FC_1_METHOD_1_9CE3056B66B7573D_1_OFFSET UNITYSDK_OFFSET(0x19CE0380)
#define CLASS_1_8FCA304455C313FC_1_METHOD_1_9CE3056B66B7573D_OFFSET UNITYSDK_OFFSET(0x19CE02D0)
#define CLASS_1_8FCA304455C313FC_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19CE01C0)
#define CLASS_1_8FCA304455C313FC_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19CE0720)
#define CLASS_1_8FCA304455C313FC_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x19CE0780)
#define CLASS_1_8FCA304455C313FC_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x19CE0DA0)
#define CLASS_1_8FCA304455C313FC_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19CE01F0)
#define CLASS_1_8FCA304455C313FC_1__CTOR_OFFSET UNITYSDK_OFFSET(0x19CE01D0)

inline static constexpr unsigned int Class_1_8FCA304455C313FC_1_TypeDefinitionIndex = 27977;

class Class_1_8FCA304455C313FC_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_8FCA304455C313FC_1*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_8FCA304455C313FC_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8FCA304455C313FC_1_TypeDefinitionIndex)->GetStaticField(0x66F30);
	}
	// static const ::System::Int32 Field_1_2 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xC; // 0x0
	::System::String* Field_1_5; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::System::String* Field_1_3; // 0x20
	::System::UInt32 Field_1_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FCA304455C313FC_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_8FCA304455C313FC_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8FCA304455C313FC_1*))((::PBYTE)hIl2Cpp + CLASS_1_8FCA304455C313FC_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8FCA304455C313FC_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_8FCA304455C313FC_1*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_8FCA304455C313FC_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8FCA304455C313FC_1_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FCA304455C313FC_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_8FCA304455C313FC_1* Clone()
	{
		return ((::Class_1_8FCA304455C313FC_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FCA304455C313FC_1_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FCA304455C313FC_1_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_9CE3056B66B7573D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8FCA304455C313FC_1_METHOD_1_9CE3056B66B7573D_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FCA304455C313FC_1_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_1_9CE3056B66B7573D_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8FCA304455C313FC_1_METHOD_1_9CE3056B66B7573D_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FCA304455C313FC_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8FCA304455C313FC_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_8FCA304455C313FC_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_8FCA304455C313FC_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8FCA304455C313FC_1*))((::PBYTE)hIl2Cpp + CLASS_1_8FCA304455C313FC_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FCA304455C313FC_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FCA304455C313FC_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8FCA304455C313FC_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FCA304455C313FC_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_8FCA304455C313FC_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8FCA304455C313FC_1*))((::PBYTE)hIl2Cpp + CLASS_1_8FCA304455C313FC_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8FCA304455C313FC_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
