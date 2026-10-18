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

#define CLASS_1_45BB92167AED63A0_110_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E42C010)
#define CLASS_1_45BB92167AED63A0_110_CLONE_OFFSET UNITYSDK_OFFSET(0x1E42BB80)
#define CLASS_1_45BB92167AED63A0_110_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E42BCE0)
#define CLASS_1_45BB92167AED63A0_110_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E42BBE0)
#define CLASS_1_45BB92167AED63A0_110_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E42BDD0)
#define CLASS_1_45BB92167AED63A0_110_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E42C140)
#define CLASS_1_45BB92167AED63A0_110_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E42C0F0)
#define CLASS_1_45BB92167AED63A0_110_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E42BBB0)
#define CLASS_1_45BB92167AED63A0_110_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1E42BBD0)
#define CLASS_1_45BB92167AED63A0_110_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E42BA60)
#define CLASS_1_45BB92167AED63A0_110_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E42BBC0)
#define CLASS_1_45BB92167AED63A0_110_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E42BA90)
#define CLASS_1_45BB92167AED63A0_110_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E42BED0)
#define CLASS_1_45BB92167AED63A0_110_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E42BF30)
#define CLASS_1_45BB92167AED63A0_110__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E42C300)
#define CLASS_1_45BB92167AED63A0_110__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E42BAF0)
#define CLASS_1_45BB92167AED63A0_110__CTOR_OFFSET UNITYSDK_OFFSET(0x1E42BAA0)

inline static constexpr unsigned int Class_1_45BB92167AED63A0_110_TypeDefinitionIndex = 34694;

class Class_1_45BB92167AED63A0_110 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_BBBDHEACGFL()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_110_TypeDefinitionIndex)->GetStaticField(0xD000);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_110*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_110*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_110_TypeDefinitionIndex)->GetStaticField(0xD008);
	}
	// static const ::System::Int32 PLDKENJLKME = 0xA; // 0x0
	// static const ::System::Int32 GEIJLLIDHFJ = 0x3; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JLLKKPOPNEC; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::System::UInt32 NAEACGPKNNH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_110__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_45BB92167AED63A0_110* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_110*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_110__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_110__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_110*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_110*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_110_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_110_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_45BB92167AED63A0_110* Clone()
	{
		return ((::Class_1_45BB92167AED63A0_110*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_110_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_110_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_110_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_110_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_110_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_45BB92167AED63A0_110* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_45BB92167AED63A0_110*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_110_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_110_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_110_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_110_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_110_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_45BB92167AED63A0_110* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_110*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_110_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_110_MERGEFROM_1_OFFSET))(this, a1);
	}
};
