#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_5B32D2F420A8BBBF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1D89F4E0)
#define CLASS_1_5B32D2F420A8BBBF_CLONE_OFFSET UNITYSDK_OFFSET(0x1D89F090)
#define CLASS_1_5B32D2F420A8BBBF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D89F130)
#define CLASS_1_5B32D2F420A8BBBF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D89F100)
#define CLASS_1_5B32D2F420A8BBBF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D89F250)
#define CLASS_1_5B32D2F420A8BBBF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1D89F660)
#define CLASS_1_5B32D2F420A8BBBF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1D89F5F0)
#define CLASS_1_5B32D2F420A8BBBF_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1D89F0C0)
#define CLASS_1_5B32D2F420A8BBBF_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1D89F0F0)
#define CLASS_1_5B32D2F420A8BBBF_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1D89EF10)
#define CLASS_1_5B32D2F420A8BBBF_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1D89F0D0)
#define CLASS_1_5B32D2F420A8BBBF_METHOD_1_EA98AC27B86895E5_OFFSET UNITYSDK_OFFSET(0x1D89F0E0)
#define CLASS_1_5B32D2F420A8BBBF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1D89EF40)
#define CLASS_1_5B32D2F420A8BBBF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D89F380)
#define CLASS_1_5B32D2F420A8BBBF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1D89F3E0)
#define CLASS_1_5B32D2F420A8BBBF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D89F780)
#define CLASS_1_5B32D2F420A8BBBF__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D89EFC0)
#define CLASS_1_5B32D2F420A8BBBF__CTOR_OFFSET UNITYSDK_OFFSET(0x1D89EF50)

inline static constexpr unsigned int Class_1_5B32D2F420A8BBBF_TypeDefinitionIndex = 30221;

class Class_1_5B32D2F420A8BBBF : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>** StaticGet_FAOGOCHAKAC()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B32D2F420A8BBBF_TypeDefinitionIndex)->GetStaticField(0x42540);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_IKDNPMKDIOI()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B32D2F420A8BBBF_TypeDefinitionIndex)->GetStaticField(0x42548);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_5B32D2F420A8BBBF*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_5B32D2F420A8BBBF*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B32D2F420A8BBBF_TypeDefinitionIndex)->GetStaticField(0x42550);
	}
	// static const ::System::Int32 PLDKENJLKME = 0xE; // 0x0
	// static const ::System::Int32 LEEFDOOEDBE = 0x8; // 0x0
	// static const ::System::Int32 HNIPIODEBNN = 0x6; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NEPNNABNKED; // 0x18
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* ABMBOCHMHBA; // 0x20
	::System::UInt32 NAEACGPKNNH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B32D2F420A8BBBF__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5B32D2F420A8BBBF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B32D2F420A8BBBF*))((::PBYTE)hIl2Cpp + CLASS_1_5B32D2F420A8BBBF__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B32D2F420A8BBBF__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_5B32D2F420A8BBBF*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_5B32D2F420A8BBBF*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B32D2F420A8BBBF_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B32D2F420A8BBBF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_5B32D2F420A8BBBF* Clone()
	{
		return ((::Class_1_5B32D2F420A8BBBF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B32D2F420A8BBBF_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B32D2F420A8BBBF_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5B32D2F420A8BBBF_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Method_1_EA98AC27B86895E5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B32D2F420A8BBBF_METHOD_1_EA98AC27B86895E5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B32D2F420A8BBBF_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B32D2F420A8BBBF_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_5B32D2F420A8BBBF* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_5B32D2F420A8BBBF*))((::PBYTE)hIl2Cpp + CLASS_1_5B32D2F420A8BBBF_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B32D2F420A8BBBF_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B32D2F420A8BBBF_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B32D2F420A8BBBF_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B32D2F420A8BBBF_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_5B32D2F420A8BBBF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5B32D2F420A8BBBF*))((::PBYTE)hIl2Cpp + CLASS_1_5B32D2F420A8BBBF_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_5B32D2F420A8BBBF_MERGEFROM_1_OFFSET))(this, a1);
	}
};
