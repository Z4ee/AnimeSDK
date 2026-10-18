#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_096EC484808BA610_8_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE22690)
#define CLASS_1_096EC484808BA610_8_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE222B0)
#define CLASS_1_096EC484808BA610_8_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE223F0)
#define CLASS_1_096EC484808BA610_8_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE22320)
#define CLASS_1_096EC484808BA610_8_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE22560)
#define CLASS_1_096EC484808BA610_8_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE227C0)
#define CLASS_1_096EC484808BA610_8_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE22780)
#define CLASS_1_096EC484808BA610_8_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x1DE22310)
#define CLASS_1_096EC484808BA610_8_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1DE22230)
#define CLASS_1_096EC484808BA610_8_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x1DE22300)
#define CLASS_1_096EC484808BA610_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE22260)
#define CLASS_1_096EC484808BA610_8_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE225A0)
#define CLASS_1_096EC484808BA610_8_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE22600)
#define CLASS_1_096EC484808BA610_8__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE22920)
#define CLASS_1_096EC484808BA610_8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE22280)
#define CLASS_1_096EC484808BA610_8__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE22270)

inline static constexpr unsigned int Class_1_096EC484808BA610_8_TypeDefinitionIndex = 28496;

class Class_1_096EC484808BA610_8 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_096EC484808BA610_8*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_096EC484808BA610_8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_096EC484808BA610_8_TypeDefinitionIndex)->GetStaticField(0x14320);
	}
	// static const ::System::Int32 NGGHNIIOMBB = 0x6; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt64 ADLMCECONCK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_8__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_096EC484808BA610_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_096EC484808BA610_8*))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_8__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_8__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_096EC484808BA610_8*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_096EC484808BA610_8*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_8_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_096EC484808BA610_8* Clone()
	{
		return ((::Class_1_096EC484808BA610_8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_8_CLONE_OFFSET))(this);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_8_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_8_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_8_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_096EC484808BA610_8* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_096EC484808BA610_8*))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_8_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_8_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_8_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_8_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_8_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_096EC484808BA610_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_096EC484808BA610_8*))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_8_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_8_MERGEFROM_1_OFFSET))(this, a1);
	}
};
