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

#define CLASS_1_45BB92167AED63A0_35_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EC6AD40)
#define CLASS_1_45BB92167AED63A0_35_CLONE_OFFSET UNITYSDK_OFFSET(0x1EC6A770)
#define CLASS_1_45BB92167AED63A0_35_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EC6A930)
#define CLASS_1_45BB92167AED63A0_35_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EC6A7E0)
#define CLASS_1_45BB92167AED63A0_35_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EC6AA40)
#define CLASS_1_45BB92167AED63A0_35_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EC6AE70)
#define CLASS_1_45BB92167AED63A0_35_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EC6AE10)
#define CLASS_1_45BB92167AED63A0_35_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1EC6A580)
#define CLASS_1_45BB92167AED63A0_35_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1EC6A7D0)
#define CLASS_1_45BB92167AED63A0_35_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1EC6A7C0)
#define CLASS_1_45BB92167AED63A0_35_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EC6A5E0)
#define CLASS_1_45BB92167AED63A0_35_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EC6AC00)
#define CLASS_1_45BB92167AED63A0_35_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EC6AC60)
#define CLASS_1_45BB92167AED63A0_35__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC6AFB0)
#define CLASS_1_45BB92167AED63A0_35__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EC6A680)
#define CLASS_1_45BB92167AED63A0_35__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC6A5F0)

inline static constexpr unsigned int Class_1_45BB92167AED63A0_35_TypeDefinitionIndex = 27822;

class Class_1_45BB92167AED63A0_35 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_35*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_35*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_35_TypeDefinitionIndex)->GetStaticField(0x3CBC0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_PBANNCIILOJ()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_35_TypeDefinitionIndex)->GetStaticField(0x3CBC8);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_KPJDDBDMBIL()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_35_TypeDefinitionIndex)->GetStaticField(0x3CBD0);
	}
	// static const ::System::Int32 NANCKOCJGNC = 0xB; // 0x0
	// static const ::System::Int32 OPHCEINIDBH = 0x2; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AIHAIHJMCJL; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LCOIIPFJNLM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_35__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_45BB92167AED63A0_35* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_35*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_35__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_35__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_35*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_35*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_35_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_35_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_45BB92167AED63A0_35* Clone()
	{
		return ((::Class_1_45BB92167AED63A0_35*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_35_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_35_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_35_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_35_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_45BB92167AED63A0_35* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_45BB92167AED63A0_35*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_35_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_35_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_35_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_35_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_35_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_45BB92167AED63A0_35* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_35*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_35_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_35_MERGEFROM_1_OFFSET))(this, a1);
	}
};
