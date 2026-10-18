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

#define CLASS_1_45BB92167AED63A0_18_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E300410)
#define CLASS_1_45BB92167AED63A0_18_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2FFF10)
#define CLASS_1_45BB92167AED63A0_18_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3000C0)
#define CLASS_1_45BB92167AED63A0_18_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2FFF90)
#define CLASS_1_45BB92167AED63A0_18_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3001B0)
#define CLASS_1_45BB92167AED63A0_18_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E300570)
#define CLASS_1_45BB92167AED63A0_18_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E300520)
#define CLASS_1_45BB92167AED63A0_18_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E2FFF60)
#define CLASS_1_45BB92167AED63A0_18_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E2FFDC0)
#define CLASS_1_45BB92167AED63A0_18_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1E2FFF80)
#define CLASS_1_45BB92167AED63A0_18_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E2FFF70)
#define CLASS_1_45BB92167AED63A0_18_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2FFE20)
#define CLASS_1_45BB92167AED63A0_18_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3002B0)
#define CLASS_1_45BB92167AED63A0_18_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E300310)
#define CLASS_1_45BB92167AED63A0_18__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E300740)
#define CLASS_1_45BB92167AED63A0_18__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2FFE80)
#define CLASS_1_45BB92167AED63A0_18__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2FFE30)

inline static constexpr unsigned int Class_1_45BB92167AED63A0_18_TypeDefinitionIndex = 26957;

class Class_1_45BB92167AED63A0_18 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_18*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_18*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_18_TypeDefinitionIndex)->GetStaticField(0x4DA90);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_OMODMLGBAPL()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_18_TypeDefinitionIndex)->GetStaticField(0x4DA98);
	}
	// static const ::System::Int32 EDGGGCNOFHI = 0x5; // 0x0
	// static const ::System::Int32 DLKCAAKGAJG = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KAFIFNEDHFF; // 0x18
	::System::UInt32 ABPDPMHFFNN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_18__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_45BB92167AED63A0_18* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_18*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_18__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_18__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_18*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_18*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_18_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_18_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_45BB92167AED63A0_18* Clone()
	{
		return ((::Class_1_45BB92167AED63A0_18*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_18_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_18_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_18_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_18_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_18_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_45BB92167AED63A0_18* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_45BB92167AED63A0_18*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_18_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_18_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_18_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_18_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_18_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_45BB92167AED63A0_18* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_18*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_18_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_18_MERGEFROM_1_OFFSET))(this, a1);
	}
};
