#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_BF56B935FC9D217B_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DD09410)
#define CLASS_1_BF56B935FC9D217B_CLONE_OFFSET UNITYSDK_OFFSET(0x1DD09020)
#define CLASS_1_BF56B935FC9D217B_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DD091A0)
#define CLASS_1_BF56B935FC9D217B_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DD09060)
#define CLASS_1_BF56B935FC9D217B_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DD092C0)
#define CLASS_1_BF56B935FC9D217B_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DD09550)
#define CLASS_1_BF56B935FC9D217B_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DD094B0)
#define CLASS_1_BF56B935FC9D217B_METHOD_1_3F08C697E838D55A_OFFSET UNITYSDK_OFFSET(0x1DD09050)
#define CLASS_1_BF56B935FC9D217B_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1DD08F10)
#define CLASS_1_BF56B935FC9D217B_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DD08F40)
#define CLASS_1_BF56B935FC9D217B_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DD09330)
#define CLASS_1_BF56B935FC9D217B_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DD09390)
#define CLASS_1_BF56B935FC9D217B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD096F0)
#define CLASS_1_BF56B935FC9D217B__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DD08F90)
#define CLASS_1_BF56B935FC9D217B__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD08F50)

inline static constexpr unsigned int Class_1_BF56B935FC9D217B_TypeDefinitionIndex = 25782;

class Class_1_BF56B935FC9D217B : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_BF56B935FC9D217B*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_BF56B935FC9D217B*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BF56B935FC9D217B_TypeDefinitionIndex)->GetStaticField(0x5D4B0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::String*>** StaticGet_MKCJBDAIGPG()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BF56B935FC9D217B_TypeDefinitionIndex)->GetStaticField(0x5D4B8);
	}
	// static const ::System::Int32 LKIPIBILNOK = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* IEIAMDNMEGE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF56B935FC9D217B__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_BF56B935FC9D217B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BF56B935FC9D217B*))((::PBYTE)hIl2Cpp + CLASS_1_BF56B935FC9D217B__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BF56B935FC9D217B__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_BF56B935FC9D217B*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_BF56B935FC9D217B*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BF56B935FC9D217B_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF56B935FC9D217B_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_BF56B935FC9D217B* Clone()
	{
		return ((::Class_1_BF56B935FC9D217B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF56B935FC9D217B_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* Method_1_3F08C697E838D55A()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF56B935FC9D217B_METHOD_1_3F08C697E838D55A_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_BF56B935FC9D217B_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_BF56B935FC9D217B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_BF56B935FC9D217B*))((::PBYTE)hIl2Cpp + CLASS_1_BF56B935FC9D217B_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF56B935FC9D217B_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF56B935FC9D217B_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_BF56B935FC9D217B_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF56B935FC9D217B_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_BF56B935FC9D217B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BF56B935FC9D217B*))((::PBYTE)hIl2Cpp + CLASS_1_BF56B935FC9D217B_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_BF56B935FC9D217B_MERGEFROM_1_OFFSET))(this, a1);
	}
};
