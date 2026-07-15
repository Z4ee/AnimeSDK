#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_8654F1DF226F6DE3_14_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CD28B80)
#define CLASS_1_8654F1DF226F6DE3_14_CLONE_OFFSET UNITYSDK_OFFSET(0x1CD285D0)
#define CLASS_1_8654F1DF226F6DE3_14_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CD287E0)
#define CLASS_1_8654F1DF226F6DE3_14_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CD286D0)
#define CLASS_1_8654F1DF226F6DE3_14_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CD288F0)
#define CLASS_1_8654F1DF226F6DE3_14_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CD28D70)
#define CLASS_1_8654F1DF226F6DE3_14_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CD28D10)
#define CLASS_1_8654F1DF226F6DE3_14_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1CD28660)
#define CLASS_1_8654F1DF226F6DE3_14_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1CD28650)
#define CLASS_1_8654F1DF226F6DE3_14_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CD28530)
#define CLASS_1_8654F1DF226F6DE3_14_METHOD_1_C114A1F8E08B6F92_1_OFFSET UNITYSDK_OFFSET(0x1CD286C0)
#define CLASS_1_8654F1DF226F6DE3_14_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x1CD28640)
#define CLASS_1_8654F1DF226F6DE3_14_METHOD_1_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x1CD286B0)
#define CLASS_1_8654F1DF226F6DE3_14_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1CD28630)
#define CLASS_1_8654F1DF226F6DE3_14_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CD28560)
#define CLASS_1_8654F1DF226F6DE3_14_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CD289A0)
#define CLASS_1_8654F1DF226F6DE3_14_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CD28A00)
#define CLASS_1_8654F1DF226F6DE3_14__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD28F40)
#define CLASS_1_8654F1DF226F6DE3_14__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CD28580)
#define CLASS_1_8654F1DF226F6DE3_14__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD28570)

inline static constexpr unsigned int Class_1_8654F1DF226F6DE3_14_TypeDefinitionIndex = 32706;

class Class_1_8654F1DF226F6DE3_14 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_8654F1DF226F6DE3_14*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_8654F1DF226F6DE3_14*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8654F1DF226F6DE3_14_TypeDefinitionIndex)->GetStaticField(0x24110);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x10
	::System::String* Field_1_5; // 0x18
	::System::Int32 Field_1_6; // 0x20
	::System::Int32 Field_1_7; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_14__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_8654F1DF226F6DE3_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8654F1DF226F6DE3_14*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_14__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_14__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_8654F1DF226F6DE3_14*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_8654F1DF226F6DE3_14*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_14_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_14_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_8654F1DF226F6DE3_14* Clone()
	{
		return ((::Class_1_8654F1DF226F6DE3_14*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_14_CLONE_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_14_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_14_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_14_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_14_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_14_METHOD_1_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_14_METHOD_1_C114A1F8E08B6F92_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_14_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_8654F1DF226F6DE3_14* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8654F1DF226F6DE3_14*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_14_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_14_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_14_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_14_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_14_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_8654F1DF226F6DE3_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8654F1DF226F6DE3_14*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_14_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_14_MERGEFROM_1_OFFSET))(this, a1);
	}
};
