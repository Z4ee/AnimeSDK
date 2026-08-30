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

#define CLASS_1_45BB92167AED63A0_77_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1ED388C0)
#define CLASS_1_45BB92167AED63A0_77_CLONE_OFFSET UNITYSDK_OFFSET(0x1ED38430)
#define CLASS_1_45BB92167AED63A0_77_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1ED38590)
#define CLASS_1_45BB92167AED63A0_77_EQUALS_OFFSET UNITYSDK_OFFSET(0x1ED38490)
#define CLASS_1_45BB92167AED63A0_77_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1ED38680)
#define CLASS_1_45BB92167AED63A0_77_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1ED389F0)
#define CLASS_1_45BB92167AED63A0_77_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1ED389A0)
#define CLASS_1_45BB92167AED63A0_77_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1ED38460)
#define CLASS_1_45BB92167AED63A0_77_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1ED38480)
#define CLASS_1_45BB92167AED63A0_77_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1ED38310)
#define CLASS_1_45BB92167AED63A0_77_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1ED38470)
#define CLASS_1_45BB92167AED63A0_77_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1ED38340)
#define CLASS_1_45BB92167AED63A0_77_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1ED38780)
#define CLASS_1_45BB92167AED63A0_77_WRITETO_OFFSET UNITYSDK_OFFSET(0x1ED387E0)
#define CLASS_1_45BB92167AED63A0_77__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ED38BA0)
#define CLASS_1_45BB92167AED63A0_77__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ED383A0)
#define CLASS_1_45BB92167AED63A0_77__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED38350)

inline static constexpr unsigned int Class_1_45BB92167AED63A0_77_TypeDefinitionIndex = 32066;

class Class_1_45BB92167AED63A0_77 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_DIFNGFODAED()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_77_TypeDefinitionIndex)->GetStaticField(0x40720);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_77*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_77*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_77_TypeDefinitionIndex)->GetStaticField(0x40728);
	}
	// static const ::System::Int32 FDDDLMBHDMC = 0x4; // 0x0
	// static const ::System::Int32 NDFHHFGKMAI = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JFDCOLNGGJC; // 0x18
	::System::UInt32 NIAOPCJHKCG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_77__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_45BB92167AED63A0_77* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_77*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_77__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_77__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_77*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_77*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_77_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_77_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_45BB92167AED63A0_77* Clone()
	{
		return ((::Class_1_45BB92167AED63A0_77*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_77_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_77_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_77_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_77_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_77_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_45BB92167AED63A0_77* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_45BB92167AED63A0_77*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_77_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_77_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_77_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_77_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_77_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_45BB92167AED63A0_77* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_77*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_77_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_77_MERGEFROM_1_OFFSET))(this, a1);
	}
};
