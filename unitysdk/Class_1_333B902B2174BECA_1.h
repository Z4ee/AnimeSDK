#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_333B902B2174BECA_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E054140)
#define CLASS_1_333B902B2174BECA_1_CLONE_OFFSET UNITYSDK_OFFSET(0x1E053B10)
#define CLASS_1_333B902B2174BECA_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E053C20)
#define CLASS_1_333B902B2174BECA_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E053BC0)
#define CLASS_1_333B902B2174BECA_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E053D50)
#define CLASS_1_333B902B2174BECA_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E054380)
#define CLASS_1_333B902B2174BECA_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E054310)
#define CLASS_1_333B902B2174BECA_1_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1E053BA0)
#define CLASS_1_333B902B2174BECA_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E053B80)
#define CLASS_1_333B902B2174BECA_1_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E053920)
#define CLASS_1_333B902B2174BECA_1_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1E053B70)
#define CLASS_1_333B902B2174BECA_1_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1E053B60)
#define CLASS_1_333B902B2174BECA_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1E053BB0)
#define CLASS_1_333B902B2174BECA_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E053B90)
#define CLASS_1_333B902B2174BECA_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E053980)
#define CLASS_1_333B902B2174BECA_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E053F20)
#define CLASS_1_333B902B2174BECA_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E053F80)
#define CLASS_1_333B902B2174BECA_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0544D0)
#define CLASS_1_333B902B2174BECA_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E053A20)
#define CLASS_1_333B902B2174BECA_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1E053990)

inline static constexpr unsigned int Class_1_333B902B2174BECA_1_TypeDefinitionIndex = 27057;

class Class_1_333B902B2174BECA_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_KKMJBLDGJCP()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_333B902B2174BECA_1_TypeDefinitionIndex)->GetStaticField(0x55E40);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_LLFMJBMCIHI()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_333B902B2174BECA_1_TypeDefinitionIndex)->GetStaticField(0x55E48);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_333B902B2174BECA_1*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_333B902B2174BECA_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_333B902B2174BECA_1_TypeDefinitionIndex)->GetStaticField(0x55E50);
	}
	// static const ::System::Int32 OGKEGBEIFFP = 0x1; // 0x0
	// static const ::System::Int32 NADNNEHBDJB = 0xA; // 0x0
	// static const ::System::Int32 EEMPBGGOLOO = 0xE; // 0x0
	// static const ::System::Int32 NFDOHEBLPGO = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DHJBNEGIBLK; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GNOBPDFMNBL; // 0x20
	::System::UInt32 IONKIKDOMLM; // 0x28
	::System::UInt32 OJGKLENJPDA; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_333B902B2174BECA_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_333B902B2174BECA_1*))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_333B902B2174BECA_1*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_333B902B2174BECA_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_1_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_333B902B2174BECA_1* Clone()
	{
		return ((::Class_1_333B902B2174BECA_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_1_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_1_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_1_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_1_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_333B902B2174BECA_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_333B902B2174BECA_1*))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_333B902B2174BECA_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_333B902B2174BECA_1*))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
