#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F487A56015EDF324_12;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_7FF19F6206AF6DD7_98_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEFA820)
#define CLASS_1_7FF19F6206AF6DD7_98_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEFA380)
#define CLASS_1_7FF19F6206AF6DD7_98_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEFA530)
#define CLASS_1_7FF19F6206AF6DD7_98_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEFA3E0)
#define CLASS_1_7FF19F6206AF6DD7_98_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEFA650)
#define CLASS_1_7FF19F6206AF6DD7_98_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEFA9F0)
#define CLASS_1_7FF19F6206AF6DD7_98_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEFA950)
#define CLASS_1_7FF19F6206AF6DD7_98_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1DEFA3C0)
#define CLASS_1_7FF19F6206AF6DD7_98_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1DEFA230)
#define CLASS_1_7FF19F6206AF6DD7_98_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1DEFA3B0)
#define CLASS_1_7FF19F6206AF6DD7_98_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1DEFA3D0)
#define CLASS_1_7FF19F6206AF6DD7_98_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEFA260)
#define CLASS_1_7FF19F6206AF6DD7_98_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEFA6C0)
#define CLASS_1_7FF19F6206AF6DD7_98_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEFA720)
#define CLASS_1_7FF19F6206AF6DD7_98__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEFABC0)
#define CLASS_1_7FF19F6206AF6DD7_98__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEFA2C0)
#define CLASS_1_7FF19F6206AF6DD7_98__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEFA270)

inline static constexpr unsigned int Class_1_7FF19F6206AF6DD7_98_TypeDefinitionIndex = 33166;

class Class_1_7FF19F6206AF6DD7_98 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_F487A56015EDF324_12*>** StaticGet_NAPLHCGELCG()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_F487A56015EDF324_12*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FF19F6206AF6DD7_98_TypeDefinitionIndex)->GetStaticField(0x339B0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_98*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_98*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FF19F6206AF6DD7_98_TypeDefinitionIndex)->GetStaticField(0x339B8);
	}
	// static const ::System::Int32 HNDGJMEPPNO = 0x8; // 0x0
	// static const ::System::Int32 OLFMDIGLJBF = 0x6; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F487A56015EDF324_12*>* IOPJHGFAAMP; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::System::UInt32 AMCPEKJHOPE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_98__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_7FF19F6206AF6DD7_98* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_98*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_98__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_98__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_98*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_98*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_98_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_98_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_7FF19F6206AF6DD7_98* Clone()
	{
		return ((::Class_1_7FF19F6206AF6DD7_98*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_98_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F487A56015EDF324_12*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F487A56015EDF324_12*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_98_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_98_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_98_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_98_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_7FF19F6206AF6DD7_98* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_98*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_98_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_98_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_98_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_98_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_98_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_7FF19F6206AF6DD7_98* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_98*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_98_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_98_MERGEFROM_1_OFFSET))(this, a1);
	}
};
