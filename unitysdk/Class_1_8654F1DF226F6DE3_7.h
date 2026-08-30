#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_8654F1DF226F6DE3_7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1ED5BD90)
#define CLASS_1_8654F1DF226F6DE3_7_CLONE_OFFSET UNITYSDK_OFFSET(0x1ED5B770)
#define CLASS_1_8654F1DF226F6DE3_7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1ED5B9C0)
#define CLASS_1_8654F1DF226F6DE3_7_EQUALS_OFFSET UNITYSDK_OFFSET(0x1ED5B890)
#define CLASS_1_8654F1DF226F6DE3_7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1ED5BAF0)
#define CLASS_1_8654F1DF226F6DE3_7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1ED5BE90)
#define CLASS_1_8654F1DF226F6DE3_7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1ED5BE30)
#define CLASS_1_8654F1DF226F6DE3_7_METHOD_1_050E70FEDB783306_1_OFFSET UNITYSDK_OFFSET(0x1ED5B840)
#define CLASS_1_8654F1DF226F6DE3_7_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1ED5B7E0)
#define CLASS_1_8654F1DF226F6DE3_7_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x1ED5B830)
#define CLASS_1_8654F1DF226F6DE3_7_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1ED5B7D0)
#define CLASS_1_8654F1DF226F6DE3_7_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1ED5B6C0)
#define CLASS_1_8654F1DF226F6DE3_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1ED5B6F0)
#define CLASS_1_8654F1DF226F6DE3_7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1ED5BC30)
#define CLASS_1_8654F1DF226F6DE3_7_WRITETO_OFFSET UNITYSDK_OFFSET(0x1ED5BC90)
#define CLASS_1_8654F1DF226F6DE3_7__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ED5C080)
#define CLASS_1_8654F1DF226F6DE3_7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ED5B720)
#define CLASS_1_8654F1DF226F6DE3_7__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED5B700)

inline static constexpr unsigned int Class_1_8654F1DF226F6DE3_7_TypeDefinitionIndex = 29203;

class Class_1_8654F1DF226F6DE3_7 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_8654F1DF226F6DE3_7*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_8654F1DF226F6DE3_7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8654F1DF226F6DE3_7_TypeDefinitionIndex)->GetStaticField(0x45A00);
	}
	// static const ::System::Int32 FODIECHNCJH = 0x7; // 0x0
	// static const ::System::Int32 EHELOMBFMLI = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::String* HHBKHBPNKKH; // 0x18
	::System::String* FODIOFHEHOB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_8654F1DF226F6DE3_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8654F1DF226F6DE3_7*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_7__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_7__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_8654F1DF226F6DE3_7*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_8654F1DF226F6DE3_7*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_7_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_8654F1DF226F6DE3_7* Clone()
	{
		return ((::Class_1_8654F1DF226F6DE3_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_7_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_7_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_7_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_7_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_7_METHOD_1_050E70FEDB783306_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_8654F1DF226F6DE3_7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8654F1DF226F6DE3_7*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_8654F1DF226F6DE3_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8654F1DF226F6DE3_7*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_7_MERGEFROM_1_OFFSET))(this, a1);
	}
};
