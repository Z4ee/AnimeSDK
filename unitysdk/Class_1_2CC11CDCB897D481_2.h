#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_2CC11CDCB897D481_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x193B7CE0)
#define CLASS_1_2CC11CDCB897D481_2_CLONE_OFFSET UNITYSDK_OFFSET(0x193B7930)
#define CLASS_1_2CC11CDCB897D481_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x193B7A80)
#define CLASS_1_2CC11CDCB897D481_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x193B79D0)
#define CLASS_1_2CC11CDCB897D481_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x193B7B30)
#define CLASS_1_2CC11CDCB897D481_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x193B7F30)
#define CLASS_1_2CC11CDCB897D481_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x193B7EC0)
#define CLASS_1_2CC11CDCB897D481_2_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x193B7990)
#define CLASS_1_2CC11CDCB897D481_2_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x193B79B0)
#define CLASS_1_2CC11CDCB897D481_2_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x193B7970)
#define CLASS_1_2CC11CDCB897D481_2_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x193B7840)
#define CLASS_1_2CC11CDCB897D481_2_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x193B79A0)
#define CLASS_1_2CC11CDCB897D481_2_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x193B79C0)
#define CLASS_1_2CC11CDCB897D481_2_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x193B7980)
#define CLASS_1_2CC11CDCB897D481_2_METHOD_1_EA98AC27B86895E5_OFFSET UNITYSDK_OFFSET(0x193B7960)
#define CLASS_1_2CC11CDCB897D481_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x193B7870)
#define CLASS_1_2CC11CDCB897D481_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x193B7B80)
#define CLASS_1_2CC11CDCB897D481_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x193B7BE0)
#define CLASS_1_2CC11CDCB897D481_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x193B8020)
#define CLASS_1_2CC11CDCB897D481_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x193B78B0)
#define CLASS_1_2CC11CDCB897D481_2__CTOR_OFFSET UNITYSDK_OFFSET(0x193B7880)

inline static constexpr unsigned int Class_1_2CC11CDCB897D481_2_TypeDefinitionIndex = 30884;

class Class_1_2CC11CDCB897D481_2 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_2CC11CDCB897D481_2*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_2CC11CDCB897D481_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CC11CDCB897D481_2_TypeDefinitionIndex)->GetStaticField(0x3CAC0);
	}
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>** StaticGet_Field_1_3()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CC11CDCB897D481_2_TypeDefinitionIndex)->GetStaticField(0x3CAC8);
	}
	// static const ::System::Int32 Field_1_2 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_9 = 0xA; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Field_1_4; // 0x18
	::System::UInt32 Field_1_6; // 0x20
	::System::UInt32 Field_1_10; // 0x24
	::System::UInt32 Field_1_8; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CC11CDCB897D481_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_2CC11CDCB897D481_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2CC11CDCB897D481_2*))((::PBYTE)hIl2Cpp + CLASS_1_2CC11CDCB897D481_2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2CC11CDCB897D481_2__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_2CC11CDCB897D481_2*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_2CC11CDCB897D481_2*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2CC11CDCB897D481_2_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CC11CDCB897D481_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_2CC11CDCB897D481_2* Clone()
	{
		return ((::Class_1_2CC11CDCB897D481_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CC11CDCB897D481_2_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Method_1_EA98AC27B86895E5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CC11CDCB897D481_2_METHOD_1_EA98AC27B86895E5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CC11CDCB897D481_2_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2CC11CDCB897D481_2_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CC11CDCB897D481_2_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2CC11CDCB897D481_2_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CC11CDCB897D481_2_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2CC11CDCB897D481_2_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2CC11CDCB897D481_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_2CC11CDCB897D481_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2CC11CDCB897D481_2*))((::PBYTE)hIl2Cpp + CLASS_1_2CC11CDCB897D481_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CC11CDCB897D481_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CC11CDCB897D481_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2CC11CDCB897D481_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CC11CDCB897D481_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_2CC11CDCB897D481_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2CC11CDCB897D481_2*))((::PBYTE)hIl2Cpp + CLASS_1_2CC11CDCB897D481_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_2CC11CDCB897D481_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
