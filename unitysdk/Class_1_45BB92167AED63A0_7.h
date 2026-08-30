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

#define CLASS_1_45BB92167AED63A0_7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFD5110)
#define CLASS_1_45BB92167AED63A0_7_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFD4B40)
#define CLASS_1_45BB92167AED63A0_7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFD4D00)
#define CLASS_1_45BB92167AED63A0_7_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFD4BB0)
#define CLASS_1_45BB92167AED63A0_7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFD4E10)
#define CLASS_1_45BB92167AED63A0_7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFD5240)
#define CLASS_1_45BB92167AED63A0_7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFD51E0)
#define CLASS_1_45BB92167AED63A0_7_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1DFD4950)
#define CLASS_1_45BB92167AED63A0_7_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1DFD4BA0)
#define CLASS_1_45BB92167AED63A0_7_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1DFD4B90)
#define CLASS_1_45BB92167AED63A0_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFD49B0)
#define CLASS_1_45BB92167AED63A0_7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFD4FD0)
#define CLASS_1_45BB92167AED63A0_7_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFD5030)
#define CLASS_1_45BB92167AED63A0_7__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFD5380)
#define CLASS_1_45BB92167AED63A0_7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFD4A50)
#define CLASS_1_45BB92167AED63A0_7__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFD49C0)

inline static constexpr unsigned int Class_1_45BB92167AED63A0_7_TypeDefinitionIndex = 25176;

class Class_1_45BB92167AED63A0_7 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_PMCJBHIIPDN()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_7_TypeDefinitionIndex)->GetStaticField(0x57740);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_OKDIKGNLFBH()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_7_TypeDefinitionIndex)->GetStaticField(0x57748);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_7*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_7_TypeDefinitionIndex)->GetStaticField(0x57750);
	}
	// static const ::System::Int32 MPGNKBCIMDA = 0x1; // 0x0
	// static const ::System::Int32 PDFFAKHMEPI = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JBEPELLPAJC; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IPHOFPDFOLJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_45BB92167AED63A0_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_7*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_7__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_7__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_7*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_7*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_7_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_45BB92167AED63A0_7* Clone()
	{
		return ((::Class_1_45BB92167AED63A0_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_7_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_7_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_7_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_45BB92167AED63A0_7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_45BB92167AED63A0_7*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_45BB92167AED63A0_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_7*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_7_MERGEFROM_1_OFFSET))(this, a1);
	}
};
