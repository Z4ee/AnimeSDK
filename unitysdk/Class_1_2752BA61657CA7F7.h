#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A8DBE2E1FDD0053;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_2752BA61657CA7F7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA90360)
#define CLASS_1_2752BA61657CA7F7_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA8FD40)
#define CLASS_1_2752BA61657CA7F7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA8FF50)
#define CLASS_1_2752BA61657CA7F7_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA8FDE0)
#define CLASS_1_2752BA61657CA7F7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA90220)
#define CLASS_1_2752BA61657CA7F7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA90430)
#define CLASS_1_2752BA61657CA7F7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA903C0)
#define CLASS_1_2752BA61657CA7F7_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1EA8FDC0)
#define CLASS_1_2752BA61657CA7F7_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1EA8FC80)
#define CLASS_1_2752BA61657CA7F7_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1EA8FDD0)
#define CLASS_1_2752BA61657CA7F7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA8FCB0)
#define CLASS_1_2752BA61657CA7F7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA90270)
#define CLASS_1_2752BA61657CA7F7_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA902D0)
#define CLASS_1_2752BA61657CA7F7__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA905B0)
#define CLASS_1_2752BA61657CA7F7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA8FCD0)
#define CLASS_1_2752BA61657CA7F7__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA8FCC0)

inline static constexpr unsigned int Class_1_2752BA61657CA7F7_TypeDefinitionIndex = 25864;

class Class_1_2752BA61657CA7F7 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_2752BA61657CA7F7*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_2752BA61657CA7F7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2752BA61657CA7F7_TypeDefinitionIndex)->GetStaticField(0x310D0);
	}
	// static const ::System::Int32 DCEOBBHCHPI = 0xA; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Class_1_7A8DBE2E1FDD0053* BPMPCFGEIID; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_2752BA61657CA7F7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2752BA61657CA7F7*))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_2752BA61657CA7F7*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_2752BA61657CA7F7*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_2752BA61657CA7F7* Clone()
	{
		return ((::Class_1_2752BA61657CA7F7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_CLONE_OFFSET))(this);
	}

	::Class_1_7A8DBE2E1FDD0053* Method_1_24748FC20F375725()
	{
		return ((::Class_1_7A8DBE2E1FDD0053*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_7A8DBE2E1FDD0053* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7A8DBE2E1FDD0053*))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_2752BA61657CA7F7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2752BA61657CA7F7*))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_2752BA61657CA7F7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2752BA61657CA7F7*))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_MERGEFROM_1_OFFSET))(this, a1);
	}
};
