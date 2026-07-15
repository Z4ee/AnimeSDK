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

#define CLASS_1_45BB92167AED63A0_82_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CD82850)
#define CLASS_1_45BB92167AED63A0_82_CLONE_OFFSET UNITYSDK_OFFSET(0x1CD823C0)
#define CLASS_1_45BB92167AED63A0_82_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CD82520)
#define CLASS_1_45BB92167AED63A0_82_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CD82420)
#define CLASS_1_45BB92167AED63A0_82_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CD82610)
#define CLASS_1_45BB92167AED63A0_82_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CD82990)
#define CLASS_1_45BB92167AED63A0_82_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CD82940)
#define CLASS_1_45BB92167AED63A0_82_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1CD82400)
#define CLASS_1_45BB92167AED63A0_82_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1CD823F0)
#define CLASS_1_45BB92167AED63A0_82_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1CD822A0)
#define CLASS_1_45BB92167AED63A0_82_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1CD82410)
#define CLASS_1_45BB92167AED63A0_82_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CD822D0)
#define CLASS_1_45BB92167AED63A0_82_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CD82710)
#define CLASS_1_45BB92167AED63A0_82_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CD82770)
#define CLASS_1_45BB92167AED63A0_82__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD82B50)
#define CLASS_1_45BB92167AED63A0_82__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CD82330)
#define CLASS_1_45BB92167AED63A0_82__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD822E0)

inline static constexpr unsigned int Class_1_45BB92167AED63A0_82_TypeDefinitionIndex = 31509;

class Class_1_45BB92167AED63A0_82 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_82*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_82*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_82_TypeDefinitionIndex)->GetStaticField(0x9A10);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_82_TypeDefinitionIndex)->GetStaticField(0x9A18);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xE; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_5; // 0x18
	::System::UInt32 Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_82__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_45BB92167AED63A0_82* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_82*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_82__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_82__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_82*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_82*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_82_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_82_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_45BB92167AED63A0_82* Clone()
	{
		return ((::Class_1_45BB92167AED63A0_82*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_82_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_82_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_82_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_82_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_82_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_45BB92167AED63A0_82* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_45BB92167AED63A0_82*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_82_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_82_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_82_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_82_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_82_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_45BB92167AED63A0_82* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_82*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_82_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_82_MERGEFROM_1_OFFSET))(this, a1);
	}
};
