#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_40.h"
#include "unitysdk/System/Object.h"

class Class_1_540A513946133080;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_99D87B66FA19BA63_6_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x196FBD90)
#define CLASS_1_99D87B66FA19BA63_6_CLONE_OFFSET UNITYSDK_OFFSET(0x196FB9B0)
#define CLASS_1_99D87B66FA19BA63_6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x196FBBA0)
#define CLASS_1_99D87B66FA19BA63_6_EQUALS_OFFSET UNITYSDK_OFFSET(0x196FBAC0)
#define CLASS_1_99D87B66FA19BA63_6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x196FBC50)
#define CLASS_1_99D87B66FA19BA63_6_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x196FBFA0)
#define CLASS_1_99D87B66FA19BA63_6_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x196FBEA0)
#define CLASS_1_99D87B66FA19BA63_6_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x196FBA80)
#define CLASS_1_99D87B66FA19BA63_6_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x196FB8A0)
#define CLASS_1_99D87B66FA19BA63_6_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x196FBAB0)
#define CLASS_1_99D87B66FA19BA63_6_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x196FBA90)
#define CLASS_1_99D87B66FA19BA63_6_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x196FBAA0)
#define CLASS_1_99D87B66FA19BA63_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x196FB900)
#define CLASS_1_99D87B66FA19BA63_6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x196FBCA0)
#define CLASS_1_99D87B66FA19BA63_6_WRITETO_OFFSET UNITYSDK_OFFSET(0x196FBD00)
#define CLASS_1_99D87B66FA19BA63_6__CCTOR_OFFSET UNITYSDK_OFFSET(0x196FC0B0)
#define CLASS_1_99D87B66FA19BA63_6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x196FB920)
#define CLASS_1_99D87B66FA19BA63_6__CTOR_OFFSET UNITYSDK_OFFSET(0x196FB910)

inline static constexpr unsigned int Class_1_99D87B66FA19BA63_6_TypeDefinitionIndex = 28223;

class Class_1_99D87B66FA19BA63_6 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_99D87B66FA19BA63_6*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_99D87B66FA19BA63_6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_99D87B66FA19BA63_6_TypeDefinitionIndex)->GetStaticField(0x4ECA0);
	}
	// static const ::System::Int32 Field_1_2 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Class_1_540A513946133080* Field_1_3; // 0x18
	::Enum_3_DB663931210BBC27_40 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_6__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_99D87B66FA19BA63_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_99D87B66FA19BA63_6*))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_6__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_6__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_99D87B66FA19BA63_6*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_99D87B66FA19BA63_6*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_6_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_99D87B66FA19BA63_6* Clone()
	{
		return ((::Class_1_99D87B66FA19BA63_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_6_CLONE_OFFSET))(this);
	}

	::Class_1_540A513946133080* Method_1_24748FC20F375725()
	{
		return ((::Class_1_540A513946133080*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_6_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_540A513946133080* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_540A513946133080*))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_6_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Enum_3_DB663931210BBC27_40 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_DB663931210BBC27_40(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_6_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_DB663931210BBC27_40 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_40))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_6_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_99D87B66FA19BA63_6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_99D87B66FA19BA63_6*))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_6_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_6_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_6_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_6_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_99D87B66FA19BA63_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_99D87B66FA19BA63_6*))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_6_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_6_MERGEFROM_1_OFFSET))(this, a1);
	}
};
