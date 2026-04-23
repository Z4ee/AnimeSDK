#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_14E02E1F6D70E487_10;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_2752BA61657CA7F7_6_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19A950A0)
#define CLASS_1_2752BA61657CA7F7_6_CLONE_OFFSET UNITYSDK_OFFSET(0x19A94DA0)
#define CLASS_1_2752BA61657CA7F7_6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19A94EF0)
#define CLASS_1_2752BA61657CA7F7_6_EQUALS_OFFSET UNITYSDK_OFFSET(0x19A94E40)
#define CLASS_1_2752BA61657CA7F7_6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19A94F90)
#define CLASS_1_2752BA61657CA7F7_6_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19A95170)
#define CLASS_1_2752BA61657CA7F7_6_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19A95100)
#define CLASS_1_2752BA61657CA7F7_6_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x19A94E20)
#define CLASS_1_2752BA61657CA7F7_6_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19A94CE0)
#define CLASS_1_2752BA61657CA7F7_6_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x19A94E30)
#define CLASS_1_2752BA61657CA7F7_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19A94D10)
#define CLASS_1_2752BA61657CA7F7_6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19A94FE0)
#define CLASS_1_2752BA61657CA7F7_6_WRITETO_OFFSET UNITYSDK_OFFSET(0x19A95040)
#define CLASS_1_2752BA61657CA7F7_6__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A95220)
#define CLASS_1_2752BA61657CA7F7_6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19A94D30)
#define CLASS_1_2752BA61657CA7F7_6__CTOR_OFFSET UNITYSDK_OFFSET(0x19A94D20)

inline static constexpr unsigned int Class_1_2752BA61657CA7F7_6_TypeDefinitionIndex = 30856;

class Class_1_2752BA61657CA7F7_6 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_2752BA61657CA7F7_6*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_2752BA61657CA7F7_6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2752BA61657CA7F7_6_TypeDefinitionIndex)->GetStaticField(0x53CE0);
	}
	// static const ::System::Int32 Field_1_2 = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Class_1_14E02E1F6D70E487_10* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_6__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_2752BA61657CA7F7_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2752BA61657CA7F7_6*))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_6__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_6__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_2752BA61657CA7F7_6*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_2752BA61657CA7F7_6*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_6_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_2752BA61657CA7F7_6* Clone()
	{
		return ((::Class_1_2752BA61657CA7F7_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_6_CLONE_OFFSET))(this);
	}

	::Class_1_14E02E1F6D70E487_10* Method_1_24748FC20F375725()
	{
		return ((::Class_1_14E02E1F6D70E487_10*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_6_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_14E02E1F6D70E487_10* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_10*))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_6_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_2752BA61657CA7F7_6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2752BA61657CA7F7_6*))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_6_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_6_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_6_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_6_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_2752BA61657CA7F7_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2752BA61657CA7F7_6*))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_6_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2752BA61657CA7F7_6_MERGEFROM_1_OFFSET))(this, a1);
	}
};
