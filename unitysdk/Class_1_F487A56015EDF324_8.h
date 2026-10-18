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

#define CLASS_1_F487A56015EDF324_8_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE6EAE0)
#define CLASS_1_F487A56015EDF324_8_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE6E5E0)
#define CLASS_1_F487A56015EDF324_8_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE6E720)
#define CLASS_1_F487A56015EDF324_8_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE6E680)
#define CLASS_1_F487A56015EDF324_8_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE6E820)
#define CLASS_1_F487A56015EDF324_8_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE6ECC0)
#define CLASS_1_F487A56015EDF324_8_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE6EC60)
#define CLASS_1_F487A56015EDF324_8_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1DE6E650)
#define CLASS_1_F487A56015EDF324_8_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1DE6E630)
#define CLASS_1_F487A56015EDF324_8_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1DE6E490)
#define CLASS_1_F487A56015EDF324_8_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1DE6E670)
#define CLASS_1_F487A56015EDF324_8_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1DE6E660)
#define CLASS_1_F487A56015EDF324_8_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1DE6E640)
#define CLASS_1_F487A56015EDF324_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE6E4F0)
#define CLASS_1_F487A56015EDF324_8_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE6E920)
#define CLASS_1_F487A56015EDF324_8_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE6E980)
#define CLASS_1_F487A56015EDF324_8__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE6EDD0)
#define CLASS_1_F487A56015EDF324_8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE6E550)
#define CLASS_1_F487A56015EDF324_8__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE6E500)

inline static constexpr unsigned int Class_1_F487A56015EDF324_8_TypeDefinitionIndex = 30813;

class Class_1_F487A56015EDF324_8 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_LHJBPILHFPN()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F487A56015EDF324_8_TypeDefinitionIndex)->GetStaticField(0x1F950);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_F487A56015EDF324_8*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_F487A56015EDF324_8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F487A56015EDF324_8_TypeDefinitionIndex)->GetStaticField(0x1F958);
	}
	// static const ::System::Int32 MFPHCNICEJD = 0x4; // 0x0
	// static const ::System::Int32 GDFHGOOLLFD = 0xA; // 0x0
	// static const ::System::Int32 KJEKGCKEKGF = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LGMBGGIBJIC; // 0x18
	::System::UInt32 OIGNKJOLCFL; // 0x20
	::System::UInt32 GMPNCOBOFDM; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_8__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_F487A56015EDF324_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F487A56015EDF324_8*))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_8__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_8__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_F487A56015EDF324_8*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_F487A56015EDF324_8*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_8_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_F487A56015EDF324_8* Clone()
	{
		return ((::Class_1_F487A56015EDF324_8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_8_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_8_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_8_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_8_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_8_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_8_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_8_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_F487A56015EDF324_8* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F487A56015EDF324_8*))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_8_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_8_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_8_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_8_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_8_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_F487A56015EDF324_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F487A56015EDF324_8*))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_8_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_8_MERGEFROM_1_OFFSET))(this, a1);
	}
};
