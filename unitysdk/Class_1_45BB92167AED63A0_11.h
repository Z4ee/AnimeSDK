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

#define CLASS_1_45BB92167AED63A0_11_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DB91220)
#define CLASS_1_45BB92167AED63A0_11_CLONE_OFFSET UNITYSDK_OFFSET(0x1DB90D90)
#define CLASS_1_45BB92167AED63A0_11_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DB90EF0)
#define CLASS_1_45BB92167AED63A0_11_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DB90DF0)
#define CLASS_1_45BB92167AED63A0_11_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DB90FE0)
#define CLASS_1_45BB92167AED63A0_11_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DB91360)
#define CLASS_1_45BB92167AED63A0_11_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DB91310)
#define CLASS_1_45BB92167AED63A0_11_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1DB90DD0)
#define CLASS_1_45BB92167AED63A0_11_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1DB90DC0)
#define CLASS_1_45BB92167AED63A0_11_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1DB90C70)
#define CLASS_1_45BB92167AED63A0_11_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1DB90DE0)
#define CLASS_1_45BB92167AED63A0_11_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DB90CA0)
#define CLASS_1_45BB92167AED63A0_11_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DB910E0)
#define CLASS_1_45BB92167AED63A0_11_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DB91140)
#define CLASS_1_45BB92167AED63A0_11__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DB91520)
#define CLASS_1_45BB92167AED63A0_11__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DB90D00)
#define CLASS_1_45BB92167AED63A0_11__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB90CB0)

inline static constexpr unsigned int Class_1_45BB92167AED63A0_11_TypeDefinitionIndex = 25946;

class Class_1_45BB92167AED63A0_11 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_KFCFAFEOOML()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_11_TypeDefinitionIndex)->GetStaticField(0x45270);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_11*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_11*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_11_TypeDefinitionIndex)->GetStaticField(0x45278);
	}
	// static const ::System::Int32 DFLMMDBIJGD = 0x9; // 0x0
	// static const ::System::Int32 KOEOEHIMOEI = 0xD; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JIHIHBJNILK; // 0x18
	::System::UInt32 LJDBCGPFFDH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_11__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_45BB92167AED63A0_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_11*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_11__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_11__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_11*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_11*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_11_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_11_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_45BB92167AED63A0_11* Clone()
	{
		return ((::Class_1_45BB92167AED63A0_11*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_11_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_11_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_11_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_11_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_11_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_45BB92167AED63A0_11* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_45BB92167AED63A0_11*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_11_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_11_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_11_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_11_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_11_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_45BB92167AED63A0_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_11*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_11_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_11_MERGEFROM_1_OFFSET))(this, a1);
	}
};
