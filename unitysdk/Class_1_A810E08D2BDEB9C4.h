#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4AF393E7839B85AC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_A810E08D2BDEB9C4_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1946CA90)
#define CLASS_1_A810E08D2BDEB9C4_CLONE_OFFSET UNITYSDK_OFFSET(0x1946C710)
#define CLASS_1_A810E08D2BDEB9C4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1946C8C0)
#define CLASS_1_A810E08D2BDEB9C4_EQUALS_OFFSET UNITYSDK_OFFSET(0x1946C7E0)
#define CLASS_1_A810E08D2BDEB9C4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1946C970)
#define CLASS_1_A810E08D2BDEB9C4_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1946CBF0)
#define CLASS_1_A810E08D2BDEB9C4_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1946CB60)
#define CLASS_1_A810E08D2BDEB9C4_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1946C7A0)
#define CLASS_1_A810E08D2BDEB9C4_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1946C7C0)
#define CLASS_1_A810E08D2BDEB9C4_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1946C640)
#define CLASS_1_A810E08D2BDEB9C4_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1946C7B0)
#define CLASS_1_A810E08D2BDEB9C4_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1946C7D0)
#define CLASS_1_A810E08D2BDEB9C4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1946C6A0)
#define CLASS_1_A810E08D2BDEB9C4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1946C9B0)
#define CLASS_1_A810E08D2BDEB9C4_WRITETO_OFFSET UNITYSDK_OFFSET(0x1946CA10)
#define CLASS_1_A810E08D2BDEB9C4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1946CCA0)
#define CLASS_1_A810E08D2BDEB9C4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1946C6C0)
#define CLASS_1_A810E08D2BDEB9C4__CTOR_OFFSET UNITYSDK_OFFSET(0x1946C6B0)

inline static constexpr unsigned int Class_1_A810E08D2BDEB9C4_TypeDefinitionIndex = 25617;

class Class_1_A810E08D2BDEB9C4 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_A810E08D2BDEB9C4*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_A810E08D2BDEB9C4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A810E08D2BDEB9C4_TypeDefinitionIndex)->GetStaticField(0x4A310);
	}
	// static const ::System::Int32 Field_1_2 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x7; // 0x0
	::Class_1_4AF393E7839B85AC* Field_1_5; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::System::UInt32 Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A810E08D2BDEB9C4__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_A810E08D2BDEB9C4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A810E08D2BDEB9C4*))((::PBYTE)hIl2Cpp + CLASS_1_A810E08D2BDEB9C4__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A810E08D2BDEB9C4__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_A810E08D2BDEB9C4*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_A810E08D2BDEB9C4*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A810E08D2BDEB9C4_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A810E08D2BDEB9C4_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_A810E08D2BDEB9C4* Clone()
	{
		return ((::Class_1_A810E08D2BDEB9C4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A810E08D2BDEB9C4_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A810E08D2BDEB9C4_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A810E08D2BDEB9C4_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_4AF393E7839B85AC* Method_1_24748FC20F375725()
	{
		return ((::Class_1_4AF393E7839B85AC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A810E08D2BDEB9C4_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_4AF393E7839B85AC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4AF393E7839B85AC*))((::PBYTE)hIl2Cpp + CLASS_1_A810E08D2BDEB9C4_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A810E08D2BDEB9C4_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_A810E08D2BDEB9C4* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A810E08D2BDEB9C4*))((::PBYTE)hIl2Cpp + CLASS_1_A810E08D2BDEB9C4_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A810E08D2BDEB9C4_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A810E08D2BDEB9C4_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A810E08D2BDEB9C4_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A810E08D2BDEB9C4_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_A810E08D2BDEB9C4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A810E08D2BDEB9C4*))((::PBYTE)hIl2Cpp + CLASS_1_A810E08D2BDEB9C4_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A810E08D2BDEB9C4_MERGEFROM_1_OFFSET))(this, a1);
	}
};
