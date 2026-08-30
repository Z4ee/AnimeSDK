#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_60477073911AC4F6_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_242BFB9DE152D766_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E451710)
#define CLASS_1_242BFB9DE152D766_1_CLONE_OFFSET UNITYSDK_OFFSET(0x1E451050)
#define CLASS_1_242BFB9DE152D766_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E451300)
#define CLASS_1_242BFB9DE152D766_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E451160)
#define CLASS_1_242BFB9DE152D766_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4515D0)
#define CLASS_1_242BFB9DE152D766_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E451870)
#define CLASS_1_242BFB9DE152D766_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E451770)
#define CLASS_1_242BFB9DE152D766_1_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1E451140)
#define CLASS_1_242BFB9DE152D766_1_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E450F20)
#define CLASS_1_242BFB9DE152D766_1_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1E451150)
#define CLASS_1_242BFB9DE152D766_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E450F80)
#define CLASS_1_242BFB9DE152D766_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E451620)
#define CLASS_1_242BFB9DE152D766_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E451680)
#define CLASS_1_242BFB9DE152D766_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E451A00)
#define CLASS_1_242BFB9DE152D766_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E450FA0)
#define CLASS_1_242BFB9DE152D766_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1E450F90)

inline static constexpr unsigned int Class_1_242BFB9DE152D766_1_TypeDefinitionIndex = 25245;

class Class_1_242BFB9DE152D766_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_1*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_242BFB9DE152D766_1_TypeDefinitionIndex)->GetStaticField(0xE560);
	}
	// static const ::System::Int32 AFELKDKIHIA = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Class_1_60477073911AC4F6_1* ELJDKBKKFKH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_242BFB9DE152D766_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_1*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_1*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_1_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_242BFB9DE152D766_1* Clone()
	{
		return ((::Class_1_242BFB9DE152D766_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_1_CLONE_OFFSET))(this);
	}

	::Class_1_60477073911AC4F6_1* Method_1_24748FC20F375725()
	{
		return ((::Class_1_60477073911AC4F6_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_1_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_60477073911AC4F6_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_60477073911AC4F6_1*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_1_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_242BFB9DE152D766_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_242BFB9DE152D766_1*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_242BFB9DE152D766_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_1*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
