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

#define CLASS_1_387653E25C6195CA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1AA5D070)
#define CLASS_1_387653E25C6195CA_CLONE_OFFSET UNITYSDK_OFFSET(0x1AA5CB70)
#define CLASS_1_387653E25C6195CA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1AA5CCF0)
#define CLASS_1_387653E25C6195CA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AA5CC30)
#define CLASS_1_387653E25C6195CA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AA5CDB0)
#define CLASS_1_387653E25C6195CA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1AA5D370)
#define CLASS_1_387653E25C6195CA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1AA5D300)
#define CLASS_1_387653E25C6195CA_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1AA5CBA0)
#define CLASS_1_387653E25C6195CA_METHOD_1_4C4B9DFE092840D4_1_OFFSET UNITYSDK_OFFSET(0x1AA5CC10)
#define CLASS_1_387653E25C6195CA_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x1AA5CBD0)
#define CLASS_1_387653E25C6195CA_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1AA5CC20)
#define CLASS_1_387653E25C6195CA_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1AA5CA40)
#define CLASS_1_387653E25C6195CA_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1AA5CBB0)
#define CLASS_1_387653E25C6195CA_METHOD_1_7ADD5F1F5E247E3B_1_OFFSET UNITYSDK_OFFSET(0x1AA5CC00)
#define CLASS_1_387653E25C6195CA_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x1AA5CBC0)
#define CLASS_1_387653E25C6195CA_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1AA5CBF0)
#define CLASS_1_387653E25C6195CA_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1AA5CBE0)
#define CLASS_1_387653E25C6195CA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1AA5CA70)
#define CLASS_1_387653E25C6195CA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AA5CEF0)
#define CLASS_1_387653E25C6195CA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1AA5CF50)
#define CLASS_1_387653E25C6195CA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AA5D470)
#define CLASS_1_387653E25C6195CA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AA5CAD0)
#define CLASS_1_387653E25C6195CA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA5CA80)

inline static constexpr unsigned int Class_1_387653E25C6195CA_TypeDefinitionIndex = 27902;

class Class_1_387653E25C6195CA : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_387653E25C6195CA*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_387653E25C6195CA*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_387653E25C6195CA_TypeDefinitionIndex)->GetStaticField(0x8870);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_387653E25C6195CA_TypeDefinitionIndex)->GetStaticField(0x8878);
	}
	// static const ::System::Int32 Field_1_2 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x4; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_7; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_8; // 0x18
	::System::Boolean Field_1_9; // 0x20
	::System::UInt32 Field_1_10; // 0x24
	::System::Int64 Field_1_11; // 0x28
	::System::Int64 Field_1_12; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_387653E25C6195CA__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_387653E25C6195CA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_387653E25C6195CA*))((::PBYTE)hIl2Cpp + CLASS_1_387653E25C6195CA__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_387653E25C6195CA__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_387653E25C6195CA*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_387653E25C6195CA*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_387653E25C6195CA_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_387653E25C6195CA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_387653E25C6195CA* Clone()
	{
		return ((::Class_1_387653E25C6195CA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_387653E25C6195CA_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_387653E25C6195CA_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_387653E25C6195CA_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_387653E25C6195CA_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_387653E25C6195CA_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_387653E25C6195CA_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_387653E25C6195CA_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B_1()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_387653E25C6195CA_METHOD_1_7ADD5F1F5E247E3B_1_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4_1(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_387653E25C6195CA_METHOD_1_4C4B9DFE092840D4_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_387653E25C6195CA_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_387653E25C6195CA_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_387653E25C6195CA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_387653E25C6195CA*))((::PBYTE)hIl2Cpp + CLASS_1_387653E25C6195CA_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_387653E25C6195CA_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_387653E25C6195CA_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_387653E25C6195CA_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_387653E25C6195CA_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_387653E25C6195CA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_387653E25C6195CA*))((::PBYTE)hIl2Cpp + CLASS_1_387653E25C6195CA_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_387653E25C6195CA_MERGEFROM_1_OFFSET))(this, a1);
	}
};
