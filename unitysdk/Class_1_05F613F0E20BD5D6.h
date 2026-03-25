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

#define CLASS_1_05F613F0E20BD5D6_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17F88E20)
#define CLASS_1_05F613F0E20BD5D6_CLONE_OFFSET UNITYSDK_OFFSET(0x17F88940)
#define CLASS_1_05F613F0E20BD5D6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17F88B00)
#define CLASS_1_05F613F0E20BD5D6_EQUALS_OFFSET UNITYSDK_OFFSET(0x17F889E0)
#define CLASS_1_05F613F0E20BD5D6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17F88BC0)
#define CLASS_1_05F613F0E20BD5D6_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17F89050)
#define CLASS_1_05F613F0E20BD5D6_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17F88FA0)
#define CLASS_1_05F613F0E20BD5D6_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17F889B0)
#define CLASS_1_05F613F0E20BD5D6_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17F88990)
#define CLASS_1_05F613F0E20BD5D6_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17F889C0)
#define CLASS_1_05F613F0E20BD5D6_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17F889A0)
#define CLASS_1_05F613F0E20BD5D6_METHOD_1_F9594A5160DEEC20_OFFSET UNITYSDK_OFFSET(0x17F889D0)
#define CLASS_1_05F613F0E20BD5D6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17F88850)
#define CLASS_1_05F613F0E20BD5D6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17F88CC0)
#define CLASS_1_05F613F0E20BD5D6_WRITETO_OFFSET UNITYSDK_OFFSET(0x17F88D20)
#define CLASS_1_05F613F0E20BD5D6__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F89130)
#define CLASS_1_05F613F0E20BD5D6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17F888A0)
#define CLASS_1_05F613F0E20BD5D6__CTOR_OFFSET UNITYSDK_OFFSET(0x17F88860)

inline static constexpr unsigned int Class_1_05F613F0E20BD5D6_TypeDefinitionIndex = 23433;

class Class_1_05F613F0E20BD5D6 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Proto::ItemCost*>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::ItemCost*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_05F613F0E20BD5D6_TypeDefinitionIndex)->GetStaticField(0x34AF0);
	}
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemCost*>* Field_1_7; // 0x18
	::System::UInt32 Field_1_4; // 0x20
	::System::UInt32 Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05F613F0E20BD5D6__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_05F613F0E20BD5D6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_05F613F0E20BD5D6*))((::PBYTE)hIl2Cpp + CLASS_1_05F613F0E20BD5D6__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_05F613F0E20BD5D6__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05F613F0E20BD5D6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_05F613F0E20BD5D6* Clone()
	{
		return ((::Class_1_05F613F0E20BD5D6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05F613F0E20BD5D6_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05F613F0E20BD5D6_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_05F613F0E20BD5D6_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05F613F0E20BD5D6_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_05F613F0E20BD5D6_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemCost*>* Method_1_F9594A5160DEEC20()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemCost*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05F613F0E20BD5D6_METHOD_1_F9594A5160DEEC20_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_05F613F0E20BD5D6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_05F613F0E20BD5D6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_05F613F0E20BD5D6*))((::PBYTE)hIl2Cpp + CLASS_1_05F613F0E20BD5D6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05F613F0E20BD5D6_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05F613F0E20BD5D6_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_05F613F0E20BD5D6_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05F613F0E20BD5D6_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_05F613F0E20BD5D6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_05F613F0E20BD5D6*))((::PBYTE)hIl2Cpp + CLASS_1_05F613F0E20BD5D6_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_05F613F0E20BD5D6_MERGEFROM_1_OFFSET))(this, a1);
	}
};
