#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_DEBE1C0B72D6D42B_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7045A0)
#define CLASS_1_DEBE1C0B72D6D42B_CLONE_OFFSET UNITYSDK_OFFSET(0x1E704060)
#define CLASS_1_DEBE1C0B72D6D42B_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E704250)
#define CLASS_1_DEBE1C0B72D6D42B_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E704140)
#define CLASS_1_DEBE1C0B72D6D42B_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E704350)
#define CLASS_1_DEBE1C0B72D6D42B_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7046B0)
#define CLASS_1_DEBE1C0B72D6D42B_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E704670)
#define CLASS_1_DEBE1C0B72D6D42B_METHOD_1_3BDC77F20CA26C81_OFFSET UNITYSDK_OFFSET(0x1E7040E0)
#define CLASS_1_DEBE1C0B72D6D42B_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E703F50)
#define CLASS_1_DEBE1C0B72D6D42B_METHOD_1_8380E7BF9C2E481D_OFFSET UNITYSDK_OFFSET(0x1E7040F0)
#define CLASS_1_DEBE1C0B72D6D42B_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E703F80)
#define CLASS_1_DEBE1C0B72D6D42B_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E704480)
#define CLASS_1_DEBE1C0B72D6D42B_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7044E0)
#define CLASS_1_DEBE1C0B72D6D42B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E704840)
#define CLASS_1_DEBE1C0B72D6D42B__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E703FE0)
#define CLASS_1_DEBE1C0B72D6D42B__CTOR_OFFSET UNITYSDK_OFFSET(0x1E703F90)

inline static constexpr unsigned int Class_1_DEBE1C0B72D6D42B_TypeDefinitionIndex = 31478;

class Class_1_DEBE1C0B72D6D42B : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_DEBE1C0B72D6D42B*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_DEBE1C0B72D6D42B*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DEBE1C0B72D6D42B_TypeDefinitionIndex)->GetStaticField(0x10A30);
	}
	// static const ::System::Int32 JJLFJLHGOMJ = 0x9; // 0x0
	::Google::Protobuf::ByteString* GLCCBMNONGA; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEBE1C0B72D6D42B__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_DEBE1C0B72D6D42B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DEBE1C0B72D6D42B*))((::PBYTE)hIl2Cpp + CLASS_1_DEBE1C0B72D6D42B__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DEBE1C0B72D6D42B__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_DEBE1C0B72D6D42B*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_DEBE1C0B72D6D42B*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_DEBE1C0B72D6D42B_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEBE1C0B72D6D42B_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_DEBE1C0B72D6D42B* Clone()
	{
		return ((::Class_1_DEBE1C0B72D6D42B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEBE1C0B72D6D42B_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::ByteString* Method_1_3BDC77F20CA26C81()
	{
		return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEBE1C0B72D6D42B_METHOD_1_3BDC77F20CA26C81_OFFSET))(this);
	}

	::System::Void Method_1_8380E7BF9C2E481D(::Google::Protobuf::ByteString* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + CLASS_1_DEBE1C0B72D6D42B_METHOD_1_8380E7BF9C2E481D_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_DEBE1C0B72D6D42B_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_DEBE1C0B72D6D42B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DEBE1C0B72D6D42B*))((::PBYTE)hIl2Cpp + CLASS_1_DEBE1C0B72D6D42B_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEBE1C0B72D6D42B_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEBE1C0B72D6D42B_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_DEBE1C0B72D6D42B_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEBE1C0B72D6D42B_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_DEBE1C0B72D6D42B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DEBE1C0B72D6D42B*))((::PBYTE)hIl2Cpp + CLASS_1_DEBE1C0B72D6D42B_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_DEBE1C0B72D6D42B_MERGEFROM_1_OFFSET))(this, a1);
	}
};
