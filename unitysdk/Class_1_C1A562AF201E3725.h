#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C1A562AF201E3725_Enum_3_FCBB2C507E9B21A3.h"
#include "unitysdk/System/Object.h"

class Class_1_69A5DDEA5F31A2DF;
class Class_1_AD5A9DCE6DAC51CE_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_C1A562AF201E3725_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1963A8C0)
#define CLASS_1_C1A562AF201E3725_CLONE_OFFSET UNITYSDK_OFFSET(0x1963A470)
#define CLASS_1_C1A562AF201E3725_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1963A4F0)
#define CLASS_1_C1A562AF201E3725_EQUALS_OFFSET UNITYSDK_OFFSET(0x1963A4C0)
#define CLASS_1_C1A562AF201E3725_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1963A710)
#define CLASS_1_C1A562AF201E3725_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1963AB90)
#define CLASS_1_C1A562AF201E3725_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1963A980)
#define CLASS_1_C1A562AF201E3725_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x1963A4A0)
#define CLASS_1_C1A562AF201E3725_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1963A280)
#define CLASS_1_C1A562AF201E3725_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1963A4B0)
#define CLASS_1_C1A562AF201E3725_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1963A450)
#define CLASS_1_C1A562AF201E3725_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1963A400)
#define CLASS_1_C1A562AF201E3725_METHOD_1_C4BFBB1BE6C0430A_1_OFFSET UNITYSDK_OFFSET(0x1963A410)
#define CLASS_1_C1A562AF201E3725_METHOD_1_C4BFBB1BE6C0430A_OFFSET UNITYSDK_OFFSET(0x1963A3C0)
#define CLASS_1_C1A562AF201E3725_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1963A2B0)
#define CLASS_1_C1A562AF201E3725_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1963A7A0)
#define CLASS_1_C1A562AF201E3725_WRITETO_OFFSET UNITYSDK_OFFSET(0x1963A800)
#define CLASS_1_C1A562AF201E3725__CCTOR_OFFSET UNITYSDK_OFFSET(0x1963AD80)
#define CLASS_1_C1A562AF201E3725__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1963A2D0)
#define CLASS_1_C1A562AF201E3725__CTOR_OFFSET UNITYSDK_OFFSET(0x1963A2C0)

inline static constexpr unsigned int Class_1_C1A562AF201E3725_TypeDefinitionIndex = 24297;

class Class_1_C1A562AF201E3725 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_C1A562AF201E3725*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_C1A562AF201E3725*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C1A562AF201E3725_TypeDefinitionIndex)->GetStaticField(0x54A0);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::Object* Field_1_4; // 0x18
	::Class_1_C1A562AF201E3725_Enum_3_FCBB2C507E9B21A3 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1A562AF201E3725__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C1A562AF201E3725* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C1A562AF201E3725*))((::PBYTE)hIl2Cpp + CLASS_1_C1A562AF201E3725__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C1A562AF201E3725__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_C1A562AF201E3725*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_C1A562AF201E3725*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C1A562AF201E3725_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1A562AF201E3725_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_C1A562AF201E3725* Clone()
	{
		return ((::Class_1_C1A562AF201E3725*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1A562AF201E3725_CLONE_OFFSET))(this);
	}

	::Class_1_69A5DDEA5F31A2DF* Method_1_C4BFBB1BE6C0430A()
	{
		return ((::Class_1_69A5DDEA5F31A2DF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1A562AF201E3725_METHOD_1_C4BFBB1BE6C0430A_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_69A5DDEA5F31A2DF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_69A5DDEA5F31A2DF*))((::PBYTE)hIl2Cpp + CLASS_1_C1A562AF201E3725_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_AD5A9DCE6DAC51CE_1* Method_1_C4BFBB1BE6C0430A_1()
	{
		return ((::Class_1_AD5A9DCE6DAC51CE_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1A562AF201E3725_METHOD_1_C4BFBB1BE6C0430A_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_AD5A9DCE6DAC51CE_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AD5A9DCE6DAC51CE_1*))((::PBYTE)hIl2Cpp + CLASS_1_C1A562AF201E3725_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Class_1_C1A562AF201E3725_Enum_3_FCBB2C507E9B21A3 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_C1A562AF201E3725_Enum_3_FCBB2C507E9B21A3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1A562AF201E3725_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1A562AF201E3725_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C1A562AF201E3725_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_C1A562AF201E3725* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C1A562AF201E3725*))((::PBYTE)hIl2Cpp + CLASS_1_C1A562AF201E3725_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1A562AF201E3725_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1A562AF201E3725_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C1A562AF201E3725_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1A562AF201E3725_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_C1A562AF201E3725* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C1A562AF201E3725*))((::PBYTE)hIl2Cpp + CLASS_1_C1A562AF201E3725_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_C1A562AF201E3725_MERGEFROM_1_OFFSET))(this, a1);
	}
};
