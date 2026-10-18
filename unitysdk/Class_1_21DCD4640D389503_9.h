#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21DCD4640D389503_9_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9E60B0)
#define CLASS_1_21DCD4640D389503_9_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9E5410)
#define CLASS_1_21DCD4640D389503_9_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9E57F0)
#define CLASS_1_21DCD4640D389503_9_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9E5790)
#define CLASS_1_21DCD4640D389503_9_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9E5950)
#define CLASS_1_21DCD4640D389503_9_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9E63A0)
#define CLASS_1_21DCD4640D389503_9_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9E62C0)
#define CLASS_1_21DCD4640D389503_9_METHOD_1_050E70FEDB783306_1_OFFSET UNITYSDK_OFFSET(0x1E9E5560)
#define CLASS_1_21DCD4640D389503_9_METHOD_1_050E70FEDB783306_2_OFFSET UNITYSDK_OFFSET(0x1E9E55C0)
#define CLASS_1_21DCD4640D389503_9_METHOD_1_050E70FEDB783306_3_OFFSET UNITYSDK_OFFSET(0x1E9E5620)
#define CLASS_1_21DCD4640D389503_9_METHOD_1_050E70FEDB783306_4_OFFSET UNITYSDK_OFFSET(0x1E9E5680)
#define CLASS_1_21DCD4640D389503_9_METHOD_1_050E70FEDB783306_5_OFFSET UNITYSDK_OFFSET(0x1E9E56E0)
#define CLASS_1_21DCD4640D389503_9_METHOD_1_050E70FEDB783306_6_OFFSET UNITYSDK_OFFSET(0x1E9E5740)
#define CLASS_1_21DCD4640D389503_9_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1E9E5500)
#define CLASS_1_21DCD4640D389503_9_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x1E9E5550)
#define CLASS_1_21DCD4640D389503_9_METHOD_1_126AB3935214AA22_2_OFFSET UNITYSDK_OFFSET(0x1E9E55B0)
#define CLASS_1_21DCD4640D389503_9_METHOD_1_126AB3935214AA22_3_OFFSET UNITYSDK_OFFSET(0x1E9E5610)
#define CLASS_1_21DCD4640D389503_9_METHOD_1_126AB3935214AA22_4_OFFSET UNITYSDK_OFFSET(0x1E9E5670)
#define CLASS_1_21DCD4640D389503_9_METHOD_1_126AB3935214AA22_5_OFFSET UNITYSDK_OFFSET(0x1E9E56D0)
#define CLASS_1_21DCD4640D389503_9_METHOD_1_126AB3935214AA22_6_OFFSET UNITYSDK_OFFSET(0x1E9E5730)
#define CLASS_1_21DCD4640D389503_9_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1E9E54F0)
#define CLASS_1_21DCD4640D389503_9_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E9E52B0)
#define CLASS_1_21DCD4640D389503_9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9E5310)
#define CLASS_1_21DCD4640D389503_9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9E5D20)
#define CLASS_1_21DCD4640D389503_9_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9E5D80)
#define CLASS_1_21DCD4640D389503_9__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9E6630)
#define CLASS_1_21DCD4640D389503_9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9E5370)
#define CLASS_1_21DCD4640D389503_9__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9E5320)

inline static constexpr unsigned int Class_1_21DCD4640D389503_9_TypeDefinitionIndex = 25323;

class Class_1_21DCD4640D389503_9 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_9*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_9_TypeDefinitionIndex)->GetStaticField(0x4E260);
	}
	// static const ::System::Int32 COLHHKAFIAM = 0x1; // 0x0
	// static const ::System::Int32 GBGJFHGNCFE = 0x2; // 0x0
	// static const ::System::Int32 HHKHIPGEDFK = 0x3; // 0x0
	// static const ::System::Int32 GJIMCPKDILF = 0x4; // 0x0
	// static const ::System::Int32 HNOPFHEECPA = 0x5; // 0x0
	// static const ::System::Int32 IPPMMOPLBDF = 0x6; // 0x0
	// static const ::System::Int32 GBACOAIGAHN = 0x7; // 0x0
	::System::String* DNBBMAEJAKJ; // 0x10
	::System::String* INAPODBLEMG; // 0x18
	::System::String* EHJPNDHJKEA; // 0x20
	::System::String* IGLDAPFJKJD; // 0x28
	::System::String* MHJMNOLIDNO; // 0x30
	::System::String* FKOJHHJILFG; // 0x38
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x40
	::System::String* LFMCMGNAEHM; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_9__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21DCD4640D389503_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_9*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_9__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_9__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_9*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_9*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_9_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21DCD4640D389503_9* Clone()
	{
		return ((::Class_1_21DCD4640D389503_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_9_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_9_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_9_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_9_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_9_METHOD_1_050E70FEDB783306_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_9_METHOD_1_126AB3935214AA22_2_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_2(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_9_METHOD_1_050E70FEDB783306_2_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_9_METHOD_1_126AB3935214AA22_3_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_3(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_9_METHOD_1_050E70FEDB783306_3_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_4()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_9_METHOD_1_126AB3935214AA22_4_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_4(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_9_METHOD_1_050E70FEDB783306_4_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_9_METHOD_1_126AB3935214AA22_5_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_9_METHOD_1_050E70FEDB783306_5_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_6()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_9_METHOD_1_126AB3935214AA22_6_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_6(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_9_METHOD_1_050E70FEDB783306_6_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_9_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21DCD4640D389503_9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21DCD4640D389503_9*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_9_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_9_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_9_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_9_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_9_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21DCD4640D389503_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_9*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_9_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_9_MERGEFROM_1_OFFSET))(this, a1);
	}
};
