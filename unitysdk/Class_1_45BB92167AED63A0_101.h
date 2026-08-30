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

#define CLASS_1_45BB92167AED63A0_101_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA4F740)
#define CLASS_1_45BB92167AED63A0_101_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA4F2B0)
#define CLASS_1_45BB92167AED63A0_101_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA4F410)
#define CLASS_1_45BB92167AED63A0_101_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA4F310)
#define CLASS_1_45BB92167AED63A0_101_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA4F500)
#define CLASS_1_45BB92167AED63A0_101_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA4F870)
#define CLASS_1_45BB92167AED63A0_101_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA4F820)
#define CLASS_1_45BB92167AED63A0_101_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1EA4F2E0)
#define CLASS_1_45BB92167AED63A0_101_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1EA4F300)
#define CLASS_1_45BB92167AED63A0_101_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1EA4F190)
#define CLASS_1_45BB92167AED63A0_101_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1EA4F2F0)
#define CLASS_1_45BB92167AED63A0_101_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA4F1C0)
#define CLASS_1_45BB92167AED63A0_101_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA4F600)
#define CLASS_1_45BB92167AED63A0_101_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA4F660)
#define CLASS_1_45BB92167AED63A0_101__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA4FA30)
#define CLASS_1_45BB92167AED63A0_101__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA4F220)
#define CLASS_1_45BB92167AED63A0_101__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA4F1D0)

inline static constexpr unsigned int Class_1_45BB92167AED63A0_101_TypeDefinitionIndex = 33558;

class Class_1_45BB92167AED63A0_101 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_PNHCJDDEDIF()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_101_TypeDefinitionIndex)->GetStaticField(0x29130);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_101*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_101*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_101_TypeDefinitionIndex)->GetStaticField(0x29138);
	}
	// static const ::System::Int32 PLDKENJLKME = 0xE; // 0x0
	// static const ::System::Int32 CNMBCBDCABO = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ODBALDDPKMF; // 0x18
	::System::UInt32 NAEACGPKNNH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_101__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_45BB92167AED63A0_101* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_101*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_101__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_101__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_101*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_101*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_101_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_101_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_45BB92167AED63A0_101* Clone()
	{
		return ((::Class_1_45BB92167AED63A0_101*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_101_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_101_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_101_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_101_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_101_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_45BB92167AED63A0_101* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_45BB92167AED63A0_101*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_101_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_101_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_101_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_101_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_101_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_45BB92167AED63A0_101* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_101*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_101_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_101_MERGEFROM_1_OFFSET))(this, a1);
	}
};
