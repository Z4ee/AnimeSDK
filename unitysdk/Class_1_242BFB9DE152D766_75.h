#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_242BFB9DE152D766_73;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_242BFB9DE152D766_75_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E812AC0)
#define CLASS_1_242BFB9DE152D766_75_CLONE_OFFSET UNITYSDK_OFFSET(0x1E812340)
#define CLASS_1_242BFB9DE152D766_75_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E812630)
#define CLASS_1_242BFB9DE152D766_75_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8124C0)
#define CLASS_1_242BFB9DE152D766_75_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E812900)
#define CLASS_1_242BFB9DE152D766_75_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E812C30)
#define CLASS_1_242BFB9DE152D766_75_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E812B20)
#define CLASS_1_242BFB9DE152D766_75_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1E8124A0)
#define CLASS_1_242BFB9DE152D766_75_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E8121A0)
#define CLASS_1_242BFB9DE152D766_75_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1E8124B0)
#define CLASS_1_242BFB9DE152D766_75_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8121D0)
#define CLASS_1_242BFB9DE152D766_75_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8129D0)
#define CLASS_1_242BFB9DE152D766_75_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E812A30)
#define CLASS_1_242BFB9DE152D766_75__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E812DC0)
#define CLASS_1_242BFB9DE152D766_75__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8121F0)
#define CLASS_1_242BFB9DE152D766_75__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8121E0)

inline static constexpr unsigned int Class_1_242BFB9DE152D766_75_TypeDefinitionIndex = 32722;

class Class_1_242BFB9DE152D766_75 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_75*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_75*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_242BFB9DE152D766_75_TypeDefinitionIndex)->GetStaticField(0x15C40);
	}
	// static const ::System::Int32 PHNAANFIFGB = 0x2; // 0x0
	::Class_1_242BFB9DE152D766_73* CCAGFEOIGIE; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_75__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_242BFB9DE152D766_75* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_75*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_75__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_75__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_75*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_242BFB9DE152D766_75*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_75_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_75_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_242BFB9DE152D766_75* Clone()
	{
		return ((::Class_1_242BFB9DE152D766_75*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_75_CLONE_OFFSET))(this);
	}

	::Class_1_242BFB9DE152D766_73* Method_1_24748FC20F375725()
	{
		return ((::Class_1_242BFB9DE152D766_73*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_75_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_242BFB9DE152D766_73* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_73*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_75_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_75_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_242BFB9DE152D766_75* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_242BFB9DE152D766_75*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_75_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_75_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_75_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_75_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_75_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_242BFB9DE152D766_75* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_242BFB9DE152D766_75*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_75_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_242BFB9DE152D766_75_MERGEFROM_1_OFFSET))(this, a1);
	}
};
