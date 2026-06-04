#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class PlayerSimpleInfo; }
namespace System { class String; }

#define CLASS_1_6CC42032C8FA7BB1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A92E0B0)
#define CLASS_1_6CC42032C8FA7BB1_CLONE_OFFSET UNITYSDK_OFFSET(0x1A92DD20)
#define CLASS_1_6CC42032C8FA7BB1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A92DEE0)
#define CLASS_1_6CC42032C8FA7BB1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A92DE00)
#define CLASS_1_6CC42032C8FA7BB1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A92DF90)
#define CLASS_1_6CC42032C8FA7BB1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A92E1F0)
#define CLASS_1_6CC42032C8FA7BB1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A92E110)
#define CLASS_1_6CC42032C8FA7BB1_METHOD_1_2FF5CA20D3582DA7_OFFSET UNITYSDK_OFFSET(0x1A92DDE0)
#define CLASS_1_6CC42032C8FA7BB1_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A92DC30)
#define CLASS_1_6CC42032C8FA7BB1_METHOD_1_76682DC918AEFE3C_OFFSET UNITYSDK_OFFSET(0x1A92DDF0)
#define CLASS_1_6CC42032C8FA7BB1_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1A92DDD0)
#define CLASS_1_6CC42032C8FA7BB1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1A92DDC0)
#define CLASS_1_6CC42032C8FA7BB1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A92DC90)
#define CLASS_1_6CC42032C8FA7BB1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A92DFD0)
#define CLASS_1_6CC42032C8FA7BB1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A92E030)
#define CLASS_1_6CC42032C8FA7BB1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A92E3F0)
#define CLASS_1_6CC42032C8FA7BB1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A92DCB0)
#define CLASS_1_6CC42032C8FA7BB1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A92DCA0)

inline static constexpr unsigned int Class_1_6CC42032C8FA7BB1_TypeDefinitionIndex = 27161;

class Class_1_6CC42032C8FA7BB1 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_6CC42032C8FA7BB1*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_6CC42032C8FA7BB1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6CC42032C8FA7BB1_TypeDefinitionIndex)->GetStaticField(0x17650);
	}
	// static const ::System::Int32 Field_1_1 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	::Proto::PlayerSimpleInfo* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x18
	::System::Boolean Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CC42032C8FA7BB1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6CC42032C8FA7BB1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6CC42032C8FA7BB1*))((::PBYTE)hIl2Cpp + CLASS_1_6CC42032C8FA7BB1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6CC42032C8FA7BB1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_6CC42032C8FA7BB1*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_6CC42032C8FA7BB1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6CC42032C8FA7BB1_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CC42032C8FA7BB1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6CC42032C8FA7BB1* Clone()
	{
		return ((::Class_1_6CC42032C8FA7BB1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CC42032C8FA7BB1_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CC42032C8FA7BB1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6CC42032C8FA7BB1_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Proto::PlayerSimpleInfo* Method_1_2FF5CA20D3582DA7()
	{
		return ((::Proto::PlayerSimpleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CC42032C8FA7BB1_METHOD_1_2FF5CA20D3582DA7_OFFSET))(this);
	}

	::System::Void Method_1_76682DC918AEFE3C(::Proto::PlayerSimpleInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::PlayerSimpleInfo*))((::PBYTE)hIl2Cpp + CLASS_1_6CC42032C8FA7BB1_METHOD_1_76682DC918AEFE3C_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6CC42032C8FA7BB1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6CC42032C8FA7BB1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6CC42032C8FA7BB1*))((::PBYTE)hIl2Cpp + CLASS_1_6CC42032C8FA7BB1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CC42032C8FA7BB1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CC42032C8FA7BB1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6CC42032C8FA7BB1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CC42032C8FA7BB1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6CC42032C8FA7BB1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6CC42032C8FA7BB1*))((::PBYTE)hIl2Cpp + CLASS_1_6CC42032C8FA7BB1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6CC42032C8FA7BB1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
