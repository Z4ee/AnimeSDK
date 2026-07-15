#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EA5A5E4D07C4CF2B_4;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_91309440AC9D4CF8_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C8439A0)
#define CLASS_1_91309440AC9D4CF8_CLONE_OFFSET UNITYSDK_OFFSET(0x1C8432E0)
#define CLASS_1_91309440AC9D4CF8_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C843580)
#define CLASS_1_91309440AC9D4CF8_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C8433E0)
#define CLASS_1_91309440AC9D4CF8_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C843850)
#define CLASS_1_91309440AC9D4CF8_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C843AB0)
#define CLASS_1_91309440AC9D4CF8_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C843A00)
#define CLASS_1_91309440AC9D4CF8_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C8433C0)
#define CLASS_1_91309440AC9D4CF8_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C8431D0)
#define CLASS_1_91309440AC9D4CF8_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C8433D0)
#define CLASS_1_91309440AC9D4CF8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C843230)
#define CLASS_1_91309440AC9D4CF8_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C8438B0)
#define CLASS_1_91309440AC9D4CF8_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C843910)
#define CLASS_1_91309440AC9D4CF8__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C843C40)
#define CLASS_1_91309440AC9D4CF8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C843250)
#define CLASS_1_91309440AC9D4CF8__CTOR_OFFSET UNITYSDK_OFFSET(0x1C843240)

inline static constexpr unsigned int Class_1_91309440AC9D4CF8_TypeDefinitionIndex = 25926;

class Class_1_91309440AC9D4CF8 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_91309440AC9D4CF8*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_91309440AC9D4CF8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_91309440AC9D4CF8_TypeDefinitionIndex)->GetStaticField(0x38CD0);
	}
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_2; // 0x10
	::Class_1_EA5A5E4D07C4CF2B_4* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_91309440AC9D4CF8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_91309440AC9D4CF8*))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_91309440AC9D4CF8*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_91309440AC9D4CF8*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_91309440AC9D4CF8* Clone()
	{
		return ((::Class_1_91309440AC9D4CF8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_CLONE_OFFSET))(this);
	}

	::Class_1_EA5A5E4D07C4CF2B_4* Method_1_24748FC20F375725()
	{
		return ((::Class_1_EA5A5E4D07C4CF2B_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_EA5A5E4D07C4CF2B_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EA5A5E4D07C4CF2B_4*))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_91309440AC9D4CF8* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_91309440AC9D4CF8*))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_91309440AC9D4CF8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_91309440AC9D4CF8*))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_91309440AC9D4CF8_MERGEFROM_1_OFFSET))(this, a1);
	}
};
