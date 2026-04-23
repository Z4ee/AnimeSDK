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

#define CLASS_1_6CC42032C8FA7BB1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19870EE0)
#define CLASS_1_6CC42032C8FA7BB1_CLONE_OFFSET UNITYSDK_OFFSET(0x19870B50)
#define CLASS_1_6CC42032C8FA7BB1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19870D10)
#define CLASS_1_6CC42032C8FA7BB1_EQUALS_OFFSET UNITYSDK_OFFSET(0x19870C30)
#define CLASS_1_6CC42032C8FA7BB1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19870DC0)
#define CLASS_1_6CC42032C8FA7BB1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19871020)
#define CLASS_1_6CC42032C8FA7BB1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19870F40)
#define CLASS_1_6CC42032C8FA7BB1_METHOD_1_2FF5CA20D3582DA7_OFFSET UNITYSDK_OFFSET(0x19870C10)
#define CLASS_1_6CC42032C8FA7BB1_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19870A60)
#define CLASS_1_6CC42032C8FA7BB1_METHOD_1_76682DC918AEFE3C_OFFSET UNITYSDK_OFFSET(0x19870C20)
#define CLASS_1_6CC42032C8FA7BB1_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x19870C00)
#define CLASS_1_6CC42032C8FA7BB1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x19870BF0)
#define CLASS_1_6CC42032C8FA7BB1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19870AC0)
#define CLASS_1_6CC42032C8FA7BB1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19870E00)
#define CLASS_1_6CC42032C8FA7BB1_WRITETO_OFFSET UNITYSDK_OFFSET(0x19870E60)
#define CLASS_1_6CC42032C8FA7BB1__CCTOR_OFFSET UNITYSDK_OFFSET(0x19871130)
#define CLASS_1_6CC42032C8FA7BB1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19870AE0)
#define CLASS_1_6CC42032C8FA7BB1__CTOR_OFFSET UNITYSDK_OFFSET(0x19870AD0)

inline static constexpr unsigned int Class_1_6CC42032C8FA7BB1_TypeDefinitionIndex = 27188;

class Class_1_6CC42032C8FA7BB1 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_6CC42032C8FA7BB1*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_6CC42032C8FA7BB1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6CC42032C8FA7BB1_TypeDefinitionIndex)->GetStaticField(0x49900);
	}
	// static const ::System::Int32 Field_1_2 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xB; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Proto::PlayerSimpleInfo* Field_1_5; // 0x18
	::System::Boolean Field_1_3; // 0x20

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
