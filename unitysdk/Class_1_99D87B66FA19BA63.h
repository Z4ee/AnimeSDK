#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0F1B992870941C13.h"
#include "unitysdk/System/Object.h"

class Class_1_87FFBB414BD751E4;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_99D87B66FA19BA63_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A1BD0C0)
#define CLASS_1_99D87B66FA19BA63_CLONE_OFFSET UNITYSDK_OFFSET(0x1A1BCD00)
#define CLASS_1_99D87B66FA19BA63_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A1BCEE0)
#define CLASS_1_99D87B66FA19BA63_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A1BCE00)
#define CLASS_1_99D87B66FA19BA63_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A1BCF90)
#define CLASS_1_99D87B66FA19BA63_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A1BD260)
#define CLASS_1_99D87B66FA19BA63_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A1BD1D0)
#define CLASS_1_99D87B66FA19BA63_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1A1BCDE0)
#define CLASS_1_99D87B66FA19BA63_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A1BCC00)
#define CLASS_1_99D87B66FA19BA63_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1A1BCDD0)
#define CLASS_1_99D87B66FA19BA63_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A1BCDF0)
#define CLASS_1_99D87B66FA19BA63_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1A1BCDC0)
#define CLASS_1_99D87B66FA19BA63_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A1BCC60)
#define CLASS_1_99D87B66FA19BA63_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A1BCFD0)
#define CLASS_1_99D87B66FA19BA63_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A1BD030)
#define CLASS_1_99D87B66FA19BA63__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1BD410)
#define CLASS_1_99D87B66FA19BA63__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A1BCC80)
#define CLASS_1_99D87B66FA19BA63__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1BCC70)

inline static constexpr unsigned int Class_1_99D87B66FA19BA63_TypeDefinitionIndex = 23842;

class Class_1_99D87B66FA19BA63 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_99D87B66FA19BA63*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_99D87B66FA19BA63*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_99D87B66FA19BA63_TypeDefinitionIndex)->GetStaticField(0x34500);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	::Class_1_87FFBB414BD751E4* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x18
	::Enum_3_0F1B992870941C13 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_99D87B66FA19BA63* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_99D87B66FA19BA63*))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_99D87B66FA19BA63*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_99D87B66FA19BA63*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_99D87B66FA19BA63* Clone()
	{
		return ((::Class_1_99D87B66FA19BA63*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_CLONE_OFFSET))(this);
	}

	::Enum_3_0F1B992870941C13 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_0F1B992870941C13(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_0F1B992870941C13 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0F1B992870941C13))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Class_1_87FFBB414BD751E4* Method_1_24748FC20F375725()
	{
		return ((::Class_1_87FFBB414BD751E4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_87FFBB414BD751E4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_87FFBB414BD751E4*))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_99D87B66FA19BA63* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_99D87B66FA19BA63*))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_99D87B66FA19BA63* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_99D87B66FA19BA63*))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_99D87B66FA19BA63_MERGEFROM_1_OFFSET))(this, a1);
	}
};
