#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E591DF54310AABF5_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_946C8BC94E6B6DA1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C31EAD0)
#define CLASS_1_946C8BC94E6B6DA1_CLONE_OFFSET UNITYSDK_OFFSET(0x1C31E4F0)
#define CLASS_1_946C8BC94E6B6DA1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C31E760)
#define CLASS_1_946C8BC94E6B6DA1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C31E5D0)
#define CLASS_1_946C8BC94E6B6DA1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C31E8F0)
#define CLASS_1_946C8BC94E6B6DA1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C31ECB0)
#define CLASS_1_946C8BC94E6B6DA1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C31EC20)
#define CLASS_1_946C8BC94E6B6DA1_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1C31E5B0)
#define CLASS_1_946C8BC94E6B6DA1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1C31E570)
#define CLASS_1_946C8BC94E6B6DA1_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C31E590)
#define CLASS_1_946C8BC94E6B6DA1_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C31E430)
#define CLASS_1_946C8BC94E6B6DA1_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1C31E5C0)
#define CLASS_1_946C8BC94E6B6DA1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1C31E580)
#define CLASS_1_946C8BC94E6B6DA1_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C31E5A0)
#define CLASS_1_946C8BC94E6B6DA1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C31E460)
#define CLASS_1_946C8BC94E6B6DA1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C31E930)
#define CLASS_1_946C8BC94E6B6DA1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C31E990)
#define CLASS_1_946C8BC94E6B6DA1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C31EE70)
#define CLASS_1_946C8BC94E6B6DA1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C31E480)
#define CLASS_1_946C8BC94E6B6DA1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C31E470)

inline static constexpr unsigned int Class_1_946C8BC94E6B6DA1_TypeDefinitionIndex = 25457;

class Class_1_946C8BC94E6B6DA1 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_946C8BC94E6B6DA1*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_946C8BC94E6B6DA1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_946C8BC94E6B6DA1_TypeDefinitionIndex)->GetStaticField(0x3BCF0);
	}
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xB; // 0x0
	::Class_1_E591DF54310AABF5_1* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x18
	::System::UInt32 Field_1_6; // 0x20
	::System::UInt32 Field_1_7; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_946C8BC94E6B6DA1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_946C8BC94E6B6DA1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_946C8BC94E6B6DA1*))((::PBYTE)hIl2Cpp + CLASS_1_946C8BC94E6B6DA1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_946C8BC94E6B6DA1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_946C8BC94E6B6DA1*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_946C8BC94E6B6DA1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_946C8BC94E6B6DA1_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_946C8BC94E6B6DA1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_946C8BC94E6B6DA1* Clone()
	{
		return ((::Class_1_946C8BC94E6B6DA1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_946C8BC94E6B6DA1_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_946C8BC94E6B6DA1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_946C8BC94E6B6DA1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_E591DF54310AABF5_1* Method_1_24748FC20F375725()
	{
		return ((::Class_1_E591DF54310AABF5_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_946C8BC94E6B6DA1_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_E591DF54310AABF5_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E591DF54310AABF5_1*))((::PBYTE)hIl2Cpp + CLASS_1_946C8BC94E6B6DA1_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_946C8BC94E6B6DA1_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_946C8BC94E6B6DA1_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_946C8BC94E6B6DA1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_946C8BC94E6B6DA1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_946C8BC94E6B6DA1*))((::PBYTE)hIl2Cpp + CLASS_1_946C8BC94E6B6DA1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_946C8BC94E6B6DA1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_946C8BC94E6B6DA1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_946C8BC94E6B6DA1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_946C8BC94E6B6DA1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_946C8BC94E6B6DA1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_946C8BC94E6B6DA1*))((::PBYTE)hIl2Cpp + CLASS_1_946C8BC94E6B6DA1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_946C8BC94E6B6DA1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
