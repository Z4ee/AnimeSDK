#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45BB92167AED63A0_66;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_242BFB9DE152D766_51_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0AA0A0)
#define CLASS_1_242BFB9DE152D766_51_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0A9A60)
#define CLASS_1_242BFB9DE152D766_51_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0A9C90)
#define CLASS_1_242BFB9DE152D766_51_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0A9B20)
#define CLASS_1_242BFB9DE152D766_51_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0A9F60)
#define CLASS_1_242BFB9DE152D766_51_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0AA270)
#define CLASS_1_242BFB9DE152D766_51_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0AA100)
#define CLASS_1_242BFB9DE152D766_51_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1E0A9B00)
#define CLASS_1_242BFB9DE152D766_51_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E0A9980)
#define CLASS_1_242BFB9DE152D766_51_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1E0A9B10)
#define CLASS_1_242BFB9DE152D766_51_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0A99B0)
#define CLASS_1_242BFB9DE152D766_51_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0A9FB0)
#define CLASS_1_242BFB9DE152D766_51_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0AA010)
#define CLASS_1_242BFB9DE152D766_51__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0AA490)
#define CLASS_1_242BFB9DE152D766_51__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0A99D0)
#define CLASS_1_242BFB9DE152D766_51__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0A99C0)

inline static constexpr unsigned int Class_1_242BFB9DE152D766_51_TypeDefinitionIndex = 31016;

class Class_1_242BFB9DE152D766_51 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_51*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_51*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_242BFB9DE152D766_51_TypeDefinitionIndex)->GetStaticField(0x13850);
	}
	// static const ::System::Int32 EDKMCLPFFOE = 0x8; // 0x0
	::Class_1_45BB92167AED63A0_66* MOPOGJGJICC; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_51__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_242BFB9DE152D766_51* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_51*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_51__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_51__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_51*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_51*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_51_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_51_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_242BFB9DE152D766_51* Clone()
	{
		return ((::Class_1_242BFB9DE152D766_51*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_51_CLONE_OFFSET))(this);
	}

	::Class_1_45BB92167AED63A0_66* Method_1_24748FC20F375725()
	{
		return ((::Class_1_45BB92167AED63A0_66*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_51_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_45BB92167AED63A0_66* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_66*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_51_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_51_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_242BFB9DE152D766_51* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_242BFB9DE152D766_51*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_51_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_51_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_51_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_51_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_51_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_242BFB9DE152D766_51* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_51*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_51_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_51_MERGEFROM_1_OFFSET))(this, a1);
	}
};
