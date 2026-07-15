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

#define CLASS_1_A5C7ECF8A84A964D_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CEFD6E0)
#define CLASS_1_A5C7ECF8A84A964D_CLONE_OFFSET UNITYSDK_OFFSET(0x1CEFD150)
#define CLASS_1_A5C7ECF8A84A964D_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CEFD330)
#define CLASS_1_A5C7ECF8A84A964D_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CEFD1D0)
#define CLASS_1_A5C7ECF8A84A964D_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CEFD470)
#define CLASS_1_A5C7ECF8A84A964D_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CEFD8A0)
#define CLASS_1_A5C7ECF8A84A964D_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CEFD7F0)
#define CLASS_1_A5C7ECF8A84A964D_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CEFD1A0)
#define CLASS_1_A5C7ECF8A84A964D_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CEFD030)
#define CLASS_1_A5C7ECF8A84A964D_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CEFD1B0)
#define CLASS_1_A5C7ECF8A84A964D_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1CEFD190)
#define CLASS_1_A5C7ECF8A84A964D_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1CEFD180)
#define CLASS_1_A5C7ECF8A84A964D_METHOD_1_F05E2AE4258237EE_OFFSET UNITYSDK_OFFSET(0x1CEFD1C0)
#define CLASS_1_A5C7ECF8A84A964D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CEFD060)
#define CLASS_1_A5C7ECF8A84A964D_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CEFD4E0)
#define CLASS_1_A5C7ECF8A84A964D_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CEFD540)
#define CLASS_1_A5C7ECF8A84A964D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEFDA70)
#define CLASS_1_A5C7ECF8A84A964D__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CEFD0B0)
#define CLASS_1_A5C7ECF8A84A964D__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEFD070)

inline static constexpr unsigned int Class_1_A5C7ECF8A84A964D_TypeDefinitionIndex = 27847;

class Class_1_A5C7ECF8A84A964D : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_A5C7ECF8A84A964D*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_A5C7ECF8A84A964D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A5C7ECF8A84A964D_TypeDefinitionIndex)->GetStaticField(0x63AF0);
	}
	static ::Google::Protobuf::FieldCodec_1<::Proto::GachaCeilingAvatar*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::GachaCeilingAvatar*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A5C7ECF8A84A964D_TypeDefinitionIndex)->GetStaticField(0x63AF8);
	}
	// static const ::System::Int32 Field_1_2 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x3; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::GachaCeilingAvatar*>* Field_1_5; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_6; // 0x18
	::System::Boolean Field_1_7; // 0x20
	::System::UInt32 Field_1_8; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5C7ECF8A84A964D__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_A5C7ECF8A84A964D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A5C7ECF8A84A964D*))((::PBYTE)hIl2Cpp + CLASS_1_A5C7ECF8A84A964D__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A5C7ECF8A84A964D__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_A5C7ECF8A84A964D*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_A5C7ECF8A84A964D*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A5C7ECF8A84A964D_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5C7ECF8A84A964D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_A5C7ECF8A84A964D* Clone()
	{
		return ((::Class_1_A5C7ECF8A84A964D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5C7ECF8A84A964D_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5C7ECF8A84A964D_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A5C7ECF8A84A964D_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5C7ECF8A84A964D_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A5C7ECF8A84A964D_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::GachaCeilingAvatar*>* Method_1_F05E2AE4258237EE()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::GachaCeilingAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5C7ECF8A84A964D_METHOD_1_F05E2AE4258237EE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A5C7ECF8A84A964D_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_A5C7ECF8A84A964D* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A5C7ECF8A84A964D*))((::PBYTE)hIl2Cpp + CLASS_1_A5C7ECF8A84A964D_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5C7ECF8A84A964D_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5C7ECF8A84A964D_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A5C7ECF8A84A964D_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5C7ECF8A84A964D_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_A5C7ECF8A84A964D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A5C7ECF8A84A964D*))((::PBYTE)hIl2Cpp + CLASS_1_A5C7ECF8A84A964D_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A5C7ECF8A84A964D_MERGEFROM_1_OFFSET))(this, a1);
	}
};
