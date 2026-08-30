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

#define CLASS_1_45BB92167AED63A0_87_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E60D650)
#define CLASS_1_45BB92167AED63A0_87_CLONE_OFFSET UNITYSDK_OFFSET(0x1E60D1C0)
#define CLASS_1_45BB92167AED63A0_87_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E60D320)
#define CLASS_1_45BB92167AED63A0_87_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E60D220)
#define CLASS_1_45BB92167AED63A0_87_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E60D410)
#define CLASS_1_45BB92167AED63A0_87_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E60D790)
#define CLASS_1_45BB92167AED63A0_87_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E60D740)
#define CLASS_1_45BB92167AED63A0_87_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E60D200)
#define CLASS_1_45BB92167AED63A0_87_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1E60D1F0)
#define CLASS_1_45BB92167AED63A0_87_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E60D0A0)
#define CLASS_1_45BB92167AED63A0_87_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E60D210)
#define CLASS_1_45BB92167AED63A0_87_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E60D0D0)
#define CLASS_1_45BB92167AED63A0_87_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E60D510)
#define CLASS_1_45BB92167AED63A0_87_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E60D570)
#define CLASS_1_45BB92167AED63A0_87__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E60D950)
#define CLASS_1_45BB92167AED63A0_87__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E60D130)
#define CLASS_1_45BB92167AED63A0_87__CTOR_OFFSET UNITYSDK_OFFSET(0x1E60D0E0)

inline static constexpr unsigned int Class_1_45BB92167AED63A0_87_TypeDefinitionIndex = 32336;

class Class_1_45BB92167AED63A0_87 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_FJMHKFLEKLD()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_87_TypeDefinitionIndex)->GetStaticField(0x31A20);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_87*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_87*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_87_TypeDefinitionIndex)->GetStaticField(0x31A28);
	}
	// static const ::System::Int32 IBDPEAHADPF = 0x4; // 0x0
	// static const ::System::Int32 FDDDLMBHDMC = 0xD; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CGNCOPDOJAL; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::System::UInt32 NIAOPCJHKCG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_87__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_45BB92167AED63A0_87* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_87*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_87__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_87__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_87*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_87*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_87_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_87_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_45BB92167AED63A0_87* Clone()
	{
		return ((::Class_1_45BB92167AED63A0_87*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_87_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_87_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_87_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_87_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_87_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_45BB92167AED63A0_87* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_45BB92167AED63A0_87*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_87_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_87_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_87_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_87_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_87_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_45BB92167AED63A0_87* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_87*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_87_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_87_MERGEFROM_1_OFFSET))(this, a1);
	}
};
