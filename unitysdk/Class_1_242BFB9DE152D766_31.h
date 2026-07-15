#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_531;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_242BFB9DE152D766_31_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C631300)
#define CLASS_1_242BFB9DE152D766_31_CLONE_OFFSET UNITYSDK_OFFSET(0x1C630C60)
#define CLASS_1_242BFB9DE152D766_31_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C630EE0)
#define CLASS_1_242BFB9DE152D766_31_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C630D40)
#define CLASS_1_242BFB9DE152D766_31_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C6311B0)
#define CLASS_1_242BFB9DE152D766_31_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C6313F0)
#define CLASS_1_242BFB9DE152D766_31_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C631360)
#define CLASS_1_242BFB9DE152D766_31_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C630D20)
#define CLASS_1_242BFB9DE152D766_31_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C630B60)
#define CLASS_1_242BFB9DE152D766_31_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C630D30)
#define CLASS_1_242BFB9DE152D766_31_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C630BC0)
#define CLASS_1_242BFB9DE152D766_31_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C631210)
#define CLASS_1_242BFB9DE152D766_31_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C631270)
#define CLASS_1_242BFB9DE152D766_31__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C631570)
#define CLASS_1_242BFB9DE152D766_31__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C630BE0)
#define CLASS_1_242BFB9DE152D766_31__CTOR_OFFSET UNITYSDK_OFFSET(0x1C630BD0)

inline static constexpr unsigned int Class_1_242BFB9DE152D766_31_TypeDefinitionIndex = 28526;

class Class_1_242BFB9DE152D766_31 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_31*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_31*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_242BFB9DE152D766_31_TypeDefinitionIndex)->GetStaticField(0x2C4F0);
	}
	// static const ::System::Int32 Field_1_1 = 0x6; // 0x0
	::Class_1_D17272E82AE804C2_531* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_31__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_242BFB9DE152D766_31* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_31*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_31__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_31__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_31*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_31*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_31_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_31_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_242BFB9DE152D766_31* Clone()
	{
		return ((::Class_1_242BFB9DE152D766_31*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_31_CLONE_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_531* Method_1_24748FC20F375725()
	{
		return ((::Class_1_D17272E82AE804C2_531*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_31_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D17272E82AE804C2_531* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_531*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_31_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_31_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_242BFB9DE152D766_31* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_242BFB9DE152D766_31*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_31_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_31_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_31_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_31_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_31_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_242BFB9DE152D766_31* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_31*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_31_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_31_MERGEFROM_1_OFFSET))(this, a1);
	}
};
