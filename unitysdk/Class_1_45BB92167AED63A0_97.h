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

#define CLASS_1_45BB92167AED63A0_97_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19666AB0)
#define CLASS_1_45BB92167AED63A0_97_CLONE_OFFSET UNITYSDK_OFFSET(0x19666710)
#define CLASS_1_45BB92167AED63A0_97_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19666810)
#define CLASS_1_45BB92167AED63A0_97_EQUALS_OFFSET UNITYSDK_OFFSET(0x19666770)
#define CLASS_1_45BB92167AED63A0_97_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x196668A0)
#define CLASS_1_45BB92167AED63A0_97_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19666BE0)
#define CLASS_1_45BB92167AED63A0_97_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19666B90)
#define CLASS_1_45BB92167AED63A0_97_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19666740)
#define CLASS_1_45BB92167AED63A0_97_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x19666760)
#define CLASS_1_45BB92167AED63A0_97_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x196665F0)
#define CLASS_1_45BB92167AED63A0_97_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19666750)
#define CLASS_1_45BB92167AED63A0_97_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19666620)
#define CLASS_1_45BB92167AED63A0_97_TOSTRING_OFFSET UNITYSDK_OFFSET(0x196669B0)
#define CLASS_1_45BB92167AED63A0_97_WRITETO_OFFSET UNITYSDK_OFFSET(0x19666A10)
#define CLASS_1_45BB92167AED63A0_97__CCTOR_OFFSET UNITYSDK_OFFSET(0x19666C90)
#define CLASS_1_45BB92167AED63A0_97__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19666680)
#define CLASS_1_45BB92167AED63A0_97__CTOR_OFFSET UNITYSDK_OFFSET(0x19666630)

inline static constexpr unsigned int Class_1_45BB92167AED63A0_97_TypeDefinitionIndex = 32762;

class Class_1_45BB92167AED63A0_97 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_97_TypeDefinitionIndex)->GetStaticField(0x7F80);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_97*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_97*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_97_TypeDefinitionIndex)->GetStaticField(0x7F88);
	}
	// static const ::System::Int32 Field_1_2 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xD; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_6; // 0x18
	::System::UInt32 Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_97__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_45BB92167AED63A0_97* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_97*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_97__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_97__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_97*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_97*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_97_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_97_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_45BB92167AED63A0_97* Clone()
	{
		return ((::Class_1_45BB92167AED63A0_97*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_97_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_97_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_97_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_97_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_97_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_45BB92167AED63A0_97* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_45BB92167AED63A0_97*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_97_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_97_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_97_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_97_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_97_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_45BB92167AED63A0_97* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_97*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_97_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_97_MERGEFROM_1_OFFSET))(this, a1);
	}
};
