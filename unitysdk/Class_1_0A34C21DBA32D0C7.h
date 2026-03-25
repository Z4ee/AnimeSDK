#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_4.h"
#include "unitysdk/System/Object.h"

class Class_1_CE90A3B454F32DFE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_0A34C21DBA32D0C7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x180895B0)
#define CLASS_1_0A34C21DBA32D0C7_CLONE_OFFSET UNITYSDK_OFFSET(0x18089100)
#define CLASS_1_0A34C21DBA32D0C7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x180891F0)
#define CLASS_1_0A34C21DBA32D0C7_EQUALS_OFFSET UNITYSDK_OFFSET(0x180891C0)
#define CLASS_1_0A34C21DBA32D0C7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x180892E0)
#define CLASS_1_0A34C21DBA32D0C7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x180898C0)
#define CLASS_1_0A34C21DBA32D0C7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x180897F0)
#define CLASS_1_0A34C21DBA32D0C7_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x18089190)
#define CLASS_1_0A34C21DBA32D0C7_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x18089170)
#define CLASS_1_0A34C21DBA32D0C7_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x18089160)
#define CLASS_1_0A34C21DBA32D0C7_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x180891B0)
#define CLASS_1_0A34C21DBA32D0C7_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x180891A0)
#define CLASS_1_0A34C21DBA32D0C7_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x18089180)
#define CLASS_1_0A34C21DBA32D0C7_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x18089150)
#define CLASS_1_0A34C21DBA32D0C7_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x18089140)
#define CLASS_1_0A34C21DBA32D0C7_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x18089130)
#define CLASS_1_0A34C21DBA32D0C7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18088FD0)
#define CLASS_1_0A34C21DBA32D0C7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x180893E0)
#define CLASS_1_0A34C21DBA32D0C7_WRITETO_OFFSET UNITYSDK_OFFSET(0x18089440)
#define CLASS_1_0A34C21DBA32D0C7__CCTOR_OFFSET UNITYSDK_OFFSET(0x180899D0)
#define CLASS_1_0A34C21DBA32D0C7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18089030)
#define CLASS_1_0A34C21DBA32D0C7__CTOR_OFFSET UNITYSDK_OFFSET(0x18088FE0)

inline static constexpr unsigned int Class_1_0A34C21DBA32D0C7_TypeDefinitionIndex = 24682;

class Class_1_0A34C21DBA32D0C7 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_CE90A3B454F32DFE*>** StaticGet_Field_1_10()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_CE90A3B454F32DFE*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A34C21DBA32D0C7_TypeDefinitionIndex)->GetStaticField(0x2A5F0);
	}
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_9 = 0xC; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_CE90A3B454F32DFE*>* Field_1_11; // 0x18
	::System::UInt32 Field_1_8; // 0x20
	::Enum_3_4608E37A1B3D374A_4 Field_1_4; // 0x24
	::System::UInt32 Field_1_6; // 0x28
	::System::Boolean Field_1_2; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A34C21DBA32D0C7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_0A34C21DBA32D0C7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A34C21DBA32D0C7*))((::PBYTE)hIl2Cpp + CLASS_1_0A34C21DBA32D0C7__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A34C21DBA32D0C7__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A34C21DBA32D0C7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_0A34C21DBA32D0C7* Clone()
	{
		return ((::Class_1_0A34C21DBA32D0C7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A34C21DBA32D0C7_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A34C21DBA32D0C7_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0A34C21DBA32D0C7_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Enum_3_4608E37A1B3D374A_4 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_4608E37A1B3D374A_4(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A34C21DBA32D0C7_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_4608E37A1B3D374A_4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_4))((::PBYTE)hIl2Cpp + CLASS_1_0A34C21DBA32D0C7_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A34C21DBA32D0C7_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0A34C21DBA32D0C7_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A34C21DBA32D0C7_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0A34C21DBA32D0C7_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_CE90A3B454F32DFE*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_CE90A3B454F32DFE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A34C21DBA32D0C7_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0A34C21DBA32D0C7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_0A34C21DBA32D0C7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0A34C21DBA32D0C7*))((::PBYTE)hIl2Cpp + CLASS_1_0A34C21DBA32D0C7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A34C21DBA32D0C7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A34C21DBA32D0C7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0A34C21DBA32D0C7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A34C21DBA32D0C7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_0A34C21DBA32D0C7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A34C21DBA32D0C7*))((::PBYTE)hIl2Cpp + CLASS_1_0A34C21DBA32D0C7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_0A34C21DBA32D0C7_MERGEFROM_1_OFFSET))(this, a1);
	}
};
