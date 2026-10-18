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

#define CLASS_1_45BB92167AED63A0_65_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9DAD70)
#define CLASS_1_45BB92167AED63A0_65_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9DA840)
#define CLASS_1_45BB92167AED63A0_65_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9DA9A0)
#define CLASS_1_45BB92167AED63A0_65_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9DA890)
#define CLASS_1_45BB92167AED63A0_65_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9DAAB0)
#define CLASS_1_45BB92167AED63A0_65_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9DAE60)
#define CLASS_1_45BB92167AED63A0_65_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9DAE00)
#define CLASS_1_45BB92167AED63A0_65_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1E9DA880)
#define CLASS_1_45BB92167AED63A0_65_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1E9DA870)
#define CLASS_1_45BB92167AED63A0_65_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E9DA680)
#define CLASS_1_45BB92167AED63A0_65_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9DA6B0)
#define CLASS_1_45BB92167AED63A0_65_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9DAC70)
#define CLASS_1_45BB92167AED63A0_65_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9DACD0)
#define CLASS_1_45BB92167AED63A0_65__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9DAF90)
#define CLASS_1_45BB92167AED63A0_65__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9DA750)
#define CLASS_1_45BB92167AED63A0_65__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9DA6C0)

inline static constexpr unsigned int Class_1_45BB92167AED63A0_65_TypeDefinitionIndex = 30958;

class Class_1_45BB92167AED63A0_65 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_GDCJAJMMANC()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_65_TypeDefinitionIndex)->GetStaticField(0x4CDB0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_65*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_65*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_65_TypeDefinitionIndex)->GetStaticField(0x4CDB8);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_DEKPFCKHFIE()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_65_TypeDefinitionIndex)->GetStaticField(0x4CDC0);
	}
	// static const ::System::Int32 HHPDHDOPJKB = 0x9; // 0x0
	// static const ::System::Int32 FKOABFGMHJI = 0xA; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JIAHGDMHNAN; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GGJDBKKIBCB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_65__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_45BB92167AED63A0_65* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_65*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_65__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_65__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_65*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_65*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_65_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_65_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_45BB92167AED63A0_65* Clone()
	{
		return ((::Class_1_45BB92167AED63A0_65*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_65_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_65_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_65_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_65_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_45BB92167AED63A0_65* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_45BB92167AED63A0_65*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_65_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_65_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_65_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_65_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_65_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_45BB92167AED63A0_65* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_65*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_65_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_65_MERGEFROM_1_OFFSET))(this, a1);
	}
};
