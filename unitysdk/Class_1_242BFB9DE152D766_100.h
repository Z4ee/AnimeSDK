#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3AD2528CD53B1639_11;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_242BFB9DE152D766_100_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C56AD10)
#define CLASS_1_242BFB9DE152D766_100_CLONE_OFFSET UNITYSDK_OFFSET(0x1C56A6F0)
#define CLASS_1_242BFB9DE152D766_100_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C56A900)
#define CLASS_1_242BFB9DE152D766_100_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C56A790)
#define CLASS_1_242BFB9DE152D766_100_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C56ABD0)
#define CLASS_1_242BFB9DE152D766_100_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C56AE40)
#define CLASS_1_242BFB9DE152D766_100_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C56AD70)
#define CLASS_1_242BFB9DE152D766_100_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C56A770)
#define CLASS_1_242BFB9DE152D766_100_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C56A630)
#define CLASS_1_242BFB9DE152D766_100_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C56A780)
#define CLASS_1_242BFB9DE152D766_100_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C56A660)
#define CLASS_1_242BFB9DE152D766_100_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C56AC20)
#define CLASS_1_242BFB9DE152D766_100_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C56AC80)
#define CLASS_1_242BFB9DE152D766_100__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C56B030)
#define CLASS_1_242BFB9DE152D766_100__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C56A680)
#define CLASS_1_242BFB9DE152D766_100__CTOR_OFFSET UNITYSDK_OFFSET(0x1C56A670)

inline static constexpr unsigned int Class_1_242BFB9DE152D766_100_TypeDefinitionIndex = 33313;

class Class_1_242BFB9DE152D766_100 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_100*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_100*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_242BFB9DE152D766_100_TypeDefinitionIndex)->GetStaticField(0x60BE0);
	}
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_2; // 0x10
	::Class_1_3AD2528CD53B1639_11* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_100__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_242BFB9DE152D766_100* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_100*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_100__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_100__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_100*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_100*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_100_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_100_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_242BFB9DE152D766_100* Clone()
	{
		return ((::Class_1_242BFB9DE152D766_100*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_100_CLONE_OFFSET))(this);
	}

	::Class_1_3AD2528CD53B1639_11* Method_1_24748FC20F375725()
	{
		return ((::Class_1_3AD2528CD53B1639_11*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_100_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_3AD2528CD53B1639_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_11*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_100_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_100_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_242BFB9DE152D766_100* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_242BFB9DE152D766_100*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_100_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_100_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_100_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_100_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_100_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_242BFB9DE152D766_100* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_100*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_100_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_100_MERGEFROM_1_OFFSET))(this, a1);
	}
};
