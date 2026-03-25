#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class PileItem; }
namespace System { class String; }

#define CLASS_1_728C80A2D475CC4E_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x180E6480)
#define CLASS_1_728C80A2D475CC4E_CLONE_OFFSET UNITYSDK_OFFSET(0x180E6050)
#define CLASS_1_728C80A2D475CC4E_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x180E61A0)
#define CLASS_1_728C80A2D475CC4E_EQUALS_OFFSET UNITYSDK_OFFSET(0x180E60B0)
#define CLASS_1_728C80A2D475CC4E_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x180E6250)
#define CLASS_1_728C80A2D475CC4E_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x180E6650)
#define CLASS_1_728C80A2D475CC4E_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x180E65B0)
#define CLASS_1_728C80A2D475CC4E_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x180E6090)
#define CLASS_1_728C80A2D475CC4E_METHOD_1_4C96E9A31DDA1BDD_OFFSET UNITYSDK_OFFSET(0x180E6080)
#define CLASS_1_728C80A2D475CC4E_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x180E60A0)
#define CLASS_1_728C80A2D475CC4E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x180E5F70)
#define CLASS_1_728C80A2D475CC4E_TOSTRING_OFFSET UNITYSDK_OFFSET(0x180E6340)
#define CLASS_1_728C80A2D475CC4E_WRITETO_OFFSET UNITYSDK_OFFSET(0x180E63A0)
#define CLASS_1_728C80A2D475CC4E__CCTOR_OFFSET UNITYSDK_OFFSET(0x180E6710)
#define CLASS_1_728C80A2D475CC4E__CTOR_1_OFFSET UNITYSDK_OFFSET(0x180E5FC0)
#define CLASS_1_728C80A2D475CC4E__CTOR_OFFSET UNITYSDK_OFFSET(0x180E5F80)

inline static constexpr unsigned int Class_1_728C80A2D475CC4E_TypeDefinitionIndex = 23432;

class Class_1_728C80A2D475CC4E : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Proto::PileItem*>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::Proto::PileItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_728C80A2D475CC4E_TypeDefinitionIndex)->GetStaticField(0x36640);
	}
	// static const ::System::Int32 Field_1_1 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>* Field_1_3; // 0x18
	::System::UInt32 Field_1_5; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_728C80A2D475CC4E__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_728C80A2D475CC4E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_728C80A2D475CC4E*))((::PBYTE)hIl2Cpp + CLASS_1_728C80A2D475CC4E__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_728C80A2D475CC4E__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_728C80A2D475CC4E_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_728C80A2D475CC4E* Clone()
	{
		return ((::Class_1_728C80A2D475CC4E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_728C80A2D475CC4E_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>* Method_1_4C96E9A31DDA1BDD()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_728C80A2D475CC4E_METHOD_1_4C96E9A31DDA1BDD_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_728C80A2D475CC4E_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_728C80A2D475CC4E_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_728C80A2D475CC4E_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_728C80A2D475CC4E* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_728C80A2D475CC4E*))((::PBYTE)hIl2Cpp + CLASS_1_728C80A2D475CC4E_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_728C80A2D475CC4E_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_728C80A2D475CC4E_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_728C80A2D475CC4E_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_728C80A2D475CC4E_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_728C80A2D475CC4E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_728C80A2D475CC4E*))((::PBYTE)hIl2Cpp + CLASS_1_728C80A2D475CC4E_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_728C80A2D475CC4E_MERGEFROM_1_OFFSET))(this, a1);
	}
};
