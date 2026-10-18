#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7BFB07C3AB2D97E4_3;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_242BFB9DE152D766_80_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E75A850)
#define CLASS_1_242BFB9DE152D766_80_CLONE_OFFSET UNITYSDK_OFFSET(0x1E75A1E0)
#define CLASS_1_242BFB9DE152D766_80_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E75A3F0)
#define CLASS_1_242BFB9DE152D766_80_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E75A280)
#define CLASS_1_242BFB9DE152D766_80_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E75A6C0)
#define CLASS_1_242BFB9DE152D766_80_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E75A940)
#define CLASS_1_242BFB9DE152D766_80_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E75A8B0)
#define CLASS_1_242BFB9DE152D766_80_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1E75A260)
#define CLASS_1_242BFB9DE152D766_80_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E75A120)
#define CLASS_1_242BFB9DE152D766_80_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1E75A270)
#define CLASS_1_242BFB9DE152D766_80_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E75A150)
#define CLASS_1_242BFB9DE152D766_80_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E75A760)
#define CLASS_1_242BFB9DE152D766_80_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E75A7C0)
#define CLASS_1_242BFB9DE152D766_80__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E75AAF0)
#define CLASS_1_242BFB9DE152D766_80__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E75A170)
#define CLASS_1_242BFB9DE152D766_80__CTOR_OFFSET UNITYSDK_OFFSET(0x1E75A160)

inline static constexpr unsigned int Class_1_242BFB9DE152D766_80_TypeDefinitionIndex = 33016;

class Class_1_242BFB9DE152D766_80 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_80*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_242BFB9DE152D766_80_TypeDefinitionIndex)->GetStaticField(0x64FA0);
	}
	// static const ::System::Int32 FAOPLNDAAOC = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Class_1_7BFB07C3AB2D97E4_3* GPBPLBBDMKA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_80__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_242BFB9DE152D766_80* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_80*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_80__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_80__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_80*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_80*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_80_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_80_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_242BFB9DE152D766_80* Clone()
	{
		return ((::Class_1_242BFB9DE152D766_80*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_80_CLONE_OFFSET))(this);
	}

	::Class_1_7BFB07C3AB2D97E4_3* Method_1_24748FC20F375725()
	{
		return ((::Class_1_7BFB07C3AB2D97E4_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_80_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_7BFB07C3AB2D97E4_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7BFB07C3AB2D97E4_3*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_80_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_80_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_242BFB9DE152D766_80* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_242BFB9DE152D766_80*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_80_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_80_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_80_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_80_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_80_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_242BFB9DE152D766_80* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_80*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_80_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_80_MERGEFROM_1_OFFSET))(this, a1);
	}
};
