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
namespace Proto { class GachaCeilingAvatar; }
namespace System { class String; }

#define CLASS_1_42828A41A506F903_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EBB06E0)
#define CLASS_1_42828A41A506F903_CLONE_OFFSET UNITYSDK_OFFSET(0x1EBB0190)
#define CLASS_1_42828A41A506F903_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EBB0350)
#define CLASS_1_42828A41A506F903_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EBB0210)
#define CLASS_1_42828A41A506F903_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EBB0480)
#define CLASS_1_42828A41A506F903_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EBB08C0)
#define CLASS_1_42828A41A506F903_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EBB0810)
#define CLASS_1_42828A41A506F903_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1EBB01D0)
#define CLASS_1_42828A41A506F903_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1EBB0070)
#define CLASS_1_42828A41A506F903_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1EBB01E0)
#define CLASS_1_42828A41A506F903_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1EBB0200)
#define CLASS_1_42828A41A506F903_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1EBB01F0)
#define CLASS_1_42828A41A506F903_METHOD_1_F05E2AE4258237EE_OFFSET UNITYSDK_OFFSET(0x1EBB01C0)
#define CLASS_1_42828A41A506F903_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EBB00A0)
#define CLASS_1_42828A41A506F903_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EBB04F0)
#define CLASS_1_42828A41A506F903_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EBB0550)
#define CLASS_1_42828A41A506F903__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBB0AA0)
#define CLASS_1_42828A41A506F903__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EBB00F0)
#define CLASS_1_42828A41A506F903__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBB00B0)

inline static constexpr unsigned int Class_1_42828A41A506F903_TypeDefinitionIndex = 28556;

class Class_1_42828A41A506F903 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Proto::GachaCeilingAvatar*>** StaticGet_DDFODHOFBIP()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::GachaCeilingAvatar*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_42828A41A506F903_TypeDefinitionIndex)->GetStaticField(0xC2D0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_42828A41A506F903*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_42828A41A506F903*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_42828A41A506F903_TypeDefinitionIndex)->GetStaticField(0xC2D8);
	}
	// static const ::System::Int32 IMGDAOEBONP = 0xA; // 0x0
	// static const ::System::Int32 EKLKIMFLMMJ = 0x4; // 0x0
	// static const ::System::Int32 NAEKFBPAOJF = 0x8; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::GachaCeilingAvatar*>* CBFGBDBJHID; // 0x18
	::System::Boolean FINIBLCFHCF; // 0x20
	::System::UInt32 ELNGMPEPCGP; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42828A41A506F903__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_42828A41A506F903* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_42828A41A506F903*))((::PBYTE)hIl2Cpp + CLASS_1_42828A41A506F903__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_42828A41A506F903__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_42828A41A506F903*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_42828A41A506F903*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_42828A41A506F903_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42828A41A506F903_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_42828A41A506F903* Clone()
	{
		return ((::Class_1_42828A41A506F903*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42828A41A506F903_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::GachaCeilingAvatar*>* Method_1_F05E2AE4258237EE()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::GachaCeilingAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42828A41A506F903_METHOD_1_F05E2AE4258237EE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42828A41A506F903_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_42828A41A506F903_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42828A41A506F903_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_42828A41A506F903_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_42828A41A506F903_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_42828A41A506F903* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_42828A41A506F903*))((::PBYTE)hIl2Cpp + CLASS_1_42828A41A506F903_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42828A41A506F903_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42828A41A506F903_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_42828A41A506F903_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42828A41A506F903_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_42828A41A506F903* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_42828A41A506F903*))((::PBYTE)hIl2Cpp + CLASS_1_42828A41A506F903_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_42828A41A506F903_MERGEFROM_1_OFFSET))(this, a1);
	}
};
