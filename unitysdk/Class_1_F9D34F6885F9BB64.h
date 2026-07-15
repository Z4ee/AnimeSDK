#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9D34F6885F9BB64_Enum_3_FCBB2C507E9B21A3_31.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_F9D34F6885F9BB64_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C8FE960)
#define CLASS_1_F9D34F6885F9BB64_CLONE_OFFSET UNITYSDK_OFFSET(0x1C8FE2E0)
#define CLASS_1_F9D34F6885F9BB64_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C8FE360)
#define CLASS_1_F9D34F6885F9BB64_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C8FE330)
#define CLASS_1_F9D34F6885F9BB64_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C8FE670)
#define CLASS_1_F9D34F6885F9BB64_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C8FECD0)
#define CLASS_1_F9D34F6885F9BB64_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C8FEB70)
#define CLASS_1_F9D34F6885F9BB64_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x1C8FE310)
#define CLASS_1_F9D34F6885F9BB64_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C8FDFD0)
#define CLASS_1_F9D34F6885F9BB64_METHOD_1_6BCB722BBE18B904_1_OFFSET UNITYSDK_OFFSET(0x1C8FE230)
#define CLASS_1_F9D34F6885F9BB64_METHOD_1_6BCB722BBE18B904_OFFSET UNITYSDK_OFFSET(0x1C8FE180)
#define CLASS_1_F9D34F6885F9BB64_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1C8FE320)
#define CLASS_1_F9D34F6885F9BB64_METHOD_1_F45A6C563F3DF7EB_1_OFFSET UNITYSDK_OFFSET(0x1C8FE2B0)
#define CLASS_1_F9D34F6885F9BB64_METHOD_1_F45A6C563F3DF7EB_OFFSET UNITYSDK_OFFSET(0x1C8FE200)
#define CLASS_1_F9D34F6885F9BB64_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C8FE000)
#define CLASS_1_F9D34F6885F9BB64_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C8FE720)
#define CLASS_1_F9D34F6885F9BB64_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C8FE780)
#define CLASS_1_F9D34F6885F9BB64__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8FEE90)
#define CLASS_1_F9D34F6885F9BB64__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C8FE020)
#define CLASS_1_F9D34F6885F9BB64__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8FE010)

inline static constexpr unsigned int Class_1_F9D34F6885F9BB64_TypeDefinitionIndex = 31732;

class Class_1_F9D34F6885F9BB64 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_F9D34F6885F9BB64*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_F9D34F6885F9BB64*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F9D34F6885F9BB64_TypeDefinitionIndex)->GetStaticField(0x55070);
	}
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_2 = 0xD; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x10
	::System::Object* Field_1_4; // 0x18
	::Class_1_F9D34F6885F9BB64_Enum_3_FCBB2C507E9B21A3_31 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9D34F6885F9BB64__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_F9D34F6885F9BB64* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9D34F6885F9BB64*))((::PBYTE)hIl2Cpp + CLASS_1_F9D34F6885F9BB64__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F9D34F6885F9BB64__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_F9D34F6885F9BB64*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_F9D34F6885F9BB64*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F9D34F6885F9BB64_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9D34F6885F9BB64_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_F9D34F6885F9BB64* Clone()
	{
		return ((::Class_1_F9D34F6885F9BB64*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9D34F6885F9BB64_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_6BCB722BBE18B904()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9D34F6885F9BB64_METHOD_1_6BCB722BBE18B904_OFFSET))(this);
	}

	::System::Void Method_1_F45A6C563F3DF7EB(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F9D34F6885F9BB64_METHOD_1_F45A6C563F3DF7EB_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_6BCB722BBE18B904_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9D34F6885F9BB64_METHOD_1_6BCB722BBE18B904_1_OFFSET))(this);
	}

	::System::Void Method_1_F45A6C563F3DF7EB_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F9D34F6885F9BB64_METHOD_1_F45A6C563F3DF7EB_1_OFFSET))(this, a1);
	}

	::Class_1_F9D34F6885F9BB64_Enum_3_FCBB2C507E9B21A3_31 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_F9D34F6885F9BB64_Enum_3_FCBB2C507E9B21A3_31(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9D34F6885F9BB64_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9D34F6885F9BB64_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F9D34F6885F9BB64_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_F9D34F6885F9BB64* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F9D34F6885F9BB64*))((::PBYTE)hIl2Cpp + CLASS_1_F9D34F6885F9BB64_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9D34F6885F9BB64_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9D34F6885F9BB64_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F9D34F6885F9BB64_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9D34F6885F9BB64_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_F9D34F6885F9BB64* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9D34F6885F9BB64*))((::PBYTE)hIl2Cpp + CLASS_1_F9D34F6885F9BB64_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F9D34F6885F9BB64_MERGEFROM_1_OFFSET))(this, a1);
	}
};
