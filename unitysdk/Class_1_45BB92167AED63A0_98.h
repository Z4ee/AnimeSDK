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

#define CLASS_1_45BB92167AED63A0_98_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1ED782C0)
#define CLASS_1_45BB92167AED63A0_98_CLONE_OFFSET UNITYSDK_OFFSET(0x1ED77E30)
#define CLASS_1_45BB92167AED63A0_98_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1ED77F90)
#define CLASS_1_45BB92167AED63A0_98_EQUALS_OFFSET UNITYSDK_OFFSET(0x1ED77E90)
#define CLASS_1_45BB92167AED63A0_98_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1ED78080)
#define CLASS_1_45BB92167AED63A0_98_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1ED783F0)
#define CLASS_1_45BB92167AED63A0_98_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1ED783A0)
#define CLASS_1_45BB92167AED63A0_98_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1ED77E60)
#define CLASS_1_45BB92167AED63A0_98_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1ED77E80)
#define CLASS_1_45BB92167AED63A0_98_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1ED77D10)
#define CLASS_1_45BB92167AED63A0_98_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1ED77E70)
#define CLASS_1_45BB92167AED63A0_98_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1ED77D40)
#define CLASS_1_45BB92167AED63A0_98_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1ED78180)
#define CLASS_1_45BB92167AED63A0_98_WRITETO_OFFSET UNITYSDK_OFFSET(0x1ED781E0)
#define CLASS_1_45BB92167AED63A0_98__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ED785B0)
#define CLASS_1_45BB92167AED63A0_98__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ED77DA0)
#define CLASS_1_45BB92167AED63A0_98__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED77D50)

inline static constexpr unsigned int Class_1_45BB92167AED63A0_98_TypeDefinitionIndex = 33487;

class Class_1_45BB92167AED63A0_98 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_HOEKGEEKEHI()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_98_TypeDefinitionIndex)->GetStaticField(0x3CC90);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_98*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_98*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_98_TypeDefinitionIndex)->GetStaticField(0x3CC98);
	}
	// static const ::System::Int32 PLDKENJLKME = 0xC; // 0x0
	// static const ::System::Int32 IPAMJEJOGBG = 0x5; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IHKEOJHJHCK; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::System::UInt32 NAEACGPKNNH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_98__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_45BB92167AED63A0_98* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_98*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_98__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_98__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_98*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_98*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_98_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_98_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_45BB92167AED63A0_98* Clone()
	{
		return ((::Class_1_45BB92167AED63A0_98*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_98_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_98_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_98_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_98_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_98_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_45BB92167AED63A0_98* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_45BB92167AED63A0_98*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_98_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_98_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_98_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_98_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_98_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_45BB92167AED63A0_98* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_98*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_98_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_98_MERGEFROM_1_OFFSET))(this, a1);
	}
};
