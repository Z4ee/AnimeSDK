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

#define CLASS_1_45BB92167AED63A0_103_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1D9B8CC0)
#define CLASS_1_45BB92167AED63A0_103_CLONE_OFFSET UNITYSDK_OFFSET(0x1D9B8790)
#define CLASS_1_45BB92167AED63A0_103_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D9B88F0)
#define CLASS_1_45BB92167AED63A0_103_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D9B87E0)
#define CLASS_1_45BB92167AED63A0_103_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D9B8A00)
#define CLASS_1_45BB92167AED63A0_103_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1D9B8DB0)
#define CLASS_1_45BB92167AED63A0_103_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1D9B8D50)
#define CLASS_1_45BB92167AED63A0_103_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1D9B87D0)
#define CLASS_1_45BB92167AED63A0_103_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1D9B87C0)
#define CLASS_1_45BB92167AED63A0_103_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1D9B85D0)
#define CLASS_1_45BB92167AED63A0_103_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1D9B8600)
#define CLASS_1_45BB92167AED63A0_103_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D9B8BC0)
#define CLASS_1_45BB92167AED63A0_103_WRITETO_OFFSET UNITYSDK_OFFSET(0x1D9B8C20)
#define CLASS_1_45BB92167AED63A0_103__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9B8EE0)
#define CLASS_1_45BB92167AED63A0_103__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D9B86A0)
#define CLASS_1_45BB92167AED63A0_103__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9B8610)

inline static constexpr unsigned int Class_1_45BB92167AED63A0_103_TypeDefinitionIndex = 33737;

class Class_1_45BB92167AED63A0_103 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_NFAJBPBCLIC()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_103_TypeDefinitionIndex)->GetStaticField(0x10520);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_103*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_103*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_103_TypeDefinitionIndex)->GetStaticField(0x10528);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_EHDCAEMKCHK()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_103_TypeDefinitionIndex)->GetStaticField(0x10530);
	}
	// static const ::System::Int32 KLFCLAICFGH = 0xE; // 0x0
	// static const ::System::Int32 FEFCGHKNOGH = 0x4; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NMFCCHGCHBH; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GNEBJIMGNNE; // 0x18
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_103__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_45BB92167AED63A0_103* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_103*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_103__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_103__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_103*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_103*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_103_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_103_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_45BB92167AED63A0_103* Clone()
	{
		return ((::Class_1_45BB92167AED63A0_103*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_103_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_103_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_103_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_103_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_45BB92167AED63A0_103* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_45BB92167AED63A0_103*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_103_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_103_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_103_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_103_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_103_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_45BB92167AED63A0_103* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_103*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_103_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_103_MERGEFROM_1_OFFSET))(this, a1);
	}
};
