#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_190BB2A3D431BCD2_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_242BFB9DE152D766_110_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1D9A6140)
#define CLASS_1_242BFB9DE152D766_110_CLONE_OFFSET UNITYSDK_OFFSET(0x1D9A5B20)
#define CLASS_1_242BFB9DE152D766_110_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D9A5D30)
#define CLASS_1_242BFB9DE152D766_110_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D9A5BC0)
#define CLASS_1_242BFB9DE152D766_110_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D9A6000)
#define CLASS_1_242BFB9DE152D766_110_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1D9A6270)
#define CLASS_1_242BFB9DE152D766_110_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1D9A61A0)
#define CLASS_1_242BFB9DE152D766_110_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1D9A5BA0)
#define CLASS_1_242BFB9DE152D766_110_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1D9A5A60)
#define CLASS_1_242BFB9DE152D766_110_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1D9A5BB0)
#define CLASS_1_242BFB9DE152D766_110_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1D9A5A90)
#define CLASS_1_242BFB9DE152D766_110_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D9A6050)
#define CLASS_1_242BFB9DE152D766_110_WRITETO_OFFSET UNITYSDK_OFFSET(0x1D9A60B0)
#define CLASS_1_242BFB9DE152D766_110__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9A6460)
#define CLASS_1_242BFB9DE152D766_110__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D9A5AB0)
#define CLASS_1_242BFB9DE152D766_110__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A5AA0)

inline static constexpr unsigned int Class_1_242BFB9DE152D766_110_TypeDefinitionIndex = 34229;

class Class_1_242BFB9DE152D766_110 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_110*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_110*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_242BFB9DE152D766_110_TypeDefinitionIndex)->GetStaticField(0xED20);
	}
	// static const ::System::Int32 AKILEGOIBPO = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Class_1_190BB2A3D431BCD2_2* KONAGLKOCML; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_110__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_242BFB9DE152D766_110* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_110*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_110__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_110__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_110*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_110*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_110_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_110_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_242BFB9DE152D766_110* Clone()
	{
		return ((::Class_1_242BFB9DE152D766_110*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_110_CLONE_OFFSET))(this);
	}

	::Class_1_190BB2A3D431BCD2_2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_190BB2A3D431BCD2_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_110_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_190BB2A3D431BCD2_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_190BB2A3D431BCD2_2*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_110_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_110_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_242BFB9DE152D766_110* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_242BFB9DE152D766_110*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_110_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_110_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_110_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_110_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_110_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_242BFB9DE152D766_110* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_110*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_110_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_110_MERGEFROM_1_OFFSET))(this, a1);
	}
};
