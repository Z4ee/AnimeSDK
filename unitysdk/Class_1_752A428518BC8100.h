#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D1E0AD3915BCCF29_8;
class Class_1_DB9F32FCA772D309_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_752A428518BC8100_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A43C9D0)
#define CLASS_1_752A428518BC8100_CLONE_OFFSET UNITYSDK_OFFSET(0x1A43C4A0)
#define CLASS_1_752A428518BC8100_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A43C670)
#define CLASS_1_752A428518BC8100_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A43C520)
#define CLASS_1_752A428518BC8100_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A43C760)
#define CLASS_1_752A428518BC8100_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A43CBD0)
#define CLASS_1_752A428518BC8100_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A43CAC0)
#define CLASS_1_752A428518BC8100_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1A43C4F0)
#define CLASS_1_752A428518BC8100_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A43C2B0)
#define CLASS_1_752A428518BC8100_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1A43C510)
#define CLASS_1_752A428518BC8100_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A43C500)
#define CLASS_1_752A428518BC8100_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A43C310)
#define CLASS_1_752A428518BC8100_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A43C8A0)
#define CLASS_1_752A428518BC8100_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A43C900)
#define CLASS_1_752A428518BC8100__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A43CDB0)
#define CLASS_1_752A428518BC8100__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A43C370)
#define CLASS_1_752A428518BC8100__CTOR_OFFSET UNITYSDK_OFFSET(0x1A43C320)

inline static constexpr unsigned int Class_1_752A428518BC8100_TypeDefinitionIndex = 24209;

class Class_1_752A428518BC8100 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_DB9F32FCA772D309_1*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_DB9F32FCA772D309_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_752A428518BC8100_TypeDefinitionIndex)->GetStaticField(0x65760);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_752A428518BC8100*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_752A428518BC8100*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_752A428518BC8100_TypeDefinitionIndex)->GetStaticField(0x65768);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_DB9F32FCA772D309_1*>* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x18
	::Class_1_D1E0AD3915BCCF29_8* Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_752A428518BC8100* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_752A428518BC8100*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_752A428518BC8100*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_752A428518BC8100*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_752A428518BC8100* Clone()
	{
		return ((::Class_1_752A428518BC8100*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_CLONE_OFFSET))(this);
	}

	::Class_1_D1E0AD3915BCCF29_8* Method_1_24748FC20F375725()
	{
		return ((::Class_1_D1E0AD3915BCCF29_8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D1E0AD3915BCCF29_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_8*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_DB9F32FCA772D309_1*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_DB9F32FCA772D309_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_752A428518BC8100* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_752A428518BC8100*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_752A428518BC8100* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_752A428518BC8100*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_752A428518BC8100_MERGEFROM_1_OFFSET))(this, a1);
	}
};
