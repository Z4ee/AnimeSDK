#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_19856AF0FDE81395_1_Enum_3_FCBB2C507E9B21A3_35.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_19856AF0FDE81395_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1958EC90)
#define CLASS_1_19856AF0FDE81395_1_CLONE_OFFSET UNITYSDK_OFFSET(0x1958E700)
#define CLASS_1_19856AF0FDE81395_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1958E780)
#define CLASS_1_19856AF0FDE81395_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1958E750)
#define CLASS_1_19856AF0FDE81395_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1958EA10)
#define CLASS_1_19856AF0FDE81395_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1958F000)
#define CLASS_1_19856AF0FDE81395_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1958EEA0)
#define CLASS_1_19856AF0FDE81395_1_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x1958E730)
#define CLASS_1_19856AF0FDE81395_1_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1958E3F0)
#define CLASS_1_19856AF0FDE81395_1_METHOD_1_6BCB722BBE18B904_1_OFFSET UNITYSDK_OFFSET(0x1958E650)
#define CLASS_1_19856AF0FDE81395_1_METHOD_1_6BCB722BBE18B904_OFFSET UNITYSDK_OFFSET(0x1958E5A0)
#define CLASS_1_19856AF0FDE81395_1_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1958E740)
#define CLASS_1_19856AF0FDE81395_1_METHOD_1_F45A6C563F3DF7EB_1_OFFSET UNITYSDK_OFFSET(0x1958E6D0)
#define CLASS_1_19856AF0FDE81395_1_METHOD_1_F45A6C563F3DF7EB_OFFSET UNITYSDK_OFFSET(0x1958E620)
#define CLASS_1_19856AF0FDE81395_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1958E420)
#define CLASS_1_19856AF0FDE81395_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1958EAC0)
#define CLASS_1_19856AF0FDE81395_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1958EB20)
#define CLASS_1_19856AF0FDE81395_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1958F0C0)
#define CLASS_1_19856AF0FDE81395_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1958E440)
#define CLASS_1_19856AF0FDE81395_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1958E430)

inline static constexpr unsigned int Class_1_19856AF0FDE81395_1_TypeDefinitionIndex = 31898;

class Class_1_19856AF0FDE81395_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_19856AF0FDE81395_1*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_19856AF0FDE81395_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_19856AF0FDE81395_1_TypeDefinitionIndex)->GetStaticField(0x4E810);
	}
	// static const ::System::Int32 Field_1_2 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xE; // 0x0
	::System::Object* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::Class_1_19856AF0FDE81395_1_Enum_3_FCBB2C507E9B21A3_35 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19856AF0FDE81395_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_19856AF0FDE81395_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_19856AF0FDE81395_1*))((::PBYTE)hIl2Cpp + CLASS_1_19856AF0FDE81395_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_19856AF0FDE81395_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_19856AF0FDE81395_1*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_19856AF0FDE81395_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_19856AF0FDE81395_1_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19856AF0FDE81395_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_19856AF0FDE81395_1* Clone()
	{
		return ((::Class_1_19856AF0FDE81395_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19856AF0FDE81395_1_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_6BCB722BBE18B904()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19856AF0FDE81395_1_METHOD_1_6BCB722BBE18B904_OFFSET))(this);
	}

	::System::Void Method_1_F45A6C563F3DF7EB(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_19856AF0FDE81395_1_METHOD_1_F45A6C563F3DF7EB_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_6BCB722BBE18B904_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19856AF0FDE81395_1_METHOD_1_6BCB722BBE18B904_1_OFFSET))(this);
	}

	::System::Void Method_1_F45A6C563F3DF7EB_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_19856AF0FDE81395_1_METHOD_1_F45A6C563F3DF7EB_1_OFFSET))(this, a1);
	}

	::Class_1_19856AF0FDE81395_1_Enum_3_FCBB2C507E9B21A3_35 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_19856AF0FDE81395_1_Enum_3_FCBB2C507E9B21A3_35(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19856AF0FDE81395_1_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19856AF0FDE81395_1_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_19856AF0FDE81395_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_19856AF0FDE81395_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_19856AF0FDE81395_1*))((::PBYTE)hIl2Cpp + CLASS_1_19856AF0FDE81395_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19856AF0FDE81395_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19856AF0FDE81395_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_19856AF0FDE81395_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19856AF0FDE81395_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_19856AF0FDE81395_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_19856AF0FDE81395_1*))((::PBYTE)hIl2Cpp + CLASS_1_19856AF0FDE81395_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_19856AF0FDE81395_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
