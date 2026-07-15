#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_455008579EB95638;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_242BFB9DE152D766_19_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1D00E3C0)
#define CLASS_1_242BFB9DE152D766_19_CLONE_OFFSET UNITYSDK_OFFSET(0x1D00DD20)
#define CLASS_1_242BFB9DE152D766_19_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D00DFB0)
#define CLASS_1_242BFB9DE152D766_19_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D00DE10)
#define CLASS_1_242BFB9DE152D766_19_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D00E280)
#define CLASS_1_242BFB9DE152D766_19_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1D00E540)
#define CLASS_1_242BFB9DE152D766_19_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1D00E420)
#define CLASS_1_242BFB9DE152D766_19_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1D00DDF0)
#define CLASS_1_242BFB9DE152D766_19_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1D00DC10)
#define CLASS_1_242BFB9DE152D766_19_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1D00DE00)
#define CLASS_1_242BFB9DE152D766_19_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1D00DC70)
#define CLASS_1_242BFB9DE152D766_19_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D00E2D0)
#define CLASS_1_242BFB9DE152D766_19_WRITETO_OFFSET UNITYSDK_OFFSET(0x1D00E330)
#define CLASS_1_242BFB9DE152D766_19__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D00E760)
#define CLASS_1_242BFB9DE152D766_19__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D00DC90)
#define CLASS_1_242BFB9DE152D766_19__CTOR_OFFSET UNITYSDK_OFFSET(0x1D00DC80)

inline static constexpr unsigned int Class_1_242BFB9DE152D766_19_TypeDefinitionIndex = 26547;

class Class_1_242BFB9DE152D766_19 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_19*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_19*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_242BFB9DE152D766_19_TypeDefinitionIndex)->GetStaticField(0x4C5A0);
	}
	// static const ::System::Int32 Field_1_1 = 0xA; // 0x0
	::Class_1_455008579EB95638* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_19__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_242BFB9DE152D766_19* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_19*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_19__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_19__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_19*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_19*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_19_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_19_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_242BFB9DE152D766_19* Clone()
	{
		return ((::Class_1_242BFB9DE152D766_19*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_19_CLONE_OFFSET))(this);
	}

	::Class_1_455008579EB95638* Method_1_24748FC20F375725()
	{
		return ((::Class_1_455008579EB95638*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_19_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_455008579EB95638* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_19_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_19_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_242BFB9DE152D766_19* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_242BFB9DE152D766_19*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_19_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_19_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_19_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_19_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_19_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_242BFB9DE152D766_19* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_19*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_19_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_19_MERGEFROM_1_OFFSET))(this, a1);
	}
};
