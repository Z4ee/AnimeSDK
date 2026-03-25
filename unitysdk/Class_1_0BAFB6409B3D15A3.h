#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FF746D82C24EA645;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_0BAFB6409B3D15A3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x180B0530)
#define CLASS_1_0BAFB6409B3D15A3_CLONE_OFFSET UNITYSDK_OFFSET(0x180B00C0)
#define CLASS_1_0BAFB6409B3D15A3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x180B0190)
#define CLASS_1_0BAFB6409B3D15A3_EQUALS_OFFSET UNITYSDK_OFFSET(0x180B0160)
#define CLASS_1_0BAFB6409B3D15A3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x180B02B0)
#define CLASS_1_0BAFB6409B3D15A3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x180B0800)
#define CLASS_1_0BAFB6409B3D15A3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x180B0680)
#define CLASS_1_0BAFB6409B3D15A3_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x180B0100)
#define CLASS_1_0BAFB6409B3D15A3_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x180B0140)
#define CLASS_1_0BAFB6409B3D15A3_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x180B00F0)
#define CLASS_1_0BAFB6409B3D15A3_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x180B0130)
#define CLASS_1_0BAFB6409B3D15A3_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x180B0120)
#define CLASS_1_0BAFB6409B3D15A3_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x180B0110)
#define CLASS_1_0BAFB6409B3D15A3_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x180B0150)
#define CLASS_1_0BAFB6409B3D15A3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x180AFF70)
#define CLASS_1_0BAFB6409B3D15A3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x180B03D0)
#define CLASS_1_0BAFB6409B3D15A3_WRITETO_OFFSET UNITYSDK_OFFSET(0x180B0430)
#define CLASS_1_0BAFB6409B3D15A3__CCTOR_OFFSET UNITYSDK_OFFSET(0x180B09B0)
#define CLASS_1_0BAFB6409B3D15A3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x180AFFD0)
#define CLASS_1_0BAFB6409B3D15A3__CTOR_OFFSET UNITYSDK_OFFSET(0x180AFF80)

inline static constexpr unsigned int Class_1_0BAFB6409B3D15A3_TypeDefinitionIndex = 24965;

class Class_1_0BAFB6409B3D15A3 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0BAFB6409B3D15A3_TypeDefinitionIndex)->GetStaticField(0x34820);
	}
	// static const ::System::Int32 Field_1_1 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_8 = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_3; // 0x18
	::Proto::ItemList* Field_1_7; // 0x20
	::Class_1_FF746D82C24EA645* Field_1_9; // 0x28
	::System::UInt32 Field_1_5; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BAFB6409B3D15A3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_0BAFB6409B3D15A3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0BAFB6409B3D15A3*))((::PBYTE)hIl2Cpp + CLASS_1_0BAFB6409B3D15A3__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0BAFB6409B3D15A3__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BAFB6409B3D15A3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_0BAFB6409B3D15A3* Clone()
	{
		return ((::Class_1_0BAFB6409B3D15A3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BAFB6409B3D15A3_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BAFB6409B3D15A3_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BAFB6409B3D15A3_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0BAFB6409B3D15A3_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BAFB6409B3D15A3_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_0BAFB6409B3D15A3_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::Class_1_FF746D82C24EA645* Method_1_24748FC20F375725()
	{
		return ((::Class_1_FF746D82C24EA645*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BAFB6409B3D15A3_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_FF746D82C24EA645* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FF746D82C24EA645*))((::PBYTE)hIl2Cpp + CLASS_1_0BAFB6409B3D15A3_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0BAFB6409B3D15A3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_0BAFB6409B3D15A3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0BAFB6409B3D15A3*))((::PBYTE)hIl2Cpp + CLASS_1_0BAFB6409B3D15A3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BAFB6409B3D15A3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BAFB6409B3D15A3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0BAFB6409B3D15A3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BAFB6409B3D15A3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_0BAFB6409B3D15A3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0BAFB6409B3D15A3*))((::PBYTE)hIl2Cpp + CLASS_1_0BAFB6409B3D15A3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0BAFB6409B3D15A3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
