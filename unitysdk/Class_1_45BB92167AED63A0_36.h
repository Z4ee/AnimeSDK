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

#define CLASS_1_45BB92167AED63A0_36_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E277610)
#define CLASS_1_45BB92167AED63A0_36_CLONE_OFFSET UNITYSDK_OFFSET(0x1E277040)
#define CLASS_1_45BB92167AED63A0_36_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E277200)
#define CLASS_1_45BB92167AED63A0_36_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2770B0)
#define CLASS_1_45BB92167AED63A0_36_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E277310)
#define CLASS_1_45BB92167AED63A0_36_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E277740)
#define CLASS_1_45BB92167AED63A0_36_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2776E0)
#define CLASS_1_45BB92167AED63A0_36_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E276E50)
#define CLASS_1_45BB92167AED63A0_36_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1E2770A0)
#define CLASS_1_45BB92167AED63A0_36_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1E277090)
#define CLASS_1_45BB92167AED63A0_36_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E276EB0)
#define CLASS_1_45BB92167AED63A0_36_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2774D0)
#define CLASS_1_45BB92167AED63A0_36_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E277530)
#define CLASS_1_45BB92167AED63A0_36__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E277880)
#define CLASS_1_45BB92167AED63A0_36__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E276F50)
#define CLASS_1_45BB92167AED63A0_36__CTOR_OFFSET UNITYSDK_OFFSET(0x1E276EC0)

inline static constexpr unsigned int Class_1_45BB92167AED63A0_36_TypeDefinitionIndex = 28325;

class Class_1_45BB92167AED63A0_36 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_KPJDDBDMBIL()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_36_TypeDefinitionIndex)->GetStaticField(0x326D0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_PBANNCIILOJ()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_36_TypeDefinitionIndex)->GetStaticField(0x326D8);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_36*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_36*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_36_TypeDefinitionIndex)->GetStaticField(0x326E0);
	}
	// static const ::System::Int32 OPHCEINIDBH = 0x6; // 0x0
	// static const ::System::Int32 NANCKOCJGNC = 0x5; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AIHAIHJMCJL; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LCOIIPFJNLM; // 0x18
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_36__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_45BB92167AED63A0_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_36*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_36__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_36__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_36*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_36*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_36_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_36_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_45BB92167AED63A0_36* Clone()
	{
		return ((::Class_1_45BB92167AED63A0_36*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_36_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_36_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_36_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_36_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_45BB92167AED63A0_36* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_45BB92167AED63A0_36*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_36_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_36_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_36_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_36_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_36_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_45BB92167AED63A0_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_36*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_36_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_36_MERGEFROM_1_OFFSET))(this, a1);
	}
};
