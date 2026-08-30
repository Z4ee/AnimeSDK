#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_8654F1DF226F6DE3_9_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E658190)
#define CLASS_1_8654F1DF226F6DE3_9_CLONE_OFFSET UNITYSDK_OFFSET(0x1E657C90)
#define CLASS_1_8654F1DF226F6DE3_9_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E657E40)
#define CLASS_1_8654F1DF226F6DE3_9_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E657D40)
#define CLASS_1_8654F1DF226F6DE3_9_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E657FE0)
#define CLASS_1_8654F1DF226F6DE3_9_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E658240)
#define CLASS_1_8654F1DF226F6DE3_9_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E658200)
#define CLASS_1_8654F1DF226F6DE3_9_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1E657CF0)
#define CLASS_1_8654F1DF226F6DE3_9_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1E657CE0)
#define CLASS_1_8654F1DF226F6DE3_9_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E657C00)
#define CLASS_1_8654F1DF226F6DE3_9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E657C30)
#define CLASS_1_8654F1DF226F6DE3_9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6580A0)
#define CLASS_1_8654F1DF226F6DE3_9_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E658100)
#define CLASS_1_8654F1DF226F6DE3_9__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6583D0)
#define CLASS_1_8654F1DF226F6DE3_9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E657C50)
#define CLASS_1_8654F1DF226F6DE3_9__CTOR_OFFSET UNITYSDK_OFFSET(0x1E657C40)

inline static constexpr unsigned int Class_1_8654F1DF226F6DE3_9_TypeDefinitionIndex = 30372;

class Class_1_8654F1DF226F6DE3_9 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_8654F1DF226F6DE3_9*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_8654F1DF226F6DE3_9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8654F1DF226F6DE3_9_TypeDefinitionIndex)->GetStaticField(0x3D1A0);
	}
	// static const ::System::Int32 AFBDHEMJEPP = 0xD; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::String* PDKNJCIEBHA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_9__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_8654F1DF226F6DE3_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8654F1DF226F6DE3_9*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_9__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_9__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_8654F1DF226F6DE3_9*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_8654F1DF226F6DE3_9*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_9_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_8654F1DF226F6DE3_9* Clone()
	{
		return ((::Class_1_8654F1DF226F6DE3_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_9_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_9_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_9_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_9_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_8654F1DF226F6DE3_9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8654F1DF226F6DE3_9*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_9_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_9_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_9_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_9_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_9_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_8654F1DF226F6DE3_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8654F1DF226F6DE3_9*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_9_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_9_MERGEFROM_1_OFFSET))(this, a1);
	}
};
