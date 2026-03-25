#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_66862AB7DE1A78FE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x180FC080)
#define CLASS_1_66862AB7DE1A78FE_CLONE_OFFSET UNITYSDK_OFFSET(0x180FBB10)
#define CLASS_1_66862AB7DE1A78FE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x180FBCC0)
#define CLASS_1_66862AB7DE1A78FE_EQUALS_OFFSET UNITYSDK_OFFSET(0x180FBBF0)
#define CLASS_1_66862AB7DE1A78FE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x180FBD90)
#define CLASS_1_66862AB7DE1A78FE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x180FC3B0)
#define CLASS_1_66862AB7DE1A78FE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x180FC330)
#define CLASS_1_66862AB7DE1A78FE_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x180FBB80)
#define CLASS_1_66862AB7DE1A78FE_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x180FBBD0)
#define CLASS_1_66862AB7DE1A78FE_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x180FBB40)
#define CLASS_1_66862AB7DE1A78FE_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x180FBBC0)
#define CLASS_1_66862AB7DE1A78FE_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x180FBBA0)
#define CLASS_1_66862AB7DE1A78FE_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x180FBB90)
#define CLASS_1_66862AB7DE1A78FE_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x180FBBE0)
#define CLASS_1_66862AB7DE1A78FE_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x180FBB50)
#define CLASS_1_66862AB7DE1A78FE_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x180FBBB0)
#define CLASS_1_66862AB7DE1A78FE_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x180FBB70)
#define CLASS_1_66862AB7DE1A78FE_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x180FBB60)
#define CLASS_1_66862AB7DE1A78FE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x180FBA10)
#define CLASS_1_66862AB7DE1A78FE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x180FBED0)
#define CLASS_1_66862AB7DE1A78FE_WRITETO_OFFSET UNITYSDK_OFFSET(0x180FBF30)
#define CLASS_1_66862AB7DE1A78FE__CCTOR_OFFSET UNITYSDK_OFFSET(0x180FC4E0)
#define CLASS_1_66862AB7DE1A78FE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x180FBA70)
#define CLASS_1_66862AB7DE1A78FE__CTOR_OFFSET UNITYSDK_OFFSET(0x180FBA20)

inline static constexpr unsigned int Class_1_66862AB7DE1A78FE_TypeDefinitionIndex = 25937;

class Class_1_66862AB7DE1A78FE : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_8()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_66862AB7DE1A78FE_TypeDefinitionIndex)->GetStaticField(0x36DC0);
	}
	// static const ::System::Int32 Field_1_1 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_12 = 0xB; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_9; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::System::UInt32 Field_1_13; // 0x20
	::System::Boolean Field_1_4; // 0x24
	::System::UInt32 Field_1_6; // 0x28
	::System::UInt32 Field_1_2; // 0x2C
	::System::Int64 Field_1_11; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66862AB7DE1A78FE__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_66862AB7DE1A78FE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_66862AB7DE1A78FE*))((::PBYTE)hIl2Cpp + CLASS_1_66862AB7DE1A78FE__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_66862AB7DE1A78FE__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66862AB7DE1A78FE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_66862AB7DE1A78FE* Clone()
	{
		return ((::Class_1_66862AB7DE1A78FE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66862AB7DE1A78FE_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66862AB7DE1A78FE_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_66862AB7DE1A78FE_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66862AB7DE1A78FE_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_66862AB7DE1A78FE_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66862AB7DE1A78FE_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_66862AB7DE1A78FE_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66862AB7DE1A78FE_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66862AB7DE1A78FE_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_66862AB7DE1A78FE_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66862AB7DE1A78FE_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_66862AB7DE1A78FE_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_66862AB7DE1A78FE_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_66862AB7DE1A78FE* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_66862AB7DE1A78FE*))((::PBYTE)hIl2Cpp + CLASS_1_66862AB7DE1A78FE_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66862AB7DE1A78FE_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66862AB7DE1A78FE_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_66862AB7DE1A78FE_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66862AB7DE1A78FE_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_66862AB7DE1A78FE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_66862AB7DE1A78FE*))((::PBYTE)hIl2Cpp + CLASS_1_66862AB7DE1A78FE_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_66862AB7DE1A78FE_MERGEFROM_1_OFFSET))(this, a1);
	}
};
