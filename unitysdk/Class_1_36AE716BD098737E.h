#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemCost; }
namespace System { class String; }

#define CLASS_1_36AE716BD098737E_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17F24C90)
#define CLASS_1_36AE716BD098737E_CLONE_OFFSET UNITYSDK_OFFSET(0x17F24810)
#define CLASS_1_36AE716BD098737E_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17F249B0)
#define CLASS_1_36AE716BD098737E_EQUALS_OFFSET UNITYSDK_OFFSET(0x17F24890)
#define CLASS_1_36AE716BD098737E_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17F24A60)
#define CLASS_1_36AE716BD098737E_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17F24E40)
#define CLASS_1_36AE716BD098737E_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17F24DA0)
#define CLASS_1_36AE716BD098737E_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17F24860)
#define CLASS_1_36AE716BD098737E_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17F24870)
#define CLASS_1_36AE716BD098737E_METHOD_1_F9594A5160DEEC20_OFFSET UNITYSDK_OFFSET(0x17F24880)
#define CLASS_1_36AE716BD098737E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17F24730)
#define CLASS_1_36AE716BD098737E_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17F24B50)
#define CLASS_1_36AE716BD098737E_WRITETO_OFFSET UNITYSDK_OFFSET(0x17F24BB0)
#define CLASS_1_36AE716BD098737E__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F24F20)
#define CLASS_1_36AE716BD098737E__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17F24780)
#define CLASS_1_36AE716BD098737E__CTOR_OFFSET UNITYSDK_OFFSET(0x17F24740)

inline static constexpr unsigned int Class_1_36AE716BD098737E_TypeDefinitionIndex = 23435;

class Class_1_36AE716BD098737E : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Proto::ItemCost*>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::ItemCost*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_36AE716BD098737E_TypeDefinitionIndex)->GetStaticField(0x30BC0);
	}
	// static const ::System::Int32 Field_1_1 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x6; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemCost*>* Field_1_5; // 0x18
	::System::UInt32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36AE716BD098737E__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_36AE716BD098737E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_36AE716BD098737E*))((::PBYTE)hIl2Cpp + CLASS_1_36AE716BD098737E__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_36AE716BD098737E__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36AE716BD098737E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_36AE716BD098737E* Clone()
	{
		return ((::Class_1_36AE716BD098737E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36AE716BD098737E_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36AE716BD098737E_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_36AE716BD098737E_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemCost*>* Method_1_F9594A5160DEEC20()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemCost*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36AE716BD098737E_METHOD_1_F9594A5160DEEC20_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_36AE716BD098737E_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_36AE716BD098737E* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_36AE716BD098737E*))((::PBYTE)hIl2Cpp + CLASS_1_36AE716BD098737E_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36AE716BD098737E_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36AE716BD098737E_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_36AE716BD098737E_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36AE716BD098737E_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_36AE716BD098737E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_36AE716BD098737E*))((::PBYTE)hIl2Cpp + CLASS_1_36AE716BD098737E_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_36AE716BD098737E_MERGEFROM_1_OFFSET))(this, a1);
	}
};
