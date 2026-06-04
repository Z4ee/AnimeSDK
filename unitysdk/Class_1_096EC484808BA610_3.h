#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_096EC484808BA610_3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1AB308C0)
#define CLASS_1_096EC484808BA610_3_CLONE_OFFSET UNITYSDK_OFFSET(0x1AB306A0)
#define CLASS_1_096EC484808BA610_3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1AB30770)
#define CLASS_1_096EC484808BA610_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AB30710)
#define CLASS_1_096EC484808BA610_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AB307C0)
#define CLASS_1_096EC484808BA610_3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1AB309F0)
#define CLASS_1_096EC484808BA610_3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1AB309B0)
#define CLASS_1_096EC484808BA610_3_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x1AB30700)
#define CLASS_1_096EC484808BA610_3_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1AB30620)
#define CLASS_1_096EC484808BA610_3_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x1AB306F0)
#define CLASS_1_096EC484808BA610_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1AB30650)
#define CLASS_1_096EC484808BA610_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AB30800)
#define CLASS_1_096EC484808BA610_3_WRITETO_OFFSET UNITYSDK_OFFSET(0x1AB30860)
#define CLASS_1_096EC484808BA610_3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AB30B50)
#define CLASS_1_096EC484808BA610_3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AB30670)
#define CLASS_1_096EC484808BA610_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB30660)

inline static constexpr unsigned int Class_1_096EC484808BA610_3_TypeDefinitionIndex = 31808;

class Class_1_096EC484808BA610_3 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_096EC484808BA610_3*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_096EC484808BA610_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_096EC484808BA610_3_TypeDefinitionIndex)->GetStaticField(0x17CB0);
	}
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_2; // 0x10
	::System::UInt64 Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_096EC484808BA610_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_096EC484808BA610_3*))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_3__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_3__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_096EC484808BA610_3*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_096EC484808BA610_3*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_3_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_096EC484808BA610_3* Clone()
	{
		return ((::Class_1_096EC484808BA610_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_3_CLONE_OFFSET))(this);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_3_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_3_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_096EC484808BA610_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_096EC484808BA610_3*))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_096EC484808BA610_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_096EC484808BA610_3*))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_096EC484808BA610_3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
