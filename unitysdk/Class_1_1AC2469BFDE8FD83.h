#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_242BFB9DE152D766_30;
class Class_1_52DCEE691286F89A_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_1AC2469BFDE8FD83_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1D096CB0)
#define CLASS_1_1AC2469BFDE8FD83_CLONE_OFFSET UNITYSDK_OFFSET(0x1D096510)
#define CLASS_1_1AC2469BFDE8FD83_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D0968E0)
#define CLASS_1_1AC2469BFDE8FD83_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D0966B0)
#define CLASS_1_1AC2469BFDE8FD83_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D096B10)
#define CLASS_1_1AC2469BFDE8FD83_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1D096DE0)
#define CLASS_1_1AC2469BFDE8FD83_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1D096D40)
#define CLASS_1_1AC2469BFDE8FD83_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x1D096690)
#define CLASS_1_1AC2469BFDE8FD83_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1D096670)
#define CLASS_1_1AC2469BFDE8FD83_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1D096370)
#define CLASS_1_1AC2469BFDE8FD83_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1D0966A0)
#define CLASS_1_1AC2469BFDE8FD83_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1D096680)
#define CLASS_1_1AC2469BFDE8FD83_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1D0963A0)
#define CLASS_1_1AC2469BFDE8FD83_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D096B70)
#define CLASS_1_1AC2469BFDE8FD83_WRITETO_OFFSET UNITYSDK_OFFSET(0x1D096BD0)
#define CLASS_1_1AC2469BFDE8FD83__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D096F80)
#define CLASS_1_1AC2469BFDE8FD83__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D0963C0)
#define CLASS_1_1AC2469BFDE8FD83__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0963B0)

inline static constexpr unsigned int Class_1_1AC2469BFDE8FD83_TypeDefinitionIndex = 28407;

class Class_1_1AC2469BFDE8FD83 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_1AC2469BFDE8FD83*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_1AC2469BFDE8FD83*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1AC2469BFDE8FD83_TypeDefinitionIndex)->GetStaticField(0x3E4C0);
	}
	// static const ::System::Int32 Field_1_1 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xB; // 0x0
	::Class_1_242BFB9DE152D766_30* Field_1_3; // 0x10
	::Class_1_52DCEE691286F89A_2* Field_1_4; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AC2469BFDE8FD83__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_1AC2469BFDE8FD83* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1AC2469BFDE8FD83*))((::PBYTE)hIl2Cpp + CLASS_1_1AC2469BFDE8FD83__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1AC2469BFDE8FD83__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_1AC2469BFDE8FD83*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_1AC2469BFDE8FD83*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1AC2469BFDE8FD83_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AC2469BFDE8FD83_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_1AC2469BFDE8FD83* Clone()
	{
		return ((::Class_1_1AC2469BFDE8FD83*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AC2469BFDE8FD83_CLONE_OFFSET))(this);
	}

	::Class_1_242BFB9DE152D766_30* Method_1_24748FC20F375725()
	{
		return ((::Class_1_242BFB9DE152D766_30*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AC2469BFDE8FD83_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_242BFB9DE152D766_30* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_30*))((::PBYTE)hIl2Cpp + CLASS_1_1AC2469BFDE8FD83_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_52DCEE691286F89A_2* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_52DCEE691286F89A_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AC2469BFDE8FD83_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_52DCEE691286F89A_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_52DCEE691286F89A_2*))((::PBYTE)hIl2Cpp + CLASS_1_1AC2469BFDE8FD83_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1AC2469BFDE8FD83_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1AC2469BFDE8FD83* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1AC2469BFDE8FD83*))((::PBYTE)hIl2Cpp + CLASS_1_1AC2469BFDE8FD83_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AC2469BFDE8FD83_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AC2469BFDE8FD83_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1AC2469BFDE8FD83_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AC2469BFDE8FD83_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_1AC2469BFDE8FD83* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1AC2469BFDE8FD83*))((::PBYTE)hIl2Cpp + CLASS_1_1AC2469BFDE8FD83_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1AC2469BFDE8FD83_MERGEFROM_1_OFFSET))(this, a1);
	}
};
