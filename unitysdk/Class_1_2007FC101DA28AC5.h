#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class BigDataAvatarRelicRecommend; }
namespace System { class String; }

#define CLASS_1_2007FC101DA28AC5_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1806CA10)
#define CLASS_1_2007FC101DA28AC5_CLONE_OFFSET UNITYSDK_OFFSET(0x1806C5F0)
#define CLASS_1_2007FC101DA28AC5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1806C760)
#define CLASS_1_2007FC101DA28AC5_EQUALS_OFFSET UNITYSDK_OFFSET(0x1806C650)
#define CLASS_1_2007FC101DA28AC5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1806C810)
#define CLASS_1_2007FC101DA28AC5_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1806CB50)
#define CLASS_1_2007FC101DA28AC5_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1806CAB0)
#define CLASS_1_2007FC101DA28AC5_METHOD_1_96F1CABDCC6E782E_OFFSET UNITYSDK_OFFSET(0x1806C640)
#define CLASS_1_2007FC101DA28AC5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1806C4E0)
#define CLASS_1_2007FC101DA28AC5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1806C900)
#define CLASS_1_2007FC101DA28AC5_WRITETO_OFFSET UNITYSDK_OFFSET(0x1806C960)
#define CLASS_1_2007FC101DA28AC5__CCTOR_OFFSET UNITYSDK_OFFSET(0x1806CC30)
#define CLASS_1_2007FC101DA28AC5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1806C540)
#define CLASS_1_2007FC101DA28AC5__CTOR_OFFSET UNITYSDK_OFFSET(0x1806C4F0)

inline static constexpr unsigned int Class_1_2007FC101DA28AC5_TypeDefinitionIndex = 26201;

class Class_1_2007FC101DA28AC5 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Proto::BigDataAvatarRelicRecommend*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::BigDataAvatarRelicRecommend*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2007FC101DA28AC5_TypeDefinitionIndex)->GetStaticField(0x31650);
	}
	// static const ::System::Int32 Field_1_1 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::BigDataAvatarRelicRecommend*>* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2007FC101DA28AC5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_2007FC101DA28AC5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2007FC101DA28AC5*))((::PBYTE)hIl2Cpp + CLASS_1_2007FC101DA28AC5__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2007FC101DA28AC5__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2007FC101DA28AC5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_2007FC101DA28AC5* Clone()
	{
		return ((::Class_1_2007FC101DA28AC5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2007FC101DA28AC5_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::BigDataAvatarRelicRecommend*>* Method_1_96F1CABDCC6E782E()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::BigDataAvatarRelicRecommend*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2007FC101DA28AC5_METHOD_1_96F1CABDCC6E782E_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2007FC101DA28AC5_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_2007FC101DA28AC5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2007FC101DA28AC5*))((::PBYTE)hIl2Cpp + CLASS_1_2007FC101DA28AC5_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2007FC101DA28AC5_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2007FC101DA28AC5_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2007FC101DA28AC5_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2007FC101DA28AC5_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_2007FC101DA28AC5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2007FC101DA28AC5*))((::PBYTE)hIl2Cpp + CLASS_1_2007FC101DA28AC5_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2007FC101DA28AC5_MERGEFROM_1_OFFSET))(this, a1);
	}
};
