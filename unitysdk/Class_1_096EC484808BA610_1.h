#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_096EC484808BA610_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4BB160)
#define CLASS_1_096EC484808BA610_1_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4BAD80)
#define CLASS_1_096EC484808BA610_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4BAEC0)
#define CLASS_1_096EC484808BA610_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4BADF0)
#define CLASS_1_096EC484808BA610_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4BB030)
#define CLASS_1_096EC484808BA610_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4BB290)
#define CLASS_1_096EC484808BA610_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4BB250)
#define CLASS_1_096EC484808BA610_1_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x1E4BADE0)
#define CLASS_1_096EC484808BA610_1_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E4BAD00)
#define CLASS_1_096EC484808BA610_1_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x1E4BADD0)
#define CLASS_1_096EC484808BA610_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4BAD30)
#define CLASS_1_096EC484808BA610_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4BB070)
#define CLASS_1_096EC484808BA610_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4BB0D0)
#define CLASS_1_096EC484808BA610_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4BB3F0)
#define CLASS_1_096EC484808BA610_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4BAD50)
#define CLASS_1_096EC484808BA610_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4BAD40)

inline static constexpr unsigned int Class_1_096EC484808BA610_1_TypeDefinitionIndex = 27993;

class Class_1_096EC484808BA610_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_096EC484808BA610_1*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_096EC484808BA610_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_096EC484808BA610_1_TypeDefinitionIndex)->GetStaticField(0x19550);
	}
	// static const ::System::Int32 NGGHNIIOMBB = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt64 ADLMCECONCK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_096EC484808BA610_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_096EC484808BA610_1*))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_096EC484808BA610_1*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_096EC484808BA610_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_1_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_096EC484808BA610_1* Clone()
	{
		return ((::Class_1_096EC484808BA610_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_1_CLONE_OFFSET))(this);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_1_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_1_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_096EC484808BA610_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_096EC484808BA610_1*))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_096EC484808BA610_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_096EC484808BA610_1*))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
