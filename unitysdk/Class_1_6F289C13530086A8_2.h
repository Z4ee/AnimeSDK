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

#define CLASS_1_6F289C13530086A8_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1D838130)
#define CLASS_1_6F289C13530086A8_2_CLONE_OFFSET UNITYSDK_OFFSET(0x1D837B00)
#define CLASS_1_6F289C13530086A8_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D837C80)
#define CLASS_1_6F289C13530086A8_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D837BE0)
#define CLASS_1_6F289C13530086A8_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D837D20)
#define CLASS_1_6F289C13530086A8_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1D838460)
#define CLASS_1_6F289C13530086A8_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1D8383E0)
#define CLASS_1_6F289C13530086A8_2_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1D837B80)
#define CLASS_1_6F289C13530086A8_2_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1D837BA0)
#define CLASS_1_6F289C13530086A8_2_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1D837B60)
#define CLASS_1_6F289C13530086A8_2_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x1D837BD0)
#define CLASS_1_6F289C13530086A8_2_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1D837B50)
#define CLASS_1_6F289C13530086A8_2_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1D8379C0)
#define CLASS_1_6F289C13530086A8_2_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1D837B90)
#define CLASS_1_6F289C13530086A8_2_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1D837BB0)
#define CLASS_1_6F289C13530086A8_2_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1D837B70)
#define CLASS_1_6F289C13530086A8_2_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x1D837BC0)
#define CLASS_1_6F289C13530086A8_2_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1D837B40)
#define CLASS_1_6F289C13530086A8_2_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1D837B30)
#define CLASS_1_6F289C13530086A8_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1D8379F0)
#define CLASS_1_6F289C13530086A8_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D837E50)
#define CLASS_1_6F289C13530086A8_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x1D837EB0)
#define CLASS_1_6F289C13530086A8_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D8385A0)
#define CLASS_1_6F289C13530086A8_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D837A50)
#define CLASS_1_6F289C13530086A8_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1D837A00)

inline static constexpr unsigned int Class_1_6F289C13530086A8_2_TypeDefinitionIndex = 31346;

class Class_1_6F289C13530086A8_2 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_6F289C13530086A8_2*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_6F289C13530086A8_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6F289C13530086A8_2_TypeDefinitionIndex)->GetStaticField(0x2F460);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_LAFIEPLAPED()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6F289C13530086A8_2_TypeDefinitionIndex)->GetStaticField(0x2F468);
	}
	// static const ::System::Int32 DDAGONOHDFN = 0xB; // 0x0
	// static const ::System::Int32 ODLGJOLIOKD = 0xC; // 0x0
	// static const ::System::Int32 LANLJAPHOCL = 0x8; // 0x0
	// static const ::System::Int32 PLDKENJLKME = 0xD; // 0x0
	// static const ::System::Int32 KEBONEOKEPI = 0xE; // 0x0
	// static const ::System::Int32 MDCMPEMFAFF = 0x6; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ELMCGNEAAHF; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::System::UInt32 NAEACGPKNNH; // 0x20
	::System::Boolean PPEJJFLFPLM; // 0x24
	::System::UInt32 BGMLGHECGBM; // 0x28
	::System::UInt32 IEFKLOKPHIM; // 0x2C
	::System::Int64 AONFEONDPDL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F289C13530086A8_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6F289C13530086A8_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6F289C13530086A8_2*))((::PBYTE)hIl2Cpp + CLASS_1_6F289C13530086A8_2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6F289C13530086A8_2__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_6F289C13530086A8_2*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_6F289C13530086A8_2*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6F289C13530086A8_2_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F289C13530086A8_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6F289C13530086A8_2* Clone()
	{
		return ((::Class_1_6F289C13530086A8_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F289C13530086A8_2_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F289C13530086A8_2_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6F289C13530086A8_2_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F289C13530086A8_2_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F289C13530086A8_2_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6F289C13530086A8_2_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F289C13530086A8_2_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6F289C13530086A8_2_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F289C13530086A8_2_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6F289C13530086A8_2_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F289C13530086A8_2_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_6F289C13530086A8_2_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6F289C13530086A8_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6F289C13530086A8_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6F289C13530086A8_2*))((::PBYTE)hIl2Cpp + CLASS_1_6F289C13530086A8_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F289C13530086A8_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F289C13530086A8_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6F289C13530086A8_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F289C13530086A8_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6F289C13530086A8_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6F289C13530086A8_2*))((::PBYTE)hIl2Cpp + CLASS_1_6F289C13530086A8_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6F289C13530086A8_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
