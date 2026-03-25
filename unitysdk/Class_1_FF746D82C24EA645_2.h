#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_95C0420F56A6EE67_2;
class Class_1_C2029720BB7172FE_2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_FF746D82C24EA645_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1811A340)
#define CLASS_1_FF746D82C24EA645_2_CLONE_OFFSET UNITYSDK_OFFSET(0x18119D60)
#define CLASS_1_FF746D82C24EA645_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18119E70)
#define CLASS_1_FF746D82C24EA645_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x18119E40)
#define CLASS_1_FF746D82C24EA645_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18119FB0)
#define CLASS_1_FF746D82C24EA645_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1811A680)
#define CLASS_1_FF746D82C24EA645_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1811A570)
#define CLASS_1_FF746D82C24EA645_2_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x18119D90)
#define CLASS_1_FF746D82C24EA645_2_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x18119DD0)
#define CLASS_1_FF746D82C24EA645_2_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x18119DB0)
#define CLASS_1_FF746D82C24EA645_2_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x18119E30)
#define CLASS_1_FF746D82C24EA645_2_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x18119DF0)
#define CLASS_1_FF746D82C24EA645_2_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x18119DA0)
#define CLASS_1_FF746D82C24EA645_2_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x18119E20)
#define CLASS_1_FF746D82C24EA645_2_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x18119DE0)
#define CLASS_1_FF746D82C24EA645_2_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x18119DC0)
#define CLASS_1_FF746D82C24EA645_2_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x18119E10)
#define CLASS_1_FF746D82C24EA645_2_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x18119E00)
#define CLASS_1_FF746D82C24EA645_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18119BE0)
#define CLASS_1_FF746D82C24EA645_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1811A190)
#define CLASS_1_FF746D82C24EA645_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x1811A1F0)
#define CLASS_1_FF746D82C24EA645_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1811A810)
#define CLASS_1_FF746D82C24EA645_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18119C40)
#define CLASS_1_FF746D82C24EA645_2__CTOR_OFFSET UNITYSDK_OFFSET(0x18119BF0)

inline static constexpr unsigned int Class_1_FF746D82C24EA645_2_TypeDefinitionIndex = 26085;

class Class_1_FF746D82C24EA645_2 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_8()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FF746D82C24EA645_2_TypeDefinitionIndex)->GetStaticField(0x37850);
	}
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_12 = 0xF; // 0x0
	::Class_1_C2029720BB7172FE_2* Field_1_4; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_9; // 0x20
	::Class_1_95C0420F56A6EE67_2* Field_1_6; // 0x28
	::System::Int64 Field_1_13; // 0x30
	::System::UInt32 Field_1_2; // 0x38
	::System::Boolean Field_1_11; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF746D82C24EA645_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_FF746D82C24EA645_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FF746D82C24EA645_2*))((::PBYTE)hIl2Cpp + CLASS_1_FF746D82C24EA645_2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FF746D82C24EA645_2__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF746D82C24EA645_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_FF746D82C24EA645_2* Clone()
	{
		return ((::Class_1_FF746D82C24EA645_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF746D82C24EA645_2_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF746D82C24EA645_2_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FF746D82C24EA645_2_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Class_1_C2029720BB7172FE_2* Method_1_24748FC20F375725()
	{
		return ((::Class_1_C2029720BB7172FE_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF746D82C24EA645_2_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_C2029720BB7172FE_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C2029720BB7172FE_2*))((::PBYTE)hIl2Cpp + CLASS_1_FF746D82C24EA645_2_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_95C0420F56A6EE67_2* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_95C0420F56A6EE67_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF746D82C24EA645_2_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_95C0420F56A6EE67_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95C0420F56A6EE67_2*))((::PBYTE)hIl2Cpp + CLASS_1_FF746D82C24EA645_2_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF746D82C24EA645_2_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF746D82C24EA645_2_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FF746D82C24EA645_2_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF746D82C24EA645_2_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_FF746D82C24EA645_2_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FF746D82C24EA645_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_FF746D82C24EA645_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FF746D82C24EA645_2*))((::PBYTE)hIl2Cpp + CLASS_1_FF746D82C24EA645_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF746D82C24EA645_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF746D82C24EA645_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FF746D82C24EA645_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF746D82C24EA645_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_FF746D82C24EA645_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FF746D82C24EA645_2*))((::PBYTE)hIl2Cpp + CLASS_1_FF746D82C24EA645_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_FF746D82C24EA645_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
