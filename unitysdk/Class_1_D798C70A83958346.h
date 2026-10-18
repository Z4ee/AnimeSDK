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
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_D798C70A83958346_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA8EAA0)
#define CLASS_1_D798C70A83958346_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA8E3F0)
#define CLASS_1_D798C70A83958346_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA8E590)
#define CLASS_1_D798C70A83958346_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA8E470)
#define CLASS_1_D798C70A83958346_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA8E740)
#define CLASS_1_D798C70A83958346_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA8EC90)
#define CLASS_1_D798C70A83958346_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA8EBE0)
#define CLASS_1_D798C70A83958346_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1EA8E450)
#define CLASS_1_D798C70A83958346_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1EA8E290)
#define CLASS_1_D798C70A83958346_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x1EA8E430)
#define CLASS_1_D798C70A83958346_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x1EA8E420)
#define CLASS_1_D798C70A83958346_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1EA8E460)
#define CLASS_1_D798C70A83958346_METHOD_1_9910C76C967AA69B_OFFSET UNITYSDK_OFFSET(0x1EA8E440)
#define CLASS_1_D798C70A83958346_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA8E2C0)
#define CLASS_1_D798C70A83958346_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA8E910)
#define CLASS_1_D798C70A83958346_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA8E970)
#define CLASS_1_D798C70A83958346__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA8EDB0)
#define CLASS_1_D798C70A83958346__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA8E320)
#define CLASS_1_D798C70A83958346__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA8E2D0)

inline static constexpr unsigned int Class_1_D798C70A83958346_TypeDefinitionIndex = 31537;

class Class_1_D798C70A83958346 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt64>** StaticGet_MGJJAGCGDIO()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt64>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D798C70A83958346_TypeDefinitionIndex)->GetStaticField(0x5BE90);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_D798C70A83958346*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D798C70A83958346*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D798C70A83958346_TypeDefinitionIndex)->GetStaticField(0x5BE98);
	}
	// static const ::System::Int32 DFABHHAPAEA = 0x5; // 0x0
	// static const ::System::Int32 BILNABFICOB = 0x1; // 0x0
	// static const ::System::Int32 PLDKENJLKME = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Proto::ItemList* MIEINLKPIMJ; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt64>* BAIDFHCBDLG; // 0x20
	::System::UInt32 NAEACGPKNNH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D798C70A83958346__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D798C70A83958346* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D798C70A83958346*))((::PBYTE)hIl2Cpp + CLASS_1_D798C70A83958346__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D798C70A83958346__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D798C70A83958346*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D798C70A83958346*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D798C70A83958346_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D798C70A83958346_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D798C70A83958346* Clone()
	{
		return ((::Class_1_D798C70A83958346*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D798C70A83958346_CLONE_OFFSET))(this);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D798C70A83958346_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_D798C70A83958346_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt64>* Method_1_9910C76C967AA69B()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D798C70A83958346_METHOD_1_9910C76C967AA69B_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D798C70A83958346_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D798C70A83958346_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D798C70A83958346_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D798C70A83958346* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D798C70A83958346*))((::PBYTE)hIl2Cpp + CLASS_1_D798C70A83958346_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D798C70A83958346_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D798C70A83958346_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D798C70A83958346_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D798C70A83958346_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D798C70A83958346* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D798C70A83958346*))((::PBYTE)hIl2Cpp + CLASS_1_D798C70A83958346_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D798C70A83958346_MERGEFROM_1_OFFSET))(this, a1);
	}
};
