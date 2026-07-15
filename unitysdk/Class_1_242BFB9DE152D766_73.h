#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7BFB07C3AB2D97E4_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_242BFB9DE152D766_73_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CE85360)
#define CLASS_1_242BFB9DE152D766_73_CLONE_OFFSET UNITYSDK_OFFSET(0x1CE84CF0)
#define CLASS_1_242BFB9DE152D766_73_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CE84F00)
#define CLASS_1_242BFB9DE152D766_73_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CE84D90)
#define CLASS_1_242BFB9DE152D766_73_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CE851D0)
#define CLASS_1_242BFB9DE152D766_73_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CE85450)
#define CLASS_1_242BFB9DE152D766_73_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CE853C0)
#define CLASS_1_242BFB9DE152D766_73_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1CE84D70)
#define CLASS_1_242BFB9DE152D766_73_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CE84C30)
#define CLASS_1_242BFB9DE152D766_73_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1CE84D80)
#define CLASS_1_242BFB9DE152D766_73_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CE84C60)
#define CLASS_1_242BFB9DE152D766_73_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CE85270)
#define CLASS_1_242BFB9DE152D766_73_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CE852D0)
#define CLASS_1_242BFB9DE152D766_73__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE85600)
#define CLASS_1_242BFB9DE152D766_73__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CE84C80)
#define CLASS_1_242BFB9DE152D766_73__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE84C70)

inline static constexpr unsigned int Class_1_242BFB9DE152D766_73_TypeDefinitionIndex = 31625;

class Class_1_242BFB9DE152D766_73 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_73*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_73*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_242BFB9DE152D766_73_TypeDefinitionIndex)->GetStaticField(0x64C00);
	}
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	::Class_1_7BFB07C3AB2D97E4_1* Field_1_2; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_3; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_73__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_242BFB9DE152D766_73* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_73*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_73__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_73__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_73*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_73*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_73_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_73_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_242BFB9DE152D766_73* Clone()
	{
		return ((::Class_1_242BFB9DE152D766_73*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_73_CLONE_OFFSET))(this);
	}

	::Class_1_7BFB07C3AB2D97E4_1* Method_1_24748FC20F375725()
	{
		return ((::Class_1_7BFB07C3AB2D97E4_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_73_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_7BFB07C3AB2D97E4_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7BFB07C3AB2D97E4_1*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_73_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_73_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_242BFB9DE152D766_73* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_242BFB9DE152D766_73*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_73_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_73_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_73_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_73_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_73_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_242BFB9DE152D766_73* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_73*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_73_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_73_MERGEFROM_1_OFFSET))(this, a1);
	}
};
