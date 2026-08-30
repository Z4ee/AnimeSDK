#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_8654F1DF226F6DE3_11_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E06B580)
#define CLASS_1_8654F1DF226F6DE3_11_CLONE_OFFSET UNITYSDK_OFFSET(0x1E06B080)
#define CLASS_1_8654F1DF226F6DE3_11_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E06B230)
#define CLASS_1_8654F1DF226F6DE3_11_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E06B130)
#define CLASS_1_8654F1DF226F6DE3_11_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E06B3D0)
#define CLASS_1_8654F1DF226F6DE3_11_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E06B630)
#define CLASS_1_8654F1DF226F6DE3_11_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E06B5F0)
#define CLASS_1_8654F1DF226F6DE3_11_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1E06B0E0)
#define CLASS_1_8654F1DF226F6DE3_11_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1E06B0D0)
#define CLASS_1_8654F1DF226F6DE3_11_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E06AFF0)
#define CLASS_1_8654F1DF226F6DE3_11_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E06B020)
#define CLASS_1_8654F1DF226F6DE3_11_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E06B490)
#define CLASS_1_8654F1DF226F6DE3_11_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E06B4F0)
#define CLASS_1_8654F1DF226F6DE3_11__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E06B7C0)
#define CLASS_1_8654F1DF226F6DE3_11__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E06B040)
#define CLASS_1_8654F1DF226F6DE3_11__CTOR_OFFSET UNITYSDK_OFFSET(0x1E06B030)

inline static constexpr unsigned int Class_1_8654F1DF226F6DE3_11_TypeDefinitionIndex = 31388;

class Class_1_8654F1DF226F6DE3_11 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_8654F1DF226F6DE3_11*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_8654F1DF226F6DE3_11*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8654F1DF226F6DE3_11_TypeDefinitionIndex)->GetStaticField(0xD3F0);
	}
	// static const ::System::Int32 DBKOHLFBPNI = 0xD; // 0x0
	::System::String* JDOJAMHCAJD; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_11__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_8654F1DF226F6DE3_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8654F1DF226F6DE3_11*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_11__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_11__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_8654F1DF226F6DE3_11*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_8654F1DF226F6DE3_11*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_11_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_11_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_8654F1DF226F6DE3_11* Clone()
	{
		return ((::Class_1_8654F1DF226F6DE3_11*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_11_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_11_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_11_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_11_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_8654F1DF226F6DE3_11* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8654F1DF226F6DE3_11*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_11_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_11_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_11_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_11_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_11_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_8654F1DF226F6DE3_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8654F1DF226F6DE3_11*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_11_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8654F1DF226F6DE3_11_MERGEFROM_1_OFFSET))(this, a1);
	}
};
