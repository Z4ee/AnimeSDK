#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_227;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_242BFB9DE152D766_14_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0DCA90)
#define CLASS_1_242BFB9DE152D766_14_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0DC460)
#define CLASS_1_242BFB9DE152D766_14_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0DC670)
#define CLASS_1_242BFB9DE152D766_14_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0DC500)
#define CLASS_1_242BFB9DE152D766_14_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0DC940)
#define CLASS_1_242BFB9DE152D766_14_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0DCB70)
#define CLASS_1_242BFB9DE152D766_14_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0DCAF0)
#define CLASS_1_242BFB9DE152D766_14_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1E0DC4E0)
#define CLASS_1_242BFB9DE152D766_14_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E0DC390)
#define CLASS_1_242BFB9DE152D766_14_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1E0DC4F0)
#define CLASS_1_242BFB9DE152D766_14_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0DC3C0)
#define CLASS_1_242BFB9DE152D766_14_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0DC9A0)
#define CLASS_1_242BFB9DE152D766_14_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0DCA00)
#define CLASS_1_242BFB9DE152D766_14__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0DCCF0)
#define CLASS_1_242BFB9DE152D766_14__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0DC3E0)
#define CLASS_1_242BFB9DE152D766_14__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0DC3D0)

inline static constexpr unsigned int Class_1_242BFB9DE152D766_14_TypeDefinitionIndex = 26883;

class Class_1_242BFB9DE152D766_14 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_14*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_14*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_242BFB9DE152D766_14_TypeDefinitionIndex)->GetStaticField(0x13F10);
	}
	// static const ::System::Int32 FKNGPKFBFMB = 0x6; // 0x0
	::Class_1_D17272E82AE804C2_227* OGCDFPMOJLM; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_14__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_242BFB9DE152D766_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_14*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_14__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_14__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_14*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_14*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_14_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_14_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_242BFB9DE152D766_14* Clone()
	{
		return ((::Class_1_242BFB9DE152D766_14*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_14_CLONE_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_227* Method_1_24748FC20F375725()
	{
		return ((::Class_1_D17272E82AE804C2_227*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_14_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D17272E82AE804C2_227* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_227*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_14_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_14_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_242BFB9DE152D766_14* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_242BFB9DE152D766_14*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_14_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_14_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_14_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_14_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_14_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_242BFB9DE152D766_14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_14*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_14_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_14_MERGEFROM_1_OFFSET))(this, a1);
	}
};
