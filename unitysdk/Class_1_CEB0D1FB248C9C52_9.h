#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_285C0F86751F7560_12;
class Class_1_E9FAC3539FD8861A_21;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_CEB0D1FB248C9C52_9_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18237C50)
#define CLASS_1_CEB0D1FB248C9C52_9_CLONE_OFFSET UNITYSDK_OFFSET(0x18237730)
#define CLASS_1_CEB0D1FB248C9C52_9_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18237900)
#define CLASS_1_CEB0D1FB248C9C52_9_EQUALS_OFFSET UNITYSDK_OFFSET(0x182377B0)
#define CLASS_1_CEB0D1FB248C9C52_9_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x182379F0)
#define CLASS_1_CEB0D1FB248C9C52_9_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18237EA0)
#define CLASS_1_CEB0D1FB248C9C52_9_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18237D30)
#define CLASS_1_CEB0D1FB248C9C52_9_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x18237790)
#define CLASS_1_CEB0D1FB248C9C52_9_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x18237780)
#define CLASS_1_CEB0D1FB248C9C52_9_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x182377A0)
#define CLASS_1_CEB0D1FB248C9C52_9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x182375C0)
#define CLASS_1_CEB0D1FB248C9C52_9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18237B10)
#define CLASS_1_CEB0D1FB248C9C52_9_WRITETO_OFFSET UNITYSDK_OFFSET(0x18237B70)
#define CLASS_1_CEB0D1FB248C9C52_9__CCTOR_OFFSET UNITYSDK_OFFSET(0x18237FD0)
#define CLASS_1_CEB0D1FB248C9C52_9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18237620)
#define CLASS_1_CEB0D1FB248C9C52_9__CTOR_OFFSET UNITYSDK_OFFSET(0x182375D0)

inline static constexpr unsigned int Class_1_CEB0D1FB248C9C52_9_TypeDefinitionIndex = 27575;

class Class_1_CEB0D1FB248C9C52_9 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_E9FAC3539FD8861A_21*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_E9FAC3539FD8861A_21*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CEB0D1FB248C9C52_9_TypeDefinitionIndex)->GetStaticField(0x15840);
	}
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E9FAC3539FD8861A_21*>* Field_1_3; // 0x18
	::Class_1_285C0F86751F7560_12* Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEB0D1FB248C9C52_9__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_CEB0D1FB248C9C52_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CEB0D1FB248C9C52_9*))((::PBYTE)hIl2Cpp + CLASS_1_CEB0D1FB248C9C52_9__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CEB0D1FB248C9C52_9__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEB0D1FB248C9C52_9_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_CEB0D1FB248C9C52_9* Clone()
	{
		return ((::Class_1_CEB0D1FB248C9C52_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEB0D1FB248C9C52_9_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E9FAC3539FD8861A_21*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_E9FAC3539FD8861A_21*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEB0D1FB248C9C52_9_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::Class_1_285C0F86751F7560_12* Method_1_24748FC20F375725()
	{
		return ((::Class_1_285C0F86751F7560_12*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEB0D1FB248C9C52_9_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_285C0F86751F7560_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_285C0F86751F7560_12*))((::PBYTE)hIl2Cpp + CLASS_1_CEB0D1FB248C9C52_9_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_CEB0D1FB248C9C52_9_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_CEB0D1FB248C9C52_9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_CEB0D1FB248C9C52_9*))((::PBYTE)hIl2Cpp + CLASS_1_CEB0D1FB248C9C52_9_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEB0D1FB248C9C52_9_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEB0D1FB248C9C52_9_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_CEB0D1FB248C9C52_9_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEB0D1FB248C9C52_9_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_CEB0D1FB248C9C52_9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CEB0D1FB248C9C52_9*))((::PBYTE)hIl2Cpp + CLASS_1_CEB0D1FB248C9C52_9_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_CEB0D1FB248C9C52_9_MERGEFROM_1_OFFSET))(this, a1);
	}
};
